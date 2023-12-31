/*

   Copyright (c) 2006-2010, The Scripps Research Institute

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.

   Author: Dr. Oleg Trott <ot14@columbia.edu>, 
           The Olson Lab, 
           The Scripps Research Institute

*/

#ifndef VINA_UTILS_H
#define VINA_UTILS_H

#include <string>
#include <sys/types.h>
#include <sys/stat.h>
#include "file.h"

inline char separator(); // Get file path separator, such as "\" or "/", used to ensure that the code handles file paths correctly on different operating systems
path make_path(const std::string& str); // Create file path
void doing(const std::string& str, int verbosity, int level=0); // Output information about execution 
void done(int verbosity, int level=0); // Output execution completion information
std::string default_output(const std::string& input_name); // default_output = Generate default output file path
std::string default_output(const std::string& input_name, int i);
std::string default_output(const std::string& input_name, const std::string& directory_pathname);
std::string default_output(const std::string& input_name, const std::string& directory_pathname, int i);
bool is_directory(const std::string& directory_pathname);
std::string get_filename(const std::string& s);
std::string get_file_contents(const std::string& filename);

#endif