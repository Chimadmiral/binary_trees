#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: a pointer to the parent node of the node to create
 * @value: the value to put in the new node
 *
 * Return: a pointer to the new node, or NULL on failure
 *
 */

typedef struct binary_tree_s binary_tree_t;

struct binary_tree_s {
    int value;
    binary_tree_t *parent;
    binary_tree_t *left;
    binary_tree_t *right;
};

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value) {
    binary_tree_t *node = malloc(sizeof(binary_tree_t));
    if (!node) {
        return NULL;
    }

    node->value = value;
    node->parent = parent;
    node->left = NULL;
    node->right = NULL;

    return node;
}
