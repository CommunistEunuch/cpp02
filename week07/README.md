## 클래스 다이어그램 — 다중상속(virtual) 예제

```mermaid
classDiagram
    class Person {
        +string name
    }

    class UndergraduateStudent {
        +double gpa
        +warn() void
    }

    class DormitoryStudent {
        +int roomNumber
        +warn() void
    }

    class UndergraduateDormitoryStudent

    %% virtual 기반 클래스(죽음의 다이아몬드 해결)
    Person <|-- UndergraduateStudent : virtual
    Person <|-- DormitoryStudent : virtual

    %% 다중 상속
    UndergraduateStudent <|-- UndergraduateDormitoryStudent
    DormitoryStudent <|-- UndergraduateDormitoryStudent

    note for UndergraduateDormitoryStudent "Virtual inheritance → Person 서브오브젝트 단일화"
