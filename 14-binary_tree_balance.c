#include "binary_trees.h"
/**
* binary_tree_balance_int - measures the height
* @tree: pointer to the root
* Return: height
*/
int binary_tree_height_int(const binary_tree_t *tree)
{
	int levelsL;
	int levelsR;

	if (tree == NULL)
		return (0);
	else
	{
		levelsL = binary_tree_height_int(tree->left);
		levelsR = binary_tree_height_int(tree->right);
		if (levelsL >= levelsR)
			return (levelsL + 1);
		else
			return (levelsR + 1);
	}
}
/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: pointer to the root
* Return: measures balance
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int l;
	int r;

	if (tree == NULL)
		return (0);
	l = binary_tree_height_int(tree->left);
	r = binary_tree_height_int(tree->right);
	return (l - r);
}
