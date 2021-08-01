// Assignment 5 (Constructor, Destructor, Dynamic Memory Allocation)
// Write a C++ program that dynamically allocates memory to a matrix.
// Add two matrices, display the resultant matrix, and finally free the memory space
// with the help of destructor.

// Sample Output:
// --------------------------------
// Enter the number of rows and columns of 2D Arrays: 2 2
// Enter the first matrix: 1 2 3 4
// Enter the second matrix: 5 6 7 8
// Resultant matrix is:
// 6     8
// 10   12
// Memory space freed
// Memory space freed
// Memory space freed


#include <iostream>
using namespace std;



class Matrix{

    int **a;
    int m, n;

public:
    Matrix()
    {
        m=0; n=0;
    }
    Matrix (int i, int j)
    {
        m=i; n=j;
        a = new int*[m];
        for (int t=0; t<j; t++)
            a[t] = new int[n];
    }


    ~Matrix()
    {
        cout<<"\nMemory space freed";
    }


    void getData()
    {
        int i, j;
        for (i=0; i<m; i++)
            for (j=0; j<n; j++)
                cin>>a[i][j];        //cin>>a[i][j]; or (a + i*n)[j]

    }
    void showData()
    {
        int i, j;
        for (i=0; i<m; i++)
        {
            for (j=0; j<n; j++)
            {
                cout<<a[i][j]<<"   ";
            }
            cout<<"\n";
        }
    }
    Matrix operator+(Matrix &);
};

Matrix Matrix::operator+(Matrix &B)
{
    Matrix R(m,n);
    int i, j;
    for (i=0; i<m; i++)
        for (j=0; j<n; j++)
            R.a[i][j] = a[i][j] + B.a[i][j];
    return R;
}

int main()
{

    int r, c;
    cout<<"Enter the number of rows and columns of 2D Arrays: ";
    cin>>r>>c;
    Matrix A(r, c);
    Matrix B(r, c);

    cout<<"\nEnter the first matrix ["<<r<<"*"<<c<<"] : ";
    A.getData();

    cout<<"\nEnter the second matrix ["<<r<<"*"<<c<<"] : ";
    B.getData();

    cout<<"Resultant matrix is: \n\n";
    Matrix R = A + B;
    R.showData();

    return 0;
}
