#include "binary_trees.h"

/**
 * binary_tree_is_root - a function that check if node is a leaf.
 * @node: the node to check tree.
 * Return: 0 is not a leaf otherwise 1 is a leaf.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent)
		return (0);
	return (1);
}
