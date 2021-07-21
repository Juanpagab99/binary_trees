#include "binary_trees.h"
/**
* binary_tree_leaves - counts the leaves in a binary tree
* @tree: pointer to the root
* Return: count leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (1);
	count = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (count);
}
