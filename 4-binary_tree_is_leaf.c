#include <stdlib.h>
#include "binary_trees.h"
#include "stdio.h"


/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: Pointer to the node to check
 * Description: check if node is leaf
 * Return: integer
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	return (node->left == NULL && node->right == NULL);
}
