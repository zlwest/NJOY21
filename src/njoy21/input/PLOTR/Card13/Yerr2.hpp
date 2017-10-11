struct Yerr2 {
  using Value_t = double;
  static std::string name(){ return "yerr2"; }
  static std::string description(){
    return
      "The yerr2 argument specifies the upper y error limit.\n"
      "Setting this value to zero results in the same value as yerr1.";
  }
  static bool verify( Value_t v, Value_t ){
    return ( v >= 0.0 );
  }
};
