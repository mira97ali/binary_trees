#include "binary_trees.h"

/**
 * binary_tree_delete - Removes every node.
 * @root_node: Ptr to the initial node of the tree.
 */

void binary_tree_delete(binary_tree_t *root_node)
{
	if (root_node == NULL)
	{
		return;
	}

	binary_tree_delete(root_node->left);
	binary_tree_delete(root_node->right);
	free(root_node);
}
