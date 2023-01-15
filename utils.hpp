#pragma once
#include <filesystem> 
#include <string> 
#include <fstream>
#include "skStr.h"
#include "json.hpp"
using json = nlohmann::json;

std::string ReadFromJson(std::string path, std::string section) 
{
	if (!std::filesystem::exists(path))
		return skCrypt("File Not Found").decrypt();
	std::ifstream file(path);
	json data = json::parse(file);
	std::string content = data[section];
	return content;
}

bool CheckIfJsonKeyExists(std::string path, std::string section) 
{
	if (!std::filesystem::exists(path))
		return skCrypt("File Not Found").decrypt();
	std::ifstream file(path);
	json data = json::parse(file);
	if (data.contains("username"))
	{
		return true;
	}
	return false;
}

bool WriteToJson(std::string path, std::string name, std::string value, bool userpass, std::string name2, std::string value2) 
{
	json file;
	if (!userpass) 
	{
		file[name] = value;
	}
	else
	{
		file[name] = value;
		file[name2] = value2;
	}

	std::ofstream jsonfile(path, std::ios::out);
	jsonfile << file;
	jsonfile.close();
	if (!std::filesystem::exists(path))
		return false;

	return true;
}
