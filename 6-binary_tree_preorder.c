#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: Pre-order traversal visits the current node first,
 * then the left subtree, and then the right subtree.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Check if tree or func is NULL */
	if (tree == NULL || func == NULL)
		return;

	/* First, call the function on the current node's value */
	func(tree->n);

	/* Recursively traverse left subtree */
	binary_tree_preorder(tree->left, func);

	/* Recursively traverse right subtree */
	binary_tree_preorder(tree->right, func);
}
