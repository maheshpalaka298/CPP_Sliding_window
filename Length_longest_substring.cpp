int main(){
  int maxi=INT_MIN;
      int i=0,j=0;
      int n=S.size();
      int arr[26]={0};
       while(j<n){
          arr[S[j]-'a']++;
          while(i<n && arr[S[j]-'a']!=1){
              arr[S[i]-'a']--;
              i++;
          }
          maxi=max(maxi,j-i+1);
          j++;
       }.
       return maxi;
        
}


//S = "geeksforgeeks"    ans=7;
