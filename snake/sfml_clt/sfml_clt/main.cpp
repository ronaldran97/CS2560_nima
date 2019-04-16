////Modify the Snake Game
////
////(1)Change the image of the fruit.
////
////(2)Modify timing as snake eats fruit, game should get faster!
////
////(3)Add a second player with another snake. NOTE: Controls for second player should be mapped on the other side of keyboard.
////
////Optional:
////
////(4) add scoring
////
////(5) add new special fruit that appears randomly, that can add more length example + 2 . Make it disappear if not eaten fast enough.
////
////(6) Change background or snake color after certain score or length.
////
////(7) Look through the SFML/examples folder and see what else you can add. example: sound, better graphics, socket support(multiplayer over internet)
////
////What to Submit:
////
////Submit the following in one PDF or DOC file:
////
////Submit your final code with all the implementations above.
////
////(1) Link to your github repository specifically this project
////
////(2) Printout of code  containing only the source file you created.
////
////(3) screen shot of game in play showing changes! Mention in comments what TA should be looking for
//
//// SFML_Test.cpp : snake game
//
////#include "stdafx.h"
//#include <SFML/Graphics.hpp>   //using namespace sf
//#include <time.h>
//
////globals dimensions for window
////dimensions for window size and background
//int num_vertBox = 30, num_horzBox = 20;
//int size = 16; //number of pixels
//int w = size * num_horzBox;  //background number of pixels in width
//int h = size * num_vertBox;    //background number of pixels in height
//
////Snake variables to dertermine length and direction
//int directionSecPlayer; //direction the second snake is moving
//int direction;    //direction the snake is moving
//int direction2;     //directio the second snake is moving
//int snake_length = 4; //initial size is 4
//int second_snake_length = 4;    //initial size is 4 for second snake
//float timer = 0.0f, delay = 0.1f;   //game time
//
////Actual Snake in game is an array of x,y coordinates of sprite2
//struct Snake
//{
//    int x, y;        //each sprite of snake needs an x,y coordinate
//}
//
//s[100];
//Snake s2[100];    //second snake
//
////***NEW*** this is the fruit or food that the snake will eat
//struct Fruit
//{
//    int x, y;    // only need one sprite needed for one food item
//}food;
//
////move snake head based on user input and body by incrementing
////forward by iterating through arrays previous position
//void move() {
//
//    //1st update body so everything updates in proper order
//    //move the body only!  s[0] = head will not be changed here
//    for (int i = snake_length; i > 0; i--) {
//        s[i].x = s[i - 1].x;
//        s[i].y = s[i - 1].y;
//    }
//    //2nd update the head
//    //Head of snake, s[0] depends on direction user inputs
//    //if user presses up
//    if (direction == 0)
//        s[0].y -= 1;
//
//    //if user presses down
//    if (direction == 1)
//        s[0].y += 1;
//
//    //if user presses left
//    if (direction == 2)
//        s[0].x -= 1;
//
//    //if user presses right
//    if (direction == 3)
//        s[0].x += 1;
//
//
//    //***NEW*** If Snake eats food it should grow
//    //check if snake head = food location
//    if (((s[0].x) == food.x) && ((s[0].y) == food.y))
//    {
//        //increment snake
//        snake_length++;
//
//        //increase the speed of the game
//        delay = std::max(0.04f, delay - 0.025f);
//
//        //Randomly place food somewhere else
//        food.x = rand() % num_horzBox;
//        food.y = rand() % num_vertBox;
//    }
//
//    //***INCLASS SECOND SNAKE****************************************************************
//    for (int i = second_snake_length; i > 0; i--)
//    {
//        s2[i].x = s2[i - 1].x;
//        s2[i].y = s2[i - 1].y;
//    }
//
//    //if user presses up
//    if (directionSecPlayer == 0)
//        s2[0].y -= 1;
//
//    //if user presses down
//    if (directionSecPlayer == 1)
//        s2[0].y += 1;
//
//    //if user presses left
//    if (directionSecPlayer == 2)
//        s2[0].x -= 1;
//
//    //if user presses right
//    if (directionSecPlayer == 3)
//        s2[0].x += 1;
//
//    //*************************************************************************************
//
//    //***NEW*** Boundary Checking snake as is hits screen end
//    //loop snake back on other side
//    //LEFT and RIGHT
//    if (s[0].x > num_horzBox)
//        s[0].x = 0;
//    if (s[0].x < 0)
//        s[0].x = num_horzBox;
//    //TOP and BOTTOM
//    if (s[0].y > num_vertBox)
//        s[0].y = 0;
//    if (s[0].y < 0)
//        s[0].y = num_vertBox;
//
//    //***INCLASS SECOND SNAKE*********************************************************
//    if (s2[0].x > num_horzBox)
//        s2[0].x = 0;
//    if (s2[0].x < 0)
//        s2[0].x = num_horzBox;
//    //TOP and BOTTOM
//    if (s2[0].y > num_vertBox)
//        s2[0].y = 0;
//    if (s2[0].y < 0)
//        s2[0].y = num_vertBox;
//
//    //************************************************************************************
//
//    //***NEW*** Check if you eat body of snake
//    for (int i = 1; i < snake_length; i++)
//    {
//        //Cut Snake body from place eaten
//        if (s[0].x == s[i].x && s[0].y == s[i].y)
//            snake_length = i;
//    }
//
//    //***INCLASS SECOND SNAKE*********************************************************
//    //***NEW*** Check if you eat body of snake
//    for (int i = 1; i < second_snake_length; i++)
//    {
//        //Cut Snake body from place eaten
//        if (s2[0].x == s2[i].x && s2[0].y == s2[i].y)
//            second_snake_length = i;
//    }
//    //************************************************************************************
//
//}
//
//int main()
//{
//    //Setting pseudorandom time, TODO:discuss true random vs pseudorandom
//    srand(time(0));
//
//    //Window that we can play the game in
//    sf::RenderWindow window(sf::VideoMode(w, h), "Snake Game");
//
//    //Textures load an image into the GPU Memory
//    sf::Texture t1, t2, t3;
//    t1.loadFromFile("/Users/ronaldtran/Desktop/testXcode/images/snakeScales.png");
//    t2.loadFromFile("/Users/ronaldtran/Desktop/testXcode/images/coolFace.png");  //snake color
//    t3.loadFromFile("/Users/ronaldtran/Desktop/testXcode/images/house.png");
//
//    //Sprite has physical dimmensions that can be set in
//    //coordinate system, setPosition(x,y), and drawn on screen
//    sf::Sprite sprite1(t1);
//    sf::Sprite sprite2(t2);
//    sf::Sprite sprite3(t3);
//
//    //***NEW*** initially place food somewhere on screen
//    food.x = 10;
//    food.y = 10;
//
//    sf::Clock clock;
//    float timer = 0.0f, delay = 0.1f;
//    while (window.isOpen())
//    {
//        //Error in class I placed this before the while loop
//        //Should be placed in while loop as shown here to update
//        //timer
//        float time = clock.getElapsedTime().asSeconds();
//        clock.restart();
//        timer += time;
//
//        //Allow us to check when a user does something
//        sf::Event e;
//
//        //Check when the window is closed
//        while (window.pollEvent(e))
//        {
//            //If user presses x in the top right, Windows, top left, Mac,  close the window
//            if (e.type == sf::Event::Closed)
//            {
//                window.close();
//            }
//        }
//
//        //Control for Snake by User
//        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) direction = 0;
//        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) direction = 1;
//        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) direction = 2;
//        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) direction = 3;
//
//        //Control for second snake by second user
//        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) direction2 = 0;
//        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) direction2 = 1;
//        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) direction2 = 2;
//        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) direction2 = 3;
//
//        {
//            timer = 0; //reset timer
//            move();    //move Snake one sprite forward
//        }
//        /*****************
//         //Draw in window
//         *****************/
//        window.clear();    //clear the window so new frame can be drawn in
//
//        //NOTE: Order matters as we will draw over items listed first.
//        //Hence the background should be the first thing you will always do
//        //1st: Draw Background first
//        for (int i = 0; i < num_horzBox; i++)
//        {
//            for (int j = 0; j < num_vertBox; j++)
//            {
//                //Set position of sprite1 one at a time
//                sprite1.setPosition(i*size, j*size);
//                //Draw sprite1 but, do not show it on screen.
//                window.draw(sprite1);
//            }
//        }
//
//        //2nd: Then Draw snake otherwise background will be drawn over snake if order was reversed with background
//        for (int i = 0; i < snake_length; i++)
//        {
//            //position sprite2 one at a time
//            sprite2.setPosition(s[i].x*size, s[i].y*size);
//            //Draw sprite2 one at a time by drawing over background
//            window.draw(sprite2);
//        }
//
//        // Draw second player's snake
//        for (int i = 0; i < second_snake_length; i++) {
//            sprite3.setPosition(s2[i].x*size, s2[i].y*size);
//
//            window.draw(sprite3);
//        }
//
//        //***NEW*** 3rd: Draw Fruit
//        sprite3.setPosition(food.x*size, food.y*size);
//        window.draw(sprite3);
//
//        //Show everything we have drawn on the screen
//        window.display();
//    }
//    return 0;
//}


