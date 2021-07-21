#include "binary_trees.h"
/**
* binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
* @tree: pointer to the root
* Return: count
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count_n;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	count_n = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	return (count_n + 1);
}
