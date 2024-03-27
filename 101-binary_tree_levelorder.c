#include <stdlib.h>
#include "binary_trees.h"
#include "stdio.h"

/**
 * binary_tree_levelorder - Performs level-order traversal on a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 * Description: perform level travesral
 * Return: nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t **queue;
	int front, rear;
	const binary_tree_t *current;

	queue =  malloc(sizeof(binary_tree_t *) * 1024);
	front = 0;
	rear = 0;

	if (tree == NULL || func == NULL)
	{
		return;
	}
	if (queue == NULL)
	{
		return;
	}
	queue[rear++] = tree;
	while (front < rear)
	{
		current = queue[front++];
		func(current->n);
		if (current->left)
		{
			queue[rear++] = current->left;
		}
		if (current->right)
		{
			queue[rear++] = current->right;
		}
	}
	free(queue);
}
