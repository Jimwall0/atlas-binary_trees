#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves
 * @tree: tree to count from
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	binary_tree_leaves(tree->left);
	binary_tree_leaees(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (0);
}
