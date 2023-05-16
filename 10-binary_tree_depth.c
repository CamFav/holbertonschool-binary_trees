#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to meaasure the height.
 *
 * Return: Always 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t parent = 0;

	if (!tree || tree->parent == NULL)
		return (0);
	parent = binary_tree_depth(tree->parent);
	return (parent + 1);
}
