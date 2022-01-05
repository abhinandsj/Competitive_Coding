class Solution {
            string decToBin(int n, string s){
            if(n == 1)
                return "1";
            else{
                 s=to_string(n%2);
                return (decToBin(n/2,s)+s) ;
            }
        }
public:
    int bitwiseComplement(int n) {
        int num;
        string num_string;
        if(n== 0) 
            num_string = "0";
        else 
            num_string = decToBin(n,"");
        int dec_guy=0;
        cout << num_string << "\n";
        for(int i = 0; i < num_string.size(); i++){
            num_string[i] == '0' ? num_string[i] = '1' :num_string[i] = '0';
            dec_guy += pow(2, num_string.size()-1-i)*int(num_string[i]-'0');
        }
        int output = dec_guy;
        return output;        
    }
};