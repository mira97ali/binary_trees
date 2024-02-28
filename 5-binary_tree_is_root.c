#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is the root of a tree.
 * @node: Ptr to the node.
 *
 * Return: 1 if the node is a root, otherwise 0.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL && node->parent == NULL)
	{
		return (1);
	}

	return (0);
}
