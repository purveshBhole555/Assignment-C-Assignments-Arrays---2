#include <iostream>
using namespace std;
int main() {
int x;
cin>>x;
int a[5];
cout<<"Enter 5 elements for the array"<<endl;
for(int i=0;i<5;i++)cin>>a[i];
int ans=0;
for(int i=0;i<5;i++){
if(a[i]>x) ans++;
}
cout<<ans<<endl;
return 0;
}

// Output is 

4
Enter 5 elements for the array      
3 4 5 6 7 
3