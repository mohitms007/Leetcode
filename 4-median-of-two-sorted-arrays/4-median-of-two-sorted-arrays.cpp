class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
           int lengthA = a.size();
    int lengthB = b.size();
    vector<int> result;
    int i=0,j=0,k=0;
    while( i<lengthA && j<lengthB){
        if(a[i]<b[j]){
            result.push_back(a[i]);
            i++;
        }
        else{
            result.push_back(b[j]);
            j++;
        }
        k++;
    }

    while (i < lengthA) {
        result.push_back(a[i]);
        i++;
        k++;
    }

    while (j < lengthB) {
        result.push_back(b[j]);
        j++;
        k++;
    }
        double retV = 0.0;
        if (result.size()%2 == 1) {
		retV = result[result.size()/2];
	} else {
		printf("result[%d] : %f result[%d] : %f \n", result.size()/2, result[result.size()/2], result.size()/2 - 1, result[result.size() - 1]);
		retV = double(result[result.size()/2] + result[result.size()/2 - 1])/ 2;
	}
    return retV;
}

};