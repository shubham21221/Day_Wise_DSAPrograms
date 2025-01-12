#include<bits/stdc++.h>
using namespace std;

//using unordered_map
// int main(){
//     unordered_map<string, int> word_count;
//     word_count["apple"] = 5;
//     word_count["banana"] = 3;
//     word_count["cherry"] = 7;

//     cout<<"apple: "<<word_count["apple"] <<endl;
//     cout<<"apple: "<<word_count["banana"] <<endl;
// }

// using unordered_set
// int main(){
//     unordered_set<string> fruits;
//     fruits.insert("apple");
//     fruits.insert("banana");
//     fruits.insert("cherry");
    
//     if(fruits.find("banana") != fruits.end()){
//         cout<<"banan is in the set!"<<endl;
//     }
//     else{
//         cout<<"banana not in the set"<< endl;
//     }
//     for(const auto& fruit : fruits){
//         cout<<fruit<<endl;
//     }
    
// }

//count word frequencies;
// int main(){
//     string text = "apple banana apple cherry banana apple";
//     unordered_map<string, int> word_count;

//     stringstream ss(text);
//     string word;
//     while(ss>>word){
//         word_count[word]++;
//     }
// //     Loop Iteration 1:
// // 1. ss >> word extracts the first word: word = "apple"
// // 2. word_count["apple"]++ adds "apple" to the map with a count of 1.
// // 3. word_count = {"apple": 1}
//     //print word frequencies
//     for(const auto& pair : word_count){
//         cout<<pair.first<<":"<<pair.second <<endl;
//     }
// }

//Remove duplicates
int main(){
    vector<int> numbers = {1,2,3,2,1,4,5};
    set<int> unique_numbers;
    //insert numbers into set 
    for(int num: numbers){
        unique_numbers.insert(num);
    }
    for(int num: unique_numbers){
        cout<<num<<endl;
    }
}