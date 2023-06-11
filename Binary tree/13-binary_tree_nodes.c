#include "binary_trees.h"

/**
 * count_nodes - Function that counts nodes of a binary tree node.
 * @node: Pointer to count the node.
 * @n: Pointer to the nodes to update.
 * Return: None.
 */
void count_nodes(const binary_tree_t *node, size_t *n)
{
	if (node != NULL && (node->right != NULL || node->left != NULL))
	{
		*n += 1;
		count_nodes(node->right, n);
		count_nodes(node->left, n);
	}
}

/**
 * binary_tree_nodes - Function that counts the nodes with at least 1 child.
 * @tree: Pointer to the root node.
 * Return: The number of nodes. if tree is NULL return 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree == NULL)
		return (0);
	if (tree->right != NULL || tree->left != NULL)
	{
		n += 1;
		count_nodes(tree->left, &n);
		count_nodes(tree->right, &n);
	}
	return (n);
}