// SFML_Test.cpp : snake game


#include <SFML/Graphics.hpp>   //using namespace sf
#include <time.h>

//dimensions for window size and background
int num_vertBox = 30, num_horzBox = 20;
int size = 16; //number of pixels
int w = size * num_horzBox;  //background number of pixels in width
int h = size * num_vertBox;    //background number of pixels in height

//Snake variables to dertermine length and direction
int direction;    //direction the snake is moving
int direction2 = 1;
int snake_length = 4; //initial size is 4
int second_snake_length = 4;
float timer = 0.0f, delay = 0.1f;   //game time


//Actual Snake in game is an array of x,y coordinates of sprite2
struct Snake
{
    int x, y;        //each sprite of snake needs an x,y coordinate
}s[100];

//second snake
Snake s2[100];

//***NEW*** this is the fruit or food that the snake will eat
struct Fruit
{
    int x, y;    // only need one sprite needed for one food item
}food;

//move snake head based on user input and body by incrementing
//forward by iterating through arrays previous position
void move() {
    
    //1st update body so everything updates in proper order
    //move the body only!  s[0] = head will not be changed here
    for (int i = snake_length; i > 0; i--)
    {
        s[i].x = s[i - 1].x;
        s[i].y = s[i - 1].y;
    }
    
    for (int i = second_snake_length; i > 0; i--)
    {
        s2[i].x = s2[i - 1].x;
        s2[i].y = s2[i - 1].y;
    }
    //2nd update the head
    //Head of snake, s[0] depends on direction user inputs
    //if user presses up
    if (direction == 0)
        s[0].y -= 1;
    
    //if user presses down
    if (direction == 1)
        s[0].y += 1;
    
    //if user presses left
    if (direction == 2)
        s[0].x -= 1;
    
    //if user presses right
    if (direction == 3)
        s[0].x += 1;
    
    //inclass assignment************************************************************v
    //if user presses up
    if (direction2 == 0)
        s2[0].y -= 1;
    
    //if user presses down
    if (direction2 == 1)
        s2[0].y += 1;
    
    //if user presses left
    if (direction2 == 2)
        s2[0].x -= 1;
    
    //if user presses right
    if (direction2 == 3)
        s2[0].x += 1;
    
    //***NEW*** If Snake eats food it should grow
    //check if snake head = food location
    if (((s[0].x) == food.x) && ((s[0].y) == food.y))
    {
        //increment snake
        snake_length++;
        
        //increase speed
        delay -= 0.001f;
        
        //Randomly place food somewhere else
        food.x = rand() % num_horzBox;
        food.y = rand() % num_vertBox;
    }
    
    //inclass
    if (((s2[0].x) == food.x) && ((s2[0].y) == food.y))
    {
        //increment snake
        second_snake_length++;
        
        //increase speed
        delay -= 0.001f;
        
        //Randomly place food somewhere else
        food.x = rand() % num_horzBox;
        food.y = rand() % num_vertBox;
    }
    
    //***NEW*** Boundary Checking snake as is hits screen end
    //loop snake back on other side
    //LEFT and RIGHT
    if (s[0].x > num_horzBox)
        s[0].x = 0;
    if (s[0].x < 0)
        s[0].x = num_horzBox;
    //TOP and BOTTOM
    if (s[0].y > num_vertBox)
        s[0].y = 0;
    if (s[0].y < 0)
        s[0].y = num_vertBox;
    
    //inClass**********************************************************************
    
    //***NEW*** Boundary Checking snake as is hits screen end
    //loop snake back on other side
    //LEFT and RIGHT
    if (s2[0].x > num_horzBox)
        s2[0].x = 0;
    if (s2[0].x < 0)
        s2[0].x = num_horzBox;
    //TOP and BOTTOM
    if (s2[0].y > num_vertBox)
        s2[0].y = 0;
    if (s2[0].y < 0)
        s2[0].y = num_vertBox;
    
    //***NEW*** Check if you eat body of snake
    for (int i = 1; i < snake_length; i++)
    {
        //Cut Snake body from place eaten
        if (s[0].x == s[i].x && s[0].y == s[i].y)
            snake_length = i;
    }
    
    //inClass**********************************************************************
    for (int i = 1; i < second_snake_length; i++)
    {
        //Cut Snake body from place eaten
        if (s2[0].x == s2[i].x && s2[0].y == s2[i].y)
            second_snake_length = i;
    }
    
}

