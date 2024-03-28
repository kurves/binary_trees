#include <stdlib.h>
#include "binary_trees.h"
#include "stdio.h"


/**
 * bst_insert - Inserts a value into a Binary Search Tree (BST)
 * @tree: A double pointer to the root node of the BST
 * @value: The value to insert
 * Description: function to insertvalue into binary search
 * Return: A pointer to the newly inserted node, or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	if (*tree == NULL)
	{
		*tree = binary_tree_node(NULL, value);
		return *tree;
	}
	bst_t *current = *tree;
	while (1)
	{
		if (value < current->n)
		{
			if (current->left == NULL)
			{
				current->left = binary_tree_node(current, value);
				return current->left;
			
			}current = current->left;
		}
		else if (value > current->n)
		{
			if (current->right == NULL)
			{
				current->right = binary_tree_node(current, value);
				return current->right;
			}
			current = current->right;
		}
		else
		{
			return NULL;
		}
	}
}
