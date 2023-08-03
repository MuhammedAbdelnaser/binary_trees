#include "binary_trees.h";
/**
* binary_tree_insert_right - inserts a node as the right-child of another node.
* @parent: pointer to the node to insert the right-child in.
* @value: is the value to store in the new node.
* Return: A pointer to the created node, or NULL
*         on failure or if parent is NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

if (parent == NULL)
{
return (NULL);
}

new_node = binary_tree_node(parent, value);

if (parent->left != NULL)
{
new_node->left = parent->left;
parent->left->parent = new_node;
}

parent->left = new_node;

return (new_node);
}
