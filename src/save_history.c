#include <stdio.h>
#include <stdlib.h>

void save()
{
	FILE *f_r;
	FILE *f_w; 	

	f_r=fopen("/home/likhitha/Desktop/LinuxProject/standby.txt","r");
	f_w=fopen("/home/likhitha/Desktop/LinuxProject/history_data.txt","a");
	size_t length = 255;
	char *line=malloc(sizeof(char)*length);
	int pt;
	int increment=1;

	if(f_r!=NULL)
	{
		while(fgets(line,length,f_r) != NULL)
		{
			fputs(line,f_w);	
		}
	}

	fclose(f_r);
	fclose(f_w);

	FILE *ff;
	ff=fopen("/home/likhitha/Desktop/LinuxProject/standby.txt","w");
	fclose(ff);
}
