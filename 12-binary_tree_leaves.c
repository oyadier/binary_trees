#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of leaves
 *
 * Return: 0 if tree is null
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count_r = 0, count_l = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->left)
		return (1);

	/*each recursive call returns 1 if tree->... is true*/
	count_r = binary_tree_leaves(tree->left);
	count_l  = binary_tree_leaves(tree->right);

	return (count_r + count_l);
}
