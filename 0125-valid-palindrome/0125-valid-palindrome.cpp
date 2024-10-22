class Solution {
public:
    bool isPalindrome(string s) 
    {
        s = preprocess(s);
        s = preprocess(s);
        
        
        int size = s.size(); 
        for(int i=0; i<size; i++)
            cout<<s[i];
        cout<<endl;
        
        
        for(int i=0; i<size; i++)
        {
            if(s[i] != s[size-i-1])
            {
                cout<<i<<", "<<s[i]<<", "<<s[size-i-1];
                return false;
            }
                
        }
        return true;
    }
    
    
    
    string preprocess(string s)
    {
        s.erase(std::remove(s.begin(), s.end(), ' '), s.end());
        
        for(int i=0; i<s.size(); i++)
        {
            int c = static_cast<int>(s[i]);
               
            if(c>=65 && c<=90){s[i] = std::tolower(s[i]);}  //if uppare case
            
            else if(c>=48 && c<=57){}
            
            else if(c>122 || c<97) //if not alphabet
            {
                s.erase(i, 1);
                if(i>0)
                    i--;
            }
        }
        return s;
    }
};


