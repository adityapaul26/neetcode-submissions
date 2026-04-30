class Solution {
public:
    bool isPalindrome(string s) {
        int n= s.size();
        string newStr="";

        for(int i=0;i<n;i++){
            int ascii=(int)s[i];
            if(ascii>=65 && ascii<=90 || ascii>=97 && ascii<=122 || ascii>=48 && ascii <=57){
                newStr+=s[i];
            }
        }
        string newNew="";
        for(int i=0;i<newStr.size();i++){
            newNew+=tolower(newStr[i]);
        }
        int nn=newNew.size();
        int isPalindrome=1;
        for(int i=0;i<nn/2;i++){
            if(newNew[i]!=newNew[nn-i-1]){
                isPalindrome=0;
            }
        }

        if(isPalindrome) return true;
        return false;
    }
};
