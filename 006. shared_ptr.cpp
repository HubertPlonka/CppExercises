#include <iostream>
#include <vector>
#include <memory>

using namespace std;

class Player {
    public:
    string name;
    int score;
    
    Player(string name, int score = 0) : name(name), score(score) {}
};

class Game {
    public:
    vector<shared_ptr<Player>> players;
    
    shared_ptr<Player> addPlayer(const string& name){
        shared_ptr<Player> player = make_shared<Player>(name);
        players.push_back(player);
        return player;
    }
    
    shared_ptr<Player> removePlayer(const string& name){
        for(auto it = players.begin(); it != players.end(); ++it){
            if ((*it)->name == name){
                shared_ptr<Player> removedPlayer = *it;
                players.erase(it);
                cout << "Removed: " << name << endl;
                return removedPlayer;
            }
        }
        cout << "Not found: " << name << endl;
        return nullptr;
    }
    
    shared_ptr<Player> getPlayer(const string& name){
        for(auto& player : players){
            if(player->name == name){
                cout << name << endl;
                return player;
            }
        }
        cout << "Not found" << endl;
            return nullptr;
    }
    
    shared_ptr<Player> changeScore(const string& name, const int& score){
        for(auto& player : players){
            if(player->name == name){
                player->score = score;
                cout << "New score of " << name << " is " << score << endl;
                return player;
            }
        }
        cout << "Not changed score" << endl;
            return nullptr;
    }
    
    private:
    vector<shared_ptr<Player>>players_;
};

int main(){
    Game game;
    
    game.addPlayer("John");
    game.addPlayer("Don");
    game.addPlayer("Alex");
    game.addPlayer("Ali");
    game.addPlayer("Mick");
    
    game.removePlayer("Alex");
    game.getPlayer("Don");
    game.changeScore("John", 7);
    game.getPlayer("John");
    return 0;
}

/*
Create a class Game representing a game where players participate. Each player has their name and score. Use shared_ptr to manage the memory of the players.

Requirements:

    Create a class Player with the following attributes:
        name (player's name)
        score (player's score, initially set to 0)
    Create a class Game that manages a collection of Player objects using shared_ptr.
    Implement the following methods in the Game class:
        addPlayer(name): creates a new Player object and returns a shared_ptr to it.
        removePlayer(name): removes the player with the given name.
        getPlayer(name): returns a shared_ptr to the player with the given name.
        changeScore(name, score): changes the score of the player with the given name.
    Write a main() function that demonstrates the usage of the Game class and its methods.

Constraints:

    Use shared_ptr to manage the memory of the Player objects.
    Do not use raw pointers or manual memory management.
    Ensure that the Game class is thread-safe (i.e., it can be used concurrently by multiple threads).
