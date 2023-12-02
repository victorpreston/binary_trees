#include "binary_trees.h"
/**
 * binary_tree_leaves - function that returns the number of leaves in a tree
 * @tree: tree to check
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0, l = 0, r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		l = binary_tree_leaves(tree->left);
		r = binary_tree_leaves(tree->right);
		leaf = l + r;
		return ((!l && !r) ? leaf + 1 : leaf + 0);
	}
}
