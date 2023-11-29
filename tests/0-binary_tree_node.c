#include "binary_trees.h"




/**
 * binary_tree_node - binary_tree.
 * @parent: parent pointer.
 * @value: value.
 *
 * Return: If error - NULL.
 *         Else - a pointer to the new node.
 */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nNode;

	nNode = malloc(sizeof(binary_tree_t));
	if (nNode == NULL)
	{
		return (NULL);
	}
	nNode->n = value;
	nNode->parent = parent;
	nNode->left = NULL;
	nNode->right = NULL;

	return (nNode);
}
