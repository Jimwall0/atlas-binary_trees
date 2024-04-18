#include "binary_trees.h"
/**
 * binary_tree_balance - checks for the balance of a binary tree
 * @tree: the tree being checked
 * Return: the balance of the tree
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);
	left = height(tree->left);
	right = height(tree->right);
	return (left - right);
}
/**
 * height - height of a binary node
 * @tree: current node
 * Return: balance
*/
int height(binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);
	left = height(tree->left);
	right = height(tree->right);
	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
