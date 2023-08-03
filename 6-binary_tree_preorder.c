#include "binary_trees.h"

/**
 * binary_tree_preorder - a function that check if node is a leaf.
 * @tree: the node to check tree.
 * @func: 
 * Return: 0 is not a leaf otherwise 1 is a leaf.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	if (!func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
