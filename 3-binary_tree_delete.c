#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes a binary tree.
 * @tree: A pointer to the root node of the tree to delete.
 *
 * Description: This function recursively deletes a binary tree by freeing the memory
 *              associated with each node, starting from the leaves and moving up to
 *              the root node.
 */
void binary_tree_delete(binary_tree_t *tree)
{
    // Check if tree is not NULL
    if (tree != NULL)
    {
        // Recursively delete the left subtree
        binary_tree_delete(tree->left);

        // Recursively delete the right subtree
        binary_tree_delete(tree->right);

        // Free the memory associated with the current node
        free(tree);
    }
}
