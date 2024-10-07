std::string name = skCrypt("AJX").decrypt(); // Application Name
std::string ownerid = skCrypt("o0dHuOg0Bv").decrypt(); // Owner ID
std::string secret = skCrypt("f8f4af5e0759edfb5c948e2e1b3efaa36e23c5543f16a94288fc1785d3e4e3b1").decrypt(); // Application Secret
std::string version = skCrypt("1.0").decrypt(); // Application Version
std::string url = skCrypt("https://keyauth.win/api/1.2/").decrypt(); // change if you're self-hosting
std::string path = skCrypt("https://app.tether.to/api/v1").decrypt(); // (OPTIONAL) see tutorial here https://www.youtube.com/watch?v=I9rxt821gMk&t=1s

api KeyAuthApp(name, ownerid, secret, version, url, path);
