#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The depth, or 0 if tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int subt_left = 0, subt_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left && tree->right)
	{
		subt_left = binary_tree_is_full(tree->left);
		subt_right = binary_tree_is_full(tree->right);
		return (subt_left && subt_right);
	}
	else
		return (0);
}
