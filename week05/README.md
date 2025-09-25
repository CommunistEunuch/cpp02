# Animal 클래스 구조

## 클래스 다이어그램
```mermaid
classDiagram
    class Animal {
        <<abstract>>
        +makeSound()*
    }

    class Dog {
        +makeSound()
    }

    class Cat {
        +makeSound()
    }

    Animal <|-- Dog
    Animal <|-- Cat
