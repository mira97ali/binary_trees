#include "binary_trees.h"

/**
 * binary_tree_insert_left - Adds a new node as the left child.
 * @parent: ptr to the node to which the new left child will be added.
 * @value: The value to be assigned to the new node.
 *
 * Return: ptr to the newly created node, or NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	node->left = parent->left;
	node->right = NULL;

	if (parent->left != NULL)
	{
		parent->left->parent = node;
	}
	parent->left = node;

	return (node);
}
