#pragma once
class File {
	const char* path = nullptr;
public:

	virtual void ShowFile(const char* path, int nums[], const int length) = 0;
};


struct FileWithAscii : public File {

	void ShowFile(const char* path, int nums[], const int length) override {
		FILE* file = fopen(path, "w");

		fwrite(nums, sizeof(nums[0]), length, file);
		fclose(file);


		fread(nums, sizeof(int), length, file);
		for (size_t i = 0; i < length; i++)
		{
			cout << "Real value: " << nums[i] << "\t\t\t";
			cout << "Ascii numerations: " << (char)nums[i] << endl;
		}
	}
};


struct FileWithBinary : public File {
	void ShowFile(const char* path, int nums[], const int length) override {
		FILE* file = fopen(path, "w");

		bool* step = (bool*)&nums;
		fwrite(nums, sizeof(nums[0]), length, file);
		fclose(file);

		fread(nums, sizeof(int), length, file);
		for (int i = 0; i < length; i++)
		{
			cout << *(step + i) << endl;
		}
	}
};
