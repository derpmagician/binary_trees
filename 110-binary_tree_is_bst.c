#include "binary_trees.h"

/**
 * binary_tree_is_bst - Checks if a binary tree is a valid binary search tree.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if tree is a valid BST, and 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_bst_helper(tree, INT_MIN, INT_MAX));

	if (tree != NULL)
	{
		if (tree->n < INT_MIN || tree->n > INT_MAX)
			return (0);
		return (is_bst_helper(tree->left, INT_MIN, tree->n - 1) &&
			is_bst_helper(tree->right, tree->n + 1, INT_MAX));
	}
	return (1);
}
