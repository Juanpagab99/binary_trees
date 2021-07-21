#include "binary_trees.h"
/**
* binary_tree_insert_left -  inserts a node as the left-child
* @parent: parent node
* @value: value of node
* Return: node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tempNode;
	binary_tree_t *new_right;

	if (parent == NULL)
		return (NULL);
	new_right = malloc(sizeof(binary_tree_t));
	if (new_right == NULL)
		return (NULL);
	new_right->n = value;
	new_right->parent = parent;
	if (parent->right != NULL)
	{
		tempNode = parent->right;
		parent->right = new_right;
		new_right->right = tempNode;
		tempNode->parent = new_right;
	}
	else
	{
		parent->right = new_right;
	}
	return (new_right);
}
