#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

#define row 20
#define columns 50

#define row2 10
#define columns2 30

#define row3 40
#define columns3 100

int Field[row][columns], Field2[row2][columns2], Field3[row3][columns3], x, y, gy, head, tail, gameloop, food, a, b, var, dir, score, highscore, speed, choice;

FILE *fp;

void snakeBody1() {

fp = fopen("highscore.txt", "r");
fscanf(fp, "%d", &highscore);
fclose(fp);

for (int i = 0; i<row; i++){
        for (int j = 0; j<columns; j++){
            Field[i][j] = 0;
        }
    }

    x = row/2 ;
    y = columns/2;
    gy = y;
    head = 4;
    tail = 1;
    gameloop = 1;
    food = 0;
    dir = 'd';
    score = 0;
    speed = 99;

    for (int i = 0; i<head; i++){
        gy++;
        Field[x][gy-head] = i+1;
    }
}

void snakeBody2() {

fp = fopen("highscore.txt", "r");
fscanf(fp, "%d", &highscore);
fclose(fp);

for (int i = 0; i<row2; i++){
        for (int j = 0; j<columns2; j++){
            Field2[i][j] = 0;
        }
    }

    x = row2/2 ;
    y = columns2/2;
    gy = y;
    head = 4;
    tail = 1;
    gameloop = 1;
    food = 0;
    dir = 'd';
    score = 0;
    speed = 99;

    for (int i = 0; i<head; i++){
        gy++;
        Field2[x][gy-head] = i+1;
    }
}

void snakeBody3() {

fp = fopen("highscore.txt", "r");
fscanf(fp, "%d", &highscore);
fclose(fp);

for (int i = 0; i<row3; i++){
        for (int j = 0; j<columns3; j++){
            Field3[i][j] = 0;
        }
    }

    x = row3/2 ;
    y = columns3/2;
    gy = y;
    head = 4;
    tail = 1;
    gameloop = 1;
    food = 0;
    dir = 'd';
    score = 0;
    speed = 99;

    for (int i = 0; i<head; i++){
        gy++;
        Field3[x][gy-head] = i+1;
    }
}

void fieldOfPlay1() {

    for (int i = 0; i<=columns+1; i++){
            if (i == 0){
                printf("%c", 201);
            }
            else if (i == columns+1){
                printf("%c", 187);
            }
            else{
                printf("%c", 205);
            }
    }
    printf("Current Score: %d   Highscore : %d", score, highscore);
    printf("\n");

    for (int i = 0; i<row; i++){
            printf("%c", 186);
        for (int j = 0; j<columns; j++){
            if (Field[i][j] == 0){
                printf(" ");
            }
            if (Field[i][j] == head){
                printf("%c", 178);
            }
            if (Field[i][j] == tail){
                printf("%c", 176);
            }
            if (Field[i][j] > 0 && Field[i][j] != head && Field[i][j] != tail){
                printf("%c", 176);
            }
            if (Field[i][j] == -1) {
                printf("%c", 15);
            }
            if (j == columns-1){
                printf("%c", 186);
            }
        }
        printf("\n");
    }
    for (int  i = 0; i<=columns+1; i++){
            if (i == 0){
                printf("%c", 200);
            }
            else if (i == columns+1){
                printf("%c", 188);
            }
            else{
                printf("%c", 205);
            }
    }
}

void fieldOfPlay2() {

    for (int i = 0; i<=columns2+1; i++){
            if (i == 0){
                printf("%c", 201);
            }
            else if (i == columns2+1){
                printf("%c", 187);
            }
            else{
                printf("%c", 205);
            }
    }
    printf("Current Score: %d   Highscore : %d", score, highscore);
    printf("\n");

    for (int i = 0; i<row2; i++){
            printf("%c", 186);
        for (int j = 0; j<columns2; j++){
            if (Field2[i][j] == 0){
                printf(" ");
            }
            if (Field2[i][j] == head){
                printf("%c", 178);
            }
            if (Field2[i][j] == tail){
                printf("%c", 176);
            }
            if (Field2[i][j] > 0 && Field2[i][j] != head && Field2[i][j] != tail){
                printf("%c", 176);
            }
            if (Field2[i][j] == -1) {
                printf("%c", 15);
            }
            if (j == columns2-1){
                printf("%c", 186);
            }
        }
        printf("\n");
    }
    for (int  i = 0; i<=columns2+1; i++){
            if (i == 0){
                printf("%c", 200);
            }
            else if (i == columns2+1){
                printf("%c", 188);
            }
            else{
                printf("%c", 205);
            }
    }
}

