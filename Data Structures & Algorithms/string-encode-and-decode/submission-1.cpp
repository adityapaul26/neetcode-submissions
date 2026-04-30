class Solution {
public:

    string encode(vector<string>& strs) {
        int n= strs.size();
        
        string str="";

        for(auto i:strs){
            int len=i.length();
            str+=to_string(len)+'#'+i;
        }

        return str;
    }

    vector<string> decode(string s) {
        int n= s.length();

        vector<string> res;
        int i,j;
        i=0;

        while(i<n){
            j=i;
            
            while(s[j]!='#') j++;

            //extract length
            int len= stoi(s.substr(i,j-i));

            //extract the word
            string str= s.substr(j+1,len);

            res.push_back(str);

            //increment i
            i=j+len+1;
        }
        return res;
    }
};
