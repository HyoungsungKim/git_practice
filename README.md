# vscode-git-practice

Practice how to use git in vscode

vs code에서 커밋 하는 법 연습!  

- [git init](##make-a-directory-as-remote-repository)
- [Connect with a remote repository](##connect-with-remote-repository)
- [Upload file to the remote storage](##upload-file-to-remote-storage)
- [Delete folder in the remote repository](##delete-folder-in-remote-repository)

----

## Make a directory as remote repository

> `git init`  
>If it is worked successfully, ".git " folder is generated in directory.

## Connect with remote repository

>`git remote add remote_storage_name remote_url.git`  
>
>Ex)  
>git remote add origin https://github.com/HyoungsungKim/vscode-git-practice.git



## Upload file to remote storage

>`git add file_name -> git commit -m "message" -> git push remote_storage_name branch_name1`
>
>Ex)  
>git add Hello_world.cpp  
>git commit -m "cpp test"  
>git push origin master  

## Delete folder in remote repository

>`git rm -r --cached "Name of folder" -> git commit -m "Delete folder" -> git push remote_storage_name branch_name`  
>It means delete commits in remote storage -> local folder is not deleted  
>
>Ex)  
>git rm -r --cached "WrongFolder"  
>git commit -m "This folder is Wrong folder"  
>git push origin master  