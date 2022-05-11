#include <iostream>
#include <string>
#include "Graph.cpp"
#include "cmake-build-debug/Graphs.h"


using namespace std;



int main () {
    ifstream myFile;
    myFile.open("C:/Users/Gatti/CLionProjects/untitled6/Orion2.csv");
    string graph[14][2];
    for(auto & i : graph){
        for(auto & j : i){
            j=" ";

        }
    }
    for(auto & i : graph){
        for(auto & j : i){
            getline(myFile,j,';');
        }
    }
    myFile.close();

    ifstream myFile1;
    myFile.open("C:/Users/Gatti/CLionProjects/untitled6/Orion.csv");
    string names[14][2];
    for(auto & name : names){
        for(auto & j : name){
            j=" ";

        }
    }
    for(auto & name : names){
        for(auto & j : name){
            getline(myFile,j,';');
        }
    }
    myFile.close();

    ifstream myFile2;
    myFile2.open("C:/Users/Gatti/CLionProjects/untitled6/Orion1.csv");
    string hobbies[3][2];
    for(auto & hobbie : hobbies){
        for(auto & j : hobbie){
            j=" ";

        }
    }
    for(auto & hobbie : hobbies){
        for(auto & j : hobbie){
            getline(myFile2,j,';');
        }
    }
    myFile2.close();

    Graphs g(1010);

    for(auto & i : graph) {
        int a, b;
        a = stoi(i[0]);
        b = stoi(i[1]);
        g.addEdge(a,b);
    }
    int highest = g.verticePopularity();
    for(auto & hobbie : hobbies){
        if(highest == stoi(hobbie[0]))
            cout<<hobbie[1]<<endl;
    }

    string choice;
    cout<<"what is your hobby ?"<<endl;
    cout<<"tennis, piano or basket: "<<endl;
    cin>>choice;


    int choice1 = 0;
    for(auto & hobbie : hobbies){
        if(choice == hobbie[1])
            choice1 = stoi(hobbie[0]);
    }

    if (choice1 > 0) {
        int player[10];
        int k = 0;
        for (int i = 0; i < 14; i++) {
            if (g.isReachable(i + 1, choice1)) {
                player[k] = i + 1;
                k++;
            }
        }
        cout << "you can play with:" << endl;
        for (int i = 0; i < k; i++) {
            for (auto & name : names) {
                if (player[i] == stoi(name[0]))
                    cout << name[1] << " " << endl;
            }
        }


    }

    else {
        cout << "the entered hobby doesn't exist." << endl;
    }




}


