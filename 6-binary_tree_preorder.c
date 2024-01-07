#include "binary_trees.h"

/**
 * binary_tree_preorder - a function that goes
 *	through a binary tree using pre-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to a call ofr each node.
 *	The value in the node must be passed as a parameter to this function.
 * 
 * Return: Nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{


	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left,func);
	binary_tree_preorder(tree->right,func);
}
