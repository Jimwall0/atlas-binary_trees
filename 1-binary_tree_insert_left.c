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
	if (parent->left == NULL)
	{
		parent->left = node;
		node->parent = parent;
	}
	else
	{
		node->parent = parent;
		node->left = parent->left;
		node->left->parent = node;
		node->parent->left = node;
	}
	node->n = value;
	return (node);
}
