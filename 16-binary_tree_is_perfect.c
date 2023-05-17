#include "binary_trees.h"
/**
 *  * binary_tree_is_full - function that checks if a binary tree is full.
 *   * @tree: pointer to the root node of the tree to check.
 *    *
 *     * Return: Always 0.
 *      */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l = 0;
	int r = 0;
	if (!tree)
		return (0);
	if (tree->left || tree->right)
	{
		l = binary_tree_is_full(tree->left);
		r = binary_tree_is_full(tree->right);
	}
	if (!tree->left && !tree->right)
	{
		if (tree->parent->left && tree->parent->right)
			return (1);
		else
			return (0);
	}
	if (l && r == 1)
		return (0);
	else
		return (1);
}
#include "binary_trees.h"
/**
 *  * binary_tree_height - function that measures the height of a binary tree.
 *   * @tree: pointer to the root node of the tree to meaasure the height.
 *    *
 *     * Return: Always 0.
 *      */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;
	if (!tree || (tree->left == NULL && tree->right == NULL))
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height > right_height)
		return (left_height + 1);
	else
	{
		return (right_height + 1);
	}
}
#include "binary_trees.h"
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect.
 * @tree: pointer to the root node of the tree to check.
 *
 * Return: Always 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l = 1;
	int r = 1;
	int h = 0;
	int f = 0;
	if (!tree)
		return (0);
	/**if ((!tree->left || !tree->right) && (tree->left && tree->right))*/
	if ((tree->left && !tree->right) || (!tree->left && tree->right))
	{
		return (0);
	}
	if (tree->left || tree->right)
	{
		f += binary_tree_is_full(tree->left);
		l += binary_tree_height(tree->left);
		f += binary_tree_is_full(tree->right);
		r += binary_tree_height(tree->right);
		if (f == 0)
		{
			h = binary_tree_height(tree);
			if ((l == h) && (r == h))
				return (1);
			else
				return (0);
		}
	}
	return (0);
}