void fieldOfPlay3() {

    for (int i = 0; i<=columns3+1; i++){
            if (i == 0){
                printf("%c", 201);
            }
            else if (i == columns3+1){
                printf("%c", 187);
            }
            else{
                printf("%c", 205);
            }
    }
    printf("Current Score: %d   Highscore : %d", score, highscore);
    printf("\n");

    for (int i = 0; i<row3; i++){
            printf("%c", 186);
        for (int j = 0; j<columns3; j++){
            if (Field3[i][j] == 0){
                printf(" ");
            }
            if (Field3[i][j] == head){
                printf("%c", 178);
            }
            if (Field3[i][j] == tail){
                printf("%c", 176);
            }
            if (Field3[i][j] > 0 && Field3[i][j] != head && Field3[i][j] != tail){
                printf("%c", 176);
            }
            if (Field3[i][j] == -1) {
                printf("%c", 15);
            }
            if (j == columns3-1){
                printf("%c", 186);
            }
        }
        printf("\n");
    }
    for (int  i = 0; i<=columns3+1; i++){
            if (i == 0){
                printf("%c", 200);
            }
            else if (i == columns3+1){
                printf("%c", 188);
            }
            else{
                printf("%c", 205);
            }
    }
}

void ResetScr() {

    HANDLE HOUT;
    COORD coordinates;

    HOUT = GetStdHandle(STD_OUTPUT_HANDLE);

    coordinates.X = 0;
    coordinates.Y = 0;

    SetConsoleCursorPosition(HOUT, coordinates);
}

void Random1() {
    srand(time(0));
    //randomizes the random function to not generate random numbers in the same pattern.
    //using time function, each time the time changes, the generation pattern of the random function changes.

    a = 1 + rand()%18;
    b = 1 + rand()%48;
    // a and b signify the coordinates of the food

    if (food == 0 && Field[a][b] == 0) {
        Field[a][b] = -1;
        food = 1;
        if (speed>10 && score!=0) {
            speed -= 3;
        }
    }
}
void Random2() {
    srand(time(0));

    a = 1 + rand()%18;
    b = 1 + rand()%48;

    if (food == 0 && Field2[a][b] == 0) {
        Field2[a][b] = -1;
        food = 1;
        if (speed>10 && score!=0) {
            speed -= 3;
        }
    }
}
void Random3() {
    srand(time(0));

    a = 1 + rand()%18;
    b = 1 + rand()%48;

    if (food == 0 && Field3[a][b] == 0) {
        Field3[a][b] = -1;
        food = 1;
        if (speed>10 && score!=0) {
            speed -= 3;
        }
    }
}

int gettinginput() {
    if (kbhit()) {
        return _getch();
    }
    else {
        return -1;
    }
}

void snakemovement1() {
var = gettinginput();

if (((var == 'a' || var == 's' || var == 'd' || var == 'w' || var == 'A' || var == 'S' || var == 'D' || var == 'W')) && (abs(dir-var)>5)) {
    dir = var;
}

if (dir == 'd' || dir == 'D') {
    y++;
    if (Field[x][y] != 0 && Field[x][y] != -1 ) {
        gameend();
    }
    if (y == columns-1) {
        y = 0;
    }
    if (Field[x][y] == -1) {
        food = 0;
        tail -= 1;
        score +=1;
    }
    head++;
    Field[x][y] = head;
}

if (dir == 'a' || dir == 'A') {
    y--;
    if (Field[x][y] != 0 && Field[x][y] != -1 ) {
        gameend();
    }
    if (y == 0) {
        y = columns-1;
    }
    if (Field[x][y] == -1) {
        food = 0;
        tail -= 1;
        score +=1;
    }
    head++;
    Field[x][y] = head;
}

if (dir == 'w' || dir == 'W') {
    x--;
    if (Field[x][y] != 0 && Field[x][y] != -1 ) {
        gameend();
    }
    if (x == -1) {
        x = row;
    }
    if (Field[x][y] == -1) {
        food = 0;
        tail -= 1;
        score +=1;
    }
    head++;
    Field[x][y] = head;
}

if (dir == 's' || dir == 'S') {
    x++;
    if (Field[x][y] != 0 && Field[x][y] != -1 ) {
        gameend();
    }
    if (x == row) {
        x = -1;
    }
    if (Field[x][y] == -1) {
        food = 0;
        tail -= 1;
        score +=1;
    }
    head++;
    Field[x][y] = head;
}
}

