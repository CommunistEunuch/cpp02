# Animal Ŭ���� ����

## Ŭ���� ���̾�׷�
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
