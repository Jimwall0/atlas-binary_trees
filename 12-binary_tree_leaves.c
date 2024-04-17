#include "binary_trees.h"
/**
 * binary_tree_leaves - how many leaves
 * @tree: node to start from
 * Return: the number of leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t number = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		number++;
	number += binary_tree_leaves(tree->left);
	number += binary_tree_leaves(tree->right);
	return (number);
}
