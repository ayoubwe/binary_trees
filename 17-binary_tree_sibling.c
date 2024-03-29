#include "binary_trees.h"

/**
 * binary_tree_sibling -A function that finds the sibling of a node
 * @node: is a pointer to the node to find the sibling
 *
 * Return: pointer to sibling node
 *         NULL if node= NULL
 *         NULL if the parent= NULL
 *         NULL if the node have no siblings
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
