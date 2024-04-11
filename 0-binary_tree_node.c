#include "binary_trees.h"
/**
 * binary_tree_node - makes a fresh leaf
 * @parent: what parent node you want
 * @value: precious data for this node
 * Return: new node
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
	if (parent->left == NULL)
		parent->left = new;
	else if (parent->right == NULL)
		parent->right = new;
	else
		return (NULL);
	return (new);
}
