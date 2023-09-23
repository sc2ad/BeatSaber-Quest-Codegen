#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class Matrix4x4Converter;
}
// Type: Newtonsoft.Json.Converters::Matrix4x4Converter
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11772))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11979))
// CS Name: Newtonsoft.Json.Converters.Matrix4x4Converter
class CORDL_TYPE Matrix4x4Converter : public Newtonsoft::Json::JsonConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Matrix4x4Converter() = default;

// Ctor Parameters [CppParam { name: "", ty: "Matrix4x4Converter", modifiers: " const&", def_value: None }]
constexpr Matrix4x4Converter(Matrix4x4Converter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Matrix4x4Converter", modifiers: "&&", def_value: None }]
constexpr Matrix4x4Converter(Matrix4x4Converter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Matrix4x4Converter(void* ptr) noexcept : Newtonsoft::Json::JsonConverter(ptr) {
}


  constexpr Matrix4x4Converter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Matrix4x4Converter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Matrix4x4Converter& operator=(Matrix4x4Converter&& o) noexcept = default;
  constexpr Matrix4x4Converter& operator=(Matrix4x4Converter const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_CanRead))  CanRead;


// Methods

/// @brief Method WriteJson addr 0x253cdb8 size 0x580 virtual true final false
 void WriteJson(Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method ReadJson addr 0x253d338 size 0x380 virtual true final false
 ::bs_hook::Il2CppWrapperType ReadJson(Newtonsoft::Json::JsonReader reader, System::Type objectType, ::bs_hook::Il2CppWrapperType existingValue, Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method get_CanRead addr 0x253d6b8 size 0x8 virtual true final false
 bool get_CanRead() ;

/// @brief Method CanConvert addr 0x253d6c0 size 0x84 virtual true final false
 bool CanConvert(System::Type objectType) ;

// Ctor Parameters []
explicit Matrix4x4Converter() ;

/// @brief Method .ctor addr 0x253d744 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(Newtonsoft::Json::Converters::Matrix4x4Converter);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Converters::Matrix4x4Converter, "Newtonsoft.Json.Converters", "Matrix4x4Converter");
