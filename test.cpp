class Solution {
public:
    string intToRoman(int num) {
        string res="";
        int i=0;

        vector<string> M={"","M","MM","MMM"};
        vector<string> C={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        vector<string> X={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        vector<string> I={"","I","II","III","IV","V","VI","VII","VIII","IX"};
        
        i=num/1000;
        res+=M[i];
        i=num%1000;
        i/=100;
        res+=C[i];
        i=num%1000;
        i%=100;
        i/=10;
        res+=X[i];
        i=num%1000;
        i%=100;
        i%=10;
        res+=I[i];
        
        return res;
        
    }
};
