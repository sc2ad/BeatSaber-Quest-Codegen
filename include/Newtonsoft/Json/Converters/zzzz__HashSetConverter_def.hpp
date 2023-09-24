#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class HashSetConverter;
}
// Type: Newtonsoft.Json.Converters::HashSetConverter
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11772))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11976))
// CS Name: Newtonsoft.Json.Converters.HashSetConverter
class CORDL_TYPE HashSetConverter : public Newtonsoft::Json::JsonConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HashSetConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "HashSetConverter", modifiers: " const&", def_value: None }]
constexpr HashSetConverter(HashSetConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HashSetConverter", modifiers: "&&", def_value: None }]
constexpr HashSetConverter(HashSetConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HashSetConverter(void* ptr) noexcept : Newtonsoft::Json::JsonConverter(ptr) {
}


  constexpr HashSetConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HashSetConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HashSetConverter& operator=(HashSetConverter&& o) noexcept = default;
  constexpr HashSetConverter& operator=(HashSetConverter const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_CanWrite))  CanWrite;


// Methods

/// @brief Method WriteJson addr 0x253bdb4 size 0x4 virtual true final false
 void WriteJson(Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method ReadJson addr 0x253bdb8 size 0x1f4 virtual true final false
 ::bs_hook::Il2CppWrapperType ReadJson(Newtonsoft::Json::JsonReader reader, System::Type objectType, ::bs_hook::Il2CppWrapperType existingValue, Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method CanConvert addr 0x253bfac size 0xb8 virtual true final false
 bool CanConvert(System::Type objectType) ;

/// @brief Method get_CanWrite addr 0x253c064 size 0x8 virtual true final false
 bool get_CanWrite() ;

static Newtonsoft::Json::Converters::HashSetConverter New_ctor() ;

/// @brief Method .ctor addr 0x253c06c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(Newtonsoft::Json::Converters::HashSetConverter);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Converters::HashSetConverter, "Newtonsoft.Json.Converters", "HashSetConverter");
