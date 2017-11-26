/*********************************************************************
*	URI problem: 1024                                                  *
* url: https://www.urionlinejudge.com.br/judge/en/problems/view/1024 *
**********************************************************************/
#include <stdio.h>
#include <string.h>

int main(){
	char txt[1123],txt2;
	int i, n, j, len, k;

	scanf("%d ",&n);
	for (i = 0 ; i < n ; i++){
		fgets(txt, 1123, stdin);
		len = strlen(txt)-1;
		for (j = 0; j <= len; j++){
			if((txt[j] >= 'A' && txt[j] <= 'Z') || (txt[j] >= 'a' && txt[j] <= 'z')){
				txt[j] += 3;
			}
		}
		for (k = 0, j = len-1; k < j ; k++, j--){
			txt2=txt[k];
			txt[k]=txt[j];
			txt[j]=txt2;
			}
		for (j = (len/2) ; j < len ; j++){
			txt[j]--;
			}
		printf("%s", txt);
	}
	return 0;
}
