#include "binary_trees.h"

/**
 * binary_tree_node - Constructs a new binary tree node.
 * @parent: ptr to the parent node.
 * @value: Value to assign to the new node.
 *
 * Return: ptr to the created node, or NULL if it fails.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
	{
		return (NULL);
	}

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
