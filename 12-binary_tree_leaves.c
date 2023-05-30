#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - Count the leaves in a binary tree.
 * @tree: Pointer to the root node of the tree to count the number of leaves.
 *
 * Return: if tree is NULL - 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);

	size_t left_leaves = binary_tree_leaves(tree->left);
	size_t right_leaves = binary_tree_leaves(tree->right);

	return (left_leaves + right_leaves);
}