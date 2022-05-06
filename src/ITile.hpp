
class ITile
{
public:
  ITile(int bonus);
  virtual ~ITile() = default;

  virtual int bonus() = 0;
  int _bonus;
};