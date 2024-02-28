#include "binary_trees.h"

/**
 * get_tree_height - Computes the height of a binary tree from a given node.
 * @current: Ptr to the current node.
 *
 * Description: This function recursively finds the height of the tree.
 *
 * Return: The height of the tree from the @current node.
 */

size_t get_tree_height(const binary_tree_t *current)
{
	if (!current)
		return (0);

	size_t height_left = get_tree_height(current->left);
	size_t height_right = get_tree_height(current->right);

	return ((height_left > height_right ? height_left : height_right) + 1);
}

/**
 * compute_tree_size - Calculates the number of nodes from a given node.
 * @current: Ptr to the current node.
 *
 * Description: This function sums up all nodes accessible
 * from the @current node, including the node itself.
 *
 * Return: The total number of nodes starting from @current.
 * Returns 0 if @current is NULL.
 */

size_t compute_tree_size(const binary_tree_t *current)
{
	if (!current)
		return (0);

	return (1 + compute_tree_size(current->left)
	+ compute_tree_size(current->right));
}

/**
 * binary_tree_is_perfect - Determines if a binary tree is perfect.
 * @root: Ptr to the root node to check for perfection.
 *
 * Description: A perfect binary tree has all interior
 * nodes with two children and all leaves at the same depth.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */

int binary_tree_is_perfect(const binary_tree_t *root)
{
	if (!root)
		return (0);

	size_t tree_height = get_tree_height(root);
	size_t tree_size = compute_tree_size(root);

	size_t expected_size = (1 << tree_height) - 1;

	return (tree_size == expected_size);
}
