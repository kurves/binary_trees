#include <stdlib.h>
#include "binary_trees.h"
#include "stdio.h"

/**
 * binary_tree_nodes - Counts the nodes
 * @tree: Pointer to the root node of the tree to count the nodes
 * Description: funtion to count nodes
 * Return: int or null
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL || tree->right != NULL)
	{
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}
	else
	{
		return (0);
	}
}
