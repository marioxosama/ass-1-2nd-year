#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<int> grades , gradeCounter;
    int x;
    cout<<"please enter grades and -1 to end"<<endl;
    cin>>x;
    while(x!=-1){
        bool found=false;
        for(int i=0; i<grades.size(); i++){
            if(grades[i]==x){
                gradeCounter[i]+=1;
                found=true;
                break;
            }
        }
        if(found==false){
            grades.push_back(x);
            gradeCounter.push_back(1);
        }
        cin>>x;

    }
    for(int i=0; i<grades.size(); i++){
        cout<<"no. of "<<grades[i]<<"    "<<gradeCounter[i]<<endl;
    }



}
