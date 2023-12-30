void sort(int n , int a[]){
    for(int i = 0 ; i < n - 1; i++){
        for(int j = i + 1 ; i < n ; i++){
            if(a[i] < a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}