`pwd`	&emsp;print current working directory  
`less`	&emsp;scroll trough file contents  
`head`	&emsp;view first 10 lines  
`tail`	&emsp;view last 10 lines  


`echo "text" > file`	&emsp;write text to file at **first line  
`echo "text" >> file`   &emsp;write text to file at **append  


`sort <file>`	&emsp;sort file contents  
`uniq <file>`	&emsp;remove duplicate lines  
`wc <file>`		&emsp;count lines, words, characters  
`cut -D'/' -f1 <file>`	&emsp;extract fields from lines  


`ps aux`			&emsp;list of all proceses  
`du -sh <dir>`		&emsp;directory size  
`df -h`				&emsp;disk usage stats  
`uname -a`			&emsp;kernel and system info  
`man -k <keyword>`	&emsp;search in man "keyword"  


`CTRL + z`	&emsp;minimize  
`fg`		&emsp;maximize minimized  


`CTRL + a`	&emsp;move cursor at beginning of line  
`CTRL + e`	&emsp;move cursor at end of line  
`CTRL + u`	&emsp;delete everything before cursor  
`CTRL + k`	&emsp;delete everything after cursor  
`CTRL + l`	&emsp;clear line  
`CTRL + r`	&emsp;reverse search trough history  


`!!`		&emsp;repeat last command  
`cd -`		&emsp;go to previous used directory  
`cd`		&emsp;go to $HOME directory  
`!<n>`		&emsp;do command from history with number <n>  


`git init`		&emsp;initialize git  
`git remote add <origin> http:\\..`	&emsp;add repository to <origin>  
`git add .`		&emsp;add all files in cwd and subfolders to git  
`git commit -m "text"`	&emsp;commit files with message  
`git push -u <origin> <main>`	&emsp;push to specified <origin> branch <main>  


VIM 
`set number / set nonumber`	&emsp;line numbers ON/OFF   
`set tabstop=4`				&emsp;set tab to 4 spaces  
