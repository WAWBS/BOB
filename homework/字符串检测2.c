#include<string.h>
#include<stdio.h>
int main(void)
{
	int i,j,h,n,len;
	
	scanf("%d",&n);
	
	if(n>9||n<1)
	  return 0;
	else{
    char a[n][100];
    
	for(i=0;i<n;i++){
		scanf("%s",&a[i]);
	}
    
    i=-1;
    done:
    for(;i<n-1;){
	    i++; 
    	if(a[i][0]=='S'&&a[i][1]=='C'&&a[i][2]=='U')
    	  printf("YES\n");
    	else{
    		len=strlen(a[i]);
    		for(j=0;j<len;j++){
    		  if(a[i][j]!='A'&&a[i][j]!='S')
    		    break;
    		  if(a[i][j]=='S'){
    		  	if(a[i][j+1]=='C'){
    		  		if(a[i][j+2]=='U'){
    		  			for(h=3;j+h<len;h++){
    		  				if(a[i][j+h]!='A')
    		  				  break;
    		  			    }
						if(j+h==len){
    		  			  	printf("YES\n");
							goto done;
					  }
					  else{
					  	printf("NO\n");
					  	goto done;
					  }
				  }
				    else{
				    	printf("NO\n");
				    	goto done;
					} 
				  }
				else{
			      printf("NO\n");
			      goto done;
			    }
    	    }
		}
		if(j<len){
		  printf("NO\n");
		  goto done;
		}
}
}
}}
