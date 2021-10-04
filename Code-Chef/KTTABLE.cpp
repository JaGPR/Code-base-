#include<iostream>
using namespace std;
// sample input 
/*
2 
3 
1 10 15
1 10 3
3 
10 20 30 
15 5 20*/

int main(){
    int T;
    scanf("%d",&T);
    while (T--)// TEST CASE LOOP
    {
      int snumber;//NUMBER OF STUDENTS 
      scanf("%d",&snumber);
      int must[snumber];
      int need[snumber];
      for (int i=0;i<snumber;i++)
      {
          cin>> must[i];
      }
      for (int j=0;j<snumber;j++)
      {
          cin>> need[j];
      }// ENTER DATA IN ARRAY
      int start=0,count=0;
      // COUNT IS FOR NO. OF STUDENTS COOKED 
      // START IS INITIALISED 0 AS IN THE FIRST CASE WE NEED 0- MUST [i]

      for (int i =0;i<3;i++)
      {
          start=must[i]-start;
          //start will be 1 in first case in 
          if (start>=need[i])//need is the time which the student needs to cook 
          {
              // if the condition is true count will be added 1 
              // running of first case 
              /* in the first case must [i] is 1 and start is 1 
              now the condtion will be true and needed time is 1 */
              count++;
          }
          start=must[i];/*start must be the must [i] as in the next case we donot need the max time ,
           we need the start to be the previous value as of now to get the time difference*/
          
      }
      printf("%d\n",count);
    }
    return 0;
}