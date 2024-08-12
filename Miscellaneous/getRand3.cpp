/*

getRand3.cpp from https://github.com/adityabhongade/Algorithms/Miscellaneous
by Aditya Bhongade - https://github.com/adityabhongade

Description : Returns 3 random double values that sum to 1. Add this above main and driver functions.

*/

srand(time(0));
cout<<flush;
vector<double> getRand3() {
    double a = 1.0, b = 1.0;
    a = (rand() % 1000) / 1000.0;
    b = (rand() % 1000) / 1000.0;
    if(a > b) {
        swap(a, b);
    }
    return {a, b-a, 1-b};
}