void snakemovement2() {
var = gettinginput();

if (((var == 'a' || var == 's' || var == 'd' || var == 'w' || var == 'A' || var == 'S' || var == 'D' || var == 'W')) && (abs(dir-var)>5)) {
    dir = var;
}

if (dir == 'd' || dir == 'D') {
    y++;
    if (Field2[x][y] != 0 && Field2[x][y] != -1 ) {
        gameend();
    }
    if (y == columns2-1) {
        y = 0;
    }
    if (Field2[x][y] == -1) {
        food = 0;
        tail -= 1;
        score +=1;
    }
    head++;
    Field2[x][y] = head;
}

if (dir == 'a' || dir == 'A') {
    y--;
    if (Field2[x][y] != 0 && Field2[x][y] != -1 ) {
        gameend();
    }
    if (y == 0) {
        y = columns2-1;
    }
    if (Field2[x][y] == -1) {
        food = 0;
        tail -= 1;
        score +=1;
    }
    head++;
    Field2[x][y] = head;
}

if (dir == 'w' || dir == 'W') {
    x--;
    if (Field2[x][y] != 0 && Field2[x][y] != -1 ) {
        gameend();
    }
    if (x == -1) {
        x = row2;
    }
    if (Field2[x][y] == -1) {
        food = 0;
        tail -= 1;
        score +=1;
    }
    head++;
    Field2[x][y] = head;
}

if (dir == 's' || dir == 'S') {
    x++;
    if (Field2[x][y] != 0 && Field2[x][y] != -1 ) {
        gameend();
    }
    if (x == row2) {
        x = -1;
    }
    if (Field2[x][y] == -1) {
        food = 0;
        tail -= 1;
        score +=1;
    }
    head++;
    Field2[x][y] = head;
}
}

void snakemovement3() {
var = gettinginput();

if (((var == 'a' || var == 's' || var == 'd' || var == 'w' || var == 'A' || var == 'S' || var == 'D' || var == 'W')) && (abs(dir-var)>5)) {
    dir = var;
}

if (dir == 'd' || dir == 'D') {
    y++;
    if (Field3[x][y] != 0 && Field3[x][y] != -1 ) {
        gameend();
    }
    if (y == columns3-1) {
        y = 0;
    }
    if (Field3[x][y] == -1) {
        food = 0;
        tail -= 1;
        score +=1;
    }
    head++;
    Field3[x][y] = head;
}

if (dir == 'a' || dir == 'A') {
    y--;
    if (Field3[x][y] != 0 && Field3[x][y] != -1 ) {
        gameend();
    }
    if (y == 0) {
        y = columns3-1;
    }
    if (Field3[x][y] == -1) {
        food = 0;
        tail -= 1;
        score +=1;
    }
    head++;
    Field3[x][y] = head;
}

if (dir == 'w' || dir == 'W') {
    x--;
    if (Field3[x][y] != 0 && Field3[x][y] != -1 ) {
        gameend();
    }
    if (x == -1) {
        x = row3;
    }
    if (Field3[x][y] == -1) {
        food = 0;
        tail -= 1;
        score +=1;
    }
    head++;
    Field3[x][y] = head;
}

if (dir == 's' || dir == 'S') {
    x++;
    if (Field3[x][y] != 0 && Field3[x][y] != -1 ) {
        gameend();
    }
    if (x == row3) {
        x = -1;
    }
    if (Field3[x][y] == -1) {
        food = 0;
        tail -= 1;
        score +=1;
    }
    head++;
    Field3[x][y] = head;
}
}
void changetail1() {
    for(int i = 0; i<row; i++) {
        for (int j = 0; j<columns; j++) {
            if (Field[i][j] == tail) {
                Field[i][j] = 0;
            }
        }
    }
    tail++;
}

void changetail2() {
    for(int i = 0; i<row2; i++) {
        for (int j = 0; j<columns2; j++) {
            if (Field2[i][j] == tail) {
                Field2[i][j] = 0;
            }
        }
    }
    tail++;
}

