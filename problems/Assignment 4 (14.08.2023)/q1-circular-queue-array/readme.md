# Circular Queue Operations

## Problem Description

Write a C program to perform the following operations in a circular queue:

1) Create a circular queue.
2) Display the circular queue.
3) Insert an element into the circular queue.
4) Delete an element from the circular queue.

## Circular Queue Operations

The program should implement the circular queue data structure and allow the user to perform the following operations:

1) Creation: Create an empty circular queue.
2) Display: Display all elements in the circular queue.
3) Insertion: Insert an element into the circular queue.
4) Deletion: Delete an element from the circular queue.

## Input

The program takes the following input:

1) User input for the operation to be performed (1 for creation, 2 for display, 3 for insertion, 4 for deletion).
2) If the user chooses insertion, the element to be inserted.
3) If the user chooses deletion, the element to be deleted.

## Output

The program displays the following output:

- The circular queue after performing the operations.

## Example

Suppose we have an empty circular queue.

If the user performs the following operations:

`1 (Creation)`\
`3 (Insertion) -> Element to insert: 10`\
`3 (Insertion) -> Element to insert: 20`\
`2 (Display)`\
`4 (Deletion) -> Element to delete: 10`\
`2 (Display)`


The program will display the following output:

`Circular Queue: [10, 20]`\
`Circular Queue after deletion: [20]`


## Notes

- The solution should handle any valid user inputs and operations.
- The program should use a custom algorithm to implement the circular queue and perform the operations.
