#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses a binary tree in post-order.
 * @root: Ptr to the root node of the tree for traversal.
 * @action: Ptr to the function to execute on each node's value.
 */

void binary_tree_postorder(const binary_tree_t *root, void (*action)(int))
{
	if (root == NULL || action == NULL)
	{
		return;
	}

	binary_tree_postorder(root->left, action);
	binary_tree_postorder(root->right, action);
	action(root->n);
}
