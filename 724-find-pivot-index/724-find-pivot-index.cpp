class Solution {
public:
    int pivotIndex(vector<int>& arr) {
           // Write your code here.
	vector<int> cum(arr.size());
	int sum = arr[0];
	cum[0] = arr[0];
	for(int i=1;i<arr.size();i++){
		sum += arr[i];
		cum[i] = cum[i - 1] + arr[i];
	}
	
	for(int i=0;i<arr.size();i++){
		
        
        if (i == 0 && cum[arr.size() - 1] - cum[0] == 0) {
            return 0;
       }
		else if(i != 0 && sum - cum[i] == cum[i-1]){
			return i;
		}
	}
        
        
    return -1;
    }
};