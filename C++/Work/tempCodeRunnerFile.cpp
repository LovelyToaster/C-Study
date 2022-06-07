void output() //输出所有数据
{
    system("clear");
    cout << left;
    cout << "姓名    身份证号            检测地点    检测时间             检测单位          检测结果" << endl;
    for (int n = 0; n < test1.size(); n++)
    {
        cout << setw(8) << test1[n].test.name << "  " << setw(18) << test1[n].test.ID << "  " << setw(12) << test1[n].location << "  " << setw(19) << test1[n].time << "  " << setw(18) << test1[n].unit << "  " << test1[n].outcome << endl;
    }
    cout << "输出完毕，共" << test1.size() << "条数据" << endl;
    back();
}