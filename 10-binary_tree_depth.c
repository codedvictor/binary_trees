#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures the height of a binary tree.
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: 0.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);
	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
