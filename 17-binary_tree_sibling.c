#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: is the pointer to the node
 *
 * Return: the pointer to the sibling or null
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
