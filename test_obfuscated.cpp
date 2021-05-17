#include "obfuscate.h"

#include <cstdio>

int main()
{
	{
		auto str = AY_OBFUSCATE("auto str");
		puts(str);
	}
	{
		char* str = AY_OBFUSCATE("char* str");
		puts(str);
	}
	{
		const char* str = "const char* str"; // test fail case temporarily
		puts(str);
	}
	{
		static const char* str = AY_OBFUSCATE("static const char* str");
		puts(str);
	}
	{
		auto str = AY_OBFUSCATE("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent sed ullamcorper lectus. Cras dapibus, turpis in dignissim consequat, justo massa vehicula sem, vestibulum condimentum dui risus vitae nunc. Mauris tincidunt condimentum nulla, non elementum lectus molestie id. Ut eget libero lorem. Proin vitae massa vehicula, hendrerit est a, tincidunt est. Sed aliquam velit quam, laoreet commodo massa aliquam et. Phasellus in nulla ac risus facilisis porttitor sit amet at enim. Vivamus ornare libero sit amet enim egestas semper vel non dolor.Ut vitae scelerisque elit, sed tincidunt tellus.Maecenas a accumsan justo, sit amet auctor nisl.Donec et quam mollis.");
		puts(str);
	}

	return 0;
}