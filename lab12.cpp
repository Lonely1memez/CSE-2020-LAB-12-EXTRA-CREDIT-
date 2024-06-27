#include <string>
#include "BinaryHeap.cpp"

// Test program
int main( )
{
    BinaryHeap<int> printQueue;
    int x; 
    int n;
    cout << "Enter the priority of print job: ";
    cin >> x;

    while(x!=0)
      {
        printQueue.insert(x);
        cout<< "Enter the priority of print job?";
        cin >> x;
      }

    printQueue.printHeap();
    cout << "\n The number of jobs the printer will run? ";
    cin >> n;

    for(int i = 0; i < n; i++)
      {
        printQueue.deleteMin();
      }
    printQueue.printHeap();

    return 0;
}