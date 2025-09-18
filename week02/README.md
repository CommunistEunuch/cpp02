# 2025학년도 2학기 C++ 프로그래밍 수업 리포지토리 관리

```mermaid
classDiagram
    class Company {
      - string name
      - string telephone
      + Company(string name, string telephone)
      + void print() const
    }

    class Product {
      - string name
      - double unitPrice
      + Product(string name, double unitPrice)
      + ~Product()
      + double getPrice() const
    }

    class Invoice {
      - int invoiceNumber
      - double invoiceTotal
      - Company company
      + Invoice(int invoiceNumber, string name, string phone)
      + ~Invoice()
      + void add(int quantity, Product product)
      + void print() const
    }

    %% 관계
    Invoice *-- Company : composition (has-a)
    Invoice ..> Product : <<use>> (use-a)