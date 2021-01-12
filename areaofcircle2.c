#include <stdio.h>
#include <math.h>

 //here is the areaOfCircle function
float areaOfCircle(float radius)
{
      float area = M_PI * radius * radius;
      return area;
}


int main(int argc, char* argv[])
{
  //it is checking to see if there are atleast two arguments being entered 
  if (argc < 3)
  {
    printf("two arguments were not passed\n");
    // user input 
    char input[256];
    float startrad;
    float endrad; 
  
    printf("input the starting radius\n");
    while (1)
    {
      fgets(input, 256, stdin);
      if (sscanf(input, "%f", &startrad) == 1) break;
      printf("Not a valid number enter another number\n");
    }

    printf("input the ending radius\n");
    while (1)
    {
      fgets(input, 256, stdin);
      if (sscanf(input, "%f", &endrad) == 1) break;
      printf("Not a valid number enter another number\n");
    }
  
    if (endrad > startrad)
    {
        //calculate the new area
        for(float i = startrad; i <= endrad; i++)
        {
            float a = areaOfCircle(i);
            printf("area of circle with a radius of %f is %f\n", i, a);
        }

    } else {
      printf("second radius must be larger than the first enter another radius\n");
    }
    return 1;

  } else if (argc > 3) {
    printf("too many inputs enter only 2 numbers\n");
    return 1;
  }


  //checks to see if args are numbers
  float arg1;
  
  float found = sscanf(argv[1], "%f", &arg1);
  if (found != 1)
  {
    printf("first arg is not number, please enter two numbers\n");
    return 1;
  }

  float arg2;
  found = sscanf(argv[2], "%f", &arg2);
  if (found != 1)
  {
    printf("second arg is not a number, please enter two numbers\n");
    return 1;
  }
  
  //it will take the user input now and calculate the area of the circle
  
  for(float i = arg1; i <= arg2; i++)
  {
      float a = areaOfCircle(i);
      printf("area of circle with a radius of %f is %f\n", i, a);
  }

}

