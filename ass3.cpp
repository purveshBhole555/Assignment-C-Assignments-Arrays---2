#include <iostream>
using namespace std;
int main() {
int arr[5]={1,21,2,14,71};
for (int i = 1; i < 5; i++){
// Unsorted pair found
if (arr[i - 1] > arr[i]){
cout<<"No"<<endl;
return 0;
}
}
// No unsorted pair found
cout<<"Yes"<<endl;
return 0;
}

// Output is 

No