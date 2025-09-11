# Pokemon 상속 구조

```mermaid
classDiagram
    class Pokemon {
        +Pokemon()
        +~Pokemon()
        +attack() const
    }

    class Pikachu {
        +Pikachu()
        +~Pikachu()
        +attack() const
    }

    Pokemon <|-- Pikachu : inheritance (is-a)
