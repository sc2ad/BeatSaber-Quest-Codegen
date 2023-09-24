#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__EventArgs_def.hpp"
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class RefreshEventArgs;
}
// Type: System.ComponentModel::RefreshEventArgs
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2376))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8302))
// CS Name: System.ComponentModel.RefreshEventArgs
class CORDL_TYPE RefreshEventArgs : public System::EventArgs {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RefreshEventArgs() = default;

// Ctor Parameters [CppParam { name: "", ty: "RefreshEventArgs", modifiers: " const&", def_value: None }]
constexpr RefreshEventArgs(RefreshEventArgs const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RefreshEventArgs", modifiers: "&&", def_value: None }]
constexpr RefreshEventArgs(RefreshEventArgs&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RefreshEventArgs(void* ptr) noexcept : System::EventArgs(ptr) {
}


  constexpr RefreshEventArgs& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RefreshEventArgs& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RefreshEventArgs& operator=(RefreshEventArgs&& o) noexcept = default;
  constexpr RefreshEventArgs& operator=(RefreshEventArgs const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get__TypeChanged_k__BackingField, put=__set__TypeChanged_k__BackingField))  _TypeChanged_k__BackingField;

constexpr void __set__TypeChanged_k__BackingField(System::Type value) ;

constexpr System::Type __get__TypeChanged_k__BackingField() const;


// Methods

static System::ComponentModel::RefreshEventArgs New_ctor(System::Type typeChanged) ;

/// @brief Method .ctor addr 0x27854c4 size 0x6c virtual false final false
 void _ctor(System::Type typeChanged) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::RefreshEventArgs);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::RefreshEventArgs, "System.ComponentModel", "RefreshEventArgs");
