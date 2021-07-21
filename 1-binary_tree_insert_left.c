#include "binary_trees.h"
/**
* binary_tree_insert_left -  inserts a node as the left-child
* @parent: parent node
* @value: value of node
* Return: node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tempNode;
	binary_tree_t *new_left;

	if (parent == NULL)
		return (NULL);
	new_left = calloc(1, sizeof(binary_tree_t));
	if (new_left == NULL)
		return (NULL);
	new_left->n = value;
	new_left->parent = parent;
	if (parent->left != NULL)
	{
		tempNode = parent->left;
		parent->left = new_left;
		new_left->left = tempNode;
		tempNode->parent = new_left;
	}
	else
	{
		parent->left = new_left;
	}
	return (new_left);
}
