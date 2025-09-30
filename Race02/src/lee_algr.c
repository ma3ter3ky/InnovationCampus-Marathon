#include "header.h"

int rowDirection[] = {-1, 0, 1, 0};
int colDirection[] = {0, 1, 0, -1};

int front = -1;
int rear = -1;

void endqueue(t_queue_node node, t_queue_node *queue, int rows, int cols){
    if(rear == rows * cols - 1){
        return;
    }
    if(front == -1){
        front = 0;
    }
    rear++;
    queue[rear] = node;
}
t_queue_node dequeue(t_queue_node *queue){
    t_queue_node temp = {0, 0, 0};
    if(front == -1 || front > rear){
        return temp;
    }else{
        return queue[front++];
    }
}
bool is_queue(){
    return front == -1 || front > rear;
}

void lee_algr(int **maze, int rows, int cols, int startX, int startY, int endX, int endY) {
    bool **visited;
    t_queue_node *queue = malloc(rows * cols * sizeof(t_queue_node));

    visited = malloc(rows * sizeof(bool*));
    for (int i = 0; i < rows; i++) {
        visited[i] = malloc(cols * sizeof(bool));
        for (int j = 0; j < cols; j++) {
            visited[i][j] = false;
        }
    }

    front = -1;
    rear = -1;
    endqueue((t_queue_node ){startX, startY, 0}, queue, rows, cols);
    visited[startY][startX] = true;
    while(!is_queue()){
        t_queue_node node = dequeue(queue);
        int x = node.x;
        int y = node.y;
        int dest = node.dist;
        if(y == endY && x == endX){
            mx_printstr("exit=");
            mx_printint(dest);
            mx_printchar('\n');
            return;
        }
        for(int i = 0; i < 4; i++){
            int tempX = x+colDirection[i];
            int tempY = y+rowDirection[i];
            if(tempX >= 0 && tempX < cols &&
               tempY >= 0 && tempY < rows &&
               maze[tempY][tempX] == 0 && !visited[tempY][tempX]) {
                visited[tempY][tempX] = true;
                endqueue((t_queue_node ){tempX, tempY, dest+1}, queue, rows, cols);
            }
        }
    }

    // free memory allocated for visited
    for (int i = 0; i < rows; i++) {
        free(visited[i]);
    }
    free(visited);
    free(queue);
    mx_handle_error(ROUTE_NOT_FOUND);
}





