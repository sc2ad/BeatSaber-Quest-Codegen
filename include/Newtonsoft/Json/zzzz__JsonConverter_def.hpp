#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Newtonsoft::Json {
class JsonReader;
}
namespace System {
class Type;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonConverter;
}
// Type: Newtonsoft.Json::JsonConverter
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11772))
// CS Name: Newtonsoft.Json.JsonConverter
class CORDL_TYPE JsonConverter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~JsonConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonConverter", modifiers: " const&", def_value: None }]
constexpr JsonConverter(JsonConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonConverter", modifiers: "&&", def_value: None }]
constexpr JsonConverter(JsonConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonConverter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr JsonConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonConverter& operator=(JsonConverter&& o) noexcept = default;
  constexpr JsonConverter& operator=(JsonConverter const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_CanRead))  CanRead;

 bool __declspec(property(get=get_CanWrite))  CanWrite;


// Methods

/// @brief Method WriteJson addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteJson(Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method ReadJson addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ReadJson(Newtonsoft::Json::JsonReader reader, System::Type objectType, ::bs_hook::Il2CppWrapperType existingValue, Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method CanConvert addr 0x0 size 0xffffffffffffffff virtual true final false
 bool CanConvert(System::Type objectType) ;

/// @brief Method get_CanRead addr 0x24d34dc size 0x8 virtual true final false
 bool get_CanRead() ;

/// @brief Method get_CanWrite addr 0x24d34e4 size 0x8 virtual true final false
 bool get_CanWrite() ;

static Newtonsoft::Json::JsonConverter New_ctor() ;

/// @brief Method .ctor addr 0x24d34ec size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
NEED_NO_BOX(Newtonsoft::Json::JsonConverter);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::JsonConverter, "Newtonsoft.Json", "JsonConverter");
