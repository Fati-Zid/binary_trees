#ifndef BINARY_TREES_H
#define BINARY_TREES_H

/**
 * struct binary_tree - Binary tree node structure.
 * @n: Value of the node.
 * @parent: Pointer to the parent node.
 * @left: Pointer to the left child node.
 * @right: Pointer to the right child node.
 */
typedef struct binary_tree
{
	int n;
	struct binary_tree *parent;
	struct binary_tree *left;
	struct binary_tree *right;
} binary_tree_t;

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

#endif /* BINARY_TREES_H */
