#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace Newtonsoft::Json {
class JsonExtensionDataAttribute;
}
// Type: Newtonsoft.Json::JsonExtensionDataAttribute
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11747))
// CS Name: Newtonsoft.Json.JsonExtensionDataAttribute
class CORDL_TYPE JsonExtensionDataAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~JsonExtensionDataAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonExtensionDataAttribute", modifiers: " const&", def_value: None }]
constexpr JsonExtensionDataAttribute(JsonExtensionDataAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonExtensionDataAttribute", modifiers: "&&", def_value: None }]
constexpr JsonExtensionDataAttribute(JsonExtensionDataAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonExtensionDataAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr JsonExtensionDataAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonExtensionDataAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonExtensionDataAttribute& operator=(JsonExtensionDataAttribute&& o) noexcept = default;
  constexpr JsonExtensionDataAttribute& operator=(JsonExtensionDataAttribute const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__WriteData_k__BackingField, put=__set__WriteData_k__BackingField))  _WriteData_k__BackingField;

constexpr void __set__WriteData_k__BackingField(bool value) ;

constexpr bool __get__WriteData_k__BackingField() const;

 bool __declspec(property(get=__get__ReadData_k__BackingField, put=__set__ReadData_k__BackingField))  _ReadData_k__BackingField;

constexpr void __set__ReadData_k__BackingField(bool value) ;

constexpr bool __get__ReadData_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_WriteData, put=set_WriteData))  WriteData;

 bool __declspec(property(get=get_ReadData, put=set_ReadData))  ReadData;


// Methods

/// @brief Method get_WriteData addr 0x24c796c size 0x8 virtual false final false
 bool get_WriteData() ;

/// @brief Method set_WriteData addr 0x24c7974 size 0xc virtual false final false
 void set_WriteData(bool value) ;

/// @brief Method get_ReadData addr 0x24c7980 size 0x8 virtual false final false
 bool get_ReadData() ;

/// @brief Method set_ReadData addr 0x24c7988 size 0xc virtual false final false
 void set_ReadData(bool value) ;

// Ctor Parameters []
explicit JsonExtensionDataAttribute() ;

/// @brief Method .ctor addr 0x24c7994 size 0x20 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
} // end anonymous namespace
NEED_NO_BOX(::Newtonsoft::Json::JsonExtensionDataAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonExtensionDataAttribute, "Newtonsoft.Json", "JsonExtensionDataAttribute");
