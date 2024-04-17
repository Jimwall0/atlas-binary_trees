#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: current tree
 * Return: size of tree 
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t number = 1;

	if (tree == NULL)
		return (0);
	number += binary_tree_height(tree->left);
	number += binary_tree_height(tree->left);
	return (number);
}