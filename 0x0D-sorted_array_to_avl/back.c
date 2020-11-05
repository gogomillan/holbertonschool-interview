#include "binary_trees.h"

avl_t *a_to_avl(int *array, size_t start, size_t size, avl_t *root);
int _round(double number);

/**
 * sorted_array_to_avl - Function that builts an AVL tree from an array
 * @array: The array of integers
 * @size: The arrays's size
 * Return: A avl_t pointer to the root node or NULL on a failure
 */
avl_t *sorted_array_to_avl(int *array, size_t size)
{
	avl_t *root = NULL;

	if (array == NULL)
		return (NULL);

	if (size < 1)
		return (NULL);

	root = malloc(sizeof(avl_t));
	root->parent = NULL;
	root->left = NULL;
	root->right = NULL;
	root->n = array[_round(size / 2) - 1];

	printf("root[%p]\n", (void *)root);
	printf("parent[%p]\n", (void *)root->parent);
	printf("left[%p]\n", (void *)root->parent);
	printf("right[%p]\n", (void *)root->parent);

	/* Left side of the tree */
	printf("Pasa 9\n");
	root->left = a_to_avl(array, 0, _round(size / 2) - 1, root);
	/* Right side of the tree */
	printf("Pasa 10\n");
	root->right = a_to_avl(array, _round(size / 2), (size / 2), root);

	printf("Pasa 11\n");

	printf("root[%p]\n", (void *)root);
	printf("parent[%p]\n", (void *)root->parent);
	printf("left[%p]\n", (void *)root->parent);
	printf("right[%p]\n", (void *)root->parent);

	printf("Pasa 12\n");
	return (root);
}

/**
 * a_to_avl - Recurrive function that builts an AVL tree from an array
 * @array: The array of integers
 * @start: The arrays's start
 * @size: The arrays's size
 * @root: The current root node
 * Return: A avl_t pointer to the root node or NULL on a failure
 */
avl_t *a_to_avl(int *array, size_t start, size_t size, avl_t *root)
{
	avl_t *leaf = NULL;

	printf("Call start[%lu] size[%lu]\n", start, size);

	if (size < 1)
		return (NULL);

	leaf = malloc(sizeof(avl_t));
	leaf->parent = root;
	leaf->left = NULL;
	leaf->right = NULL;
	leaf->n = array[_round(size / 2) - 1];

	/* Left side of the tree */
	leaf->left = a_to_avl(array, start, _round(size / 2), root);
	/* Right side of the tree */
	leaf->right = a_to_avl(array, start + _round(size / 2), (size / 2), root);

	return (leaf);
}

/**
 * _round - round a number
 * @number: The input number
 * Return: The returning rounded value
 */
int _round(double number)
{
	return (number >= 0) ? (int)(number + 0.5) : (int)(number - 0.5);
}
