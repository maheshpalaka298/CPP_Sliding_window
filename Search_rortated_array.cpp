int main(){
  int m=0;
        while(l<=h){
        m=h+(l-h)/2;
        if(arr[m]==k) return m;
        
        else if(arr[m]>=arr[l]){
            if(k>=arr[l] && k<=arr[m]){
                 h=m-1;
                }
            else{
                l=m+1;  
            }
        }
        else{
            if(k>=arr[m] && k<=arr[h]){
                l=m+1;
            }
            else{
                h=m-1; 
            }
        } 
    }
    return -1;   
  
}


//N = 9
//A[] = {5, 6, 7, 8, 9, 10, 1, 2, 3}
//key = 10
//ans=5;

