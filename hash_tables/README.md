Hash Tables

This project implements a basic Hash Table data structure in C. The hash table uses separate chaining to handle collisions.

Data Structures Used

The implementation uses the following structures:

hash_node_t: Represents a single key-value node in the linked list (chain).

hash_table_t: Represents the hash table itself, containing the size and an array of pointers to hash_node_t (the buckets).

Functions Implemented

File

Function

Description

0-hash_table_create.c

hash_table_create

Creates a hash table of a given size.

1-djb2.c

hash_djb2

Implements the djb2 hash function.

2-key_index.c

key_index

Calculates the index for a given key in the hash table array.

3-hash_table_set.c

hash_table_set

Adds or updates a key/value pair in the hash table. Handles collisions by prepending.

4-hash_table_get.c

hash_table_get

Retrieves the value associated with a key.

5-hash_table_print.c

hash_table_print

Prints the hash table content.

6-hash_table_delete.c

hash_table_delete

Frees all memory associated with the hash table.
