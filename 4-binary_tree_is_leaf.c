#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks to see if a node is a leaf
 * @node: current node
 * Return: 1 on true and 0 on false
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
