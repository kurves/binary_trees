#include <stdlib.h>
#include "binary_trees.h"
#include "stdio.h"


/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tre
 * Description: function that gets binary height
 * Return: int or null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree)
	{
		left_height = tree->left ? 1 +  binary_tree_height(tree->left) : 0;
		right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((left_height > right_height ? left_height : right_height));
	}
	return (0);
}
