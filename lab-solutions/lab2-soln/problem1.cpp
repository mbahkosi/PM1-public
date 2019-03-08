#include <iostream>

using namespace std;

int main(){
    int k;
    cin >> k;

    int m=2*k-1;

    for (int i=0; i<m; i++){
        int cnt=0;
        int curr_val=k;
        int idx=1;
        for (int j=0; j<m; j++){
            if (i<m/2+1){
                if (k-j>=k-i && k-i>=1){
                    cout << k-j << " ";
                    cnt+=1;
                    curr_val=k-j;
                } else if (j<=m-cnt){
                    cout << curr_val << " ";
                } else {
                    if (curr_val < k)
                        curr_val +=1;
                    cout << curr_val << " ";
                }
            } else{
                curr_val = 2+(i%((m/2)+1));
                if (k-j>=curr_val){
                    cout << k-j << " ";
                } else if (j<m-(k-curr_val)){
                    cout << curr_val << " ";
                } else {
                    cout << curr_val+idx << " ";
                    idx+=1;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
