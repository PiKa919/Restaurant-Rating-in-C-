#include<stdio.h>
#include<conio.h>
#define students 20
#define max_rating 5

int rest_rating_array[students][1];
int students_counter, total_rating;
int freq_array[max_rating][2];
int freq_counter, freq_count;
int i,j;

void main()
{
    printf("Please rate the Quality of Food in the Restaurant\n On a Scale of 1 to 5");

    for ( students_counter=0; students_counter<students; students_counter++)
    {
        do
        {
            printf("Student no. %d : \t", students_counter+1);
            scanf("%d", &rest_rating_array[students_counter][1]);

            if(rest_rating_array[students_counter][1] < 1 || rest_rating_array[students_counter][1] > max_rating)
                {
                    printf("Please Enter a Valid Response (Between 1 to 5)");

                }

        }
        while(rest_rating_array[students_counter][1] < 1 || rest_rating_array[students_counter][1] > max_rating);
            total_rating+=rest_rating_array[students_counter][1];


    }

        printf("\n\n");

        for(students_counter=0; students_counter<students; students_counter++)
            {
                printf("Student No. %d Rated the restaurant food %d/5\n", students_counter+1, rest_rating_array[students_counter][1]);
                
            }
        for(freq_counter=0; freq_counter<max_rating; freq_counter++)
        {
            freq_array[freq_counter][0]=freq_counter+1;
            freq_count=0;

            for(students_counter=0; students_counter<students; students_counter++)
                {
                    if(rest_rating_array[students_counter][1]==freq_counter+1)
                    {
                        freq_count=freq_count+1;
                    }
                }
                freq_array[freq_counter][1]=freq_count;
        }

    printf("\n The average Rating is %.1f/5\n", (double)total_rating/students);

    printf("\n The poll results are:\n");
    for(i=0; i<max_rating; i++)
    {
        for(j=0; j<2; j++)
            {
                printf("%5d\t", freq_array[i][j]);
            }
        printf("\n");
    }
getch();
    
}