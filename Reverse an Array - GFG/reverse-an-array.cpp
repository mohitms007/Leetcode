#include <iostream>
using namespace std;

void swap(int a[], int index1, int index2) {
    int temp = a[index1];
    a[index1] = a[index2];
    a[index2] = temp;
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    int a[n];
	    
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    
	    int left = 0;
	    int right = n - 1;
	    while(left <= right) {
	        swap(a,left++, right--);
	    }
	    for(int i=0;i<n;i++){
	        cout << a[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}