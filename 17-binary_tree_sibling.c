#include "binary_trees.h"

/**
 * binary_tree_sibling - Identifies the sibling of a specified node.
 * @target_node: Ptr to the node for which the sibling is to be found.
 *
 * Description: finding a sibling of a node.
 *
 * Return: Ptr to the sibling node if one exists, otherwise NULL.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *target_node)
{
	binary_tree_t *parent_node;

	if (target_node == NULL || target_node->parent == NULL)
	{
		return (NULL);
	}

	parent_node = target_node->parent;

	if (parent_node->left == target_node)
	{
		return (parent_node->right);
	}
	else
	{
		return (parent_node->left);
	}
}
