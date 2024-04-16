#include "binary_trees.h"
/**
 * binary_tree_delete - delete the tree
 * @tree: tree node to check
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		exit(0);
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
