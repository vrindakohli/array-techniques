main()
{
    int a[10],n,i,p;
    printf("enter number of elements");
    scanf("%d", &n);
    printf("enter array");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    printf("enter position of element to delete ");
    scanf("%d", &p);
    for(i=p+1;i<=n-1;i++)
        a[i-1]=a[i];
     n--;
     printf("new array  ");
     for(i=0;i<n;i++)
        printf("%d", a[i]);
}
