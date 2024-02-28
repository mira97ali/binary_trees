#include "binary_trees.h"

/**
 * binary_tree_node - Constructs a new binary tree node.
 * @parent: Pointer to the parent node.
 * @value: Value to assign to the new node.
 *
 * Return: Pointer to the created node, or NULL if allocation fails.
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
