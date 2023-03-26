#include <stdio.h>
#include <stdlib.h>
void fill(int *t ,int N)
{
    printf("Enter the elements of the matrix :\n");
    for (int i =0; i<N; i++)
    {
        printf ("tab [%d] = ",i+1 );
        scanf("%d",(t+i));
    }
}
void array_sort(int *t , int N)
{
    int *p2;
    int *p1;
    int tmp;
    for(p1= t; p1<t+N; p1++)
    {
        for(p2= p1+1; p2<t+N; p2++)
        {
            if (*p1>*p2)
            {
                tmp =*p1;
                *p1 = *p2;
                *p2 =tmp;
            }
        }
    }
}
void display(int *t , int N)
{
    int *pf;
    int index;

    printf("The matrix elements are arranged in the following way :\n");
    for (pf= t; pf<t+N; pf++)
    {
        index=pf-t;
        printf("tab[%d]= %d \n",index+1,(*pf));
    }

}
int main()
{
    int number_of_elements;
    int *tab;
    printf("enter the number of array elements :");
    scanf("%d",&number_of_elements);
    tab = (int *)(malloc(number_of_elements*sizeof(int)));
    fill(tab,number_of_elements);
    array_sort(tab,number_of_elements);
    display(tab,number_of_elements);


    return 0;
}
