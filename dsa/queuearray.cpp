#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    int n;
    cout << " enter the size of array :" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the element of the array" << endl;
        cin >> arr[i];
        // creation of queue
        q.push(arr[i]);
    }
    // apply the condition
    if (q.size() > (n))
    {
        q.push(778);
    }
    else
    {
        cout << "your queue is full" << endl;
    }
    q.pop();
    cout << "the size of queue " << q.size() << endl;

    return 0;
}