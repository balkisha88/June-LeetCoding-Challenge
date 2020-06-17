// #include <bits/stdc++.h> 
// #include <boost/algorithm/string.hpp> 
class Solution {
public:
    bool checkIPv4(string IP)
    {
        IP.push_back('.');
        string t="";
        for(auto c:IP)
        {
            
            if(c=='.')
            {
    if(t=="" || t.size()>3 || t.compare("256")>=0 || (t.length()!=1 && t[0]=='0') )
                return false;
            else t="";
            
            }
            else
            {
                if(c<'0' || c>'9')
                    return false;
                t+=c;
                
            }
        }
        return true;
    }
    bool checkIPv6(string IP)
    { 
        IP.push_back(':');
        string t="";
        for(auto c:IP)
        {
            
            if(c==':')
            {
            if(t=="" || t.length()>4 )
                return false;
            else t="";
            
            }
            else
            {
                if((c>='a'&& c<='f')||(c>='A'&& c<='F') || (c>='0'&& c<='9'))
                    t+=c;
                else
                    return false;
                
                
            }
            
        }
        return true;
    }
    string validIPAddress(string IP) {
        
        int c4=0,c6=0;
        
        for(char c:IP)
        {
            if(c=='.')
                c4++;
            if(c==':')
                c6++;
        }
       
        if(c4==3 && checkIPv4(IP))
            return "IPv4";
        else if(c6==7 && checkIPv6(IP))
            return "IPv6";
        else
            return "Neither";
        
        return "Neither";
        
    }
};
