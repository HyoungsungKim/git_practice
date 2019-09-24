# git_practice

Practice how to use git

- [git_practice](#gitpractice)
  - [First Of All - Initial setting](#first-of-all---initial-setting)
  - [Make a directory as remote repository - git initialization](#make-a-directory-as-remote-repository---git-initialization)
  - [Git clone](#git-clone)
  - [Connect with remote repository](#connect-with-remote-repository)
  - [When I want to add others source code in my project](#when-i-want-to-add-others-source-code-in-my-project)
  - [Commit](#commit)
  - [Upload file to remote repository](#upload-file-to-remote-repository)
  - [Change the name of repository or file](#change-the-name-of-repository-or-file)
  - [Delete directory in remote repository](#delete-directory-in-remote-repository)
  - [Update forked repository](#update-forked-repository)

----

## First Of All - Initial setting

First of all, user have to do initial setting  

```git
git config --global user.name "User name"
git config --global user.email User_Email
```

Example)

```git
git config --global user.name "HS Kim"
git config --global user.email rktkek456@gmail.com
```

## Make a directory as remote repository - git initialization

```git
git init  
```

If it is worked successfully, ".git" folder will be generated in directory.

## Git Clone

```
git clone repository_name remote_url.git  
```

example)

```
git clone https://github.com/HyoungsungKim/vscode-git-practice.git
```

Clone specific branch

```
git clone -b branch_name --single-branch branch_url.git
```

example)

```
git clone -b some_branch --single-branch https://github.com/HyoungsungKim/vscode-git-practice.git
```



## Connect with remote repository

```git
git remote add remote_repository_name remote_url.git  
```

Example) "origin" is default of remote_repository_name

```git
git remote add origin https://github.com/HyoungsungKim/vscode-git-practice.git
```

## When I want to add others source code in my project

```
git submodule add sourcecode_repository_url.git
```

Example)

```
git submodule add https://github.com/ethereum/go-ethereum.git
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

## Change the name of repository or file

```git 
    git mv oldName newName
```

Example)

```git
    git mv hiWorld.cpp helloWorld.cpp
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

## Update forked repository

```git
// Check remote 
git remote -v
// If repo is not remoted,
git remote add upstream repository.git

// Download the latest version branches
git fetch upstream

// Option 1
git merge upstream/some_branch

// Option 2 It needs force push
git checkout upstream/some_branch
git checkout -b My_Own_branch
```

