#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System::ComponentModel {
class AddingNewEventArgs;
}
// Forward declare root types
namespace System::ComponentModel {
class AddingNewEventHandler;
}
// Type: System.ComponentModel::AddingNewEventHandler
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11728))
// CS Name: System.ComponentModel.AddingNewEventHandler
class CORDL_TYPE AddingNewEventHandler : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~AddingNewEventHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "AddingNewEventHandler", modifiers: " const&", def_value: None }]
constexpr AddingNewEventHandler(AddingNewEventHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AddingNewEventHandler", modifiers: "&&", def_value: None }]
constexpr AddingNewEventHandler(AddingNewEventHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AddingNewEventHandler(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr AddingNewEventHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AddingNewEventHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AddingNewEventHandler& operator=(AddingNewEventHandler&& o) noexcept = default;
  constexpr AddingNewEventHandler& operator=(AddingNewEventHandler const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit AddingNewEventHandler(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x24c6a54 size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x24c6b84 size 0x14 virtual true final false
 void Invoke(::bs_hook::Il2CppWrapperType sender, System::ComponentModel::AddingNewEventArgs e) ;

/// @brief Method BeginInvoke addr 0x24c6b98 size 0x28 virtual true final false
 System::IAsyncResult BeginInvoke(::bs_hook::Il2CppWrapperType sender, System::ComponentModel::AddingNewEventArgs e, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x24c6bc0 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::AddingNewEventHandler);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::AddingNewEventHandler, "System.ComponentModel", "AddingNewEventHandler");
