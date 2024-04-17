#include "binary_trees.h"
/**
 * binary_tree_depth - finds how deep a binary tree is
 * @tree: the tree we are shacking
 * Return: the size
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	return (binary_tree_depth(tree->parent) + 1);
}
