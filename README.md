市面上大部分平台的青少年模式均为4-6位纯数字密码且无错误次数限制,则均可使用暴力破解.
关于B站青少年模式密码破解,本篇文章围绕爆破进行讲解.

主要思路:使用C/C++编写控制键盘输入指定数字的脚本(B站的青少年模式 密码为4位),连接到安卓设备. 安卓设备可分为模拟器和投屏两种,推荐使用模拟器.
主函数:Sleep()和keybd_event()
可能有人有疑问,为何使用Sleep(),难道速度不越快越好吗?
考虑到本次在前端爆破,因B站本身问题有概率出现没有接收到输入的错误,一旦出现错误未能立即发现只得从新来过.为减少错误概率本次使用的速度为60.

注意事项
1.为了界面的” 美观”去除了密码” 0000”如有需要,自行输入.
2.name.exe文件 单机空格键开始/停止运行