void changetail3() {
    for(int i = 0; i<row3; i++) {
        for (int j = 0; j<columns3; j++) {
            if (Field3[i][j] == tail) {
                Field3[i][j] = 0;
            }
        }
    }
    tail++;
}

void gameend() {
    Sleep(1500);
    system("cls");

    if (score>highscore) {
    printf("NEW HIGHSCORE!");
    printf("\n");
    system("pause");
    fp = fopen("highscore.txt", "w");
    fprintf(fp,"%d", score);
    fclose(fp);


}
system("cls");

printf("\n");
printf(" _____                  _____");
printf("\n");
printf("|   __|___ _____ ___   |     |_ _ ___ ___");
printf("\n");
printf("|  |  | .'|     | -_|  |  |  | | | -_|  _|");
printf("\n");
printf("|_____|__,|_|_|_|___|  |_____|\_/|___|_|");
printf("\n\n\n");

printf("SCORE: %d", score);

printf("\n");

gameloop = 0;
}


void IntroPg1() {

   printf("   **********    *****          ***     **************     ****     ****    ***************\n");
   printf("  ************   ******         ***    ****************    ****    ****     ***************\n");
   printf(" ******          *** ***        ***   ****          ****   ****   ****      ****            \n");
   printf("*****            ***  ***       ***   ****          ****   ****  ****       ****            \n");
   printf(" ******          ***   ***      ***   ****          ****   ********         ****            \n");
   printf("  ********       ***    ***     ***   ****          ****   *******          *************  \n");
   printf("    ********     ***     ***    ***   ******************   ********         *************  \n");
   printf("       ******    ***      ***   ***   ******************   **** ****        ****            \n");
   printf("         *****   ***       ***  ***   ****          ****   ****  ****       ****            \n");
   printf("       ******    ***        *** ***   ****          ****   ****   ****      ****            \n");
   printf("*************    ***         ******   ****          ****   ****    ****     ***************\n");
   printf(" ***********     ***          *****   ****          ****   ****     ****    ***************\n");

   printf("\n\n                                 WELCOME TO THE SNAKE GAME \n");
   printf("\n\n\n                                 Press enter to continue... ");
}

void IntroPg2 () {
    printf("HOW TO PLAY: ");
    printf("\n\n");
    printf("Use WASD to move. \n");
    printf("W - to move up.");
    printf("\n");
    printf("A - to move left.");
    printf("\n");
    printf("S - to move down.");
    printf("\n");
    printf("D - to move right.");
    printf("\n\n");
    printf("Press enter to go to next page...");
}

void IntroPg3() {
    printf("RULES OF THE GAME: ");
    printf("\n\n");
    printf("1. The player will control a long, thin creature resembling a snake.");
    printf("\n");
    printf("2. The snake will roam inside a bordered plane eating up food, trying to avoid hitting its own tail.");
    printf("\n");
    printf("3. If the snake hits its own tail, the game ends there.");
    printf("\n");
    printf("4. Each time the snake eats a piece of food, its tail grows longer and the snake moves faster.");
    printf("\n\n");
    printf("Enjoy the game!");
    printf("\n\n");
    printf("Press enter to continue...");

}

void IntroPg4() {
    printf("Choose field size: \n1. 20x50");
    printf("\n\n");
    printf("2. 10x30");
    printf("\n\n");
    printf("3. 40x100");
    printf("\n\n");
    printf("Your choice: ");
    scanf("%d", &choice);
    printf("\n");
    printf("Press enter to start...");
}

int main() {

    IntroPg1();
    getchar();
    system("cls");

    IntroPg2();
    getchar();
    system("cls");

    IntroPg3();
    getchar();
    system("cls");

    IntroPg4();
    system("cls");

    if (choice == 1) {
        snakeBody1();
   while (gameloop == 1) {
        ResetScr();
        fieldOfPlay1();
        Random1();
        snakemovement1();
        changetail1();
        Sleep(speed);
    }
    }
    else if (choice  == 2) {
        snakeBody2();
   while (gameloop == 1) {
        ResetScr();
        fieldOfPlay2();
        Random2();
        snakemovement2();
        changetail2();
        Sleep(speed);
    }
    }
    else if (choice == 3) {
        snakeBody3();
   while (gameloop == 1) {
        ResetScr();
        fieldOfPlay3();
        Random3();
        snakemovement3();
        changetail3();
        Sleep(speed);
    }
    }
return 0;
}


