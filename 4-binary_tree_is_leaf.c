#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if node is leaf
 * @node: current node
 * Return: 1 on true 0 on false
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->right == NULL && node->left == NULL)
		return (1);
	return (0);
}
