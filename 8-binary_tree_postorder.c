#include "binary_trees.h"

/**
 *binary_tree_postorder - Goes through a binary tree using post-order traversal
 *@tree: Pointer to the root node of the tree to traverse
 *@func: Pointer to a function to call for each node
 *
 *Description: Post-order traversal visits the left subtree first,
 *then the right subtree, and finally the current node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Check if tree or func is NULL */
	if (tree == NULL || func == NULL)
		return;

	/* First, recursively traverse left subtree */
	binary_tree_postorder(tree->left, func);

	/* Then, recursively traverse right subtree */
	binary_tree_postorder(tree->right, func);

	/* Finally, call the function on the current node's value */
	func(tree->n);
}
