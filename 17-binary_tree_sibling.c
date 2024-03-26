#include <stdlib.h>
#include "binary_trees.h"
#include "stdio.h"


/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Pointer to the node to find the sibling
 * Description: find node sibling
 * Return: Pointer to the sibling node, or NULL if node is NULL, the parent
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	else
	{
		return (node->parent->left);
	}
}
