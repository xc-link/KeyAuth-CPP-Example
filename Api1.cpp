std::string name = skCrypt("AJX").decrypt(); // Application Name
std::string ownerid = skCrypt("o0dHuOg0Bv").decrypt(); // Owner ID
std::string secret = skCrypt("64665fea2c69a019e85573695a89ba255b72d0157a8d824a8a62868051980eb9").decrypt(); // Application Secret
std::string version = skCrypt("1.0").decrypt(); // Application Version
std::string url = skCrypt("https://keyauth.win/api/1.2/").decrypt(); // change if you're self-hosting
std::string path = skCrypt("https://app.tether.to/api/v1").decrypt(); // (OPTIONAL) see tutorial here https://www.youtube.com/watch?v=I9rxt821gMk&t=1s

api KeyAuthApp(name, ownerid, secret, version, url, path);
