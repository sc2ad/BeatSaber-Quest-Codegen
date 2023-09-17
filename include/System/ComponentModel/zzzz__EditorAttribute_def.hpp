#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::ComponentModel {
class EditorAttribute;
}
// Type: System.ComponentModel::EditorAttribute
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8273))
// CS Name: System.ComponentModel.EditorAttribute
class CORDL_TYPE EditorAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~EditorAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "EditorAttribute", modifiers: " const&", def_value: None }]
constexpr EditorAttribute(EditorAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EditorAttribute", modifiers: "&&", def_value: None }]
constexpr EditorAttribute(EditorAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EditorAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr EditorAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EditorAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EditorAttribute& operator=(EditorAttribute&& o) noexcept = default;
  constexpr EditorAttribute& operator=(EditorAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__typeId, put=__set__typeId))  _typeId;

constexpr void __set__typeId(::StringW value) ;

constexpr ::StringW __get__typeId() const;

 ::StringW __declspec(property(get=__get__EditorBaseTypeName_k__BackingField, put=__set__EditorBaseTypeName_k__BackingField))  _EditorBaseTypeName_k__BackingField;

constexpr void __set__EditorBaseTypeName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__EditorBaseTypeName_k__BackingField() const;

 ::StringW __declspec(property(get=__get__EditorTypeName_k__BackingField, put=__set__EditorTypeName_k__BackingField))  _EditorTypeName_k__BackingField;

constexpr void __set__EditorTypeName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__EditorTypeName_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_EditorBaseTypeName))  EditorBaseTypeName;

 ::StringW __declspec(property(get=get_EditorTypeName))  EditorTypeName;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_TypeId))  TypeId;


// Methods

// Ctor Parameters [CppParam { name: "typeName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "baseTypeName", ty: "::StringW", modifiers: "", def_value: None }]
explicit EditorAttribute(::StringW typeName, ::StringW baseTypeName) ;

/// @brief Method .ctor addr 0x277c374 size 0x90 virtual false final false
 void _ctor(::StringW typeName, ::StringW baseTypeName) ;

/// @brief Method get_EditorBaseTypeName addr 0x277c404 size 0x8 virtual false final false
 ::StringW get_EditorBaseTypeName() ;

/// @brief Method get_EditorTypeName addr 0x277c40c size 0x8 virtual false final false
 ::StringW get_EditorTypeName() ;

/// @brief Method get_TypeId addr 0x277c414 size 0x8c virtual true final false
 ::bs_hook::Il2CppWrapperType get_TypeId() ;

/// @brief Method Equals addr 0x277c4a0 size 0xa4 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x277c544 size 0x8 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
} // end anonymous namespace
NEED_NO_BOX(::System::ComponentModel::EditorAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::EditorAttribute, "System.ComponentModel", "EditorAttribute");
