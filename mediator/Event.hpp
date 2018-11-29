#ifndef EVENT_HPP
#define EVENT_HPP
class Event {
public:
    Event() = default;
    Event(int id): id(id) {}
    int getId() const { return id; }
private:
    int id;
};
#endif /* EVENT_HPP */
