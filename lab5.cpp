#include <iostream>//Max Number CT-302
using namespace std;

int main()
{
    int arr[10] = {433, 444, 423, 421, 491, 449, 412, 402, 455, 424};
    int k = 1;
    int n = 10;
    int loc = 1;
    int MAX = arr[0];
    while (k <= n)
    {
        if (MAX < arr[k])
        {
            loc = k;
            MAX = arr[k];
        }
        k++;
    }
    cout<<"Location of Highest Number : " <<loc << endl;
    cout<<"Highest Number : " <<MAX;

    return 0;
}