#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts to the right
 *
 * @parent: pointer to node to insert the right child
 * @value: value to store in the new node
 *
 * Return: rightchild newnode or NULL if failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

newnode->left = NULL;
newnode->right = NULL;
newnode->n = value;

if (newnode == NULL)
{
return (NULL);
}
if (parent == NULL)
{
return (NULL);
}
if (parent->right == NULL)
{
newnode->parent = parent;
parent->right = newnode;
}
else
{
binary_tree_t *oldnode;

oldnode = parent->right;
newnode->parent = parent;
newnode->right = oldnode;
oldnode->parent = newnode;
parent->right = newnode;
}

return (newnode);

}

