#include "binary_trees.h"


/**
 * sibling - return node sibling
 * @node: Node
 * Return:  sibling
 */
binary_tree_t *sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->right == node)
		return (node->parent->left);
	else
		return (node->parent->right);
}

/**
 * binary_tree_uncle - return node uncle
 * @node: Node
 * Return:  uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	return (sibling(node->parent));
}
