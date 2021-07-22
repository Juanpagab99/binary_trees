#include "binary_trees.h"

/**
 * perfect_height - get height tree
 * @tree: tree
 * Return: 1 or 0
*/

int perfect_height(binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if ((tree->left == NULL) != (tree->right == NULL))
		return (0);

	height_left = perfect_height(tree->left);
	if (height_left == 0)
		return (0);

	height_right = perfect_height(tree->right);
	if (height_right == 0)
		return (0);

	return (height_left + height_right + 1);
}

/**
 * binary_tree_is_perfect - check binary tree is perfect
 * @tree: tree
 * Return: 1 for perfect 0 for no
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if ((tree->left == NULL) != (tree->right == NULL))
		return (0);

	height_left = perfect_height(tree->left);

	if (height_left == 0)
		return (0);

	height_right = perfect_height(tree->right);

	if (height_right != height_left)
		return (0);

	return (1);
}
