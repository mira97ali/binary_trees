#include "binary_trees.h"

/**
 * binary_tree_insert_right - Adds a new node as the right child of a the node.
 * @parent: ptr to the node.
 * @value: The value that will be stored.
 *
 * Return: ptr to the newly created node, or NULL.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
	{
		return (NULL);
	}

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
	{
		return (NULL);
	}

	node->n = value;
	node->parent = parent;
	node->right = parent->right;
	node->left = NULL;

	if (parent->right != NULL)
	{
		parent->right->parent = node;
	}
	parent->right = node;

	return (node);
}
