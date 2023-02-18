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

//another method

int n=S.size();
        int ans=0;
        int j=0,i=0;
        unordered_map<char,int>mp;
        while(j<n){
            char r=s[j];
            mp[r]++;
            while(mp[r]>1){
                 char l=s[i];
                 mp[l]--;
                 i++;
             }
            ans=max(ans, j-i+1);
            j++;
        }
        return ans;


//S = "geeksforgeeks"    ans=7;
