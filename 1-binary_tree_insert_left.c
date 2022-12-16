#include "binary_trees.h"

/**
 * binary_tree_insert_left  - inserts to the left
 *
 * @parent: pointer to the node to insert left
 * @value: value to store in the new node
 * Return: if parent is NULL - NULL.
 * 	   otherwise - a pointer to new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if (parent == NULL)
        return NULL;
    binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

    if (parent->left == NULL)
    {
        newnode->n = value;
        newnode->parent = parent;
        newnode->left = NULL;
        newnode->right = NULL;
        parent->left = newnode;
    }
    else{
        binary_tree_t *oldnode;
        oldnode = parent->left;
        newnode->n = value;
        newnode->parent = oldnode->parent;
        newnode->left = oldnode;
        newnode->right = NULL;
        oldnode->parent = newnode;
        parent->left = newnode;
    }

    return newnode;
}

