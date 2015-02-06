#include <iostream>
#include <string.h>
#include <time.h>

using namespace std;

int main () {

    srand (time(NULL));

    string input;
    int germanCount, trap, wait;

    trap = 0;
    wait = 0;

    germanCount = rand () % 4 + 1;

    cout << "Welcome to Duty Calls 3000: Project Bunker!\n\n\n\n";
    cout << "A squad of Germans are approaching your position.\n";

    do {
        cout << "Choose a command.\n> ";
        cin >> input;

            if (input == "analyze") {
                if (germanCount == 1) {
                    cout << ">There are 5 infantry men.\n";
                }
                else if (germanCount == 2) {
                    cout << "There are 10 infantry men.\nThere is also an officer.\n";
                }
                else if (germanCount == 3) {
                    cout << "There are 15 infantry men.\nThere is also two officers, a man with a flame thrower, and a couple of marksmen.\n";
                }
                else if (germanCount == 4) {
                    cout << "There are 20 infantry men.\nThere is also a tank, two men with flame throwers, and a group of marksmen.\n";
                }
            }
            else if (input == "help") {
                cout << "List of commands are analyze, attack, exit, help, trap, team, wait.\n";
                cout << "Attack options are ambush, assualt, snipe, and activate.\n";
                cout << "Hint: You can only ambush when the enemy is near.\n";
                cout << "Hint: You can only snipe or assualt when the enemy is still approaching.\n";
                cout << "Hint: You cannot activate what you have not set.\n";
            }
            else if (input == "team") {
                cout << "You have 7 men with you. Two rifleman, two submachine gunners, a heavy support gunner with explosives, a marksman, and a man on flamethrower.\n";
            }
            else if (input == "trap") {
                if (trap == 0){
                    cout << "You have a man lay out some explosive traps on the road near your position.\n";
                    cout << "You are 95% sure the Germans will walk right into it.\n";
                    trap = 1;
                }
                else if (trap == 1){
                    cout << "You already set up the trap. There is no need to set up more, lest you want to blow yourself up.\n";
                }
            }
            else if (input == "wait") {
                if (wait == 0) {
                    cout << "You let the Germans get a little closer. They are just about at range where you can attack at close range fighting.\n";
                    wait = 1;
                }
                else if (wait == 1){
                    cout << "The German squad got away. You decide it was probably a fight not worth fighting.\n";

                    wait = 0;

                    cout << "You now spot a new convoy of German soldiers going the same route as the last.\n";
                    cout << "They seem to be about the same size as the last.\n";
                }
            }
            else if (input == "attack") {
                cout << "Choose an attack command.\n";
                cin >> input;

                if (input == "ambush") {
                    if (wait == 1) {
                        cout << "Now that the Germans are close you spring up from your position and attack.\n";

                        if (germanCount == 1) {
                            cout << "You easily take out the German squad with no effort.\n";
                            cout << "Just as you take out the last German, the reinforcements show up.\n";
                            cout << "Fortunately, no one was injured.\n";
                            cout << "You are commended for your actions.\n";

                            return 0;
                        }
                        else if (germanCount == 2) {
                            cout << "You take out the German squad with a bit of effort.\n";
                            cout << "Just as you take out the last German, the reinforcements show up.\n";
                            cout << "A couple men were wounded by the attack. You send them to the medic.\n";
                            cout << "You are commended for your actions. The wounded will receive Purple Hearts and will be relieved of duty.\n";

                            return 0;
                        }
                        else if (germanCount == 3) {
                            cout << "You manage to take out the German squad with a lot of effort.\n";
                            cout << "Just as you take out the last German, the reinforcements show up.\n";
                            cout << "Most of your team were wounded in the atttack. They help you take them to evac.\n";
                            cout << "You are commended for your actions. Three men died later from their wounds. They will be missed.\n";
                            cout << "The rest wounded will receive Purple Hearts and will be relieved of duty.\n";

                            return 0;
                        }
                        else if (germanCount == 4) {
                            cout << "Your squad was decimated by the Germans.\n";
                            cout << "Just as a German was about to execute you, the reinforcements show up.\n";
                            cout << "Most of your team were killed in the atttack. They help take you to evac.\n";
                            cout << "You are commended for your actions. You are the only survivor.\n";
                            cout << "You are relieved of duty and sent home. You also no longer have a left leg.\n";

                            return 0;
                        }
                    }
                    else if (wait == 0) {
                        cout << "You spring up too early. You don't last another minute as the Germans surround you.";
                        return 0;
                    }
                }
                else if (input == "snipe") {
                    if (wait == 0) {
                        if (germanCount == 1) {
                            cout << "The enemy did not see it coming. They were easily picked off by the marksman.\n";
                            cout << "Just then, reinforcements arrive. You report that you cleared the path of enemy troops\n";
                            cout << "You return to your post, with fresh supplies, and continue to moniter the area.\n";

                            return 0;
                        }
                        else if (germanCount == 2) {
                            cout << "While the marksman could not get them all, the infantry handled the rest of the survivors.\n";
                            cout << "The shots bring both sides to battle, and your team is wounded during it.\n";
                            cout << "You and your team are awarded and commended for your bravery.\n However, you also get relieved from duty and get sent home.\n";

                            return 0;
                        }
                        else if (germanCount == 3) {
                            cout << "The marksman could not kill of them before they called in reinforcements.\n";
                            cout << "You are suddenly surrounded, and you and your team are captured and interrogated.\n";
                            cout << "Suddenly, the reinforcements arrive and manage to save you before they killed you.\n";
                            cout << "While the rest of your team did not make it, you are still alive. You are promptly relieved from duty.\n";

                            return 0;

                        }
                        else if (germanCount == 4) {
                            cout << "Your squad was decimated by the Germans.\n";
                            cout << "Just as a German was about to execute you, the reinforcements show up.\n";
                            cout << "Most of your team were killed in the atttack. They help take you to evac.\n";
                            cout << "You are commended for your actions. You are the only survivor.\n";
                            cout << "You are relieved of duty and sent home. You also no longer have a left leg.\n";
                        }

                    }
                    else if (wait == 1) {
                        cout << "The enemy is too close!";
                    }
                }
                else if (input == "activate") {
                    if (trap == 0) {
                        cout << "You have no traps set!\n";
                    }
                    else if (trap == 1){
                        if (wait == 0) {
                            cout << "You set off the traps, but the enemy was not close enough.\n";
                            cout << "Now that your postion was given away, the enemy rushes in and destroys you and your team.\n";

                            return 0;
                        }
                        else if (wait == 1) {
                            if (germanCount == 1) {
                                cout << "The small German group was utterly destroyed in the blast.\n";
                                cout << "The team takes note that One: German giblets make a huge mess, and Two: Use less explosives for small groups.\n";
                                cout << "After the reinforcements arrive, you are reprimanded for wasting explosives.";

                                return 0;
                            }
                            else if (germanCount == 2) {
                                cout << "The group of Germans were completely caught off guard by the mines.\n";
                                cout << "There were a couple survivors, who were dispatched immediately";
                                cout << "Right then, reinfocrments arrive. You and your team are commended for using unconventional tactics to your adavantage.\n";

                                return 0;
                            }
                            else if (germanCount == 3) {
                                cout << "The marksman spotted one of your men placing the traps.\n";
                                cout << "You only realize this now after the German force captured you and killed your team.\n";
                                cout << "Just as they were about to execute you, reinforcements arrive, saving you from death.\n";
                                cout << "You are then reassigned to a new group, who end up getting you killed a week later by pulling the same stunt your team did.\n";

                                return 0;
                            }
                            else if (germanCount == 4) {
                                cout << "The tank didn't even last a minute. You ended up taking a good bunch of them in the blast alone.\n";
                                cout << "Despite putting up a good fight, you barely defeated them.\n";
                                cout << "Just as the last German fell, reinforcements arrive.\n";
                                cout << "You and your team are commened for your effort as you are trasferred to the medic.\n";

                                return 0;
                            }
                        }
                    }
                }
                else {
                    cout << "You cannot " << input << ".\n";
                }
            }
            else if (input == "debugcheck"){
                cout << germanCount << ".\n";
            }
            else if (input == "exit") {
                return 0;
            }
            else {
                cout << "You cannot " << input << ".\n";
            }
    } while (input != "exit");
}

//cout << "You are confused as to how to execute such an action.\nYou decide to let it go and think of something else to do\n";