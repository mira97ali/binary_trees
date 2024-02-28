#include "binary_trees.h"

/**
 * binary_tree_size - Calculates the total number of nodes.
 * @root: Ptr to the root node.
 *
 * Description: This function traverses the entire tree from the root.
 *
 * Return: The total number of nodes. If @root is NULL, returns 0.
 */

size_t binary_tree_size(const binary_tree_t *root)
{
	if (root == NULL)
	{
		return (0);
	}

	return (1 + binary_tree_size(root->left) + binary_tree_size(root->right));
}
