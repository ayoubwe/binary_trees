#include "binary_trees.h"

/**
 * binary_tree_is_leaf - creating a function 
 * to chek if a node is a leaf
 * @node: for check
 *
 * Return: 1 if node is a leaf
 *         & 0 if not a leaf
 *         also 0 if node is NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || node->left || node->right) ? 0 : 1);
}
