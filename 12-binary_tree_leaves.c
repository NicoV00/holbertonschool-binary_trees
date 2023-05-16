#include "binary_trees.h"

/*
 * binary_tree_leaves - Counts the leaves of a tree
 * @tree: tree to count the leaves of
 * Return: amount of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_L = 0;
	size_t right_R = 0;
	
	if (!tree)
		return (0);
	
	left_L = binary_tree_leaves(tree->left);
	right_R = binary_tree_leaves(tree->right);
	
	if (!tree->left && !tree->right)
		return (1);
	
	return (right_R + left_L);
}
