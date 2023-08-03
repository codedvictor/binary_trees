#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that creates a binary tree node.
 * @tree: the tree.
 * Return: new node.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
