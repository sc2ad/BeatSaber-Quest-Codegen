#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace System::ComponentModel {
class PropertyChangingEventArgs;
}
// Type: System.ComponentModel::PropertyChangingEventArgs
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2376))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11734))
// CS Name: System.ComponentModel.PropertyChangingEventArgs
class CORDL_TYPE PropertyChangingEventArgs : public ::System::EventArgs {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PropertyChangingEventArgs() = default;

// Ctor Parameters [CppParam { name: "", ty: "PropertyChangingEventArgs", modifiers: " const&", def_value: None }]
constexpr PropertyChangingEventArgs(PropertyChangingEventArgs const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PropertyChangingEventArgs", modifiers: "&&", def_value: None }]
constexpr PropertyChangingEventArgs(PropertyChangingEventArgs&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PropertyChangingEventArgs(void* ptr) noexcept : ::System::EventArgs(ptr) {
}


  constexpr PropertyChangingEventArgs& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PropertyChangingEventArgs& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PropertyChangingEventArgs& operator=(PropertyChangingEventArgs&& o) noexcept = default;
  constexpr PropertyChangingEventArgs& operator=(PropertyChangingEventArgs const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__PropertyName_k__BackingField, put=__set__PropertyName_k__BackingField))  _PropertyName_k__BackingField;

constexpr void __set__PropertyName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__PropertyName_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_PropertyName, put=set_PropertyName))  PropertyName;


// Methods

// Ctor Parameters [CppParam { name: "propertyName", ty: "::StringW", modifiers: "", def_value: None }]
explicit PropertyChangingEventArgs(::StringW propertyName) ;

/// @brief Method .ctor addr 0x24c717c size 0x78 virtual false final false
 void _ctor(::StringW propertyName) ;

/// @brief Method get_PropertyName addr 0x24c71f4 size 0x8 virtual true final false
 ::StringW get_PropertyName() ;

/// @brief Method set_PropertyName addr 0x24c71fc size 0x8 virtual true final false
 void set_PropertyName(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
} // end anonymous namespace
NEED_NO_BOX(::System::ComponentModel::PropertyChangingEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::PropertyChangingEventArgs, "System.ComponentModel", "PropertyChangingEventArgs");
