void divide(int arr[], int L, int R) {
    int mid = 0;//declear mid variable .
    if (L < R) {  // condition true when Left is smaller than Right.
        mid = (L + R) / 2;//calulate mid value .
        divide(arr, L, mid);  //use recurtion for divide array's Left part in single element.

        divide(arr, mid + 1, R);  //again use recurtion for divide array's right part in single element.
        marge(arr, L, mid, R); //marge the single element for build the array.
    }
}
//marge the divided array and sort.
void marge(int arr[], int L, int mid, int R) {
    int i, j;
    //create two variable that indicate new array size.
    int n1 = mid - L + 1;
    int n2 = R - mid;

    int arrL[n1], arrR[n2]; //declared two array.

    for (i = 0; i < n1; i++) //copy data to the array.
        arrL[i] = arr[L + i];
    for (j = 0; j < n2; j++)
        arrR[j] = arr[mid + 1 + j];

    i = 0;
    j = 0;
    while (i < n1 && j < n2) {  //sorting array
        if (arrL[i] <= arrR[j]) {
            arr[L] = arrL[i];
            i++;
        } else {
            arr[L] = arrR[j];
            j++;
        }
        L++;
     } 
for (i = 1; i <= n; i++) 
      for (j = 0; j <= value; j++){ 
           if (coins[i] > j){ 
              T[i] 
              [j] = T[i - 1][j]; 
          } 
           else if (coins[i] <= j){ 
          T[i][j] = min(T[i - 1][j], 1 + T[i][j - coins[i]]); 
            } 
      } 
return T[n][value]; 
}
