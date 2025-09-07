#include <iostream>
#include <string>

int ft_isalpha(std::string str)
{
    int i = 0;
    while (str[i])
    {
        if (!(str[i] >= 'a' && str[i] <= 'z'))
            return 0;
        i++;
    }
    return 1;
}
int checkmark(int mark1, int mark2, int mark3)
{
    int b = 0;
    if ((mark1 >= mark2 && mark1 >= mark3))
        b = mark1;
    if (mark2 >= mark1 && mark2 >= mark3)
        b = mark2;
    if (mark3 >= mark2 && mark3 >= mark1)
        b = mark3;
    return b;
}


class Student
{
    private:
        std::string name;
        int mark;
    public:
        Student(std::string n, int m)
        {
            n = name;
            m = mark;
        }
        Student()
        {
            std::cout<< "〽️Enter your name: ";
            std::cin>>name;
            if (!ft_isalpha(name))
            {
                std::cout << "🔴Error name must be just lowercase alphabetique🔴\n";
                exit(1);
            }
            std::cout<< "〽️Enter your mark: ";
            std::cin>>mark;
            if (mark > 20)
            {
                std::cout << "🔴Error mark must be less than 20🔴"<<std::endl;
                exit(1);
            }
        }
        int get_mark()
        {
            return mark;
        }
        friend void sum(Student s1, Student s2, Student s3);
};


void sum(Student s1, Student s2, Student s3)
{
    std::cout << s1.mark + s2.mark + s3.mark << std::endl;
}

int main()
{
    Student ob1;
    Student ob2;
    Student ob3;
    int     mark1;
    int     mark2;
    int     mark3;

    sum(ob1, ob2, ob3);
    mark1 = ob1.get_mark();
    mark2 = ob2.get_mark();
    mark3 = ob3.get_mark();
    
    std::cout << "the best mark is : " << checkmark(mark1, mark2, mark3) <<" Congratulation🎓" <<std::endl;
                std::cout <<"your Welcom 👏"<<std::endl;
}