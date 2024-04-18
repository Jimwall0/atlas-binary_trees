#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling branch
 * @node: what branch to start from
 * Return: pointer to sibling branch
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *cur = node;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	cur = cur->parent;
	if (cur->left == NULL && cur->right == NULL)
		return (NULL);
	else if (cur->left->n == node->n)
		return (cur->right);
	else
		return (cur->left);
}
