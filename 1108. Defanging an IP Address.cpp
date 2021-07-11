class Solution {
public:
    string defangIPaddr(string address) {
        string res, ans;
        
        for (int i =0; i<address.length(); i++) {
            if (address[i] != '.')
                ans += address[i];
            else
                ans += "[.]";
        }
        return ans;
        
    }
};
