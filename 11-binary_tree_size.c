#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size of.
 *
 * Return: The size of the tree.
 *
 * Description: This function recursively calculates the size of a binary tree
 *              by counting the number of nodes in the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    // Initialize size to 0
    size_t size = 0;

    // Check if tree is not NULL
    if (tree)
    {
        // Increment size for the current node
        size += 1;

        // Recursively calculate size of the left subtree
        size += binary_tree_size(tree->left);

        // Recursively calculate size of the right subtree
        size += binary_tree_size(tree->right);
    }

    return size;
}

