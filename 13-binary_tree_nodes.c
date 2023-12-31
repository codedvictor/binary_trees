#include "binary_trees.h"

/**
 * binary_tree_nodes - a function that counts nodes
 * @tree: a pointer to the root node of the tree to count the node
 * Return: 0.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t parent_left = 0, parent_right = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
	{
		parent_left = binary_tree_nodes(tree->left);
		parent_right = binary_tree_nodes(tree->right);
	}
	else
		return (0);

	return (parent_left + parent_right + 1);
}
