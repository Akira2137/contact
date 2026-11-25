# contact

用 C 写的命令行通讯录程序，支持添加、显示、查找、删除联系人，数据保存在 contacts.dat。

## 功能

- 添加联系人
- 显示全部联系人
- 按名字查找
- 删除联系人
- 退出时保存到文件

## 编译

    make

## 运行

    ./bin/contact

## 文件说明

- main.c      菜单和主循环
- contact.c   各功能的实现
- contact.h   结构体定义和函数声明
- Makefile    编译脚本
