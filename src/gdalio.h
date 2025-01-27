bool getGDALDataType(std::string datatype, GDALDataType &gdt);
std::string gdalinfo(std::string filename, std::vector<std::string> options, std::vector<std::string> openopts);
std::vector<std::vector<std::string>> sdinfo(std::string fname);
std::vector<std::string> get_metadata(std::string filename);
std::vector<std::string> get_metadata_sds(std::string filename);
std::vector<std::vector<std::string>> parse_metadata_sds(std::vector<std::string> meta);
void getGDALdriver(std::string &filename, std::string &driver);
bool getNAvalue(GDALDataType gdt, double & naval);
GDALDataset* openGDAL(std::string filename, unsigned OpenFlag, std::vector<std::string> allowed_drivers, std::vector<std::string> open_options);
char ** set_GDAL_options(std::string driver, double diskNeeded, bool writeRGB, std::vector<std::string> gdal_options);

