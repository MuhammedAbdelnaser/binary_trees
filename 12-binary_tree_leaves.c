#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to count the number of leaves.
 * Return: 0 if tree is NULL else return number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (tree)
{
if (tree->left == NULL && tree->right == NULL)
{
return (1);
}
else
{
return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
}
else
{
return (0);
}
}
