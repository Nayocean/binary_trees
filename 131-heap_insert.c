#include "binary_trees.h"
#include<stdlib.h>
#include<string.h>
#define INIT_NODE {0, NULL, NULL, NULL}

/**
 *  * swap - swaps two nodes in binary tree
 *   * @a: first node
 *    * @b: second node
 *     * Return: pointer to root
 *      */
bst_t *swap(bst_t *a, bst_t *b)
{
