#include "binary_trees.h"


size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (binary_tree_is_root(tree) == 0)
	{
		depth ++;
		tree = tree->parent;
	}
	return (depth);
}
