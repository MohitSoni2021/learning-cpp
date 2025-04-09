#include <iostream>
#include <vector>
using namespace std;

// Ye Function num or array do input lega or batayega ki Arr me kitni bar aayega number
int find_count(int num, vector<int> arr){
    int count = 0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] == num){
            count++;
        }
    }
    return count;
}


// ye function num or array do input lega or batayega ki Arr me wo number ha ki nahi 
int find_element(int num, vector<int> arr){
    for(int i=0; i<arr.size(); i++){
        if(arr[i] == num){
            return 1;
        }
    }
    return 0;
};

int main(){

    vector<int> arr = {2, 3, 8, 5, 9, 8, 2};

    vector<int> final;  // ye ek empty array define kiya h jisme final result store hoga

    for(int i=0; i<arr.size(); i++){  // ye loop array ki size tak chalega Arr ki
        int count = find_count(arr[i], arr); // ye hame arr[i] ka arr me kitni bar h wo batayega
        if(find_element(arr[i], final) == 0){ // ye check karega ki mere final array me wo number pehle se h ki nahi
            final.push_back(arr[i]); // wo number final array me push hoga
            final.push_back(count); // wo count final array me push hoga usi number ka
        }
    }

    // ye check kar raha ha ki odd index pe highest number konsa h kiyuki hame wo element chahiye jiska count max ho or humne count odd index pe rakhe h
    int max = final[1];
    for(int i=1; i<final.size(); i+=2){
        if(final[i] > max){
            max = final[i];
        }
    }

    // Finally output ye array odd index ki value check karga ki wo max ke equal h ki nahi aagar h to usse pehle wale element print hoga kyuki jo current element h wo just previous wale number ka count h
    for(int i=0; i<final.size(); i++){
        if(final[i] == max && i%2 != 0){
            cout << final[i-1] << " ";
        }
    }

    return 0;
}