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

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	if (height_left > height_right)
		return (height_left + 1);
	else
		return (height_right + 1);
}

/**
 * count - Function that counts the size of a binary node.
 * @node: Node of the binary tree to count.
 * @s: Size of the tree.
 * Return: None
 */
void count(const binary_tree_t *node, size_t *s)
{
	if (node != NULL)
	{
		*s += 1;
		count(node->right, s);
		count(node->left, s);
	}
}

/**
 * binary_tree_size - Function that measures the binary tree size.
 * @tree: Pointer to the root node.
 * Return: The size. if tree is NULL return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s = 0;

	if (tree == NULL)
		return (0);

	if (tree)
	{
		s += 1;
		count(tree->right, &s);
		count(tree->left, &s);
	}
	return (s);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Value that determinate if is perfect, or 0 if tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height_left = 0, height_right = 0, size_left = 0, size_right = 0;

	if (tree == NULL)
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);
	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);

	if (height_left == height_right && size_left == size_right)
	{
		return (1);
	}

	return (0);
}
