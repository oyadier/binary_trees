#include "binary_trees.h"

/**
 * binary_tree_is_leaf - this function checks if a node is a leaf
 * @node: the pointer to the node to check
 *
 * Return: 1 if node otherwise 0 or NULL
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (!node)
		return (0);
	if ((!node->left) && (!node->right))

		return (1);
	return (0);
}
