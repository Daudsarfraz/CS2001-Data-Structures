#include "binary_trees.h"

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
