int main(){
  

int n=nums.size();
        int i=0;
        int j=0;
        int odd=0;
        int ans=0;
        int cnt=0;
        for (int i=0;i<n;i++){
            if (nums[i]&1){
                 odd++;
            if (odd>=k){
                cnt=1;
                while(!(nums[j++]&1)){
                    cnt++;
                }
                ans+=cnt;
            }
            
            }
            else if(odd>=k) ans+=cnt;
        }
        return ans;
}
