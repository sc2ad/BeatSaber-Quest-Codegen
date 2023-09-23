#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace System::ComponentModel {
class DisplayNameAttribute;
}
// Type: System.ComponentModel::DisplayNameAttribute
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8244))
// CS Name: System.ComponentModel.DisplayNameAttribute
class CORDL_TYPE DisplayNameAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DisplayNameAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "DisplayNameAttribute", modifiers: " const&", def_value: None }]
constexpr DisplayNameAttribute(DisplayNameAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DisplayNameAttribute", modifiers: "&&", def_value: None }]
constexpr DisplayNameAttribute(DisplayNameAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DisplayNameAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr DisplayNameAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DisplayNameAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DisplayNameAttribute& operator=(DisplayNameAttribute&& o) noexcept = default;
  constexpr DisplayNameAttribute& operator=(DisplayNameAttribute const& o) noexcept = default;
                


// Fields

static System::ComponentModel::DisplayNameAttribute __declspec(property(get=__get_Default, put=__set_Default))  Default;

static void __set_Default(System::ComponentModel::DisplayNameAttribute value) ;

static System::ComponentModel::DisplayNameAttribute __get_Default() ;

 ::StringW __declspec(property(get=__get__DisplayNameValue_k__BackingField, put=__set__DisplayNameValue_k__BackingField))  _DisplayNameValue_k__BackingField;

constexpr void __set__DisplayNameValue_k__BackingField(::StringW value) ;

constexpr ::StringW __get__DisplayNameValue_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_DisplayName))  DisplayName;

 ::StringW __declspec(property(get=get_DisplayNameValue, put=set_DisplayNameValue))  DisplayNameValue;


// Methods

// Ctor Parameters []
explicit DisplayNameAttribute() ;

/// @brief Method .ctor addr 0x27721f4 size 0x5c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "displayName", ty: "::StringW", modifiers: "", def_value: None }]
explicit DisplayNameAttribute(::StringW displayName) ;

/// @brief Method .ctor addr 0x2772250 size 0x28 virtual false final false
 void _ctor(::StringW displayName) ;

/// @brief Method get_DisplayName addr 0x2772278 size 0x8 virtual true final false
 ::StringW get_DisplayName() ;

/// @brief Method get_DisplayNameValue addr 0x2772280 size 0x8 virtual false final false
 ::StringW get_DisplayNameValue() ;

/// @brief Method set_DisplayNameValue addr 0x2772288 size 0x8 virtual false final false
 void set_DisplayNameValue(::StringW value) ;

/// @brief Method Equals addr 0x2772290 size 0xcc virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x277235c size 0x28 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method IsDefaultAttribute addr 0x2772384 size 0x68 virtual true final false
 bool IsDefaultAttribute() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::DisplayNameAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::DisplayNameAttribute, "System.ComponentModel", "DisplayNameAttribute");
