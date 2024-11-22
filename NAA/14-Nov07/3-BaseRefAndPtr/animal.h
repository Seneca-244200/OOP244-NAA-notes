#ifndef SENECA_ANIMAL_H
#define SENECA_ANIMAL_H
namespace seneca {
   class Animal {
      char m_name[41];
      void name(const char* value);
   protected:
      const char* name()const;
   public:
      Animal(const char* name = "Nameless");
       void act();
        void move();
       void sound();
       ~Animal();
   };
}
#endif