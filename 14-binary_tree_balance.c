#include "binary_trees.h"

/**
 * get_bal_binary_tree_height - measures the height of a binary tree.
 * @root: a pointer to the root node of the tree to measure the height.
 * Return: 0.
 */

size_t get_bal_binary_tree_height(const binary_tree_t *root)
{
	size_t height_left = 0, height_right = 0;

	if (!root)
		return (0);
	height_left = get_bal_binary_tree_height(root->left);
	height_right = get_bal_binary_tree_height(root->right);

	if (height_left > height_right)
		return (height_left + 1);
	return (height_right + 1);
}

/**
 * bal_binary_tree_height - a function measures the height of a binary tree.
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: 0.
 */

size_t bal_binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (-1);
	return (get_bal_binary_tree_height(tree) - 1);
}
/**
 * binary_tree_balance - a function that counts nodes
 * @tree: a pointer to the root node of the tree to count the node
 * Return: 0.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int bal_left = 0, bal_right = 0;

	if (!tree)
		return (0);

	bal_left = bal_binary_tree_height(tree->left);
	bal_right = bal_binary_tree_height(tree->right);

	return (bal_left - bal_right);
}
