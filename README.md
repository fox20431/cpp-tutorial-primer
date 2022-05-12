# C++ 教程样本

## Configure Dev Env

C++ 的编译器有：GCC、LLVM、MSVC等。请自助选择编译器，这里由于我用的 Macintosh OS，其中的 XCode 自带 LLVM 编译器。

### in Visual Studio Code

参考文章：https://code.visualstudio.com/docs/cpp/config-clang-mac

你可以在 VS Code 中使用这些样本，为了是你的开发更加便捷，你需要 VS Code 中的 C/C++ 插件，同时你需要为项目配置下列内容：

./.vscode/launch.json

```json
{
	"version": "0.2.0",
	"configurations": [
		{
			"name": "clang - Build and debug active file",
			"type": "cppdbg",
			"request": "launch",
			"program": "${fileDirname}/${fileBasenameNoExtension}",
			"args": [],
			"stopAtEntry": true,
			"cwd": "${workspaceFolder}",
			"environment": [],
			"externalConsole": false,
			"MIMode": "lldb",
			"preLaunchTask": "clang++ build active file"
		},
	]
}
```

./.vscode/tasks.json

```json
{
    "version": "2.0.0",
    "tasks": [
        {
            "type": "shell",
            "label": "clang++ build active file",
            "command": "/usr/bin/clang++",
            "args": [
                "-std=c++17",
                "-stdlib=libc++",
                "-g",
                "${file}",
                "-o",
                "${fileDirname}/${fileBasenameNoExtension}"
            ],
            "options": {
                "cwd": "${workspaceFolder}"
            },
            "problemMatcher": [
                "$gcc"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            }
        }
    ],
}
```

### in Jupyter Notebook

你也可以使用这个样本在 Jupyter Notebook，你没听错就是使用 Python 开发的 Jupyter Lab。

要想在 Jupyter Notebook 运行 C++，需要运行时 C++ 工具（cling）。

为了给 Jupyter Notebook 提供该工具，你需要安装 Anaconda/Miniconda 去安装 xeus-cling。

### in IDE

略。

## Content

代码首行会标注代码执行大纲。

习题的内容均来自《C++ Primer》，编号与书本保持一致，题目内容略有改编，部分没必要或者难以表达的练习不在此仓库展示。