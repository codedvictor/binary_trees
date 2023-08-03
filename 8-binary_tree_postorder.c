#include "binary_trees.h"

/**
 * binary_tree_postorder - a function that check if node is a leaf.
 * @tree: the node to check tree.
 * @func: value in the parameter
 * Return: 0 is not a leaf otherwise 1 is a leaf.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	if (!func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
