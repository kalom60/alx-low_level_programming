#include "hash_tables.h"

/**
 * make_hash_node - make a node
 *
 * @head: head of the hash
 * @key: key of the hash
 * @value: value to store
 * Return: head of the hash
 */

hash_node_t *make_hash_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *gze;

	gze = *head;

	while (gze != NULL)
	{
		if (strcmp(key, gze->key) == 0)
		{
			free(gze->value);
			gze->value = strdup(value);
			return (*head);
		}
		gze = gze->next;
	}

	gze = malloc(sizeof(hash_node_t));

	if (gze == NULL)
		return (NULL);

	gze->key = strdup(key);
	gze->value = strdup(value);
	gze->next = *head;
	*head = gze;

	return (*head);
}

/**
 * hash_table_set - make a hash in an given hash table
 * @ht: pointer to hash table
 * @key: key of the hash
 * @value: value to store
 * Return: 0 if fails, 1 for success
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int key_ind;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	key_ind = key_index((unsigned char *)key, ht->size);

	if (make_hash_node(&(ht->array[key_ind]), key, value) == NULL)
		return (0);

	return (1);
}
