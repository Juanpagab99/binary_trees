#include "binary_trees.h"

/**
 * binary_tree_sibling - find sibling node
 * @node: pointer node
 * Return: sibling node o NULL if no sibling
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);

	return (node->parent->left);
}
