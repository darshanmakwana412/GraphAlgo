#include <iostream>
#include <chrono>
using namespace std;

void run() {



}

int main() {
    
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    auto start_time = chrono::high_resolution_clock::now();
	
    run();

    auto finish_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(finish_time - start_time);
    cout<<endl<<"Runtime : "<<duration.count()/1000.0<<" milliseconds"<<endl;

    return 0;

}