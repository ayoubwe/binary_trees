#include "binary_trees.h"

/**
 * binary_tree_node - is a binary tree node
 * @parent: is a pointer to the parent node of the node to create
 * @value: is the value to put in the new in the new node
 *
 * Return: Null 
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->left = new->right = NULL;
	new->parent = parent;

	if (new->parent == NULL)
		return new;
	if (new->n < parent->n)
		parent->left = new;
	else
		parent->right = new;
	return new;
}
