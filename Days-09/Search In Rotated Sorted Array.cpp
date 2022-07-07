int search(int* arr, int n, int key) {
    // Write your code here.
//     for(int i = 0;i<n;i++){
//         if(arr[i]==key){
//             return i;
//         }
//     }
//     return -1;
    
    
    int start = 0 , end = n -1;
        while(start <= end){
            int mid = start + (end - start)/2;
            if(arr[mid] == key)return mid;
            if(arr[mid] <= arr[end]){
                if(arr[mid] < key && arr[end] >= key){
                    start = mid+1;
                }
                else{
                    end = mid-1;
                }
            }
            else{
                if(arr[start] <= key && arr[mid] > key){
                    end = mid -1;
                }else{
                    start = mid + 1;
                }
            }
        }
        return -1; 
    
}