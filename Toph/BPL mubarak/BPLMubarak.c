#include <stdio.h>

int main()
{
	int t=0;
	int count,i,over,ball;
	char s[105];
	scanf("%d ", &t);
	while(t--){
		scanf("%s ", s);
		count = 0;
		i = 0;
		while(s[i] != '\0'){
			if(s[i] != 'N' && s[i] != 'W' && s[i] != 'D'){
				count++;
			}
			i++;
		}
		over = count / 6;
		ball = count % 6;
		if(ball == 0 && over != 0)
			printf("%d %s\n", over, (over>1)? "OVERS" : "OVER");
		else if(over == 0 && ball != 0)
			printf("%d %s\n", ball, (ball>1)? "BALLS" : "BALL");
		else
			printf("%d %s %d %s\n", over, (over>1)? "OVERS" : "OVER", ball, (ball>1)? "BALLS" : "BALL");
	}



	return 0;
}
