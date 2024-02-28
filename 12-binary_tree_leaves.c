#include "binary_trees.h"

/**
 * binary_tree_leaves - Calculates the total number of leaf nodes.
 * @root: Ptr to the root node.
 *
 * Description: This function traverses the binary tree recursively
 * to find nodes that do not have any children.
 *
 * Return: The total count of leaf nodes or returns 0.
 */

size_t binary_tree_leaves(const binary_tree_t *root)
{
	if (root == NULL)
	{
		return (0);
	}

	if (root->left == NULL && root->right == NULL)
	{
		return (1);
	}

	return (binary_tree_leaves(root->left) + binary_tree_leaves(root->right));
}
