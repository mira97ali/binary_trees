#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node.
 * @node: Ptr to the node.
 *
 * Description: This function calculates how many levels a node is
 * from the root of the tree.
 *
 * Return: The depth of the node. Returns 0 if @node is NULL.
 */

size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t depth = 0;

	while (node != NULL && node->parent != NULL)
	{
		depth++;
		node = node->parent;
	}

	return (depth);
}
