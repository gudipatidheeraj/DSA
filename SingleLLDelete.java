import java.util.*;

class Node {
    int data;
    Node next;
    public  Node(int data) {
        this.data = data;
        this.next = null;
    }
}

public class SingleLLDelete {
    Node head;
    public void Atbeginning(int data) {
        if(head == null) {
            System.out.print("It is already empty");
        }
    }

    public void DeleteAtEnd(int data) {
        if(head == null) {
            return;
        }
        if(head.next == null) {
            head = null;
            return;
        }
        Node temp = head;
        while(temp.next.next != null) {
            temp = temp.next;
        }
        temp.next = null;
    }

    public void Atposition(int data, int position) {
        if(position == 1) {
            Atbeginning(data);
            return;
        }
        Node newNode = new Node(data);
        Node temp = head;
        for(int i = 1; i < position - 1 && temp != null; i++) {
            temp = temp.next;
        }
        if(head == null) {
            System.out.println("It is empty");
            return;
        }

        newNode.next = temp.next;
        temp.next = newNode;
    }
    public void display() {
        Node temp = head;
        while(temp != null) {
            System.out.print(temp.data + "->");
            temp = temp.next;
        }
        System.out.print("null");
    }
    public static void main(String[] args) {
        SingleLLDelete list = new SingleLLDelete();
        list.Atbeginning(10);
        list.AtEnd(30);
        list.Atposition(20,2);

        list.display();
    }
}