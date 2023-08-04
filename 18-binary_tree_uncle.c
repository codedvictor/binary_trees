#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: is the pointer to the node
 *
 * Return: the pointer to the sibling or null
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
	       return (NULL);
	if (!node->parent)
		return (NULL);
	if (!node->parent->parent)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
