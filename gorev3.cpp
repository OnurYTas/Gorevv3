#include <iostream>
#include <vector>

using namespace std;
template <class T>
vector<vector<T> > create_matrix(const T x, int rows, int cols) {
    std::vector<T> col(cols, x);
    std::vector<vector<T> > matrix(rows,col);
    return(matrix);
}



int main(){
    
    
// input'la yapılabilir mi her user inputun data tipi anlamlandırarak
    auto matrix=create_matrix(1,2,3);//char'da çalışmıyor nedense
    for (int i=0; i<matrix.size(); i++) {
        for (int j=0; j<matrix[i].size(); j++) {
            cout<<matrix[i][j] << ' ';
        }
        std::cout<<std::endl;
    }


    // int a = 2;
    // std::cout<<*(&(*(&a)))<<std::endl;

}