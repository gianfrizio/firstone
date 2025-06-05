#include <unistd.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>

int g_count = 0;

int is_safe(int board[10], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        if (board[i] == col ||                           
            board[i] - i == col - row ||                 
            board[i] + i == col + row)        
            return 0;           
    }
    return 1;
}

void print_solution(int board[10])
{
    char c;
    for (int i = 0; i < 10; i++)
    {
        c = board[i] + '0';
        write(1, &c, 1);
    }
    write(1, "\n", 1);
}

void solve(int board[10], int row)
{
    if (row == 10)
    {
        print_solution(board);
        g_count++;
        return;
    }
    for (int col = 0; col < 10; col++)
    {
        if (is_safe(board, row, col))
        {
            board[row] = col;
            solve(board, row + 1);
        }
    }
}

int ft_ten_queens_puzzle(void)
{
    int board[10];
    solve(board, 0);
    return g_count;
}



int main()
{
    int total;

    total = ft_ten_queens_puzzle();
    std::cout << "Numero totale di soluzioni: " << total << std::endl;
}
