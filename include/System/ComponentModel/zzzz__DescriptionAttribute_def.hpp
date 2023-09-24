#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace System::ComponentModel {
class DescriptionAttribute;
}
// Type: System.ComponentModel::DescriptionAttribute
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8239))
// CS Name: System.ComponentModel.DescriptionAttribute
class CORDL_TYPE DescriptionAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DescriptionAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "DescriptionAttribute", modifiers: " const&", def_value: None }]
constexpr DescriptionAttribute(DescriptionAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DescriptionAttribute", modifiers: "&&", def_value: None }]
constexpr DescriptionAttribute(DescriptionAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DescriptionAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr DescriptionAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DescriptionAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DescriptionAttribute& operator=(DescriptionAttribute&& o) noexcept = default;
  constexpr DescriptionAttribute& operator=(DescriptionAttribute const& o) noexcept = default;
                


// Fields

static System::ComponentModel::DescriptionAttribute __declspec(property(get=__get_Default, put=__set_Default))  Default;

static void __set_Default(System::ComponentModel::DescriptionAttribute value) ;

static System::ComponentModel::DescriptionAttribute __get_Default() ;

 ::StringW __declspec(property(get=__get__DescriptionValue_k__BackingField, put=__set__DescriptionValue_k__BackingField))  _DescriptionValue_k__BackingField;

constexpr void __set__DescriptionValue_k__BackingField(::StringW value) ;

constexpr ::StringW __get__DescriptionValue_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_Description))  Description;

 ::StringW __declspec(property(get=get_DescriptionValue, put=set_DescriptionValue))  DescriptionValue;


// Methods

static System::ComponentModel::DescriptionAttribute New_ctor() ;

/// @brief Method .ctor addr 0x277181c size 0x5c virtual false final false
 void _ctor() ;

static System::ComponentModel::DescriptionAttribute New_ctor(::StringW description) ;

/// @brief Method .ctor addr 0x2771878 size 0x28 virtual false final false
 void _ctor(::StringW description) ;

/// @brief Method get_Description addr 0x27718a0 size 0x8 virtual true final false
 ::StringW get_Description() ;

/// @brief Method get_DescriptionValue addr 0x27718a8 size 0x8 virtual false final false
 ::StringW get_DescriptionValue() ;

/// @brief Method set_DescriptionValue addr 0x27718b0 size 0x8 virtual false final false
 void set_DescriptionValue(::StringW value) ;

/// @brief Method Equals addr 0x27718b8 size 0xcc virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2771984 size 0x28 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method IsDefaultAttribute addr 0x27719ac size 0x68 virtual true final false
 bool IsDefaultAttribute() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::DescriptionAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::DescriptionAttribute, "System.ComponentModel", "DescriptionAttribute");
