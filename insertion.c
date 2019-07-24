main()
{
    int i,n,a[10],p,x;
    printf("enter number of elements");
    scanf("%d", &n);
    printf("enter array ");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    printf("enter position");
    scanf("%d", &p);
    printf("enter value");
    scanf("%d", &x);
    for(i=n-1; i>=p;i--)
        a[i+1]=a[i];
    a[p]=x;
    n++;
    printf("new array is  ");
    for(i=0;i<n;i++)
        printf("%d", a[i]);
}
