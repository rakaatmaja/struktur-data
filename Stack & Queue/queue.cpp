#include <iostream>
#include <queue>

using namespace std;

int main() {
  queue<int> q;
  
  // depan
  q.push(5);
  q.push(6);
  q.push(7);
  //belakang
  

  cout << "Nilai awal queue: " << q.front() << endl;
  cout << "Nilai akhir queue: " << q.back() << endl;
  cout<<"\n";
  q.pop();
  cout << "Nilai awal queue setelah dihapus: " << q.front() << endl;
  cout << "Nilai akhir queue setelah dihapus: " << q.back() << endl;
  return 0;
}

