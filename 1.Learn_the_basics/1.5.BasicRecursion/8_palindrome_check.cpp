//pseudo code

bool check(int i,int n,string &str){
    if(i>=n/2){
        return true;
    }
    if(str[i]!= str[n-i-1]){
        return false;
    }
    return check(i+1,n,str);
}
bool isPalindrome(string& str) {
    // Write your code here.
    int n = str.size();
    return check(0,n,str);
}
