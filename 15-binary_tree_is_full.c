#include "binary_trees.h"
/**
 * binary_tree_is_full - checks to see if childring are full
 * @tree: what binary tree is being checked
 * Return: 1 on true
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	if (left != right)
		return (0);
	if (tree->left == NULL && tree->left == NULL)
		return (1);
	else if (tree->left != NULL && tree->left != NULL)
		return (1);
	return (0);
}
