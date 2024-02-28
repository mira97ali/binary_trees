#include "binary_trees.h"

/**
 * calculate_height - Recursively calculates the height of a binary tree.
 * @current_node: Ptr to the current node.
 *
 * Description: This function computes the height by recursively traversing
 * to the left and right children of the current node.
 *
 * Return: The height of the subtree rooted at @current_node or Returns 0.
 */

size_t calculate_height(const binary_tree_t *current_node)
{
	if (current_node == NULL)
	{
		return (0);
	}

	size_t height_left = calculate_height(current_node->left);
	size_t height_right = calculate_height(current_node->right);

	return (1 + (height_left > height_right ? height_left : height_right));
}

/**
 * binary_tree_balance - Calculates the balance factor of a binary tree.
 * @root: Ptr to the root node of the tree.
 *
 * Description: The balance factor is determined by subtracting
 * the height of the right subtree from the height of the left subtree.
 *
 * Return: The balance factor of the tree or Returns 0.
 */

int binary_tree_balance(const binary_tree_t *root)
{
	if (root == NULL)
	{
		return (0);
	}

	int left_subtree_height = calculate_height(root->left);
	int right_subtree_height = calculate_height(root->right);

	return (left_subtree_height - right_subtree_height);
}
