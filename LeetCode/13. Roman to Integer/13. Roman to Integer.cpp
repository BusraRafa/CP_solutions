class Solution {
public:
    int romanToInt(string s) {
       unordered_map<char,int> mp={{'I',1},
       {'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
       int sum=0;
       for(int i=0;i<s.size();i++){
        if(mp[s[i]]<mp[s[i+1]]){//mp['I']=1
            sum=sum-mp[s[i]];
        }else{
            sum=sum+mp[s[i]];
        }
       }
       return sum;
    
    }
};
