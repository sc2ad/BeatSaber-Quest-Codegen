#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonConverterAttribute;
}
// Type: Newtonsoft.Json::JsonConverterAttribute
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11759))
// CS Name: Newtonsoft.Json.JsonConverterAttribute
class CORDL_TYPE JsonConverterAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~JsonConverterAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonConverterAttribute", modifiers: " const&", def_value: None }]
constexpr JsonConverterAttribute(JsonConverterAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonConverterAttribute", modifiers: "&&", def_value: None }]
constexpr JsonConverterAttribute(JsonConverterAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonConverterAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr JsonConverterAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonConverterAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonConverterAttribute& operator=(JsonConverterAttribute&& o) noexcept = default;
  constexpr JsonConverterAttribute& operator=(JsonConverterAttribute const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get__converterType, put=__set__converterType))  _converterType;

constexpr void __set__converterType(System::Type value) ;

constexpr System::Type __get__converterType() const;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__ConverterParameters_k__BackingField, put=__set__ConverterParameters_k__BackingField))  _ConverterParameters_k__BackingField;

constexpr void __set__ConverterParameters_k__BackingField(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get__ConverterParameters_k__BackingField() const;


// Properties

 System::Type __declspec(property(get=get_ConverterType))  ConverterType;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_ConverterParameters, put=set_ConverterParameters))  ConverterParameters;


// Methods

/// @brief Method get_ConverterType addr 0x24c832c size 0x8 virtual false final false
 System::Type get_ConverterType() ;

/// @brief Method get_ConverterParameters addr 0x24c8334 size 0x8 virtual false final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> get_ConverterParameters() ;

/// @brief Method set_ConverterParameters addr 0x24c833c size 0x8 virtual false final false
 void set_ConverterParameters(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

// Ctor Parameters [CppParam { name: "converterType", ty: "System::Type", modifiers: "", def_value: None }]
explicit JsonConverterAttribute(System::Type converterType) ;

/// @brief Method .ctor addr 0x24c8344 size 0x78 virtual false final false
 void _ctor(System::Type converterType) ;

// Ctor Parameters [CppParam { name: "converterType", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "converterParameters", ty: "::ArrayW<::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }]
explicit JsonConverterAttribute(System::Type converterType, ::ArrayW<::bs_hook::Il2CppWrapperType> converterParameters) ;

/// @brief Method .ctor addr 0x24c83bc size 0x24 virtual false final false
 void _ctor(System::Type converterType, ::ArrayW<::bs_hook::Il2CppWrapperType> converterParameters) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
NEED_NO_BOX(Newtonsoft::Json::JsonConverterAttribute);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::JsonConverterAttribute, "Newtonsoft.Json", "JsonConverterAttribute");
