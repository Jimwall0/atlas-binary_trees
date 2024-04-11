#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert on the right node of parent
 * @parent: node to insert at
 * @value: data type of node
 * Return: node at right
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL && parent == NULL)
	{
		free(node);
		return (NULL);
	}
	node->parent = parent;
	node->n = value;
	node->left = NULL;
	if (node->parent->right == NULL)
	{
		node->parent->right = node;
		node->right = NULL;
	}
	else
	{
		node->right = node->parent->right;
		node->right->parent = node;
		node->parent->right = node;
	}
	return (node);
}
