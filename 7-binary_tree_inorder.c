#include "binary_trees.h"

/**
 * binary_tree_inorder - a function that check if node is a leaf.
 * @tree: the node to check tree.
 * @func: value in the parameter
 * Return: 0 is not a leaf otherwise 1 is a leaf.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	if (!func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
