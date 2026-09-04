#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <stdbool.h>

#define WIDTH 20
#define HEIGHT 20

typedef struct {
    int x;
    int y;
} Position;

enum Direction {
    UP,
    DOWN,
    LEFT,
    RIGHT
};

void drawBoard(Position *snake, int len, Position food, int score, bool gameOver) {
    char board[HEIGHT][WIDTH + 1];
    int i, j;

    for (i = 0; i < HEIGHT; i++) {
        for (j = 0; j < WIDTH; j++) {
            board[i][j] = ' ';
        }
        board[i][WIDTH] = '\0';
    }

    for (i = 0; i < WIDTH; i++) {
        board[0][i] = '#';
        board[HEIGHT - 1][i] = '#';
    }
    for (i = 0; i < HEIGHT; i++) {
        board[i][0] = '#';
        board[i][WIDTH - 1] = '#';
    }

    for (i = 0; i < len; i++) {
        if (snake[i].x >= 0 && snake[i].x < WIDTH && snake[i].y >= 0 && snake[i].y < HEIGHT) {
            board[snake[i].y][snake[i].x] = (i == 0) ? 'H' : 'O';
        }
    }

    board[food.y][food.x] = '@';

    system("cls");
    printf("\n==== 贪吃蛇 ====" );
    printf("\n按方向键或 WASD 控制，Q 退出\n");
    printf("得分: %d\n\n", score);

    for (i = 0; i < HEIGHT; i++) {
        printf("%s\n", board[i]);
    }

    if (gameOver) {
        printf("\n游戏结束！按任意键退出...\n");
    }
}

bool isCollision(Position *snake, int len, Position nextPos) {
    int i;
    for (i = 0; i < len; i++) {
        if (snake[i].x == nextPos.x && snake[i].y == nextPos.y) {
            return true;
        }
    }
    return false;
}

Position generateFood(Position *snake, int len) {
    Position food;
    bool valid;

    do {
        valid = true;
        food.x = rand() % (WIDTH - 2) + 1;
        food.y = rand() % (HEIGHT - 2) + 1;

        for (int i = 0; i < len; i++) {
            if (snake[i].x == food.x && snake[i].y == food.y) {
                valid = false;
                break;
            }
        }
    } while (!valid);

    return food;
}

int main(void) {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    Position snake[100];
    int len = 4;
    int direction = RIGHT;
    int nextDirection = RIGHT;
    int score = 0;
    bool running = true;
    bool gameOver = false;
    Position food;
    char key;

    srand((unsigned int)time(NULL));

    for (int i = 0; i < len; i++) {
        snake[i].x = 6 - i;
        snake[i].y = 10;
    }

    food = generateFood(snake, len);

    while (running) {
        if (_kbhit()) {
            key = _getch();

            if (key == 'q' || key == 'Q') {
                running = false;
                break;
            }

            if (key == 0 || key == 224) {
                key = _getch();
                if (key == 72 && direction != DOWN) nextDirection = UP;
                else if (key == 80 && direction != UP) nextDirection = DOWN;
                else if (key == 75 && direction != RIGHT) nextDirection = LEFT;
                else if (key == 77 && direction != LEFT) nextDirection = RIGHT;
            } else {
                if (key == 'w' || key == 'W') {
                    if (direction != DOWN) nextDirection = UP;
                } else if (key == 's' || key == 'S') {
                    if (direction != UP) nextDirection = DOWN;
                } else if (key == 'a' || key == 'A') {
                    if (direction != RIGHT) nextDirection = LEFT;
                } else if (key == 'd' || key == 'D') {
                    if (direction != LEFT) nextDirection = RIGHT;
                }
            }
        }

        direction = nextDirection;

        Position newHead = snake[0];
        if (direction == UP) newHead.y--;
        else if (direction == DOWN) newHead.y++;
        else if (direction == LEFT) newHead.x--;
        else if (direction == RIGHT) newHead.x++;

        if (newHead.x <= 0 || newHead.x >= WIDTH - 1 || newHead.y <= 0 || newHead.y >= HEIGHT - 1 || isCollision(snake, len, newHead)) {
            gameOver = true;
            drawBoard(snake, len, food, score, gameOver);
            break;
        }

        for (int i = len; i > 0; i--) {
            snake[i] = snake[i - 1];
        }
        snake[0] = newHead;

        if (snake[0].x == food.x && snake[0].y == food.y) {
            len++;
            score += 10;
            food = generateFood(snake, len);
        }

        drawBoard(snake, len, food, score, gameOver);
        Sleep(120);
    }

    if (!running) {
        printf("\n你已退出游戏。\n");
    }

    return 0;
}
