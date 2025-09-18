classDiagram
    class Pokemon {
        +Pokemon()
        +~Pokemon()*
        +attack() void*
    }

    class Pikachu {
        +Pikachu()
        +~Pikachu()
        +attack() void
    }

    class Squirtle {
        +Squirtle()
        +~Squirtle()
        +attack() void
    }

    Pokemon <|-- Pikachu : inheritance
    Pokemon <|-- Squirtle : inheritance
