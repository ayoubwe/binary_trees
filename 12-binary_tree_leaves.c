#include "binary_trees.h"

/**
 * binary_tree_leaves - A function that counts
 * the leaves in a binary tree
 * @tree: is a pointer to the root node of the
 * tree to measure the size
 *
 * Return: 0 if tree=NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
