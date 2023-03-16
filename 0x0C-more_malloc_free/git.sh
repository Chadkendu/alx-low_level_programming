#!/bin/bash
git add .
echo "Enter your commit message: "
read commit_message
git commit -m "$commit_message"
git push
echo -e "\ngit push successful"
