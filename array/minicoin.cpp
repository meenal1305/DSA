#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int N;
        scanf("%d",&N);
        if(N%5==0||N%10==0)
        {
            int total;
            total=N/10+(N%10)/5;
            printf("%d\n",total);
        }
        else
        {
            printf("-1\n");
        }
    }
	// your code goes here
	return 0;
}

