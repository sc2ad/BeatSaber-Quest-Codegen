#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Converters/zzzz__DateTimeConverterBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
class Type;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class JavaScriptDateTimeConverter;
}
// Type: Newtonsoft.Json.Converters::JavaScriptDateTimeConverter
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11974))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11989))
// CS Name: Newtonsoft.Json.Converters.JavaScriptDateTimeConverter
class CORDL_TYPE JavaScriptDateTimeConverter : public Newtonsoft::Json::Converters::DateTimeConverterBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~JavaScriptDateTimeConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "JavaScriptDateTimeConverter", modifiers: " const&", def_value: None }]
constexpr JavaScriptDateTimeConverter(JavaScriptDateTimeConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JavaScriptDateTimeConverter", modifiers: "&&", def_value: None }]
constexpr JavaScriptDateTimeConverter(JavaScriptDateTimeConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JavaScriptDateTimeConverter(void* ptr) noexcept : Newtonsoft::Json::Converters::DateTimeConverterBase(ptr) {
}


  constexpr JavaScriptDateTimeConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JavaScriptDateTimeConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JavaScriptDateTimeConverter& operator=(JavaScriptDateTimeConverter&& o) noexcept = default;
  constexpr JavaScriptDateTimeConverter& operator=(JavaScriptDateTimeConverter const& o) noexcept = default;
                


// Methods

/// @brief Method WriteJson addr 0x2541164 size 0x1bc virtual true final false
 void WriteJson(Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method ReadJson addr 0x2541320 size 0x46c virtual true final false
 ::bs_hook::Il2CppWrapperType ReadJson(Newtonsoft::Json::JsonReader reader, System::Type objectType, ::bs_hook::Il2CppWrapperType existingValue, Newtonsoft::Json::JsonSerializer serializer) ;

// Ctor Parameters []
explicit JavaScriptDateTimeConverter() ;

/// @brief Method .ctor addr 0x254178c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(Newtonsoft::Json::Converters::JavaScriptDateTimeConverter);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Converters::JavaScriptDateTimeConverter, "Newtonsoft.Json.Converters", "JavaScriptDateTimeConverter");
