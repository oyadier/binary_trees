#include "binary_trees.h"

/**
 * binary_tree_delete - a function that delete the whole tree
 * @tree: the pointer to the tree to be deleted
 *
 * Return: NULL
 */

void binary_tree_delete(binary_tree_t *tree)
{
	/*binary_tree_t *delete;*/

	if (!tree)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
