# vscode-git-practice

Practice how to use git in vscode

- [First Of All - Initial setting](#first-of-all---initial-setting)
- [Make a directory as remote repository - git init](#make-a-directory-as-remote-repository---git-initialization)
- [Connect with a remote repository](#connect-with-remote-repository)
- [Upload file to the remote repository](#upload-file-to-remote-repository)
- Download from remote repository (To be written)
- Change the name of repository (To be written)
- [Delete folder in the remote repository](#delete-folder-in-remote-repository)

----

## First Of All - Initial setting

First of all, user have to do initial setting  

```git
git config --global user.name "User name"
git config --global user.name User_Email
```

Example)

```git
git config --global user.name "HS Kim"
git config --global user.name rktkek456@gmail.com
```

## Make a directory as remote repository - git initialization

```git
git init  
```

If it is worked successfully, ".git" folder will be generated in directory.

## Connect with remote repository

```git
git remote add remote_repository_name remote_url.git  
```

Example) "origin" is default of remote_repository_name

```git
git remote add origin https://github.com/HyoungsungKim/vscode-git-practice.git
```

## Upload file to remote repository

```git
git add file_name
git commit -m "message"
git push remote_repository_name branch_name1
```  

Example)

```git
git add Hello_world.cpp  
git commit -m "cpp test"  
git push origin master
```  

## Delete folder in remote repository

```git
git rm -r --cached "a Name of folder"
git commit -m "Delete the folder"
git push remote_repository_name branch_name
```

It means **delete a folder in the remote repository** -> local folder is not deleted

Example)

```git
git rm -r --cached "WrongFolder"  
git commit -m "This folder is Wrong folder"  
git push origin master  
```