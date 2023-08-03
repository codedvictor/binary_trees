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
 * perfect_height - a function measures the height of a binary tree.
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: 0.
 */

size_t perfect_height(const binary_tree_t *tree)
{
	if (!tree)
		return (-1);
	return (get_bal_binary_tree_height(tree) - 1);
}
/**
 * binary_tree_is_perfect - a function that counts nodes
 * @tree: a pointer to the root node of the tree to count the node
 * Return: 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int bal_left = 0, bal_right = 0;

	if (!tree)
		return (0);

	if (perfect_height(tree->left) == perfect_height(tree->right))
	{
		if (!tree->left)
			return (1);
		if (!(tree->left)->left && !(tree->right)->right)
			return (1);
		if (tree->left && tree->right)
		{
			bal_left = binary_tree_is_perfect(tree->left);
			bal_right = binary_tree_is_perfect(tree->right);
			return (bal_left && bal_right);
		}
	}
	return (0);
}
