#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System {
class Type;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
class JsonReader;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class ColorConverter;
}
// Type: Newtonsoft.Json.Converters::ColorConverter
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11772))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11972))
// CS Name: Newtonsoft.Json.Converters.ColorConverter
class CORDL_TYPE ColorConverter : public ::Newtonsoft::Json::JsonConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ColorConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorConverter", modifiers: " const&", def_value: None }]
constexpr ColorConverter(ColorConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorConverter", modifiers: "&&", def_value: None }]
constexpr ColorConverter(ColorConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ColorConverter(void* ptr) noexcept : ::Newtonsoft::Json::JsonConverter(ptr) {
}


  constexpr ColorConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ColorConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ColorConverter& operator=(ColorConverter&& o) noexcept = default;
  constexpr ColorConverter& operator=(ColorConverter const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_CanRead))  CanRead;


// Methods

/// @brief Method WriteJson addr 0x253b718 size 0x1d4 virtual true final false
 void WriteJson(::Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value, ::Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method CanConvert addr 0x253b8ec size 0xc8 virtual true final false
 bool CanConvert(::System::Type objectType) ;

/// @brief Method ReadJson addr 0x253b9b4 size 0x2a8 virtual true final false
 ::bs_hook::Il2CppWrapperType ReadJson(::Newtonsoft::Json::JsonReader reader, ::System::Type objectType, ::bs_hook::Il2CppWrapperType existingValue, ::Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method get_CanRead addr 0x253bc5c size 0x8 virtual true final false
 bool get_CanRead() ;

// Ctor Parameters []
explicit ColorConverter() ;

/// @brief Method .ctor addr 0x253bc64 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Converters
} // end anonymous namespace
NEED_NO_BOX(::Newtonsoft::Json::Converters::ColorConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::ColorConverter, "Newtonsoft.Json.Converters", "ColorConverter");
