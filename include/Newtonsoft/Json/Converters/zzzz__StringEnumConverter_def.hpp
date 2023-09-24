#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace System {
class Type;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class StringEnumConverter;
}
// Type: Newtonsoft.Json.Converters::StringEnumConverter
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11772))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11984))
// CS Name: Newtonsoft.Json.Converters.StringEnumConverter
class CORDL_TYPE StringEnumConverter : public Newtonsoft::Json::JsonConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~StringEnumConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "StringEnumConverter", modifiers: " const&", def_value: None }]
constexpr StringEnumConverter(StringEnumConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StringEnumConverter", modifiers: "&&", def_value: None }]
constexpr StringEnumConverter(StringEnumConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StringEnumConverter(void* ptr) noexcept : Newtonsoft::Json::JsonConverter(ptr) {
}


  constexpr StringEnumConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StringEnumConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StringEnumConverter& operator=(StringEnumConverter&& o) noexcept = default;
  constexpr StringEnumConverter& operator=(StringEnumConverter const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__CamelCaseText_k__BackingField, put=__set__CamelCaseText_k__BackingField))  _CamelCaseText_k__BackingField;

constexpr void __set__CamelCaseText_k__BackingField(bool value) ;

constexpr bool __get__CamelCaseText_k__BackingField() const;

 bool __declspec(property(get=__get__AllowIntegerValues_k__BackingField, put=__set__AllowIntegerValues_k__BackingField))  _AllowIntegerValues_k__BackingField;

constexpr void __set__AllowIntegerValues_k__BackingField(bool value) ;

constexpr bool __get__AllowIntegerValues_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_CamelCaseText, put=set_CamelCaseText))  CamelCaseText;

 bool __declspec(property(get=get_AllowIntegerValues, put=set_AllowIntegerValues))  AllowIntegerValues;


// Methods

/// @brief Method get_CamelCaseText addr 0x253eff8 size 0x8 virtual false final false
 bool get_CamelCaseText() ;

/// @brief Method set_CamelCaseText addr 0x253f000 size 0xc virtual false final false
 void set_CamelCaseText(bool value) ;

/// @brief Method get_AllowIntegerValues addr 0x253f00c size 0x8 virtual false final false
 bool get_AllowIntegerValues() ;

/// @brief Method set_AllowIntegerValues addr 0x253f014 size 0xc virtual false final false
 void set_AllowIntegerValues(bool value) ;

static Newtonsoft::Json::Converters::StringEnumConverter New_ctor() ;

/// @brief Method .ctor addr 0x253f020 size 0x20 virtual false final false
 void _ctor() ;

static Newtonsoft::Json::Converters::StringEnumConverter New_ctor(bool camelCaseText) ;

/// @brief Method .ctor addr 0x253f040 size 0x34 virtual false final false
 void _ctor(bool camelCaseText) ;

/// @brief Method WriteJson addr 0x253f074 size 0x1c8 virtual true final false
 void WriteJson(Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method ReadJson addr 0x253f23c size 0x444 virtual true final false
 ::bs_hook::Il2CppWrapperType ReadJson(Newtonsoft::Json::JsonReader reader, System::Type objectType, ::bs_hook::Il2CppWrapperType existingValue, Newtonsoft::Json::JsonSerializer serializer) ;

/// @brief Method CanConvert addr 0x253f680 size 0x78 virtual true final false
 bool CanConvert(System::Type objectType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(Newtonsoft::Json::Converters::StringEnumConverter);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Converters::StringEnumConverter, "Newtonsoft.Json.Converters", "StringEnumConverter");
