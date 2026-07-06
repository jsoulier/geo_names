# GeoNames

### Usage

```c++
#include <cstdio>

#include "geo_names.hpp"

int main(int argc, char** argv)
{
    std::vector<GeoNames> results;
    GetGeoNames(results, 8, "ott");
    for (const GeoNames& result : results)
    {
        std::printf("Found \"%s\" at %f,%f\n", result.Location.c_str(), result.Latitude, result.Longitude);
    }
    return 0;
}
```

```shell
Found "Ottawa, Ottawa, Ontario, Canada" at 45.411171,-75.698120 
Found "Nepean, Ottawa, Ontario, Canada" at 45.336189,-75.722504 
Found "Gloucester, Ottawa, Ontario, Canada" at 45.349998,-75.633331 
Found "Orleans, Ottawa, Ontario, Canada" at 45.457321,-75.504333 
Found "Ottawa South, Ottawa, Ontario, Canada" at 45.392101,-75.687248 
Found "Ottakring, Wien Stadt, State of Vienna, Austria" at 48.216671,16.299999 
Found "Kanata, Ottawa, Ontario, Canada" at 45.300098,-75.916061 
Found "Ottapalam, Palakkad district, Kerala, India" at 10.773500,76.377579 
```

To use it with ImGui, you can provide your own widget or use the provided one.

```c++
#include "geo_names_imgui.hpp"

std::optional<GeoNames> result = GetImGuiGeoNames();
if (result.has_value())
{
    // ...
}
```

![](image.png)