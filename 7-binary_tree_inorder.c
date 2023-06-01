#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 *
 * Description: This function performs an in-order traversal of a binary tree,
 *              applying a given function to each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    // Check if both tree and func are not NULL
    if (tree && func)
    {
        // Traverse the left subtree
        binary_tree_inorder(tree->left, func);

        // Call the function on the current node
        func(tree->n);

        // Traverse the right subtree
        binary_tree_inorder(tree->right, func);
    }
}

