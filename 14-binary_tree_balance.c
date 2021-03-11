#include "binary_trees.h"
#include <math.h>


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

int binary_tree_balance(const binary_tree_t *tree)
{

	int depth_left, depth_right;

	if (tree == NULL)
		return (0);

	depth_left = isBalancedRecursive(tree->left);
	depth_right = isBalancedRecursive(tree->right);

	return (depth_left - depth_right);
}