int main()
{
    //Setting pseudorandom time, TODO:discuss true random vs pseudorandom
    srand(time(0));
    
    //Window that we can play the game in
    sf::RenderWindow window(sf::VideoMode(w, h), "Snake Game");
    
    //Textures load an image into the GPU Memory
    sf::Texture t1, t2, t3;
    t1.loadFromFile("/Users/ronaldtran/Desktop/testXcode/images/snakeScales.png");
    t2.loadFromFile("/Users/ronaldtran/Desktop/testXcode/images/coolFace.png");  //snake color
    t3.loadFromFile("/Users/ronaldtran/Desktop/testXcode/images/house.png");    //fruit

    //Sprite has physical dimmensions that can be set in
    //coordinate system, setPosition(x,y), and drawn on screen
    sf::Sprite sprite1(t1);
    sf::Sprite sprite2(t2);
    sf::Sprite sprite3(t3);
    
    //***NEW*** initially place food somewhere on screen
    food.x = 10;
    food.y = 10;
    
    sf::Clock clock;
    //float timer = 0.0f, delay = 0.1f;
    while (window.isOpen())
    {
        //Error in class I placed this before the while loop
        //Should be placed in while loop as shown here to update
        //timer
        float time = clock.getElapsedTime().asSeconds();
        clock.restart();
        timer += time;
        
        //Allow us to check when a user does something
        sf::Event e;
        
        //Check when the window is closed
        while (window.pollEvent(e))
        {
            //If user presses x in the top right, Windows, top left, Mac,  close the window
            if (e.type == sf::Event::Closed)
            {
                window.close();
            }
        }
        
        //Control for Snake by User
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) direction = 0;
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) direction = 1;
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) direction = 2;
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) direction = 3;
        
        //control for second snake
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) direction2 = 0;
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) direction2 = 1;
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) direction2 = 2;
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) direction2 = 3;
        
        if (timer > delay)
        {
            timer = 0; //reset timer
            move();    //move Snake one sprite forward
        }
        /*****************
         //Draw in window
         *****************/
        window.clear();    //clear the window so new frame can be drawn in
        
        //NOTE: Order matters as we will draw over items listed first.
        //Hence the background should be the first thing you will always do
        //1st: Draw Background first
        for (int i = 0; i < num_horzBox; i++)
        {
            for (int j = 0; j < num_vertBox; j++)
            {
                //Set position of sprite1 one at a time
                sprite1.setPosition(i*size, j*size);
                //Draw sprite1 but, do not show it on screen.
                window.draw(sprite1);
            }
        }
        
        //2nd: Then Draw snake otherwise background will be drawn over snake if order was reversed with background
        for (int i = 0; i < snake_length; i++)
        {
            //position sprite2 one at a time
            sprite2.setPosition(s[i].x*size, s[i].y*size);
            //Draw sprite2 one at a time by drawing over background
            window.draw(sprite2);
        }
        
        
        for (int i = 0; i < second_snake_length; i++)
        {
            //position sprite2 one at a time
            sprite2.setPosition(s2[i].x*size, s2[i].y*size);
            //Draw sprite2 one at a time by drawing over background
            window.draw(sprite2);
        }
        
        //***NEW*** 3rd: Draw Fruit
        sprite3.setPosition(food.x*size, food.y*size);
        window.draw(sprite3);
        
        //Show everything we have drawn on the screen
        window.display();
    }
    return 0;
}
