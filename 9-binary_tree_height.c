#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: a pointer to the root node of the ree to measure the height
 *
 * Return: height otherwise 0 if root is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left = 1 + binary_tree_height(tree->left);
	else
		left = 0;

	if (tree->right)
		right = 1 + binary_tree_height(tree->right);
	else
	{
		right = 0;
	}

	return (left > right ? left : right);
}
