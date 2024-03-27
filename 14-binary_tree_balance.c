#include <stdlib.h>
#include "binary_trees.h"
#include "stdio.h"


/**
 * max - Returns the maximum of two integers
 * @a: First integer
 * @b: Second integer
 * Description: getting maix int
 * Return: The maximum of a and b
 */
int max(int a, int b)
{
	return (a > b ? a : b);
}
/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 * Description: function that get binary tree height
 * Return: int or NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return (1 + max(left_height, right_height));
}


/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 * Description: function that measures balance of factor
 * Return: int or null
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return ((int) \
		(binary_tree_height(tree->left) - binary_tree_height(tree->right)));
}
