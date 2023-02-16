int main(){
deque<int>dq;
        vector<int>vc;
        int n=nums.size();
        int i=0;
        int j=0;
        //dq.push_back(nums[0]);
        while(i<n){
            //dq.push_back(i++);
            if (!dq.empty() and dq.front()<i-k+1) dq.pop_front();
            while(!dq.empty() and nums[dq.back()]<nums[i]){
                dq.pop_back();
            }
            dq.push_back(i++);
            if (i>k-1) vc.push_back(nums[dq.front()]);
        }
        return vc;
}
        
