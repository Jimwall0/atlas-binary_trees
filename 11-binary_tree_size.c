#include "binary_trees.h"
/**
 * binary_tree_size - binary tree stuff
 * @tree: tree to count
 * Return: the size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l = 1;

	if (tree == NULL)
		return (0);
	l += binary_tree_size(tree->left);
	l += binary_tree_size(tree->right);
	return (l);
}
