#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
namespace GlobalNamespace {
class MenuDestination;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IDestinationRequestManager;
}
// Type: ::IDestinationRequestManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4180))
// CS Name: IDestinationRequestManager
class CORDL_TYPE IDestinationRequestManager : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IDestinationRequestManager() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDestinationRequestManager(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::GlobalNamespace::MenuDestination __declspec(property(get=get_currentMenuDestinationRequest, put=set_currentMenuDestinationRequest))  currentMenuDestinationRequest;


// Methods

/// @brief Method add_didSendMenuDestinationRequestEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_didSendMenuDestinationRequestEvent(::System::Action_1<::GlobalNamespace::MenuDestination> value) ;

/// @brief Method remove_didSendMenuDestinationRequestEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_didSendMenuDestinationRequestEvent(::System::Action_1<::GlobalNamespace::MenuDestination> value) ;

/// @brief Method get_currentMenuDestinationRequest addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::MenuDestination get_currentMenuDestinationRequest() ;

/// @brief Method set_currentMenuDestinationRequest addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_currentMenuDestinationRequest(::GlobalNamespace::MenuDestination value) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final false
 void Clear() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IDestinationRequestManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IDestinationRequestManager, "", "IDestinationRequestManager");
