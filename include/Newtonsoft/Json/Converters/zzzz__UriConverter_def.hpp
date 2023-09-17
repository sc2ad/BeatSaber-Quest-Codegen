#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
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
class UriConverter;
}
// Type: Newtonsoft.Json.Converters::UriConverter
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11772))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11985))
// CS Name: Newtonsoft.Json.Converters.UriConverter
class CORDL_TYPE UriConverter : public ::Newtonsoft::Json::JsonConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UriConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "UriConverter", modifiers: " const&", def_value: None }]
constexpr UriConverter(UriConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UriConverter", modifiers: "&&", def_value: None }]
constexpr UriConverter(UriConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UriConverter(void* ptr) noexcept : ::Newtonsoft::Json::JsonConverter(ptr) {
}


  constexpr UriConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UriConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UriConverter& operator=(UriConverter&& o) noexcept = default;
  constexpr UriConverter& operator=(UriConverter const& o) noexcept = default;
                


// Methods

/// @brief Method CanConvert addr 0x253f6f8 size 0x84 virtual true final false
 bool CanConvert(::System::Type objectType) ;

/// @brief Method ReadJson addr 0x253f77c size 0x128 virtual true final false
 ::bs_hook::Il2CppWrapperType ReadJson(::Newtonsoft::Json::JsonReader reader, ::System::Type objectType, ::bs_hook::Il2CppWrapperType existingValue, ::Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method WriteJson addr 0x253f8a4 size 0x134 virtual true final false
 void WriteJson(::Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value, ::Newtonsoft::Json::JsonSerializer serializer) ;

// Ctor Parameters []
explicit UriConverter() ;

/// @brief Method .ctor addr 0x253f9d8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Converters
} // end anonymous namespace
NEED_NO_BOX(::Newtonsoft::Json::Converters::UriConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::UriConverter, "Newtonsoft.Json.Converters", "UriConverter");
