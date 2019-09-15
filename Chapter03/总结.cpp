//
// Created by 沙韬伟 on 2019-09-15.
//

/*
 * 1、指针就是一个变量，值是另一个变量（对象）的内存地址，存的是内存地址
 * 2、指针的申明是由基本类型+`*`+变量名组成
 * 3、为指针赋值，赋值右侧必须是一个地址
 *      如果是普通变量要用&取地址
 *      如果是一个指针变量或者一个数组（首元素的地址），直接赋值即可
 *      int num=4;
 *      int* p_num = &num; p_num是一个指针，&num是取出num的地址，用p_num保存num地址
 *      *p_num = 112;*p_num是一个值，值是num，所以，相当于把num这个值给覆盖了；
 * 4、*用于返回指针指向的内存地址存储的值
 * 5、如果p是指针，p++,p--实际上是一个存储地址的移动，移动的范围是和数据类型有关
 *
 *
 * 1、定义一个num的引用必须由初始值，int num=92;int& num=num;;
 * 2、定义用引用定义常量的话，必须要const，const int& num=98;
 *
 * */