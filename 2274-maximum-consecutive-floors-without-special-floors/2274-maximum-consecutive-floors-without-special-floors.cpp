class Solution {
public:

    
    
    int maxConsecutive(int bottom, int top, vector<int>& special) {

        sort(special.begin(), special.end());
        int maxi= 0;
        int curr = 0;
        
        for(int i=1;i<special.size();i++){
            maxi = max(maxi, special[i] - special[i-1]-1);
        }
        
        int left = special[0] - bottom;
        int right = top - special[special.size()-1];
        cout << left << " " << right <<endl;
        cout<<maxi<<endl;
        maxi = max(maxi, max(left, right));
        
        return maxi;
        
    }
};