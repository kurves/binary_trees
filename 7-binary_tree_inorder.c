#include <stdlib.h>
#include "binary_trees.h"
#include "stdio.h"

/**
 * binary_tree_inorder - Goes through a binary
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 * Description: function that returns nothing
 * Return:nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
