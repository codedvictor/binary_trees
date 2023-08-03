#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that creates a binary tree node.
 * @parent: the parent node.
 * @value: the node value.
 * Return: new node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode, *temp;

	if (!parent)
		return (NULL);

	newnode = binary_tree_node(parent, value);
	if (!newnode)
		return (NULL);
	if (parent->right != NULL)
	{
		temp = parent->right;
		parent->right = newnode;
		temp->parent = newnode;
		newnode->right = temp;
	}
	parent->right = newnode;

	return (newnode);
}
