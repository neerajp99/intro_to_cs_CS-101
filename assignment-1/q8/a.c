// Time complexity is O(n)
#include <stdio.h> // Iterative function to find factorial
unsigned long factorial(int n)
{
	unsigned long fact = 1;
	int i;

	for (i = 1; i <= n; i++)
		fact = fact * i;

	return fact;
}
int main()
{
	int n = 5;
	printf("The Factorial of %d is %lu", n, factorial(n));

	return 0;
}

// Here the function factortial works in this manner:
// fact = 1 * 1 = 1
// fact = 1* 2 = 2
// fact = 2 * 3 = 6
// fact = 6 * 4 = 24
// fact = 24 * 5 = 120
// The above function is called 5 times as the value of n is specified as 5
// therefore, the time complexity of the above program is O(5) => O(n) for n number of cases.

//Time Complexity is O(n) as it is recursively called "n" times.
#include <stdio.h> // Recursive function to find factorial
long int recurseNumbers(int n);

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Factorial of %d = %ld", n, recurseNumbers(n));
    return 0;
}
long int recurseNumbers(int n)
{
    if (n >= 1)
        return n*recurseNumbers(n-1);
    else
        return 1;
}


// factorial(n) = n * factorial(n-1)
// .....
// factorial(3) = 3 * factorial(2)
// factorial(2) = 2 * factorial(1)
// factorial(1) = 1
//
// So the factorial function called itself n times which is the exact same number of the input size’n’,
// where n = {user input}. So the recurrence ran ’n’ times, and is therefore O(n).
// where, O is the big O notation
