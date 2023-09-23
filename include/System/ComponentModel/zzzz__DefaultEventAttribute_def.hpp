#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace System::ComponentModel {
class DefaultEventAttribute;
}
// Type: System.ComponentModel::DefaultEventAttribute
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8268))
// CS Name: System.ComponentModel.DefaultEventAttribute
class CORDL_TYPE DefaultEventAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DefaultEventAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultEventAttribute", modifiers: " const&", def_value: None }]
constexpr DefaultEventAttribute(DefaultEventAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultEventAttribute", modifiers: "&&", def_value: None }]
constexpr DefaultEventAttribute(DefaultEventAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultEventAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr DefaultEventAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultEventAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultEventAttribute& operator=(DefaultEventAttribute&& o) noexcept = default;
  constexpr DefaultEventAttribute& operator=(DefaultEventAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Name_k__BackingField, put=__set__Name_k__BackingField))  _Name_k__BackingField;

constexpr void __set__Name_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Name_k__BackingField() const;

static System::ComponentModel::DefaultEventAttribute __declspec(property(get=__get_Default, put=__set_Default))  Default;

static void __set_Default(System::ComponentModel::DefaultEventAttribute value) ;

static System::ComponentModel::DefaultEventAttribute __get_Default() ;


// Properties

 ::StringW __declspec(property(get=get_Name))  Name;


// Methods

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
explicit DefaultEventAttribute(::StringW name) ;

/// @brief Method .ctor addr 0x277baf0 size 0x28 virtual false final false
 void _ctor(::StringW name) ;

/// @brief Method get_Name addr 0x277bb18 size 0x8 virtual false final false
 ::StringW get_Name() ;

/// @brief Method Equals addr 0x277bb20 size 0x80 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x277bba0 size 0x8 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::DefaultEventAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::DefaultEventAttribute, "System.ComponentModel", "DefaultEventAttribute");
