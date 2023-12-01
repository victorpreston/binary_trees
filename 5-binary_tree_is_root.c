#include "binary_trees.h"

int binary_tree_is_the_root(const binary_tree_t *node);

/**
 * binary_tree_is_the_root - checks if a node is root.
 * @node: pointer.
 *
 * Return: 0 or 1.
 */


int binary_tree_is_the_root(const binary_tree_t *node)
{
	return ((!node || node->parent) ? 0 : 1);
}
