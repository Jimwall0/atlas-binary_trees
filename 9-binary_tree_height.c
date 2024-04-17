#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: current tree
 * Return: size of tree 
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;

	if (tree == NULL || binary_tree_is_leaf(tree) == 1)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
