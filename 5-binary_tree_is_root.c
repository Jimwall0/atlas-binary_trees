#include "binary_trees.h"
/**
 * binary_tree_is_root - checks for root node
 * @node: node being checked
 * Return: 1 on true and 0 on false
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
