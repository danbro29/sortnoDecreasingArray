 #include <iostream>
 #include <vector>
 #include <algorithm>
 using namespace std;

 void moduleofarray(vector<int> &v){
     for(int i = 0; i < v.size(); i++){
         v[i] = abs(v[i]);
     }
 }

 void bubbleSort(vector<int> &v){
     int n = v.size();
     for(int i = 0; i < n - 1; i++){
         for(int j = 0; j < n - i - 1; j++){
             if(v[j] > v[j + 1]){
                 swap(v[j], v[j + 1]);
             }
         }
     }
 }

 void squareElements(vector<int> &v){
     reverse(v.begin(),v.end());
     for(int i = 0; i < v.size(); i++){
         v[i] = v[i] * v[i];
     }
 }

 int main() {
     int n;
     cout << "Enter size of an array: ";
     cin >> n;
     vector<int> vec;
     cout << "Enter elements of vector: ";
     for(int i = 0; i < n; i++){
         int ele;
         cin >> ele;
         vec.push_back(ele);
     }

     moduleofarray(vec);
     squareElements(vec);
     bubbleSort(vec);

     // Print the sorted vector
     for(int i = 0; i < vec.size(); i++){
         cout << vec[i] << " ";
     }

     return 0;
 }
