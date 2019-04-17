# git_practice

Practice how to use git in vscode

- [First Of All - Initial setting](#first-of-all---initial-setting)
- [Make a directory as remote repository - git init](#make-a-directory-as-remote-repository---git-initialization)
- [Connect with a remote repository](#connect-with-remote-repository)
- [Commit](##commit)
- [Upload file to the remote repository](#upload-file-to-remote-repository)
- Download from remote repository (To be written)
- Change the name of repository (To be written)
- [Delete directory in the remote repository](#delete-directory-in-remote-repository)

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

## Commit

```git
git commit -m "content"
```

Amend commit

```git
git add file_name
git commit --amend
```

Example)

```git
git add helloWorld.cpp
git commit --amend
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

## Delete directory in remote repository

```git
git rm -r --cached "a Name of directory"
git commit -m "Delete the directory"
git push remote_repository_name branch_name
```

It means **delete a directory in the remote repository** -> local directory is not deleted

Example)

```git
git rm -r --cached "WrongDirectory"  
git commit -m "This directory is Wrong directory"  
git push origin master  
```

For **Delete directory from git and local**

```git
git rm -r directory_name
git commit -m "some comment"
git push remote_repository_name branch_name
```

Example)

```git
git rm -r directory
git commit -m "It is wrong directory"
git push origin master
```