#include "binary_trees.h"

/**
 * binary_tree_insert_right - binary_tree_insert_right
 * @parent: parent Node
 * @value: int
 * Return:  new allocated pointer
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *old_right_side, *new_ptr;

	if (parent == NULL)
		return (NULL);

	if (parent->right)
	{
		old_right_side = parent->right;
		new_ptr = binary_tree_node(parent, value);
		if (new_ptr == NULL)
			return (NULL);
		parent->right = new_ptr;
		new_ptr->right = old_right_side;
		old_right_side->parent = new_ptr;
	}
	else
		parent->right = binary_tree_node(parent, value);

	return (parent->right);
}
