#include "binary_trees.h"

/**
 * binary_tree_height - Goes through binary tree using post-order traversal
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height, or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (tree == NULL)
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	if (height_left > height_right)
		return (height_left + 1);
	else
		return (height_right + 1);
}

/**
 * binary_tree_balance - Measures the balance of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Balance, or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}
