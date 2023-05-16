#include "binary_trees.h"
/**
 * binary_tree_is_full - function that checks if a binary tree is full.
 * @tree: pointer to the root node of the tree to check.
 *
 * Return: Always 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l = 0;
	int r = 0;

	if (!tree)
		return (0);

	l = binary_tree_is_full(tree->left);
	r = binary_tree_is_full(tree->right);

	if (!tree->left && !tree->right)
	{
		if (tree->parent->left && tree->parent->right)
			return (1);
		else
			return (0);
	}
	if (l && r == 1)
		return (1);
	else
		return (0);
}
