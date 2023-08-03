#include "binary_trees.h"

/**
 * binary_tree_is_leaf - a function that check if node is a leaf.
 * @node: the node to check tree.
 * Return: 0 is not a leaf otherwise 1 is a leaf.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->left || node->right)
		return (0);
	return (1);
}
