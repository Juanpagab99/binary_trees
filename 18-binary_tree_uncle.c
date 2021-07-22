#include "binary_trees.h"

/**
 * binary_tree_uncle - find uncle node
 * @node: node uncle
 * Return: uncle node o no uncle
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	else if (node->parent == NULL)
		return (NULL);
	else if (node->parent->parent == NULL)
		return (NULL);

	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);

	return (node->parent->parent->left);
}
