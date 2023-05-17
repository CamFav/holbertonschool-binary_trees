#include "binary_trees.h"
/**
 * binary_tree_uncle - function return a pointer to the uncle node.
 * @node: pointer to the branch of tree or leaves
 *
 *
 * Return: uncle node or NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent || node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left && node->parent->parent->right == node->parent)
		return (node->parent->parent->left);

	if (node->parent->parent->right && node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (NULL);
}
