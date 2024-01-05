class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
         int sam[n];
       int *ans=new int[2];
       
       for(int i=0;i<n;i++){
          sam[i]=0;
      }
       for(int j=0;j<n;j++){
           int index=arr[j];
           if(sam[index-1]==0){
               sam[index-1]=1;
           }
           else if(sam[index-1]!=0){
               ans[0]=arr[j];
           }
       }
       
       for(int k=0;k<n;k++){
           if(sam[k]==0){
               ans[1]=k+1;
           }
           
       } 
       return ans;
       
   }
    
};
