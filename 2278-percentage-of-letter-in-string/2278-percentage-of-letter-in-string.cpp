class Solution {
public:
    int percentageLetter(string s, char letter) {
        double count = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == letter){
                count++;
            }
        }
        cout<< count << endl;
        return floor((count/s.size()) * 100);
    }
};