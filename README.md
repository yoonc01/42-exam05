# C++ Modules

이 저장소는 `cpp_module00`, `cpp_module01`, `cpp_module02`의 구현을 포함하고 있습니다. 각 모듈은 C++의 객체 지향 프로그래밍 및 메모리 관리 개념을 연습하기 위한 과제들로 구성되어 있습니다.

## 📌 cpp_module00

### 개요
`Warlock` 클래스를 구현하여 기본적인 클래스 설계 및 캡슐화를 연습합니다.

### 요구사항
- `Warlock` 클래스는 Coplien의 형태를 따라야 합니다.
- `name`과 `title`이라는 두 개의 `private` 멤버 변수를 가집니다.
- 복사 생성자 및 복사 할당 연산자를 삭제하여 객체 복사를 방지합니다.
- `introduce()` 메서드를 구현하여 Warlock이 자신을 소개할 수 있도록 합니다.

### 사용 예시
```cpp
int main() {
    Warlock const richard("Richard", "Mistress of Magma");
    richard.introduce();
    std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;
    return 0;
}
```

## 📌 cpp_module01

### 개요
추상 클래스 `ASpell`과 `ATarget`을 만들고 이를 상속하는 `Fwoosh` 및 `Dummy` 클래스를 구현합니다.

### 요구사항
- `ASpell`은 `name`과 `effects`를 가지고 있으며, `clone()` 메서드를 갖습니다.
- `ATarget`은 `type`을 가지고 있으며, `getHitBySpell()` 메서드를 통해 주문 효과를 출력합니다.
- `Warlock` 클래스는 주문을 학습(`learnSpell`)하고 사용(`launchSpell`)할 수 있어야 합니다.

### 사용 예시
```cpp
int main() {
    Warlock richard("Richard", "the Titled");
    Dummy bob;
    Fwoosh* fwoosh = new Fwoosh();

    richard.learnSpell(fwoosh);
    richard.introduce();
    richard.launchSpell("Fwoosh", bob);
    richard.forgetSpell("Fwoosh");
    richard.launchSpell("Fwoosh", bob);
}
```

## 📌 cpp_module02

### 개요
`SpellBook`과 `TargetGenerator`를 추가하여 마법 주문과 대상 생성을 관리합니다.

### 요구사항
- `Fireball`, `Polymorph`, `BrickWall` 클래스를 `Fwoosh` 및 `Dummy`와 동일한 방식으로 구현합니다.
- `SpellBook` 클래스를 사용하여 주문을 저장, 삭제 및 생성할 수 있도록 합니다.
- `TargetGenerator` 클래스를 사용하여 새로운 대상을 학습하고 생성할 수 있도록 합니다.

### 사용 예시
```cpp
int main() {
    Warlock richard("Richard", "foo");
    richard.setTitle("Hello, I'm Richard the Warlock!");
    
    BrickWall model1;
    Polymorph* polymorph = new Polymorph();
    TargetGenerator tarGen;

    tarGen.learnTargetType(&model1);
    richard.learnSpell(polymorph);
    Fireball* fireball = new Fireball();
    richard.learnSpell(fireball);

    ATarget* wall = tarGen.createTarget("Inconspicuous Red-brick Wall");
    richard.introduce();
    richard.launchSpell("Polymorph", *wall);
    richard.launchSpell("Fireball", *wall);
}
```

## 🛠️ 컴파일 및 실행 방법

```sh
g++ -Wall -Wextra -Werror -std=c++98 *.cpp -o warlock
./warlock
```

또는

```sh
c++ -Wall -Wextra -Werror -std=c++98 *.cpp -o warlock
./warlock
```

## 📚 참고 자료
- C++ Coplien Form
- 추상 클래스 및 다형성
- STL 컨테이너 활용

