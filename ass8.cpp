// Find the error.
double getAverage(int arr[], int size);
int main () {
int balance[5] = {1000, 2, 3, 17, 50};
double avg;
avg = getAverage( balance[0], 5 ) ;
cout << "Average value is: " << avg << endl;
return 0;
}


//CORRECT CODE IS 


double getAverage(int arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

int main() {
    int balance[5] = {1000, 2, 3, 17, 50};
    double avg;
    avg = getAverage(balance, 5); // Pass the array 'balance' instead of balance[0]
    cout << "Average value is: " << avg << endl;
    return 0;
}
