#include "binary_trees.h"


/**
 * binary_tree_node - allocate new pointer and return it
 * @parent: parent Node
 * @value: int
 * Return:  new allocated pointer
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_ptr = NULL;

	new_ptr = malloc(sizeof(binary_tree_t));
	if (new_ptr == NULL)
		return (NULL);
	new_ptr->n = value;
	new_ptr->right = NULL;
	new_ptr->left = NULL;
	if (parent == NULL)
		new_ptr->parent = NULL;
	else
		new_ptr->parent = parent;
	return (new_ptr);

}
