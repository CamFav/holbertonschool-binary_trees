#include "binary_trees.h"
/**
 * binary_tree_sibling - function return a brother of node.
 * @node: pointer to the branch of tree or leaves
 *
 *
 * Return: brother node or NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left && node->parent->right == node)
		return (node->parent->left);

	if (node->parent->right && node->parent->left == node)
		return (node->parent->right);
	return (NULL);
}
