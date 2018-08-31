#include<iostream>
using namespace std;

class HeapSort{

/* The First element of the input array contains the size of the array
  the indexing is thus done from 1 instead of 0*/
    static void MAX_HEAP(int a[], int i){
      int size = a[0];
      int largest = i,   temp;
      int left = i*2;
      int right = i*2 + 1;
      if(left<=size && a[largest] < a[left] )
        largest = left;
      if(right<=size && a[largest] < a[right] )
        largest = right;
      if( largest != i){
        temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;
        MAX_HEAP(a, largest);
      }
    }
    static void Swap(int a[],int i,int j){
      int temp;
      temp = a[i];
      a[i] = a[j];
      a[j] = temp;
    }
    public:
      
    static void BUILD_MAX_HEAP(int a[] ){
      for (size_t i = a[0]; i > 0; i--) {
        MAX_HEAP(a, i);
        /* code */
      }
    }
    static void HEAPSORT(int a[]) {
      /* code */
      BUILD_MAX_HEAP(a);
      for (size_t i= a[0]; i > 1; i--){
        Swap(a,1,i);
        a[0] -= 1;
        MAX_HEAP(a,1);
        /* code */
      }
    }
};

int main(){
  int array[11] = {10,4,1,3,2,16,9,10,14,8,7};
  for( int i=1; i<=10; i++){
    cout<<array[i]<<" ";
  }
  cout<<'\n';
  HeapSort::HEAPSORT(array);
  cout<<'\n';
  for( int i=1; i<=10; i++){
    cout<<array[i]<<" ";
  }
  return 0;
}
