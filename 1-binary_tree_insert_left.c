#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a new node on the left
 * @parent: Whose child it is
 * @value: data for node
 * Return: the node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL || parent == NULL)
	{
		free(node);
		return (NULL);
	}
	node->parent = parent;
	node->n = value;
	if (node->parent->left == NULL)
	{
		node->parent->left = node;
		node->left = NULL;
	}
	else
	{
		node->parent->left->parent = node;
		node->left = node->parent->left;
		node->parent->left = node;
	}
	node->right = NULL;
	return (node);
}
