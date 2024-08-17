#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node to the right side
 * @parent: parent node
 * @value: int data type
 * Return: new node or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (parent->right != NULL)
	{
		new->right = parent->right;
		new->right->parent = new;
	}
	parent->right = new;
	return (new);
}
