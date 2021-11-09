/*

Output Commands
Avi Schmookler
10/10/2021

*/
using namespace std;
#include <iostream>
#include <iomanip>
#include <string>
#include <random>
#include <vector>
#include<sstream>

vector<string> names{};
vector<string> scores{};


int main()
{
    system("color 0a");
    cout << "\tAvi Schmookler\n\tDate: 10/10/2021" << endl;
    cout << setw(19) << "Lab#: N/A\n\t";
    cout << "\"Project_24-Lab_7\"\n\tObjectives: Create a string Vector and copy the names "
        << "Create an int Vector and copy the i.d. #s Sort them based on i.d. #s(high to low) and then display names & i.d\n\n";


    string one = "Alan Ant, 1245;Ben Bee, 2121;Cathy Cat, 1199";

    stringstream s_stream(one); //create string stream from the string
    while (s_stream.good()) {
        string substr1;
        getline(s_stream, substr1, ','); //get first string delimited by comma
        names.push_back(substr1);

        getline(s_stream, substr1, ';'); //get first string delimited by ;
        scores.push_back(substr1);
    }
    int var_1 = 0;
    int var_2 = 0;
    string str_bank = "A";

label:

    for (var_1 = 0; var_1 < names.size(); var_1++) 
    {
        for (var_2 = 0; var_2 < one.size() - 1; var_2++)
        {
            if (scores[var_2] < scores[var_2++])
            {
                str_bank = scores[var_2];
                scores[var_2] = scores[var_2++];
                scores[var_2++] = str_bank;

                str_bank = names[var_2];
                names[var_2] = names[var_2++];
                names[var_2++] = str_bank;
            }
        }
    }
    for (int i = 0; i < scores.size(); i++) {
        cout << names[i] << ": " << scores[i];
    }


    return 0;
}