#include "binary_trees.h"

/*
 * binary_tree_preorder - Function binary tree.
 * @tree: Pointer to the root node of the tree.
 * @func: Pointer to a function to call for each node.
 *
 * Return: If tree OR func is NULL
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->right, func);
	binary_tree_preorder(tree->left, func);
}
