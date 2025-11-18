/*
Name: 1926. Nearest Exit from Entrance in Maze
Category: Array / Breadth-First Search / Matrix / Biweekly Contest 56
Dif: Medium

Problem: 
You are given an m x n matrix maze (0-indexed) with empty cells (represented as '.') and walls (represented as '+'). 
You are also given the entrance of the maze, where entrance = [entrancerow, entrancecol] denotes the row and column of the cell you are initially standing at.
In one step, you can move one cell up, down, left, or right. You cannot step into a cell with a wall, and you cannot step outside the maze. 
Your goal is to find the nearest exit from the entrance. An exit is defined as an empty cell that is at the border of the maze. The entrance does not count as an exit.
Return the number of steps in the shortest path from the entrance to the nearest exit, or -1 if no such path exists.


Needed time: 3h
Submissions: 12
Working submissions: 11
First - last submission: 3 - 4.11.25

Runtime: 4ms - Beats 80.97%
Memory: 38.61mb - Beats 44.37%
*/


//its just C++ (flat array) BFS, changed to match the leet requs, pls forgive me, that I dont want to comment all of it

struct Node {
  int y, x; 
  int steps; 

  Node(int getY, int getX, int getSteps) : y(getY), x(getX), steps(getSteps) {}
};

struct Pos {
  int y, x; 

  Pos(int getY, int getX) : y(getY), x(getX) {}
};

Pos dirs[4] { {1, 0}, {0, 1}, {-1, 0}, {0, -1} };

int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {

  const int mazeSizeY = maze.size(), 
            mazeSizeX = maze[0].size(),
			boarderY = mazeSizeY - 1, 
            boarderX = mazeSizeX - 1; 
 
  maze[entrance[0]][entrance[1]] = 'x';
  Node **queue = new Node*[mazeSizeY * mazeSizeX];
  int queHead = 0, queTail = 0;

  queue[queTail++] = new Node(entrance[0], entrance[1], 1);

  Node *curr; 
  while(true) {
    curr = queue[queHead++]; 
    
    for(Pos p : dirs) {
      const int ny = curr->y + p.y,
                nx = curr->x + p.x;

      if(ny < 0 || ny >= mazeSizeY || nx < 0 || nx >= mazeSizeX || maze[ny][nx] != '.')
        continue;
      
	  //leetcode requs exit
      else if((ny == 0 || ny == boarderY || nx == 0 || nx == boarderX) && !(ny == entrance[0] && nx == entrance[1])) 
        return curr->steps;
      
      maze[ny][nx] = 'x'; 
      queue[queTail++] = new Node(ny, nx, curr->steps + 1);
    }

    if(queHead == queTail) 
      return -1;
  }

  return -1; 
}