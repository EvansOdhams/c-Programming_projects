Factorial function in C
This program computes the factorial of a given integer using C programming language. The factorial of a non-negative integer n is defined as the product of all positive integers less than or equal to n.

Usage
vbnet
Copy code
Enter a non-negative integer to compute its factorial: 5
The factorial of 5 is 120
To use this program, simply compile and run the factorial.c file.

Implementation
The program prompts the user to enter a non-negative integer and then uses a for loop to compute the factorial of the integer.

c
Copy code
int factorial(int n) {
  int result = 1;
  for (int i = 1; i <= n; i++) {
    result *= i;
  }
  return result;
}
Fibonacci sequence in C
This program generates the Fibonacci sequence up to a given number of terms using C programming language. The Fibonacci sequence is a series of numbers in which each number is the sum of the two preceding ones, usually starting with 0 and 1.

Usage
css
Copy code
Enter the number of terms in the Fibonacci sequence to generate: 10
0 1 1 2 3 5 8 13 21 34 
To use this program, simply compile and run the fibonacci.c file.

Implementation
The program prompts the user to enter the number of terms in the Fibonacci sequence to generate and then uses a for loop to compute the sequence.

c
Copy code
void fibonacci(int n) {
  int a = 0, b = 1, c;
  printf("%d %d ", a, b);
  for (int i = 3; i <= n; i++) {
    c = a + b;
    printf("%d ", c);
    a = b;
    b = c;
  }
}
Binary search in C
This program implements binary search using C programming language. Binary search is a search algorithm that finds the position of a target value within a sorted array.

Usage
sql
Copy code
Enter the number of elements in the array: 5
Enter the elements in the array: 1 3 5 7 9
Enter the element to search: 5
5 found at position 3
To use this program, simply compile and run the binarysearch.c file.

Implementation
The program prompts the user to enter the number of elements in the array, the elements in the array, and the element to search. It then uses a while loop to perform the binary search.

c
Copy code
int binarySearch(int arr[], int n, int x) {
  int l = 0, r = n - 1;
  while (l <= r) {
    int mid = l + (r - l) / 2;
    if (arr[mid] == x)
      return mid;
    if (arr[mid] < x)
      l = mid + 1;
    else
      r = mid - 1;
  }
  return -1;
}
Tower of Hanoi in C
This program solves the Tower of Hanoi puzzle using C programming language. The Tower of Hanoi is a mathematical game or puzzle consisting of three rods and a number of disks of different sizes, which can slide onto any rod.

Usage
vbnet
Copy code
Enter the number of disks: 3
Move disk 1 from rod A to rod B
Move disk 2 from rod A to rod C
Move disk 1 from rod B to rod C
Move disk 3 from rod A to rod B
Move disk 1 from rod C to rod




