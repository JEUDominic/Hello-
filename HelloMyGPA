//  Created by Student on 9/22/15.
//  Copyright (c) 2015 JEU. All rights reserved GE PI.
//
//  TOTALLY Recode by Covey 9/22/15

#include <stdio.h>
int main()
{
    int semester                     = 0;
    int error_information       = 0;
    double cGPA                     = 0;
    double goal                       = 0;
    double target                   = 0;

    //Get know of smester and check...
    do
    {
        printf("Please tell me this is which semester in your college life.\n");
        scanf("%d",&semester);
        error_information = 0;

        if (semester > 8 || semester < 2)
            {
                printf("Please input the right semester number.");
                error_information = 1;
            }
    }
    while(error_information);

    //Get know of cGPA and check...

    do
    {
        printf("How much cGPA you have got?\n");
        scanf("%lf",&cGPA);
        error_information = 0;

        if (cGPA > 4.0 || cGPA < 0.0)
            {
                printf("Please input the right semester number.\n)");
                error_information = 1;
            }
    }
    while(error_information);

    //Get information of the goal...

    do
    {
        printf("How much cGPA you want to get when you graduate?\n");
        scanf("%lf",&goal);
        error_information = 0;
        // Calculate whether its target can came turn
        target = (goal*8 - cGPA*(semester - 1))/(8-(semester - 1));
        if (goal > 4.0 || goal < 0.0)
        {
                printf("Please input the right goal number.\n");
                error_information = 1;
        }
        else if (target <= 0.0 && error_information == 0)
        {
            printf("Your goal is too low, please turn up your goal!\n");
            error_information = 1;
        }
        else if (target > 4.0&&error_information == 0)
        {
            printf("Your goal is too height, please turn down your goal!\n");
            error_information = 1;
        }

    }
    while(error_information);

    printf("You just need to get the GPA at least %.2f in the last semester.\nGood luck!",target);

}
