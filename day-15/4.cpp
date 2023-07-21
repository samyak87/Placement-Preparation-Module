class Solution {
public:
    int myAtoi(string s) {
        int n=s.length();
       double num=0;
        bool flag=0;
        bool minus=0;
        int i=0;

      
        while(s[i]==' ') i++;
        if(s[i]=='-' && s[i+1]=='+'){
            minus=0;
            i+=2;
            return 0;
        }
        else{
        if(s[i]=='-') minus=1,i++;
                if(s[i]=='+') minus=0,i++;
        }
        while(i<n && s[i]>='0' && s[i]<='9')
        {
            // if(s[i]==' ') {i++; continue;}
            num=num*10 + (s[i]-'0');
            i++;
        }
        if(minus) num=-num;
        if(num>INT_MAX) return INT_MAX;
                if(num<INT_MIN) return INT_MIN;

        return num;
       
    }
};