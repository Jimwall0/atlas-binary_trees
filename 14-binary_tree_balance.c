#include "binary_trees.h"
/**
 * binary_tree_balance - checks for the balance of a binary tree
 * @tree: the tree being checked
 * Return: the balance of the tree
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0, total = 0;

	if (tree == NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (0);
	left += binary_tree_balance(tree->left);
	right += binary_tree_balance(tree->right);
	if (tree->left != NULL)
		left++;
	if (tree->right != NULL)
		right++;
	total = left - right;
	return (total);
}
