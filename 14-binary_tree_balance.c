#include "binary_trees.h"


/**
 * isBalancedRecursive - return the height of tree
 * @tree: root Node
 * Return:  int
 */
int isBalancedRecursive(const binary_tree_t *tree)
{
	int depth_left, depth_right;

	if (tree == NULL)
		return (0);

	depth_left = isBalancedRecursive(tree->left);
	depth_right = isBalancedRecursive(tree->right);
	if (depth_left > depth_right)
		return (depth_left + 1);
	else
		return (depth_right + 1);
}

/**
 * binary_tree_balance - return the difference between depth_left
 * and depth_right of root tree
 * @tree: root Node
 * Return:  int
 */
int binary_tree_balance(const binary_tree_t *tree)
{

	int depth_left, depth_right;

	if (tree == NULL)
		return (0);

	depth_left = isBalancedRecursive(tree->left);
	depth_right = isBalancedRecursive(tree->right);

	return (depth_left - depth_right);
}
