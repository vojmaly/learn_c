# !/bin/bash

git add *.c
#git add *.md
#git add "**/*.md"
git add "**/*.c"
git commit -m "Update: $(date '+%Y-%m-%d %H:%M %Z')"
git push origin main
