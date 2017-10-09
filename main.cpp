/**
 * Smart pointer implementation and testing
 */

#include <iostream>

using namespace std;

/** Template class for Smart Pointer.
 * Implementation of pointer which destructs itself automatically.
 *
 * @example
 * @code
 *  {
 *      # Memory for int(10) will be deallocated before `}`
 *      SmartPtr<int> a(new int(10));
 *  }
 * @endcode
 *
 *
 */
template <class PtrType> class SmartPtr {
    private:
        PtrType *ptr; /**< Storage for pointer to data */

    public:
        /** Initialization constructor.
         *  @param ptr a pointer to data
         */
        SmartPtr(PtrType* ptr):ptr(ptr) {}
        
        /** Destructor to clean data referenced by stored pointer */
        ~SmartPtr() {
            delete ptr;
        }
        
        /** Dereference operator has to be overloaded to change stored data */
        PtrType& operator*() const {
            return *ptr;
        }
};

/** Test implemented class SmartPtr
 *  Create smart pointer, print value, modify and print again.
 */
int main() {

    SmartPtr<int> myPtr(new int(10));
    cout << *myPtr << endl;
    *myPtr = 11;
    cout << *myPtr << endl;

    return 0;
}
