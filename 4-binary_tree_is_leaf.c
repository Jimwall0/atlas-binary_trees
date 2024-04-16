#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if node is leaf
 * @node: current node
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->parent != NULL)
		return (1);
	return (0);
}
