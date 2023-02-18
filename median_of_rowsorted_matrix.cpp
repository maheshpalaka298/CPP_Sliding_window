int main(){
  vector<int>vc(R*C,0);
        
        int k=0;
        for (int i=0;i<R;i++){
            for (int j=0;j<C;j++){
                vc[k]=matrix[i][j];
                k++;
            }
        }
        sort(vc.begin(),vc.end());
        int x=(R*C)/2;
        return vc[x];
}

// R = 3, C = 3
// M = [[1, 3, 5], 
//      [2, 6, 9], 
//      [3, 6, 9]]
//ans=5;
