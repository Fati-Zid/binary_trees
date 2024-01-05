#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: Pointer to the parent node.
 * @value: Value to be assigned to the new node.
 *
 * Return: A pointer to the newly created node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/**
 * binary_tree_print - Prints a binary tree.
 * @tree: Pointer to the root node of the tree to print.
 */
void binary_tree_print(const binary_tree_t *tree);

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 * @parent: Pointer to the parent node.
 * @value: Value to be assigned to the new node.
 *
 * Return: A pointer to the newly created node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node.
 * @parent: Pointer to the parent node.
 * @value: Value to be assigned to the new node.
 *
 * Return: A pointer to the newly created node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/**
 * binary_tree_delete - a function that deletes an entire binary tree
 * @parent: Pointer to tree.
 *
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree);

/**
 * binary_tree_is_leaf -  checks if a node is a leaf.
 * @node: Pointer to the node to check.
 *
 * Return: 1 if it's leaf, otherwise 0 when it's not or it's NULL.
 */
int binary_tree_is_leaf(const binary_tree_t *node);

/**
 * binary_tree_is_root -  checks if a node is a root.
 * @node: Pointer to the node to check.
 *
 * Return: 1 if it's root, otherwise 0 when it's not or it's NULL.
 */
int binary_tree_is_root(const binary_tree_t *node);

/**
 * binary_tree_preorder -  function that goes through a binary tree using pre-order traversal.
 * @tree: is a pointer to the root node of the tree to traverse.
 * @func:is a pointer to a function to call for each node. 
 * Return: void.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

#endif /* BINARY_TREES_H */
