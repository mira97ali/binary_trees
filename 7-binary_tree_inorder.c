#include "binary_trees.h"

/**
 * binary_tree_inorder - Executes a function using in-order traversal.
 * @root: Ptr to the root node.
 * @action: Ptr to the function to be executed.
 */

void binary_tree_inorder(const binary_tree_t *root, void (*action)(int))
{
	if (root == NULL || action == NULL)
	{
		return;
	}

	binary_tree_inorder(root->left, action);
	action(root->n);
	binary_tree_inorder(root->right, action);
}
