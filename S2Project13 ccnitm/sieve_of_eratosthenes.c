                    // C++ program to print all primes smaller than or equal to
                    // n using Sieve of Eratosthenes
#include <stdio.h>
//using namespace std;

void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    int prime[n+1];
    //memset(prime, 1, sizeof(prime));
    for (int i=0;i<=n;i++)
    {
        prime[i]=1;
    }
    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == 1)
        {
             for (int i=p*p; i<=n; i += p)     // Update all multiples of p greater than or
                prime[i] = 0;                  // equal to the square of it
                                    // numbers which are multiple of p and are
                                    // less than p^2 are already been marked.
        }
    }
    for (int p=2; p<=n; p++)        // Print all prime numbers
       if (prime[p]==1)
          printf("%d ",p);
}

// Driver Program to test above function
int main()
{
    int n = 50;
    printf ("Following are the prime numbers smaller than or equal to %d :\n",n);
    SieveOfEratosthenes(n);
    return 0;
}
