//
// Created by Administrator on 2019/9/11.
//

void case30() {
    int int_value = 1024;
    int &refValue = int_value;//refValue指向引用，是int_Value的另一个别名


//    int& refValue1; 错误，必须被初始化
//    int &refValue1 = 10; 错误，引用只能指向对象不能指向字面值或者计算结果
    const int &refValue1 = 10;//引用只能指向常量
// 引用必须初始化，所以使用引用之前不需要保证其保存对象是否有值，所以比指针的效率更高

/*
 *  两者的关系：
 *      1、引用对指针进行了封装，底层仍然是指针
 *      2、获取引用地址的时候，编译器会进行内部转换
 *
 * */

    int num = 109;
    int &rel_num = num;
    rel_num = 110;
    cout << num << endl;//110
    cout << rel_num << endl;//110
    cout << &rel_num << endl;//0x61fef8
    /*
     * 以上代码等于：
     * int num = 109;
     * int* ptr_num= &num;
     * *ptr_num = 110;
     * 个人感觉，rel_num = *ptr_num.就是指针对应的值
     * */


}

void case31() {
    double socre[] = {13.2, 54.3};//本质还是数组类型，sizeof还是double内存的大小
    double *ptr_score = socre;

    // *ptr_score是取到首元素的值，ptr_score存储的是socre首元素的地址
    cout << *ptr_score << "\t" << ptr_score << endl;

}


void case32() {
    double d = 3.14;
    double *ptr_double = &d;

    cout << ptr_double << endl;
    cout << *ptr_double << endl;


    double &ref_double = d;
    cout << ref_double << endl;
    cout << &ref_double << endl;

}

void case33() {
    int score[] = {33, 24, 56, 78};//++score不被允许，score是数组名
    int *ptr_score;
    ptr_score = score;//ptr_score是指针，score是地址
    cout << ptr_score << '\t' << *ptr_score << endl;
    cout << "------------------------------" << endl;
    ptr_score = &score[1];//取出score第一个位置的指针地址
    cout << ptr_score << '\t' << *ptr_score << endl;
    cout << "------------------------------" << endl;
    ptr_score += 1;//移动一个位置
    cout << ptr_score << '\t' << *ptr_score << endl;
    cout << "------------------------------" << endl;
    ptr_score += 100;//移动一百个位置，不存在数据越界
    cout << ptr_score << '\t' << *ptr_score << endl;
}


void case34() {
    int num = 27;
    int num1 = 59;
    cout << num << endl;
    cout << &num << endl;//地址

    int &refNum = num;
    cout << refNum << endl;
    cout << &refNum << endl;//地址

    // 给refNum这个引用重新指向一个值
    refNum = num1;
    cout << refNum << endl;
    cout << &refNum << endl;
}

void case35() {
    int num = 72;
    int *ptrNum = &num;
    cout << ptrNum << endl;//地址

    int num1 = 28;
    ptrNum = &num1;//这样相当于让ptrNum重新指向了一个地址
    cout << ptrNum << endl;//地址
    cout << *ptrNum << endl;//值

    int num2 = 14;
    *ptrNum = num2;//这样相当于让ptrNum指向同一个地址，但是把地址上的内容磨重新覆盖了
    cout << ptrNum << endl;//地址
    cout << *ptrNum << endl;//值
}

void case36() {
    char *ptr;
    cout << ptr << endl;
    cout << *ptr << endl;
}