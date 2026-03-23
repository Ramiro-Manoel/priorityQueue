#include <iostream>
#include "OrderedMaxPQ.h"
#include "OrderedMinPQ.h"

using namespace std;

int main() {
    cout << "OrderedMaxPQ" << endl;
    OrderedMaxPQ maxQueue;

    maxQueue.insert(15);
    maxQueue.insert(5);
    maxQueue.insert(25);
    maxQueue.insert(10);
  
    while (!maxQueue.isEmpty()) {
        cout << maxQueue.removeMax() << " "; 
    }
    cout << "\n\n";



    cout << "OrderedMinPQ" << endl;
    OrderedMinPQ minQueue;
  
    minQueue.insert(15);
    minQueue.insert(5);
    minQueue.insert(25);
    minQueue.insert(10);
  
    while (!minQueue.isEmpty()) {
        cout << minQueue.removeMin() << " ";
    }

    return 0;
}
