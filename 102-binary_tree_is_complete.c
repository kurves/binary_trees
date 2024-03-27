#include <stdlib.h>
#include "binary_trees.h"
#include "stdio.h"


/**
 * binary_tree_is_complete - Checks if a binary tree is complete
 * @tree: Pointer to the root node of the tree to check
 * Description: checks if binary complete
 * Return: 1 if the tree is complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int null_found, front, rear;
	binary_tree_t *queue[1024];

	rear = 0;
	front = 0;
	null_found = 0;

	if (tree == NULL)
	{
		return (0);
	}
	queue[rear++] = (binary_tree_t *)tree;
	while (front < rear)
	{
		binary_tree_t *node = queue[front++];

		if (node == NULL)
		{
			null_found = 1;
		}
		else
		{
			if (null_found)
			{
				return (0);
			}
			queue[rear++] = node->left;
			queue[rear++] = node->right;
		}
	}
	return (1);
}
