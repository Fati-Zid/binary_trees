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

/**
 * binary_tree_inorder -  function that goes through a binary tree using in-order traversal.
 * @tree: is a pointer to the root node of the tree to traverse.
 * @func:is a pointer to a function to call for each node. 
 * Return: void.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));


/**
 * binary_tree_postorder -  function that goes through a binary tree using post-order traversal.
 * @tree: is a pointer to the root node of the tree to traverse.
 * @func:is a pointer to a function to call for each node. 
 * Return: void.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: tree to go through
 * Return: the height
 */
size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_depth - depth of specified node from root
 * @tree: node to check the depth
 * Return: 0 is it is the root or number of depth
 */
size_t binary_tree_depth(const binary_tree_t *tree);

/**
 * binary_tree_size - function that return the size of a tree
 * @tree: tree to check
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree);

/**
 * binary_tree_leaves - function that returns the number of leaves in a tree
 * @tree: tree to check
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree);

/**
 * binary_tree_nodes - function that returns # of nodes in a tree with children
 * @tree: tree to check
 * Return: number of nodes with children
 */
size_t binary_tree_nodes(const binary_tree_t *tree);

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: tree to go through
 * Return: balanced factor
 */
int binary_tree_balance(const binary_tree_t *tree);

/**
 * binary_tree_is_full - function that says if a tree is full or not
 * a tree is full if it has tow or none children
 * @tree: tree to check
 * Return: 1 if it is a full 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - perfect or not a tree
 * @tree: tree to check
 * Return: 1 is it is or 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree);

/**
 * binary_tree_sibling - function that finds if a node is sibling
 * @node: node to check
 * Return: The sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/**
 * binary_tree_uncle - function that finds if a node is sibling
 * @node: node to check
 * Return: The uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

/* ADVANCED:*/

/**
 * binary_trees_ancestor - function that checks an ancestor
 * @first: First node
 * @second: Second node
 * Return: the node of the ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);

/**
 * binary_tree_levelorder - print the nodes element in a lever-order
 * @tree: root node
 * @func: function to use
 * Return: Nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));

/**
 * binary_tree_is_complete - Function that checks if a binary tree is complete
 * @tree: Type pointer of node of the tree
 * Return: 1 if is complete 0 if it is not
 */
int binary_tree_is_complete(const binary_tree_t *tree);

/**
 * binary_tree_rotate_left - Function that  rotates left the binary tree.
 * @tree: The root node of the three
 * Return: Pointer node of the new node
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);

/**
 * binary_tree_rotate_right - Function that  rotates right the binary tree.
 * @tree: The root node of the three
 * Return: Pointer node of the new node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);

#endif /* BINARY_TREES_H */
