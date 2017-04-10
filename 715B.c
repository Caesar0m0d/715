#include<stdio.h>
#include<stdlib.h>

typedef struct Node{

int ver,stk[1003];
long long stk_v,edg[1003];

}h;
	int cre();
	int main(){

int n,m,s,t,l,u,v,kil=0;
long long L,wei;
h * li[1003]={};

scanf("%d %d %lld %d %d",&n,&m,&L,&s,&t);

		for(l=0;l<m;l++){
scanf("%d %d %lld",&u,&v,&wei);
if(wei == 0){wei=-1;kil++;}
cre(u,v,wei,li);
				}
if(kil=0){printf("NO\n");return 0;}
return 0;
		  }
	int cre(int u,int v,long long wei,h ** li){
h * temp;
h * temp2;
if(li[u-1] == 0){
h * new = (h *)malloc(sizeof(h));new->ver=u;li[u-1]=new;
		}
if(li[v-1] == 0){
h * new2 = (h *)malloc(sizeof(h));new2->ver=v;li[v-1]=new2;
		}
temp=li[u-1];temp2=li[v-1];temp->edg[v-1]=wei;temp2->edg[u-1]=wei;

return 0;
		 				  }

/*typedef struct Node{

int ver,stk[1003];
long long stk_v,edg[1003];

}h;*/
