bool isPalindrome(int x) {
   long int y,rev=0;
    y=x;
    if(x<0) return false;
    while(x)
    {
        rev=rev*10+x%10;
        x/=10;
    }
    if(y==rev)
    {
        return true;
    }
    return false;
}