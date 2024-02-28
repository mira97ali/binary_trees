#include "binary_trees.h"

/**
 * binary_tree_is_full - Determines if all nodes have two children.
 * @root: Ptr to the root node.
 *
 * Description: A binary tree is considered full if every node
 * in the tree has either zero or two children.
 *
 * Return: 1 if the binary tree is full, otherwise 0.
 */

int binary_tree_is_full(const binary_tree_t *root)
{
	if (root == NULL)
	{
		return (0);
	}

	if (root->left == NULL && root->right == NULL)
	{
		return (1);
	}

	if (root->left != NULL && root->right != NULL)
	{
		return (binary_tree_is_full(root->left) && binary_tree_is_full(root->right));
	}

	return (0);
}
