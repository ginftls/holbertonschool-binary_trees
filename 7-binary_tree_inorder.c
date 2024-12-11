#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: In-order traversal visits the left subtree first,
 * then the current node, and then the right subtree.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Check if tree or func is NULL */
	if (tree == NULL || func == NULL)
		return;

	/* First, recursively traverse left subtree */
	binary_tree_inorder(tree->left, func);

	/* Then, call the function on the current node's value */
	func(tree->n);

	/* Finally, recursively traverse right subtree */
	binary_tree_inorder(tree->right, func);
}
