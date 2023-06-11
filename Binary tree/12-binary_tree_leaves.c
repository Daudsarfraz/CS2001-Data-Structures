#include "binary_trees.h"

/**
 * count_leaves - Function that counts the number of leaves.
 * @node: Node to count leaves.
 * @l: Number of leaves to count.
 * Return: None.
 */
void count_leaves(const binary_tree_t *node, size_t *l)
{
	if (node->right == NULL && node->left == NULL)
	{
		*l += 1;
	}
	if (node->right != NULL)
		count_leaves(node->right, l);
	if (node->left != NULL)
		count_leaves(node->left, l);
}

/**
 * binary_tree_leaves - Function that counts the leaves.
 * @tree: Pointer to the root node.
 * Return: Number of leaves. if tree is NULL return 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l = 0;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	count_leaves(tree, &l);
	return (l);
}
