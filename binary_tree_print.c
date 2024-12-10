#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_print - Prints a binary tree
 * @tree: Pointer to the root node of the tree to print
 */
void binary_tree_print(const binary_tree_t *tree)
{
	if (!tree)
		return;

	if (tree->right)
	{
		printf("%s", "  ");
		binary_tree_print(tree->right);
		printf("%s", "\n");
	}

	printf("%s", "____");

	if (tree->parent)
	{
		if (tree == tree->parent->left)
			printf("%s", "L--");
		else
			printf("%s", "R--");
	}
	printf("(%03d)\n", tree->n);

	if (tree->left)
	{
		printf("%s", "  ");
		binary_tree_print(tree->left);
		printf("%s", "\n");
	}
}
