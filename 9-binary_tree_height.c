#include "binary_trees.h"

/**
 * find_height - find height of binary tree recursively
 * @tree: find height tree
 * @h: height tree
 * Return: height of tree. 0 if NULL
*/

size_t find_height(const binary_tree_t *tree, size_t h)
{
	size_t height_left, height_right;

	if (tree == NULL)
		return (h);

	h++;
	height_left = find_height(tree->left, h);
	height_right = find_height(tree->right, h);

	if (height_left > height_right)
		return (height_left);

	return (height_right);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: root of tree
 * Return: height of a tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (find_height(tree, 0) - 1);
}
