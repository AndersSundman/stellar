class Rocket {
public:
  Rocket() : _has_launched(false) {}
  void launch();
  bool is_launched() const;

private:
  bool _has_launched;
};
