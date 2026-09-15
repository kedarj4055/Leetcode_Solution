int singleNumber(int* arr, int n) {
    int i,res=0;
    for(i=0;i<n;i++){
        res=res^arr[i];
    }
    return res;
}