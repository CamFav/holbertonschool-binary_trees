#include "binary_trees.h"
/**
 * binary_tree_balance - function that measures the balance factor
 * of a binary tree.
 * @tree: pointer to the root node of the tree to measure the balance factor.
 *
 * Return: Always 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 1;
	if (!tree)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (0);
	if (!tree->left || !tree->right)
		return (1);
	nodes += binary_tree_nodes(tree->right);
	nodes += binary_tree_nodes(tree->left);
	return (nodes);
}
