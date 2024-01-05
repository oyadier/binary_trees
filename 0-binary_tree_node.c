#include "binary_trees.h"

/**
 * binary_tree_node - a function that create new node
 * @parent: the created node
 * @value: the value of the node created
 *
 * Return: new node with it value
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	node->n = value;

	return (node);
}


