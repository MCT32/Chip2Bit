class bit {
  bool val;

  void set(bool in) {
    val = in;
  }
  void set(bit in) {
    val = in.val;
  }

  void invert() {
    if(val) {
      val = false;
    } else {
      val = true;
    }
  }
}

class byte {
  bit[] bits;
}
