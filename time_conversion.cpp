#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    
    vector <string> tokens; //making an array of strings
    string intermediate;
    
    stringstream check1(s);
    
    while(getline(check1, intermediate, ':')){
        tokens.push_back(intermediate);
    }
    
    std::string half = intermediate.substr(0, intermediate.length()/2);
    tokens.push_back(half);
    
    std::string OtherHalf = intermediate.substr(intermediate.length()/2);
    tokens.push_back(OtherHalf);
    
    int hours = stoi(tokens[0]);
    int mins = stoi(tokens[1]);
    int secs = stoi(tokens[2]);
    string NewTime;
    
    if (tokens[4] == "PM"){
        if(hours!=12) {
            hours += 12;
        }
        NewTime+=(to_string(hours));
    }  
    
    
    
    if (tokens[4] == "AM"){
        if (hours < 10) {
            NewTime+=("0"+to_string(hours));
        } else if (hours ==12) {
            hours=0;
            NewTime+=("0"+to_string(hours));
        }
            else {
            NewTime+=(to_string(hours));
        }
    }
    
    NewTime+=(":");
    if (mins < 10){
        NewTime+=("0"+to_string(mins));
    } else {
        NewTime+=(to_string(mins));
    }
    NewTime+=(":");
    if (secs < 10){
        NewTime+=("0"+to_string(secs));
    } else {
        NewTime+=(to_string(secs));
    }
   
    
    
    return NewTime;
        
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
