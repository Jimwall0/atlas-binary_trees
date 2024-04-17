#include "binary_trees.h"
/**
 * 
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t number = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		number++;
	else if (tree->left == NULL && tree->right == NULL)
		return (0);
	number += binary_tree_leaves(tree->left);
	number += binary_tree_leaves(tree->right);
	return (number);
}
