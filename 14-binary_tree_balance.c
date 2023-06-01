#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor.
 *
 * Return: if tree is NULL - 0
 *	   Otherwise, balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return  (binary_tree_height(tree->left) - binary_tree_height(tree->right));

}
