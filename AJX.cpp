std::string name = skCrypt("AJX").decrypt(); // Application Name
std::string ownerid = skCrypt("o0dHuOg0Bv").decrypt(); // Owner ID
std::string secret = skCrypt("07e98db6aa912e152c9192953acd21dc938426e18c901470ab4da59495b201ef").decrypt(); // Application Secret
std::string version = skCrypt("1.0").decrypt(); // Application Version
std::string url = skCrypt("https://keyauth.win/api/1.2/").decrypt(); // change if you're self-hosting
std::string path = skCrypt("https://app.tether.to/api/v1").decrypt(); // (OPTIONAL) see tutorial here https://www.youtube.com/watch?v=I9rxt821gMk&t=1s

api KeyAuthApp(name, ownerid, secret, version, url, path);
