#include "binary_trees.h"

/**
 * binary_tree_preorder - Executes a function on each node in pre-order sequence.
 * @root: Ptr to the root node.
 * @action: Ptr to the function to execute.
 */

void binary_tree_preorder(const binary_tree_t *root, void (*action)(int))
{
	if (root == NULL || action == NULL)
	{
		return;
	}

	action(root->n);
	binary_tree_preorder(root->left, action);
	binary_tree_preorder(root->right, action);
}
