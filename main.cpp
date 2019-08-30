#include <iostream>

using namespace std;

int hashFunction(int key,int p)
{
    return (key%p)+1;
}

int main()
{
    int data[] = {63,85,3,72,89,54,21,90,32,38,15,31,96,61,16,55};

    int data_length = sizeof(data)/sizeof(data[0]);

    int H[data_length];

    for(int i=0;i<data_length;i++)
    {
        data[i] = -1;
    }

    for(int i=0;i<data_length;i++)
    {

    }
}
