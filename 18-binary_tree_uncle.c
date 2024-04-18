#include "binary_trees.h"
/**
 * binary_tree_uncle - checks for uncle branch
 * @node: current branch being checked
 * Return: the uncle branch
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	int number;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	node = node->parent;
	number = node->n;
	if (node->parent == NULL || node == NULL)
		return (NULL);
	node = node->parent;
	if (node->left == NULL || node->right == NULL)
		return (NULL);
	if (node->left->n == number)
		return (node->right);
	else
		return (node->left);
}
