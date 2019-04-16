# vscode-git-practice
Practice how to use git in vscode

vs code에서 커밋 하는 법 연습!

Basic Process

git add file_name -> git commit -m "message" -> git push remote_storage_name branch_name
Example)
git add Hello_world.cpp
git commit -m "cpp test"
git push origin master

Delete uploaded folder

git rm -r --cached "Name of folder" -> git commit -m "Delete folder" -> git push remote_storage_name branch_name
Example)
git rm -r --cached "WrongFoler" //It means delete commits in remote storage -> local folder is not deleted
git comit -m "This folder is Wrong folder" 
git push origin maseter