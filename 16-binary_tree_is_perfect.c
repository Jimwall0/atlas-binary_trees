#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: current tree node
 * Return: 1 on a perfect tree otherwise 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int right, left;

	right = height(tree->right);
	left = height(tree->left);
	if (right == left)
	{
		if (full(tree) == 1)
			return (1);
	}
	return (0);
}
/**
 * full - checks if the tree is full
 * @tree: current binary tree
 * Return: 1 on true otherwise 0
*/
int full(const binary_tree_t *tree)
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
