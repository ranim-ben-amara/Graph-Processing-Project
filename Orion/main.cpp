#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <sstream>
#include "Graph.cpp"


using namespace std;
string hobby[9][2];


int main () {

    clock_t start;
    clock_t end;
    double t;
    start = clock();
    ifstream myFile;
    ifstream hobbies;
    myFile.open("C:\\Users\\Slim Romdane\\CLionProjects\\Orion\\list.csv");
    hobbies.open("C:\\Users\\Slim Romdane\\CLionProjects\\Orion\\Hobbies.csv");

    Graph graph;

    //string First_name, Last_name, Adresses, Town, City,Postal_code, Sex,Attracted_by,Sport,Music,Art;

    if(myFile.fail()){
        cerr << "Error Opening File" << endl;
        exit(1);
    }

    while (myFile.good()) {
        int x = 513;
        int y = 9;
        std::string table[x][y];


        for (int i = 0; i < x; i++){
            for (int j = 0; j < y ; j++) {
                table[i][j] = ' ';
            }
        }
        for (int i = 0; i < x; i++){
            for (int j = 0; j < y ; j++) {
                getline(myFile,table[i][j],';' );
            }
        }

        for (int a = 0; a < 9; a++){
            for (int b = 0; b < 2; b++){
                getline(hobbies, hobby[a][b],';');
            }
        }

        /*for (int i = 0; i < x; i++){
            for (int j = 0; j < y; j++) {
                cout << table[i][j] << ' ';
            }


        }
        cout << endl; */


        for (int i = 1; i < x; i++) {
            for (int j = i + 1; j < x; j++) {  // REMPLACE y PAR x
                if (table[i][5].compare(string("Tennis")) == 0){
                    if(table[j][5].compare(string("Tennis")) == 0) {
                        graph.add_edge_unweighted(i, 1001);
                        graph.add_edge_unweighted(j, 1001);
                        //graph.add_edge_unweighted(1, i);
                        //graph.add_edge_unweighted(1, j);
                    }
                }
                if (table[i][5].compare(string("Basketball")) == 0){
                    if(table[j][5].compare(string("Basketball")) == 0) {
                        graph.add_edge_unweighted(i, 1002);
                        graph.add_edge_unweighted(j, 1002);
                    }
                }
                if (table[i][5].compare(string("Ping pong")) == 0){
                    if(table[j][5].compare(string("Ping pong")) == 0) {
                        graph.add_edge_unweighted(j, 1003);
                        graph.add_edge_unweighted(i, 1003);

                    }
                }
                if (table[i][6].compare(string("Piano")) == 0){
                    if(table[j][6].compare(string("Piano")) == 0) {
                        graph.add_edge_unweighted(j, 1004);
                        graph.add_edge_unweighted(i, 1004);

                    }
                }
                if (table[i][6].compare(string("Singing")) == 0){
                    if(table[j][6].compare(string("Singing")) == 0) {
                        graph.add_edge_unweighted(j, 1005);
                        graph.add_edge_unweighted(i, 1005);
                    }
                }
                if (table[i][6].compare(string("Guitar")) == 0){
                    if(table[j][6].compare(string("Guitar")) == 0) {
                        graph.add_edge_unweighted(j, 1006);
                        graph.add_edge_unweighted(i, 1006);

                    }
                }
                if (table[i][7].compare(string("Painting")) == 0){
                    if(table[j][7].compare(string("Painting")) == 0) {
                        graph.add_edge_unweighted(j, 1007);
                        graph.add_edge_unweighted(i, 1007);

                    }
                }
                if (table[i][7].compare(string("Pottery")) == 0){
                    if(table[j][7].compare(string("Pottery")) == 0) {
                        graph.add_edge_unweighted(j, 1008);
                        graph.add_edge_unweighted(i, 1008);

                    }
                }

                if (table[i][7].compare(string("Drawing")) == 0){
                    if(table[j][7].compare(string("Drawing")) == 0) {
                        graph.add_edge_unweighted(j ,1009);
                        graph.add_edge_unweighted(i, 1009);

                    }
                }

                if (table[i][5].compare(string("None")) == 0){
                    if(table[j][5].compare(string("None")) == 0) {
                        continue;

                    }
                }
                if (table[i][6].compare(string("None")) == 0){
                    if(table[j][6].compare(string("None")) == 0) {
                        continue;

                    }
                }
                if (table[i][7].compare(string("None")) == 0){
                    if(table[j][7].compare(string("None")) == 0) {
                        continue;

                    }
                }

            }
        }

        graph.print_graph();
        cout << "You can play Tennis with:" << endl;
        //print_info(table);
        end = clock();
        t = (end - start) / (double)CLOCKS_PER_SEC;
        cout << "Time taken by the program: " << fixed << t << "s" << endl;


        myFile.close();
    }

}



