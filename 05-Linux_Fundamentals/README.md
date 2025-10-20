`pwd`	&emsp;	print current working directory  
`less`		scroll trough file contents  
`head`		view first 10 lines  
`tail`		view last 10 lines  


`echo "text" > file`		write text to file at **first line  
`echo "text" >> file`       write text to file at **append  


`sort <file>`				sort file contents  
`uniq <file>`				remove duplicate lines  
`wc <file>`					count lines, words, characters  
`cut -D'/' -f1 <file>`		extract fields from lines  


`ps aux`					list of all proceses  
`du -sh <dir>`				directory size  
`df -h`						disk usage stats  
`uname -a`					kernel and system info  
`man -k <keyword>`			search in man "keyword"  


`CTRL + z`					minimize  
`fg`						maximize minimized  


`CTRL + a`					move cursor at beginning of line  
`CTRL + e`					move cursor at end of line  
`CTRL + u`					delete everything before cursor  
`CTRL + k`					delete everything after cursor  
`CTRL + l`					clear line  
`CTRL + r`					reverse search trough history  


`!!`						repeat last command  
`cd -`						go to previous used directory  
`cd`						ho to $HOME directory  
`!<n>`						do command from history with number <n>  


`git init`								initialize git  
`git remote add <origin> http:\\..`	 	add repository  
`git add .`								add all files in cwd and subfolders to git  
`git commit -m "text"`					commit files with message  
`git push -u <origin> <main>`			push to specified <origin> branch <main>  


VIM 
`set number / set nonumber`				line numbers ON/OFF 
`set tabstop=4`							set tab to 4 spaces 
