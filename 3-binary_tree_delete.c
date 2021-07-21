#include "binary_trees.h"

/**
 * binary_tree_delete - delete binary tree
 * @tree: root tree
 * Return: void
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	if (tree->left != NULL)
		binary_tree_delete(tree->right);
	if (tree->right != NULL)
		binary_tree_delete(tree->left);
	free(tree);
}
