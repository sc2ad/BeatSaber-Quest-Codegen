#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::ComponentModel {
struct DesignerSerializationVisibility;
}
// Forward declare root types
namespace System::ComponentModel {
class DesignerSerializationVisibilityAttribute;
}
// Type: System.ComponentModel::DesignerSerializationVisibilityAttribute
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8243))
// CS Name: System.ComponentModel.DesignerSerializationVisibilityAttribute
class CORDL_TYPE DesignerSerializationVisibilityAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DesignerSerializationVisibilityAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "DesignerSerializationVisibilityAttribute", modifiers: " const&", def_value: None }]
constexpr DesignerSerializationVisibilityAttribute(DesignerSerializationVisibilityAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DesignerSerializationVisibilityAttribute", modifiers: "&&", def_value: None }]
constexpr DesignerSerializationVisibilityAttribute(DesignerSerializationVisibilityAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DesignerSerializationVisibilityAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr DesignerSerializationVisibilityAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DesignerSerializationVisibilityAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DesignerSerializationVisibilityAttribute& operator=(DesignerSerializationVisibilityAttribute&& o) noexcept = default;
  constexpr DesignerSerializationVisibilityAttribute& operator=(DesignerSerializationVisibilityAttribute const& o) noexcept = default;
                


// Fields

static System::ComponentModel::DesignerSerializationVisibilityAttribute __declspec(property(get=__get_Content, put=__set_Content))  Content;

static void __set_Content(System::ComponentModel::DesignerSerializationVisibilityAttribute value) ;

static System::ComponentModel::DesignerSerializationVisibilityAttribute __get_Content() ;

static System::ComponentModel::DesignerSerializationVisibilityAttribute __declspec(property(get=__get_Hidden, put=__set_Hidden))  Hidden;

static void __set_Hidden(System::ComponentModel::DesignerSerializationVisibilityAttribute value) ;

static System::ComponentModel::DesignerSerializationVisibilityAttribute __get_Hidden() ;

static System::ComponentModel::DesignerSerializationVisibilityAttribute __declspec(property(get=__get_Visible, put=__set_Visible))  Visible;

static void __set_Visible(System::ComponentModel::DesignerSerializationVisibilityAttribute value) ;

static System::ComponentModel::DesignerSerializationVisibilityAttribute __get_Visible() ;

static System::ComponentModel::DesignerSerializationVisibilityAttribute __declspec(property(get=__get_Default, put=__set_Default))  Default;

static void __set_Default(System::ComponentModel::DesignerSerializationVisibilityAttribute value) ;

static System::ComponentModel::DesignerSerializationVisibilityAttribute __get_Default() ;

 System::ComponentModel::DesignerSerializationVisibility __declspec(property(get=__get__Visibility_k__BackingField, put=__set__Visibility_k__BackingField))  _Visibility_k__BackingField;

constexpr void __set__Visibility_k__BackingField(System::ComponentModel::DesignerSerializationVisibility value) ;

constexpr System::ComponentModel::DesignerSerializationVisibility __get__Visibility_k__BackingField() const;


// Properties

 System::ComponentModel::DesignerSerializationVisibility __declspec(property(get=get_Visibility))  Visibility;


// Methods

static System::ComponentModel::DesignerSerializationVisibilityAttribute New_ctor(System::ComponentModel::DesignerSerializationVisibility visibility) ;

/// @brief Method .ctor addr 0x2771fc0 size 0x28 virtual false final false
 void _ctor(System::ComponentModel::DesignerSerializationVisibility visibility) ;

/// @brief Method get_Visibility addr 0x2771fe8 size 0x8 virtual false final false
 System::ComponentModel::DesignerSerializationVisibility get_Visibility() ;

/// @brief Method Equals addr 0x2771ff0 size 0xd8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x27720c8 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method IsDefaultAttribute addr 0x27720d0 size 0x68 virtual true final false
 bool IsDefaultAttribute() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::DesignerSerializationVisibilityAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::DesignerSerializationVisibilityAttribute, "System.ComponentModel", "DesignerSerializationVisibilityAttribute");
