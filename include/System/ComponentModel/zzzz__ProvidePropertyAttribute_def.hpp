#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace System::ComponentModel {
class ProvidePropertyAttribute;
}
// Type: System.ComponentModel::ProvidePropertyAttribute
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8298))
// CS Name: System.ComponentModel.ProvidePropertyAttribute
class CORDL_TYPE ProvidePropertyAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ProvidePropertyAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProvidePropertyAttribute", modifiers: " const&", def_value: None }]
constexpr ProvidePropertyAttribute(ProvidePropertyAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProvidePropertyAttribute", modifiers: "&&", def_value: None }]
constexpr ProvidePropertyAttribute(ProvidePropertyAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProvidePropertyAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr ProvidePropertyAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProvidePropertyAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProvidePropertyAttribute& operator=(ProvidePropertyAttribute&& o) noexcept = default;
  constexpr ProvidePropertyAttribute& operator=(ProvidePropertyAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__PropertyName_k__BackingField, put=__set__PropertyName_k__BackingField))  _PropertyName_k__BackingField;

constexpr void __set__PropertyName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__PropertyName_k__BackingField() const;

 ::StringW __declspec(property(get=__get__ReceiverTypeName_k__BackingField, put=__set__ReceiverTypeName_k__BackingField))  _ReceiverTypeName_k__BackingField;

constexpr void __set__ReceiverTypeName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__ReceiverTypeName_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_PropertyName))  PropertyName;

 ::StringW __declspec(property(get=get_ReceiverTypeName))  ReceiverTypeName;


// Methods

/// @brief Method get_PropertyName addr 0x2782c34 size 0x8 virtual false final false
 ::StringW get_PropertyName() ;

/// @brief Method get_ReceiverTypeName addr 0x2782c3c size 0x8 virtual false final false
 ::StringW get_ReceiverTypeName() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
} // end anonymous namespace
NEED_NO_BOX(::System::ComponentModel::ProvidePropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ProvidePropertyAttribute, "System.ComponentModel", "ProvidePropertyAttribute");
