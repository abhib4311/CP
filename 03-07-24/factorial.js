function Const() {
    // console.log(z); // ReferenceError: Cannot access 'z' before initialization
    const z = 10;
    console.log(z); // 10
    // const z = 20; // SyntaxError: Identifier 'z' has already been declared
    // z = 20;      // TypeError: Assignment to constant variable.
    const obj = { key: 1 };
    obj.key = 2;   // Allowed: modifying the contents of the object
    console.log(obj.key); // 2
}
Const();
