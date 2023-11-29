#ifndef BINARY_TREES_H
#define BINARY_TREES_H



#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>


/**
 * struct binary_tree_s - binary_tree node.
 *
 * @n: integer.
 * @parent: parent.
 * @left: pointer to left.
 * @right: pointer to right.
 */

struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;
typedef struct binary_tree_s binary_tree_t;


void binary_tree_print(const binary_tree_t *);
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);




#endif
