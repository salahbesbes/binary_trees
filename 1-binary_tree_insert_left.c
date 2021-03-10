#include "binary_trees.h"


binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *old_left_side, *new_ptr;

	if (parent == NULL)
		return (NULL);

	if (parent->left)
	{
		old_left_side = parent->left;
		new_ptr = binary_tree_node(parent, value);
		if (new_ptr == NULL)
			return (NULL);
		parent->left = new_ptr;
		new_ptr->left = old_left_side;
		old_left_side->parent = new_ptr;
	}
	else
		parent->left = binary_tree_node(parent, value);

	return (parent->left);
}
