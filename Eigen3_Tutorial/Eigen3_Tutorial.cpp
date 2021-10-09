#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;
using namespace std;

int main()
{
	MatrixXf mat(3, 3);
	mat << 1.5, 2, 3, 4, 5, 6, 7, 8, 9;
	cout << "Here is the matrix mat:\n" << mat << endl;

	// This assignment shows the aliasing problem

	cout << endl << mat.bottomRightCorner(2, 2) << endl << mat.topLeftCorner(2, 2) << endl << endl;
	mat.bottomRightCorner(2, 2) = mat.topLeftCorner(2, 2);

	
	cout << "After the assignment, mat = \n" << mat << endl;
	
	cout << "Hello World!" << endl;
}
