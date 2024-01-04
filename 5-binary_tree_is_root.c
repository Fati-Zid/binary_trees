#include "binary_trees.h"
/**
 * binary_tree_is_root -  checks if a node is a root.
 * @node: Pointer to the node to check.
 *
 * Return: 1 if it's root, otherwise 0 when it's not or it's NULL.
 */
int binary_tree_is_root(const binary_tree_t *node){
	if (node == NULL)
		return (0);
	else if (node->parent == NULL)
		return (1);
	else
		return (0);
}