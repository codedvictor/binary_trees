#include "binary_trees.h"

/**
 * get_binary_tree_height - measures the height of a binary tree.
 * @root: a pointer to the root node of the tree to measure the height.
 * Return: 0.
 */

size_t get_binary_tree_height(const binary_tree_t *root)
{
	size_t height_left, height_right;

	if (!root)
		return (0);
	height_left = get_binary_tree_height(root->left);
	height_right = get_binary_tree_height(root->right);

	if (height_left > height_right)
		return (height_left + 1);
	return (height_right + 1);
}

/**
 * binary_tree_height - a function that measures the height of a binary tree.
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: 0.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (get_binary_tree_height(tree) - 1);
}
