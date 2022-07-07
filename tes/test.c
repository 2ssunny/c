#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution() {
	int n;
    scanf("%d", &n);
    int measure;
    measure=n;
    int output;
    for(int i=1; i<n; i++)
    {
		output=measure;
        if(n%i==0)
        {
            output=i+output;
        }
    }

    int answer;
    answer=output+n;
    return answer;
}
int main()
{

    solution();
	printf("---%d---", solution());
	return solution();
}
