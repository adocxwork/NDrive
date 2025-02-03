class Two extends One {
}

// error: constructor One in class One cannot be applied to given types;
// When you create an object of Two, the default constructor of Two is implicitly invoked.
// The default constructor of Two tries to call the default constructor of One using super(), but One does not have a default constructor.