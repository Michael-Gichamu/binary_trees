#include "binary_trees.h"

/**
 * is_full_recursive - Checks if a binary tree is full recursively.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If the tree is not full, it returns 0.
 *         Otherwise, it returns 1.
 *
 * Description: This is a helper function that recursively checks if a binary tree is full.
 */
int is_full_recursive(const binary_tree_t *tree)
{
    // Check if tree is not NULL
    if (tree != NULL)
    {
        // Check if the current node violates the fullness condition
        if ((tree->left != NULL && tree->right == NULL) ||
            (tree->left == NULL && tree->right != NULL))
        {
            return 0;
        }

        // Recursively check the left and right subtrees
        if (is_full_recursive(tree->left) == 0 ||
            is_full_recursive(tree->right) == 0)
        {
            return 0;
        }
    }

    return 1;
}

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If the tree is NULL or not full, it returns 0.
 *         Otherwise, it returns 1.
 *
 * Description: This function checks if a binary tree is full by calling the
 *              helper function is_full_recursive.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    // Check if tree is NULL
    if (tree == NULL)
    {
        return 0;
    }

    // Call the recursive function to check fullness
    return is_full_recursive(tree);
}
