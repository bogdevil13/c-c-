#include <iostream>
using namespace std;
class Quicksort{
public:
  static int Partision(int a[], int index ){
    /* Partisions the array using array[index] as a pivot point such that
    array[i] > pivot for i > index-of-pivot and
    array[i] < pivot for i< index-of-pivot, for the new pivot index*/
    int size = a[0];
    Swap(a, index, 1);
    cout<<'\t';
    for (int i=1; i < a[0]; i++) {
      std::cout<< a[i] << " ";
    }
    cout<<'\n';
    int j =1;
//    int temp;
    for(int i=1; i<=size; i++){
      cout<<"\ta[1]: "<<a[1]<<" i= "<<i<<" j= "<<j<<endl;
      if(a[1] < a[i]){
        j++;
        cout<<"\tSwapping condition satisfied\n\t\t";
        // temp = a[i];
        // a[i] = a[j];
        // a[j] = temp;
        Swap(a,j,i);
        for (size_t x = 1; x<11; x++) {
          std::cout<< a[x] << " ";
        }
        cout<<endl;
      }
    }
    Swap(a,1,j);
    return j;
  }
  static void Swap(int a[],int i,int j){
    int temp;
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
  }
};


int main(int argc, char const *argv[]) {
  int array[11] = {10,9,8,7,6,5,4,3,2,1,0};
  for (size_t i = 1; i < 11; i++) {
    std::cout<< array[i] << " ";
  }
  std::cout << "" << '\n';
  cout<<"Pivot :"<<array[5]<<'\n';
  int x = Quicksort::Partision(array, 5);
  for (size_t i = 1; i < 11; i++) {
    std::cout<< array[i] << " ";
  }
  return 0;
}
