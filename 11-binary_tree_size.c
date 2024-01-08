#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of  a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 *
 * Return: size or 0 if root is null
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count_r = 0, count_l = 0, root = 1;

	if (!tree)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (root);

	count_r = binary_tree_size(tree->left);
	count_l = binary_tree_size(tree->right);

	return (count_r + count_l + 1);
}

