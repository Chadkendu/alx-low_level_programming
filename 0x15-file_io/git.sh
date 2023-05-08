#!/bin/bash
git add .
echo -e "Your commit message: \c"
read -a commit
git commit -m "$commit"
git push
echo -e "Git push successful"
