#include <iostream>
#include <vector>


 void Matrix(const std::vector<std::vector<int>>& matrix){
	 for(const auto& row:matrix) {
		 for(int elem:row) {
			std::cout<<elem<<" ";
		 }
		std::cout<<"\n";
	 }
 }
	 
	std::vector<std::vector<int>>transmatrix(const std::vector<std::vector<int>>& matrix){
		int rows=matrix.size();
		int collons=matrix[0].size();
	
		std::vector<std::vector<int>>transp(collons, std::vector<int>(rows));
		for (int i=0; i<rows; ++i){
			for (int j=0; j<collons; ++j)
		{
				transp[j][i]=matrix[i][j];
		}
	}
		return transp;
}
	
	
int main(){
	std::vector<std::vector<int>>matrix={
		{3,5,7},
		{8,3,5},
		{1,0,3}
	};
	std::cout<<"vxodnaya\n";
	Matrix(matrix);
	
	std::vector<std::vector<int>> transp=transmatrix(matrix);
	
	std::cout<<"isxodnaya\n";
	Matrix(transp);
	
	return 0;
}
