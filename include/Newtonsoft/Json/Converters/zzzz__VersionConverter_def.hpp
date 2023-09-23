#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class VersionConverter;
}
// Type: Newtonsoft.Json.Converters::VersionConverter
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11772))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11987))
// CS Name: Newtonsoft.Json.Converters.VersionConverter
class CORDL_TYPE VersionConverter : public Newtonsoft::Json::JsonConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~VersionConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "VersionConverter", modifiers: " const&", def_value: None }]
constexpr VersionConverter(VersionConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VersionConverter", modifiers: "&&", def_value: None }]
constexpr VersionConverter(VersionConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VersionConverter(void* ptr) noexcept : Newtonsoft::Json::JsonConverter(ptr) {
}


  constexpr VersionConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VersionConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VersionConverter& operator=(VersionConverter&& o) noexcept = default;
  constexpr VersionConverter& operator=(VersionConverter const& o) noexcept = default;
                


// Methods

/// @brief Method WriteJson addr 0x254057c size 0xec virtual true final false
 void WriteJson(Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method ReadJson addr 0x2540668 size 0x28c virtual true final false
 ::bs_hook::Il2CppWrapperType ReadJson(Newtonsoft::Json::JsonReader reader, System::Type objectType, ::bs_hook::Il2CppWrapperType existingValue, Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method CanConvert addr 0x25408f4 size 0x84 virtual true final false
 bool CanConvert(System::Type objectType) ;

// Ctor Parameters []
explicit VersionConverter() ;

/// @brief Method .ctor addr 0x2540978 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(Newtonsoft::Json::Converters::VersionConverter);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Converters::VersionConverter, "Newtonsoft.Json.Converters", "VersionConverter");
