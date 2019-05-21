    /*

     * C program to implement stack. Stack is a LIFO data structure.

     * Stack operations: PUSH(insert operation), POP(Delete operation)

     * and Display stack.

     */

    #include <stdio.h>

    #define MAXSIZE 5



    struct stack

    {

        int stk[MAXSIZE];

        int top;

    };

    typedef struct stack STACK;

    STACK s;



    void push(void);

    int  pop(void);

    void display(void);



    void main ()

    {

        int choice;

        int option = 1;

        s.top = -1;



        printf ("STACK OPERATION\n");

        while (option)

        {

            printf ("------------------------------------------\n");

            printf ("      1    -->    PUSH               \n");

            printf ("      2    -->    POP               \n");

            printf ("      3    -->    DISPLAY               \n");

            printf ("      4    -->    EXIT           \n");

            printf ("------------------------------------------\n");



            printf ("Enter your choice\n");

            scanf    ("%d", &choice);

            switch (choice)

            {

            case 1:

                push();

                break;

            case 2:

                pop();

                break;

            case 3:

                display();

                break;

            case 4:

                return;

            }

            fflush (stdin);

            printf ("Do you want to continue(Type 0 or 1)?\n");

            scanf    ("%d", &option);

        }

    }

    /*  Function to add an element to the stack */

    void push ()

    {

        int num;

        if (s.top == (MAXSIZE - 1))

        {

            printf ("Stack is Full\n");

            return;

        }

        else

        {

            printf ("Enter the element to be pushed\n");

            scanf ("%d", &num);

            s.top = s.top + 1;

            s.stk[s.top] = num;

        }

        return;

    }

    /*  Function to delete an element from the stack */

    int pop ()

    {

        int num;

        if (s.top == - 1)

        {

            printf ("Stack is Empty\n");

            return (s.top);

        }

        else

        {

            num = s.stk[s.top];

            printf ("poped element is = %dn", s.stk[s.top]);

            s.top = s.top - 1;

        }

        return(num);

    }

    /*  Function to display the status of the stack */

    void display ()

    {

        int i;

        if (s.top == -1)

        {

            printf ("Stack is empty\n");

            return;

        }

        else

        {

            printf ("\n The status of the stack is \n");

            for (i = s.top; i >= 0; i--)

            {

                printf ("%d\n", s.stk[i]);

            }

        }

        printf ("\n");


    }


    /*1. Ask the user for the operation like push, pop, display and exit. Use the variable top to represent the top of the stack.
2. According to the option entered, access its respective function using switch statement.
3. In the function push(), firstly check if the stack is full. If it is, then print the output as “Stack is Full”. Otherwise take the number to be inserted as input and store it in the variable num. Copy the number to the array stk[] and increment the variable top by 1.
4. In the function pop(), firstly check if the stack is empty. If it is, then print the output as “Stack is Empty”. Otherwise print the top most element of the array stk[] and decrement the variable top by 1.
5. In the function display(), using for loop print all the elements of the array.
6. Exit.*/

