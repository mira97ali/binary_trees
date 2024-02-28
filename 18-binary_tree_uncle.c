#include "binary_trees.h"

/**
 * find_sibling - Identifies the sibling of a node.
 * @target_node: Ptr to the node.
 *
 * Return: Ptr to the sibling node if one exists, or NULL.
 */

binary_tree_t *find_sibling(binary_tree_t *target_node)
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

/**
 * binary_tree_uncle - Finds the uncle of a node.
 * @target_node: Ptr to the node.
 *
 * Description: The uncle of a node is the sibling of the node's parent.
 *
 * Return: Ptr to the uncle node if it exists, or NULL.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *target_node)
{
	if (target_node == NULL || target_node->parent == NULL)
	{
		return (NULL);
	}

	return (find_sibling(target_node->parent));
}
