#include <iostream>
using namespace std;

// vector implementation : 

class Vector {

    // Data Members 
    private : 

    int *arr;
    int currentSize;
    int maximumSize;



    // Constructor , Destructors, Methods 
    public:
        Vector () {
            currentSize = 0;
            maximumSize = 1;
            arr = new int [maximumSize];
        }

        void pushBack (int element) {
            // Two Cases : Vector full or Vector not full

            if (currentSize == maximumSize) {
                // create a new array and delete the previous array . 

                maximumSize *= 2;
                int *oldArrayPointer = arr;

                arr = new int [maximumSize];

                for (int i = 0; i < currentSize; i++) {
                    arr[i] = oldArrayPointer[i];
                }

                delete [] oldArrayPointer;
            }
            arr[currentSize++] = element; 

            return ;
        }

        void popBack () {
            if (currentSize > 0) {
                currentSize--;
            }
            else {
                std ::cout <<  "ERROR : VECTOR ALREADY EMPTY ! \n";
            }

            return ;
            
        }

        bool isEmpty () const{ // const because it does not change any data member of the class 
            return currentSize == 0;
        }

        int frontElement () const{
            return arr[0];
        }

        int lastElement () const{
            return arr[currentSize - 1];
        }

        int getElement (const int i) const{
            return arr[i];
        }

        int currentLength () const{
            return currentSize;
        }

        int capacity () const{
            return maximumSize;
        }

        int operator[] (const int i) const{
            return arr[i];
        }
};

int main (void) {
    
    Vector v;
    v.pushBack (4);
    v.pushBack (78);
    v.pushBack (89);




    return 0;
}