#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left child of another node in a binary tree.
 * @parent: A pointer to the node to insert the left child in.
 * @value: The value to store in the new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 *
 * Description: If parent already has a left child, the new node takes its place and the old left child
 *              is set as the left child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    // Check if parent is NULL
    if (parent == NULL)
        return NULL;

    // Create a new node with the given value
    binary_tree_t *new = binary_tree_node(parent, value);
    if (new == NULL)
        return NULL;

    // If parent already has a left child
    if (parent->left != NULL)
    {
        // Set the left child of the new node to the existing left child of the parent
        new->left = parent->left;
        // Set the parent of the existing left child to the new node
        parent->left->parent = new;
    }

    // Set the left child of the parent to the new node
    parent->left = new;

    // Return a pointer to the new node
    return new;
}
