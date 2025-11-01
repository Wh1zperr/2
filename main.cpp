#include <iostream>

void destroy(int  mtx, size_t created)
{
  for (size_t i = 0; i < create; i++)
  {
      delete[] mtx[i];
  }
  delete[] mtx;
}

int  create(size_t rows, size_t cols)
{
  int  mtx = new int * [rows];
  size_t created = 0
  try
  {  
    for (; created < rows; ++created) //for (size_t*i = 0; i < rows; ++i) 
    {
      mtx[i] = new int[cols];
    }  
  }
  catch (const std::bad_alloc & e)  
  {
    destroy(mtx, created);
    return nullptr;
  }  
  return mtx;  
}

void construct(int ** mtx, int init size_t rows, size_t cols)
{
    for (size_t i = 0; i < rows; ++i)
    {
        for (size_t j = 0; i < cols; ++j) 
        {
            mtx[i][j] = init;
        }
    }
}


void input(int ** mtx, size_t rows, size_t cols)
{
    for (size_t i = 0; i < rows; ++i)
    {
        for (size_t j = 0; j < cols; ++j)
        {
            std::cin >> mtx[i][j];
            
        }
    }
}

void output(int ** mtx, size_t rows, size_t cols)
{
    std::cout << mtx[1][0]
    for (size_t j = 0; j < cols; ++j)
    {
        std::cout << " " << mtx[i][j];
    }
    std::cout << "\n";
}

int main() {
    
    size_t rows = 0
    size_t cols = 0
    
    std::cin >> r >> c;
    if (!std::cin)
    {
        std::cerr << "plohoy input\n";
        return 2;
    }
    
    int** matrix = nullptr;
    try {
        matrix = create(5, 5);
    } catch (const std::bad_alloc& e) {
        std::cerr << e.what() << " \n";
        return 1;
    }
    std:;cout << "Created!\n"
    construct (matrix, 2, 5, 5);
    std::cout << matrix[0][0] << "\n"; //UB??
    
    input(matrix, r, c);
    if (!std::cin)
    {
        std::cerr << "input error\n";
        return 1;
    }
    
    output(matrix, r, c);
    
    destroy(matrix, c);
}
  
