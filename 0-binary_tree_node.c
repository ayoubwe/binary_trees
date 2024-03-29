#include "binary_trees.h"

/**
 * binary_tree_node - is a binary tree node
 *
 * @parent: is a pointer to 
 * the parent node of the node to create
 * @value: is the value to put 
 * in the new in the new node
 *
 * Return: pointer or NULL 
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	
	binary_tree_t *node = NULL;


	node = malloc(sizeof(binary_tree_t));/* Allocate memory for node. */
	
	if (!node)
	{
		return (NULL);/* Return NULL if it fails. */
        }
	node->parent = parent;/* Initialize parent. */
	node->n = value;/* Initialize value. */
	node->left = NULL;/* Initialize left child as NULL. */
	node->right = NULL;/* Initialize right child as NULL. */
	return (node);/* Return the node. */


}
