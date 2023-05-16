#include "binary_trees.h"
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect.
 * @tree: pointer to the root node of the tree to check.
 *
 * Return: Always 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

    if (tree && (tree->left == NULL && tree->right == NULL))
    {
        if(tree->parent->left && tree->parent->right)
            return (20);
        else
            return (0);
        }

	if (!tree || (tree->left == NULL && tree->right == NULL))
		return (0);

	left_height = binary_tree_is_perfect(tree->left);
	right_height = binary_tree_is_perfect(tree->right);


	if (left_height == right_height)
		return (1);
    return (0);
}
