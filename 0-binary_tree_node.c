#include "binary_trees.h"
/**
 * binary_tree_node - makes a fresh leaf
 * @parent: what parent node you want
 * @value: precious data for this node
 * Return: new node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
