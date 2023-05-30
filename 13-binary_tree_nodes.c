#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: A pointer to the root node of the tree to count the number of nodes.
 *
 * Return: If tree is NULL, the function returns 0. Otherwise, it returns the count.
 *
 * Description: This function recursively counts the number of nodes in a binary tree
 *              that have at least one child.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    // Initialize nodes to 0
    size_t nodes = 0;

    // Check if tree is not NULL
    if (tree)
    {
        // Increment nodes if the current node has at least one child
        nodes += (tree->left || tree->right) ? 1 : 0;

        // Recursively count nodes in the left subtree
        nodes += binary_tree_nodes(tree->left);

        // Recursively count nodes in the right subtree
        nodes += binary_tree_nodes(tree->right);
    }

    return nodes;
}

