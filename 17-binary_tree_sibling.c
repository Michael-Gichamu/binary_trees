#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 * @node: A pointer to the node to find the sibling of.
 *
 * Return: If node is NULL or there is no sibling - NULL.
 *         Otherwise - a pointer to the sibling.
 *
 * Description: This function finds the sibling of a given node in a binary tree.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    // Check if node is NULL or has no parent
    if (node == NULL || node->parent == NULL)
    {
        return NULL;
    }

    // Check if node is the left child of its parent
    if (node->parent->left == node)
    {
        return node->parent->right; // Return the right child (sibling)
    }
    else
    {
        return node->parent->left; // Return the left child (sibling)
    }
}
