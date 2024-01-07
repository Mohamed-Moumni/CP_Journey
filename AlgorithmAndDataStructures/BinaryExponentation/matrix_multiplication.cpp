#include <iostream>
#include <vector>

using namespace std;

class Matrix
{
public:
	int row;
	int col;
	vector<vector<int>> values;

	Matrix(int _row, int _col, vector<vector<int>> _values) : row(_row), col(_col), values(_values)
	{
	}
	Matrix(int _row, int _col) : row(_row), col(_col)
	{
		values = vector(_row, vector<int>(_col, 0));
	}
	void print_matrix();
};

void Matrix::print_matrix()
{
	for (int i = 0; i < this->row; i++)
	{
		for (int j = 0; j < this->col; j++)
		{
			cout << "[ " << this->values[i][j] << " ] ";
		}
		cout << endl;
	}
}

Matrix multiply_matrix_by_matrix(Matrix &matrix1, Matrix &matrix2)
{
	Matrix matrix_result(matrix1.row, matrix2.col);
	int sum;

	for (int i = 0; i < matrix1.row; i++)
	{
		for (int j = 0; j < matrix2.col; j++)
		{
			sum = 0;
			for (int k = 0; k < matrix1.col; k++)
			{
				sum += matrix1.values[i][k] * matrix2.values[k][j];
			}
			matrix_result.values[i][j] = sum;
		}
	}
	return matrix_result;
}

int main(void)
{
	vector<vector<int>> values = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
	Matrix matrix1(3, 3,values);
	Matrix matrix2(3, 3, values);
	Matrix product = multiply_matrix_by_matrix(matrix1, matrix2);
	product.print_matrix();
	return (0);
}
