
void ArrayInsertion(int [], int*, int, int); //int for array, then no. of elements, then position at which value to be inserted, then value
int ArrayDeletion(int [], int*, int); //array, size of array, position of element to delete
void ArrayTraversal(int[], int);  //traverse wont return anything.

//****************************************************************************************************************
void main()
{ int n=5;
    int A[10]={1,2,3,4,5};
ArrayInsertion(A, &n, 3, 8) ;
ArrayTraversal(A, n);
ArrayDeletion(A, &n, 2);
ArrayTraversal(A, n);
}
/***************************************************************************************/

void ArrayInsertion(int a[], int *n, int i, int x)
{
    int j;
    for(j=(*n)-1;j>=i;j--)
        a[j+1]=a[j];
    a[i]=x;
    (*n)=(*n)+1;
}

/****************************************************************************************/

int ArrayDeletion(int a[], int *n, int i)
{
    int j,x;
    x=a[i];
    for(j=i+1;j<=(*n)-1;j++)
        a[j-1]=a[j];
    (*n)=(*n)-1;
    return x;
}
/***************************************************************************************/

void ArrayTraversal(int a[], int n)
{
    int j;
    for (j=0;j<n;j++)
        printf("%d", a[j]);
        printf("\n");

}
/**************************************************************************************/
