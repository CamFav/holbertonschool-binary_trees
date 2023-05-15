#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts a node as the right-child
 * of another node.
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store the new node
 *
 * Return: Always 0.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode = NULL;

	if (!parent)
		return (NULL);

	NewNode = binary_tree_node(parent, value);

	if (!NewNode)
	{
		return (NULL);
	}

	NewNode->right = NULL;
	NewNode->left = NULL;
	NewNode->n = value;
	NewNode->parent = parent;

	if (parent->right != NULL)
	{
		parent->right->parent = NewNode;
		NewNode->right = parent->right;
	}
	parent->right = NewNode;
	return (NewNode);
}
