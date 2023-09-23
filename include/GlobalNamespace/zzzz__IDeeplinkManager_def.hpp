#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace GlobalNamespace {
class Deeplink;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IDeeplinkManager;
}
// Type: ::IDeeplinkManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4178))
// CS Name: IDeeplinkManager
class CORDL_TYPE IDeeplinkManager : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IDeeplinkManager() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDeeplinkManager(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 GlobalNamespace::Deeplink __declspec(property(get=get_currentDeeplink))  currentDeeplink;


// Methods

/// @brief Method add_didReceiveDeeplinkEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_didReceiveDeeplinkEvent(System::Action_1<GlobalNamespace::Deeplink> value) ;

/// @brief Method remove_didReceiveDeeplinkEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_didReceiveDeeplinkEvent(System::Action_1<GlobalNamespace::Deeplink> value) ;

/// @brief Method get_currentDeeplink addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::Deeplink get_currentDeeplink() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IDeeplinkManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IDeeplinkManager, "", "IDeeplinkManager");
