
class ITile
{
public:
  ITile() = default; 
  virtual ~ITile() = default;

  virtual int bonus() = 0;
};