`pwd`	&emsp;&emsp;&emsp;&emsp;	print current working directory  
`less`	&emsp;&emsp;&emsp;&emsp;	scroll trough file contents  
`head`	&emsp;&emsp;&emsp;&emsp;	view first 10 lines  
`tail`	&emsp;&emsp;&emsp;&emsp;	view last 10 lines  


`echo "text" > file`	&emsp;&emsp;&emsp;&emsp;	write text to file at **first line  
`echo "text" >> file`   &emsp;&emsp;&emsp;&emsp;   write text to file at **append  


`sort <file>`	&emsp;&emsp;&emsp;&emsp;			sort file contents  
`uniq <file>`	&emsp;&emsp;&emsp;&emsp;			remove duplicate lines  
`wc <file>`		&emsp;&emsp;&emsp;&emsp;			count lines, words, characters  
`cut -D'/' -f1 <file>`	&emsp;&emsp;&emsp;&emsp;	extract fields from lines  


`ps aux`			&emsp;&emsp;&emsp;&emsp;		list of all proceses  
`du -sh <dir>`		&emsp;&emsp;&emsp;&emsp;		directory size  
`df -h`				&emsp;&emsp;&emsp;&emsp;		disk usage stats  
`uname -a`			&emsp;&emsp;&emsp;&emsp;		kernel and system info  
`man -k <keyword>`	&emsp;&emsp;&emsp;&emsp;		search in man "keyword"  


`CTRL + z`	&emsp;&emsp;&emsp;&emsp;				minimize  
`fg`		&emsp;&emsp;&emsp;&emsp;				maximize minimized  


`CTRL + a`	&emsp;&emsp;&emsp;&emsp;				move cursor at beginning of line  
`CTRL + e`	&emsp;&emsp;&emsp;&emsp;				move cursor at end of line  
`CTRL + u`	&emsp;&emsp;&emsp;&emsp;				delete everything before cursor  
`CTRL + k`	&emsp;&emsp;&emsp;&emsp;				delete everything after cursor  
`CTRL + l`	&emsp;&emsp;&emsp;&emsp;				clear line  
`CTRL + r`	&emsp;&emsp;&emsp;&emsp;				reverse search trough history  


`!!`		&emsp;&emsp;&emsp;&emsp;				repeat last command  
`cd -`		&emsp;&emsp;&emsp;&emsp;				go to previous used directory  
`cd`		&emsp;&emsp;&emsp;&emsp;				ho to $HOME directory  
`!<n>`		&emsp;&emsp;&emsp;&emsp;				do command from history with number <n>  


`git init`		&emsp;&emsp;&emsp;&emsp;						initialize git  
`git remote add <origin> http:\\..`	&emsp;&emsp;&emsp;&emsp; 	add repository  
`git add .`		&emsp;&emsp;&emsp;&emsp;						add all files in cwd and subfolders to git  
`git commit -m "text"`	&emsp;&emsp;&emsp;&emsp;				commit files with message  
`git push -u <origin> <main>`	&emsp;&emsp;&emsp;&emsp;		push to specified <origin> branch <main>  


VIM 
`set number / set nonumber`	&emsp;&emsp;&emsp;&emsp;			line numbers ON/OFF 
`set tabstop=4`				&emsp;&emsp;&emsp;&emsp;			set tab to 4 spaces 
