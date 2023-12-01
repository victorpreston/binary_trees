#include "binary_trees.h"

int binary_tree_is_leaf(const binary_tree_t *node);

/**
 * binary_tree_is_leaf - checks if a node is a leaf.
 * @node: pointer.
 *
 * Return: 0 or 1.
 */



int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
	{
		return (0);
	}

	return (1);
}
