#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that creates a binary tree node.
 * @parent: the parent node.
 * @value: the node value.
 * Return: new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode, *temp;

	newnode = binary_tree_node(parent, value);
	if (!newnode || !parent)
		return (NULL);
	if (parent->left != NULL)
	{
		temp = parent->left;
		parent->left = newnode;
		temp->parent = newnode;
		newnode->left = temp;
	}
	parent->left = newnode;

	return (newnode);
}
