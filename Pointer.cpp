#include <iostream>
using namespace std;
int update(int *arr, int *brr)
{

}
int main()
{
    int a[]={1,5,1,6,5,8,8,8,9,9,77,2,11,22,33,44,55,66};
    int b[]={1,5,1,6,5,8,8,8,9,9,77,5,33,32,8888};
    update(a,b);
    int *arr=a;
    int *brr=b;

    printf("%d\n",arr);
    printf("%d\n",&arr);
    printf("%d\n\n",*arr+4);
    // printf("%d\n",(arr)+(brr));
    // printf("%d\n",(&arr)+(&arr));
    printf("%d\n",(arr)-(brr));
    printf("%d\n",*(arr+4));
    return 0;
}