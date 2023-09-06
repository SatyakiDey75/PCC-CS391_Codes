# Linked List Operations

## Problem Description

Write a C program to perform the following operations on a linked list:

1. Count the number of elements in the linked list.\
2. Delete an element at the desired position.\
3. Delete a user input value from the linked list if present.\
4. Reverse the linked list.

## Linked List Operations

The program should implement the linked list data structure and allow the user to perform the following operations:

1. Counting: The program should count the number of elements in the linked list.\
2. Deletion at Desired Position: The user should be able to delete an element at a specific position in the linked list.\
3. Deletion of User Input Value: The user should be able to delete a specific value from the linked list if it is present.\
4. Reversal: The program should reverse the linked list.

## Input

The program takes the following input:

1. User input for the operation to be performed (a for counting, b for deletion at desired position, c for deletion of a value, d for reversal).\
2. If the user chooses deletion at a desired position, the position to delete.\
3. If the user chooses deletion of a value, the value to delete.

## Output

The program displays the following output:

- The linked list after performing the operations.

## Example

Suppose we have the following linked list:

Linked List: [10, 20, 30, 40, 50]


If the user performs the following operations:

`1 (Count)`\
`2 (Deletion at Desired Position) -> Position to delete: 2`\
`3 (Deletion of User Input Value) -> Value to delete: 30`\
`4 (Reversal)`


The program will display the following output:

`Number of elements: 5`\
`Linked List after deletion at position 2: [10, 30, 40, 50]`\
`Linked List after deletion of value 30: [10, 40, 50]`\
`Linked List after reversal: [50, 40, 10]`



## Notes

- The solution should handle any valid user inputs and operations.
- The program should use a custom algorithm to implement the linked list and perform the operations.
