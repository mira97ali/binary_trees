#include "binary_trees.h"

/**
 * max_height - Determines the greater of two values.
 * @left: First value.
 * @right: Second value.
 *
 * Return: The greater value.
 */

size_t max_height(size_t left, size_t right)
{
	return ((left > right) ? left : right);
}

/**
 * binary_tree_height - Calculates the height of a binary tree.
 * @root: Ptr to the root node.
 *
 * Return: The height of the tree. Returns 0 if root is NULL.
 */

size_t binary_tree_height(const binary_tree_t *root)
{
	if (root == NULL || (root->left == NULL && root->right == NULL))
	{
		return (0);
	}

	return (1 + max_height(binary_tree_height(root->left),
	 binary_tree_height(root->right)));
}
