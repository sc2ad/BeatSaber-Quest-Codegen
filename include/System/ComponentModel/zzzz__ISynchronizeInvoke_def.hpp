#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System {
class Delegate;
}
namespace System {
class IAsyncResult;
}
// Forward declare root types
namespace System::ComponentModel {
class ISynchronizeInvoke;
}
// Type: System.ComponentModel::ISynchronizeInvoke
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8249))
// CS Name: System.ComponentModel.ISynchronizeInvoke
class CORDL_TYPE ISynchronizeInvoke : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ISynchronizeInvoke() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISynchronizeInvoke(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 bool __declspec(property(get=get_InvokeRequired))  InvokeRequired;


// Methods

/// @brief Method get_InvokeRequired addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_InvokeRequired() ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(System::Delegate method, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::ISynchronizeInvoke);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::ISynchronizeInvoke, "System.ComponentModel", "ISynchronizeInvoke");
