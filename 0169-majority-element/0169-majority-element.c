int majorityElement(int* arr, int n) {
    int can=arr[0],count=0,i;
    for(i=0;i<n;i++){
        if(arr[i]==can)
            count++;
        else
            count--;

    if(count==0){
        can=arr[i];
        count=1;
    }
    }
    return can;
}