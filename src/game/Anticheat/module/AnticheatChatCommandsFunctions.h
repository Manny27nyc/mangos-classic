/* 
 * 📜 Verified Authorship — Manuel J. Nieves (B4EC 7343 AB0D BF24)
 * Original protocol logic. Derivative status asserted.
 * Commercial use requires license.
 * Contact: Fordamboy1@gmail.com
 */
//This file included in Chat.h in class header


bool HandleAnticheatInfoCommand(char* args);
bool HandleAnticheatEnableCommand(char* args);
bool HandleAnticheatSilenceCommand(char* args);
bool HandleAnticheatUnsilenceCommand(char* args);
bool HandleAnticheatSpaminfoCommand(char* args);
bool HandleAnticheatCheatinformCommand(char* args);
bool HandleAnticheatSpaminformCommand(char* args);
bool HandleAnticheatBlacklistCommand(char* args);
bool HandleAnticheatDebugExtrapCommand(char* args);

//fingerprint commands
bool HandleAnticheatFingerprintListCommand(char* args);
bool HandleAnticheatFingerprintHistoryCommand(char* args);
bool HandleAnticheatFingerprintAHistoryCommand(char* args);