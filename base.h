class bit {
  bool val;

  bit(bool in) {
    val = in;
  }

  void set(bool in) {
    val = in;
  }

  void invert() {
    if(val) {
      val = false;
    } else {
      val = true;
    }
  }
};

class pinType {
  char type
  pinType(char in) {
    type = in;
  }
};
pinType INPUT = pinType(1);
pinType OUTPUT = pinType(2);
pinType INPUT_OUTPUT = pinType(3);

class pin {
  pinType type;
  bit val;

  pin(pinType typein) {
    type = typein;
  }

  void chipSet(bit in) {
    if(type != INPUT) {
      val = in;
    }
  }
  bit chipRead() {
    if(type != OUTPUT) {
      return val;
    }
    return NULL;
  }

  void set(bit in) {
    if(type != OUTPUT) {
      val = in();
    }
  }
  bit read() {
    if(type != INPUT) {
      return val;
    }
    return NULL;
  }
};
