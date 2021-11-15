#include <iostream>
#include <string>
using namespace std;

#define maxn 105
int arr[maxn];

void test_scanf_fun()
{
    char str[50];
    scanf("%[^\n]",str);

    printf("%s\n",str);

}

int main()
{
    cout << "Hello World!" << endl;

    test_scanf_fun();

    int x,n=0;

    //get input element
    while( scanf("%d",&x) ==1 )
    {
        arr[n++] = x;
    }

    //print 1~n
    for(int i =n-1;i>=1;i--)
    {
        printf("%d ",arr[i]);
    }
    printf("%d\n",arr[0]); //set new line

    return 0;
}
