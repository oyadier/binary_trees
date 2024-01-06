#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert new node at left to parent
 * @parent:  is a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 *
 * Return: pointer to the created node otherwise NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t) * 2);

	if (!new_node || !parent)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->right == NULL)
		parent->right = new_node;
	else
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
		parent->right = new_node;
	}

	return (new_node);
}

