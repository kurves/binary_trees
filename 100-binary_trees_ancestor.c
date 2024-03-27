#include <stdlib.h>
#include "binary_trees.h"
#include "stdio.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 * Description : finding the common ancestor
 * Return: Pointer to the lowest common ancestor node, or NULL if not found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	const binary_tree_t *temp1 = first, *temp2 = second;
	
	if (first == NULL || second == NULL)
	{
		return (NULL);
	}
	while (temp1)
	{
		temp2 = second;
		while (temp2)
		{
			if (temp1 == temp2)
			{
				return ((binary_tree_t *)temp1);
			}
			temp2 = temp2->parent;
		}
		temp1 = temp1->parent;
	}
	return (NULL);
}
