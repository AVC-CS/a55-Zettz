#include <iostream>
using namespace std;
int main()
{
  int N, M;
  cout << "numer of Students and Number of Subjects: ";
  cin >> N >> M;
  string sname;
  int score;

  for(int i=0; i<N; i++){
	  int total = 0;
      cout << "Enter S name: ";
      cin >> sname;
      for(int j=0; j<M; j++){
          cout << "Enter score ";
          cin >> score;
          total += score;
      }
      double avg = total / (double)M;
      cout << sname << "\t" << total << "\t" << avg << endl;
  }

}