#include "binary_trees.h"

/**
  * binary_tree_insert_right - Inserts a node as the right-child
  * of another node.
  * @parent: A pointer to the node to insert the left-child in.
  * @value: The value to store in the new node.
  *
  * Return: A pointer to the created node, or NULL on failure or
  * if parent is NULL.
  */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		newNode->right->parent = newNode;
	}
	parent->right = newNode;
	return (newNode);

}
