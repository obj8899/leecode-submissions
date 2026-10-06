class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=s.size();
        int closeneeded=0;
        int openneeded=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                openneeded++;
            }
            else if(s[i]==')'){
                if(openneeded>0){
                    openneeded--;
                }
                else{
                    closeneeded++;
                }
                
            }
        }
        return openneeded+closeneeded;
    }
};