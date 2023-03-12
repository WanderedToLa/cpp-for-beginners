# Data Type(자료형)

- 데이터의 종류를 자료형이라 하고   
  `정수형` , `부동 소수점` , `문자형` , `부울형`으로 나눌수 있다.   
  
- Data type의 byte보다 표현범위가 작은이유는 short type을 예로들면   
  2byte의 경우 16bit 이기때문에 2^16 = 65536 이지만 0을 포함하기때문에 0 ~ 65535 까지이고.   
  65535를 양수 음수로 나누어서 표현하기 때문에 표현하는 범위는 같지만 작아보이게 된다.   
  만약 앞의 부호를 빼고 표현할 경우 자료형 앞에`unsigned`추가

- ## 정수형
    - `short`: 2byte   
      `range`: -32768 ~ 32767
    - `int`: 4byte   
      `range`: -2147483648 ~ 2147483647
    - `long`: 4byte   
      `range`: -2147483648 ~ 2147483647
    - `long long`: 8byte   
      `range`: -2^63 ~ 2^63 - 1

- ## 문자형
    - `char`: 1byte   
      `range`: -128 ~ 127

- ## 부울형
    - `bool`: 1byte   
      `range`: true , false

- ## 부동소수점
    - `float`: 4byte   
      `range`: 1.2E-38 ~ 3.4E38
    - `double`: 8byte   
      `range`: 2.2E-308 ~ 1.8E308
    - `long double`: 8byte   
      `range`: 2.2E-308 ~ 1.8E308

## 문자열

- 문자열을 위한 string 타입을 제공하는데 header string 파일을 포함해야함.

  ```cpp
  #include<string>
  using namespace std;

  int main(void)
  {
    string s1 = "Hello World";
    return 0;
  }
  ```
  문자열과 숫자를 합치기 위해서는 to_string() 사용

  ```cpp
  string str1 = "apple";
  string str2 = str1 + " " + to_string(10) + "개";
  ```

  ## 기호 상수

  - 변수 선언 앞에 const를 붙이면 값이 변경되지 않음을 의미

  ```cpp
  const double TAX_RATE = 0.25;
  int income = 1000;
  income = income - TAX_RATE * income;
  ```