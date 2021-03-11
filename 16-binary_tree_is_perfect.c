#include "binary_trees.h"


/**
 * tree_height - return the height of a tree
 * @tree: root Node
 * Return:  int
 */
int tree_height(const binary_tree_t *tree)
{
	int height_l;
	int height_r;
	/* if tree->left is NULL height_l += 0 and pass to right side */
	height_l = tree->left ? 1 + tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}

/**
 * size_tree - return the size of a tree
 * @tree: root Node
 * Return:  int
 */
int size_tree(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + size_tree(tree->left) + size_tree(tree->right));
}

/**
 * power - return power of base / exp
 * @base: int
 * @exp: int
 * Return:  int
 */
int power(int base, int exp)
{
	int result = 1;

	while (exp > 0)
	{
		result *= base;
		--exp;
	}
	return (result);
}

/**
 * binary_tree_is_perfect -  check if tree is perfect
 * @tree: root Node
 * Return:  int
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, size;

	if (tree == NULL)
		return (0);
	height = tree_height(tree);
	size = size_tree(tree);
	return (power(2, height + 1) - 1 == size);
}
