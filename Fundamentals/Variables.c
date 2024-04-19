int main()
{

    printf("Changing Variables\n");
    int num = 20;
    printf("Before: %d\n", num);
    num = 30;
    printf("After: %d\n", num);

    int number = 15;

    int mynumber = 27;

    number = mynumber; // atribui o valor de mynumber para number, number now has the value 27
    printf("num: %d\n", number);


    int numero = 17;

    int numeroZ;

    numeroZ = numero; // atribui o valor de numero para numeroZ, numeroZ now has the value 17
    printf("numeroZ: %d\n", numeroZ);


    // Add variable together
    int x = 10;
    int y = 20;
    int z = x + y;
    printf("z: %d\n", z);


    //Multiple variables:
    int v = 5, t = 6, l = 50;
    printf("Sum of variables: %d", v + t + l);

    
    // Variable names:

    /*

    The general rules for naming variables are:

    Names can contain letters, digits and underscores
    Names must begin with a letter or an underscore (_)
    Names are case-sensitive (myVar and myvar are different variables)
    Names cannot contain whitespaces or special characters like !, #, %, etc.
    Reserved words (such as int) cannot be used as names

    */    
        
    // Calculate the Area of a Rectangle:

    
    return 0;
    
}
    