#include "binary_trees.h"

/**
 * binary_tree_is_root - function to check if a node is root
 * @node: a pointer to the node to check
 *
 * Return: 1 if node is root otherwise 0 (even if null)
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->parent)
		return (1);
	return (0);
}
