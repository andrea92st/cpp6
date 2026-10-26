class Serializer
{
public:
    static uintptr_t    serialize(Data* ptr);
    static Data*        deserialize(uintptr_t raw);

private:
    Serializer(void);
    Serializer(Serializer const & src);
    ~Serializer();
    Serializer & operator=(Serializer const & rhs);
};