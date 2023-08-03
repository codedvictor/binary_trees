#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that counts the leaves in a binary tree.
 * @tree: a pointer to the root node of the tree to count the number of leaves
 * Return: 0.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_left = 0, leaves_right;

	if (!tree)
		return (0);
	if (tree->left == NULL)
		return (1);
	if (tree->right == NULL)
		return (1);
	leaves_left = binary_tree_leaves(tree->left);
	leaves_right = binary_tree_leaves(tree->right);

	return (leaves_left + leaves_right);
}
