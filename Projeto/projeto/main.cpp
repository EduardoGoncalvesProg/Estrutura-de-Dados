// Guilherme Afonso TIA: 32030657
// Eduardo Goncalves TIA: 32028016

#include <iostream>
#include "StaticDeque.h"

using namespace std;

int main(){
    StaticDeque deque = Create();
    InsertBack(deque, 1);
    InsertBack(deque, 3);
    cout << "\nRear atual: " << Back(deque);
    RemoveRear(deque);
    cout << "\nRear atual: " << Back(deque);

    InsertFront(deque, 3);
    cout << "\nFront atual: " << Front(deque);

    RemoveFront(deque);
    cout << "\nFront atual: " << Front(deque);

}
main
