#include "binary_trees.h"

/**
 * binary_tree_levelorder - traverst a binary tree using level-order traverse
 * @tree: tree to traverse
 * @func: pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t level, maxlevel;

	if (!tree || !func)
		return;

	maxlevel = binary_tree_height(tree) + 1;

	for (level = 1; level <= maxlevel; level++)
		btlo_helper(tree, func, level);
}

