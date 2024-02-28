#include "binary_trees.h"

/**
 * binary_tree_nodes - Calculates the total number of non-leaf nodes.
 * @root: Ptr to the root node of the tree.
 *
 * Description: This function iterates over the binary tree from the root,
 * recursively counting all nodes that have at least one child node.
 *
 * Return: The total count of non-leaf nodes or returns 0.
 */

size_t binary_tree_nodes(const binary_tree_t *root)
{
	if (root == NULL)
	{
		return (0);
	}

	if (root->left == NULL && root->right == NULL)
	{
		return (0);
	}

	return (1 + binary_tree_nodes(root->left) + binary_tree_nodes(root->right));
}
