/*************************************************************************
	> File Name: 16.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年06月12日 星期五 18时59分33秒
 ************************************************************************/

#include<iostream>
using namespace std;
int arr[2000] = {1, 1, 0};



int main(){
    for(int i = 0; i < 500; i++){
        for(int j = 1; j <= arr[0]; j++){
            arr[j] *= 4;
        }
        for(int k = 1; k <= arr[0]; k++){
            if(arr[k] < 10) continue;
            arr[k + 1] += arr[k] / 10;
            arr[k] %= 10;
            arr[0] += (k == arr[0]);
        }
    }
    int sum = 0;
    for(int i = 1; i <= arr[0]; i++){
        sum += arr[i];
    }
    cout << sum;
    return 0;
}
