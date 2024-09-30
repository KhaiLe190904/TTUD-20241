#include <bits/stdc++.h>
using namespace std;

int checkNumberPhone(string phone){
    if (phone.length() != 10) {
        return 0;
    }
    for(int i=0; i < phone.length(); i++){
        if(!(phone[i] >= 48 && phone[i] <= 57)){ // SDT phải là số từ 0-9
            return 0;
        }
    }
    return 1;
}

int countTime(string ftime, string etime){
    int startTime = 3600*((ftime[0])-'0')*10+
}

int main(){
    
}