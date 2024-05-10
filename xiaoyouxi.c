#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	printf("规则如下：你先手，可以选择打自己也可以选择打对方，如果打自己，则下一个回合还是轮到你，如果打对方，则下一个回合为对方，直到一方生命值为0，虚弹不造成伤害\n");
	int f=rand()%3+3;
	int g=f;
	printf("双方血量为%d\n\n",g);
	
	int n=1;
do{
	printf("现在开始第%d轮shoot\n\n",n); 
	n++;
	int i,j,a,b,c=0,d=0;
	srand(time(NULL));
	i=rand()%4+2;
	
	
	int danjia[i];
	
	    
	for(j=0;j<=i;j++){
	a=rand()%2;
	danjia[j]=a;
	}

	for(b=0;b<=i;b++){
		c=c+danjia[b];
	}
	
	
	printf("弹夹中有%d枚子弹\n",i+1);
	printf("弹夹中有%d枚实弹\n",c);
	
	int e;
	
	for(d;d<i+1;){
	for(d;d<=i;){
		printf("请输入您要攻击的目标，打自己则输入1或打对方则输入2:\n");
		scanf("%d",&e);
		if(e==1){
			if(danjia[d]==1){
				printf("砰！\n\n");
				f=f-1;
				d++;
				printf("您现在还剩%d点生命,对方现在还剩%d点生命\n\n\n",f,g);
				if(f==0||g==0){
					break;
				}
			}else{
				printf("此弹为虚弹\n\n"); 
				d++;
			}
			continue;
		}else{
			if(danjia[d]==1){
				printf("砰！\n\n");
				d++;
			    g=g-1;
			    printf("您现在还剩%d点生命,对方现在还剩%d点生命\n\n\n",f,g); 
			    if(f==0||g==0){
					break;
				}
	        }else{
				printf("此弹为虚弹\n\n"); 
				d++;
			}
			break;
		}
	}
	if(f==0||g==0){
		break;
	}
	
		int h=d;
		
		int k=0;
		
		for(h;h<=i;h++){
			k=k+danjia[h];
		}

		
		
		for(d;d<=i;){
			if(k>=i+1-d-k){
			printf("对方选择攻击你\n");
			if (danjia[d]==1){
				printf("砰！\n\n");
				d++;
			    f=f-1;
			    printf("您现在还剩%d点生命,对方现在还剩%d点生命\n\n\n",f,g);
				if(f==0||g==0){
					break;
				}
			}else{
				printf("此弹为虚弹\n\n"); 
				d++;
			}
			break;
		}else{
			printf("对方选择攻击自己\n");
			if (danjia[d]==1){
				printf("砰！\n\n");
				g=g-1;
				printf("您现在还剩%d点生命,对方现在还剩%d点生命\n\n\n",f,g);
				d++;
				if(f==0||g==0){
					break;
				}
			}else{
				printf("此弹为虚弹\n\n"); 
				d++;
			}
			continue;
		}
		if(f==0||g==0){
			break;
		}
    }
    if(f==0||g==0){
			break;
		}
}
if(f==0||g==0){
			break;
		}
 
}while(f!=0||g!=0);
	if(f<=g){
		printf("你输了");
	}else{
		printf("你赢了");
	}
	
	
	return 0;
}
