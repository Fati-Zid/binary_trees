#include <stdlib.h>

/**
 * struct binary_tree - Structure for a binary tree node
 * @value: Value stored in the node
 * @left_child: Pointer to the left child node
 * @right_child: Pointer to the right child node
 */
 
typedef struct binary_tree{
    int value;
    struct binary_tree* left_child;
    struct binary_tree* right_child;

}binary_tree_t;