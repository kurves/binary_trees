#include <stdlib.h>
#include "binary_trees.h"
#include "stdio.h"
#include <limits.h>


/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 * Description: measure tree height
 * Return: Height of the tree
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
	return (left_height > right_height ? left_height + 1 : right_height + 1);
}

/**
 * binary_tree_is_avl_recursive - Recursive function to check if a binary tree
 * @tree: Pointer to the root node of the tree
 * @min: Minimum allowed value in the tree
 * @max: Maximum allowed value in the tree
 * Description: check if binary
 * Return: 1 if the tree is a valid AVL tree, 0 otherwise
 */
int binary_tree_is_avl_recursive(const binary_tree_t *tree, int min, int max)
{
	int left_height, right_height, balance_factor;

	if (tree == NULL)
	{
		return (1);
	}
	if (tree->n < min || tree->n > max)
	{
		return (0);
	}
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	balance_factor = abs(left_height - right_height);
	if (balance_factor > 1)
	{
		return (0);
	}
	return (binary_tree_is_avl_recursive(tree->left, min, tree->n - 1) &&
			binary_tree_is_avl_recursive(tree->right, tree->n + 1, max));
}

/**
 * binary_tree_is_avl - Checks if a binary tree is a valid AVL tree
 * @tree: Pointer to the root node of the tree
 * Description: check if tree is valid
 * Return: 1 if the tree is a valid AVL tree, 0 otherwise
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (binary_tree_is_avl_recursive(tree, INT_MIN, INT_MAX));
}
