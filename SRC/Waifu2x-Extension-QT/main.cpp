﻿/*
    Copyright (C) 2020  Aaron Feng

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Affero General Public License as published
    by the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

    My Github homepage: https://github.com/AaronFeng753
*/

#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);//高分辨率屏幕支持
    QApplication a(argc, argv);
    MainWindow *w = new MainWindow;
    w->show();
    return a.exec();
}

/*
Change log:
v2.31.14:
- 新特性:新增waifu2x-caffe引擎(实验性功能)(感谢 @CAFUCSteven 协助测试软件).
- 新特性:waifu2x-caffe引擎支持快速切换图像样式.
- 新特性:支持切换处理带有Alpha通道的图片时使用的引擎.
- 优化处理带有Alpha通道的图片的流程.
- 调整兼容性测试界面.
- 性能优化.
- 更改默认设置.
- 添加一些提示,修改一些文本,修正错字.
- 修复多个bug.
- 其他改进.
--------------------------------------------------------------------------
To do:
- 多gpu支持
- 升级更新时保存设置
- pdf格式支持
- 等caffe跟着稳定走了一段时间确定稳定后, 把自动调整引擎设置的策略改成先caffe gpu 后 vulkan
---------------------------------------------------------------------------
Integrated component(In releases):
- Anime4KCPP v1.8.1
- ffmpeg version 4.2.2
- gifsicle version 1.92
- waifu2x-ncnn-vulkan version 20200223
- SRMD-ncnn-Vulkan version 20200224
- Waifu2x-converter version: v5.3.3
- ImageMagick 7.0.10-13-Q16-x64
- SoX 14.4.2-win32
- waifu2x-caffe 1.2.0.2
---
Icons made by : Freepik (https://www.flaticon.com/authors/freepik) From Flaticon : https://www.flaticon.com/
*/
