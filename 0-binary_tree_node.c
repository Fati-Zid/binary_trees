#include <stdlib.h>
#include "binary_trees_node.c"
#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: Pointer to the parent node.
 * @value: Value to be assigned to the new node.
 *
 * Return: A pointer to the newly created node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value){
    if(parent == NULL)
        return binary_tree_node(parent, value);

    // Allocate memory for the new node
    binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

     // Check if memory allocation was successful
    if (newNode == NULL)
        return NULL;

    // Initialize the new node
    newNode->value = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
    
 }