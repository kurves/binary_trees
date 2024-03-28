#include <stdlib.h>
#include "binary_trees.h"
#include "stdio.h"

/**
 * array_to_bst_helper - Builds a Binary Search Tree from an array
 * @array: Pointer to the first element of the array
 * @start: Index of the first element in the current range
 * @end: Index of the last element in the current range
 * Description: build binary search tree
 * Return: Pointer to the root node of the created BST, or NULL on failure
 */
bst_t *array_to_bst_helper(int *array, int start, int end)
{
	int mid;
	bst_t *root;

	if (start > end)
	{
		return NULL;
	}
	mid = (start + end) / 2;
	root = binary_tree_node(NULL, array[mid]);

	if (root == NULL)
	{
		return NULL;
	}
	root->left = array_to_bst_helper(array, start, mid - 1);
	root->right = array_to_bst_helper(array, mid + 1, end);
	return root;
}

/**
 * array_to_bst - Builds a Binary Search Tree from an array
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * Description: binary search tree from arrsay
 * Return: Pointer to the root node of the created BST, or NULL on failure
 */
bst_t *array_to_bst(int *array, size_t size)
{
	if (array == NULL || size == 0)
	{
		return NULL;
	}
	return array_to_bst_helper(array, 0, size - 1);
}
