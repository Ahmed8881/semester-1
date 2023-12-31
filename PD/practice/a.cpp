#include <iostream>
#include <windows.h>
using namespace std;
bool Fire = false;
void moveEnemy(char maze[][21], char enemyType, char direction);
void movePlayerRight(char maze[][21]);
void movePlayerLeft(char maze[][21]);
void fire(char maze[][21]);
void printMaze(char maze[][21]);
void moveFire(char maze[][21]);
main()
{
    char maze[9][21] = {"####################",
                        "#               x  #",
                        "#     e            #",
                        "#                  #",
                        "#                  #",
                        "#                  #",
                        "#        p         #",
                        "#                  #",
                        "####################"};
    printMaze(maze);
    Sleep(7);
    while (true)
    {
        if (GetAsyncKeyState(VK_LEFT))
        {
            movePlayerLeft(maze);
            printMaze(maze);
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            movePlayerRight(maze);
            printMaze(maze);
        }
        if (GetAsyncKeyState(VK_SPACE))
        {
            if (!Fire)
            {
                fire(maze);
                printMaze(maze);
                Fire = true;
            }
        }
        if (Fire)
        {
            moveFire(maze);
            printMaze(maze);
        }

        int move = rand() % 2;
        if (move == 0)
        {
            moveEnemy(maze, 'e', 'l');
            moveEnemy(maze, 'x', 'r');
            printMaze(maze);
        }
        else
        {
            moveEnemy(maze, 'e', 'r');
            moveEnemy(maze, 'x', 'l');
            printMaze(maze);
        }
    }
}
void moveenemy(char maze[][21],char enemy_type , char direction){
for(int i=0;i<9;i++){
    for(int j=0;j<21;j++){
        if(maze[i][j]==enemy_type){
            if (direction == 'r')
                if(maze[i][j+1]!='#'){
                    maze[i][j]=' ';
                    maze[i][j+1]=enemy_type;
                    break;
                }
            if (direction == 'l')
            {
                if(maze[i][j-1]!='#'){
                    maze[i][j]=' ';
                    maze[i][j-1]=enemy_type;
                    break;
                  } 
               }
           }
       }
   }
}
void movePlayerRight(char maze[][21])
{
    int x, y;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 21; j++)
        {
            if (maze[i][j] == 'p')
            {
                x = i;
                y = j;
                break;
            }
        }
    }
    if (maze[x][y + 1] != '#')
    {
        maze[x][y] = ' ';
        maze[x][y + 1] = 'p';
    }
}
void movePlayerLeft(char maze[][21])
{
    int x, y;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 21; j++)
        {
            if (maze[i][j] == 'p')
            {
                x = i;
                y = j;
                break;
            }
        }
    }
    if (maze[x][y - 1] != '#')
    {
        maze[x][y] = ' ';
        maze[x][y - 1] = 'p';
    }
}
void fire(char maze[][21])
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 21; j++)
        {
            if (maze[i][j] == 'p')
            {
                maze[i - 1][j] = 'i';
                break;
            }
        }
    }
}
void printMaze(char maze[][21])
{
    system("cls");
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 21; j++)
        {
            cout << maze[i][j];
        }
        cout << endl;
    }
}
void moveFire(char maze[][21])
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 21; j++)
        {
            if (maze[i][j] == 'i')
            {
                if (maze[i][j] == 'i' && maze[i - 1][j] == '#')
                {
                    maze[i][j] = ' ';
                    Fire = false;
                    break;
                }
                else
                {
                    maze[i][j] = ' ';
                    maze[i - 1][j] = 'i';
                    break;
                }
            }
        }
    }
}