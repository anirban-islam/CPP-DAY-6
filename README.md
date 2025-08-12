
## Authors

- [Anirban Islam Emon ](https://dev-anirban.me/)

 
## 🔗 Links

[![portfolio](https://img.shields.io/badge/my_portfolio-000?style=for-the-badge&logo=ko-fi&logoColor=white)](https://dev-anirban.me/)

[![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/anirban-islam/)

[![twitter](https://img.shields.io/badge/twitter-1DA1F2?style=for-the-badge&logo=twitter&logoColor=white)](https://x.com/Anirban_Islam_)



# Day six CPP 🎈

# Function-OverLoading-In-C++
    #include<iostream>
    using namespace std;

    int plusFunc(int x, int y) {
        return x + y;
    }

    double plusFunc(double x, double y) {
        return x + y;
    }

    int main(){
        //Function overloading allows multiple functions to have the same name,
        //as long as their parameters are different in type or number

        //Instead of defining two functions that should do the same thing, it is better to overload one.

        //In the example below, we overload the plusFunc function to work for both int and double:

        int myNum1 = plusFunc(8, 5);
        double myNum2 = plusFunc(4.3, 6.26);

        cout << "Int: " << myNum1 << "\n";
        cout << "Double: " << myNum2;
        return 0;
    }


# Recursion-Function-C++

    #include<iostream>
    using namespace std;

    //create a function to adding two numbers
    int sum(int a){
        //logic
        if(a > 0){
            //sum function call here it's called recursion
            return a + sum(a - 1); //range (9,8,7,6,5,4,3,2,1) for 10
        }
        else return 0;
    }

    int main(){
        //Recursion is the technique of making a function call itself. function inside function
        //Adding two numbers together is easy to do, but adding a range of numbers is more complicated.

        int result = sum(10);
        cout << result;

        return 0;
    }






