template <typename T>

class Vector {

    // Data Members 
    private : 

    T *arr;
    int currentSize;
    int maximumSize;

    // Constructor , Destructors, Methods 
    public:
        Vector () {
            currentSize = 0;
            maximumSize = 1;
            arr = new T [maximumSize];
        }

        void pushBack (int element) {
            // Two Cases : Vector full or Vector not full

            if (currentSize == maximumSize) {
                // create a new array and delete the previous array . 

                maximumSize *= 2;
                T *oldArrayPointer = arr;

                arr = new T [maximumSize];

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
            // else {
            //     std ::cout <<  "ERROR : VECTOR ALREADY EMPTY ! \n";
            // }

            return ;
            
        }

        bool isEmpty () const{ // const because it does not change any data member of the class 
            return currentSize == 0;
        }

        T frontElement () const{
            return arr[0];
        }

        T lastElement () const{
            return arr[currentSize - 1];
        }

        T getElement (const int i) const{
            return arr[i];
        }

        int  currentLength () const{
            return currentSize;
        }

        int  capacity () const{
            return maximumSize;
        }

        T operator[] (const int i) const{
            return arr[i];
        }
};