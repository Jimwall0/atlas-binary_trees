#include "binary_trees.h"
/**
 * binary_tree_node - makes a new node in a binary tree
 * @parent: parent of the node
 * @value: int data for the new node
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	new->parent = parent;
	return (new);
}
