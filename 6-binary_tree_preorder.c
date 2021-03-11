#include "binary_trees.h"


/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: root Node
 * @func: ptr to a function
 * Return:  void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
	if (tree->left == NULL && tree->right == NULL)
		return;

}
