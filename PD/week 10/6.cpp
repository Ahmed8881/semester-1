 #include<iostream>
using namespace std;

string reverseWords(string);
main(){
    string word;
    cout << "Enter a string: ";
    getline(cin,word);
    cout << "Reversed  string: " << reverseWords(word);
}

string reverseWords(string sentence){
    string result = "";
    int idx=0;
    int wordIdx=0;
    string words[20];
    string singleWord = "";
    while(idx < sentence.length()){
        if(sentence[idx] != ' '){
            singleWord += sentence[idx];
        }else{
            words[wordIdx] = singleWord;
            wordIdx ++;
            singleWord = "";
        }
        idx++;
    }
    words[wordIdx] = singleWord; 
    for(int i = (wordIdx);i>=0;i--){
        result += words[i] + " ";
    }
    return result;
}