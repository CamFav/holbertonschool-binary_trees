#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts a node as the left-child
 * of another node.
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store the new node
 *
 * Return: Always 0.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
        binary_tree_t *NewNode = NULL;
        NewNode = binary_tree_node(parent, value);
        if (!NewNode)
        {
                return (NULL);
        }
        NewNode->right = NULL;
        NewNode->left = NULL;
        NewNode->n = value;
        NewNode->parent = parent;
        if (parent->left != NULL)
        {
                parent->left->parent = NewNode;
                NewNode->left = parent->left;
        }
        parent->left = NewNode;
        return (NewNode);
}
