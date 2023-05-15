#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * of another node.
 * @node: pointer to node to check
 *
 * Return: Always 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
		if (node->right == NULL && node->left == NULL)
			return (1);
	return (0);
}
