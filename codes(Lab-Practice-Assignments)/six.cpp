# include <iostream>
using namespace std;
void fact(int i = 0){
    cout << i << end;
    fact(i++);


}
int main(){
    fact();
    return 0;
}