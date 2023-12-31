#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a binary tree.
 * @tree: A pointer to node of the tree to measure the depth.
 * Return: 0 if tree is NULL else return depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
if(tree && tree->parent)
{
return 1 + binary_tree_depth(tree->parent);
}
else
{
return (0);
}
}
