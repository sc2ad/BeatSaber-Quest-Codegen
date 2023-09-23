#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Oculus::Platform::Models {
class GroupPresenceJoinIntent;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class IDeeplinkManager;
}
namespace GlobalNamespace {
class Deeplink;
}
namespace Oculus::Platform {
template<typename T>
class Message_1;
}
namespace Oculus::Platform::Models {
class LaunchDetails;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusDeeplinkManager;
}
// Type: ::OculusDeeplinkManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4191))
// CS Name: OculusDeeplinkManager
class CORDL_TYPE OculusDeeplinkManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IDeeplinkManager
constexpr operator  GlobalNamespace::IDeeplinkManager() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~OculusDeeplinkManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusDeeplinkManager", modifiers: " const&", def_value: None }]
constexpr OculusDeeplinkManager(OculusDeeplinkManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusDeeplinkManager", modifiers: "&&", def_value: None }]
constexpr OculusDeeplinkManager(OculusDeeplinkManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OculusDeeplinkManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OculusDeeplinkManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OculusDeeplinkManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OculusDeeplinkManager& operator=(OculusDeeplinkManager&& o) noexcept = default;
  constexpr OculusDeeplinkManager& operator=(OculusDeeplinkManager const& o) noexcept = default;
                


// Fields

 System::Action_1<GlobalNamespace::Deeplink> __declspec(property(get=__get_didReceiveDeeplinkEvent, put=__set_didReceiveDeeplinkEvent))  didReceiveDeeplinkEvent;

constexpr void __set_didReceiveDeeplinkEvent(System::Action_1<GlobalNamespace::Deeplink> value) ;

constexpr System::Action_1<GlobalNamespace::Deeplink> __get_didReceiveDeeplinkEvent() const;

 GlobalNamespace::Deeplink __declspec(property(get=__get__currentDeeplink, put=__set__currentDeeplink))  _currentDeeplink;

constexpr void __set__currentDeeplink(GlobalNamespace::Deeplink value) ;

constexpr GlobalNamespace::Deeplink __get__currentDeeplink() const;

 bool __declspec(property(get=__get__oculusPlatformWasInitialized, put=__set__oculusPlatformWasInitialized))  _oculusPlatformWasInitialized;

constexpr void __set__oculusPlatformWasInitialized(bool value) ;

constexpr bool __get__oculusPlatformWasInitialized() const;


// Properties

 GlobalNamespace::Deeplink __declspec(property(get=get_currentDeeplink))  currentDeeplink;


// Methods

/// @brief Method add_didReceiveDeeplinkEvent addr 0x21bd51c size 0xb0 virtual true final true
 void add_didReceiveDeeplinkEvent(System::Action_1<GlobalNamespace::Deeplink> value) ;

/// @brief Method remove_didReceiveDeeplinkEvent addr 0x21bd5cc size 0xb0 virtual true final true
 void remove_didReceiveDeeplinkEvent(System::Action_1<GlobalNamespace::Deeplink> value) ;

/// @brief Method get_currentDeeplink addr 0x21bd67c size 0x8 virtual true final true
 GlobalNamespace::Deeplink get_currentDeeplink() ;

/// @brief Method Init addr 0x21bd684 size 0x80 virtual false final false
 void Init() ;

/// @brief Method OculusPlatformWasInitialized addr 0x21bd704 size 0x18 virtual false final false
 void OculusPlatformWasInitialized() ;

/// @brief Method SetJoinIntentReceivedNotificationCallback addr 0x21bd71c size 0xb0 virtual false final false
 void SetJoinIntentReceivedNotificationCallback(Oculus::Platform::Message_1<Oculus::Platform::Models::GroupPresenceJoinIntent> message) ;

/// @brief Method UpdateDeeplinkMessage addr 0x21bd824 size 0x260 virtual false final false
 void UpdateDeeplinkMessage(Oculus::Platform::Models::GroupPresenceJoinIntent joinIntent, Oculus::Platform::Models::LaunchDetails launchDetails) ;

/// @brief Method IsAtLeastOneFieldPopulated addr 0x21bda84 size 0x74 virtual false final false
 bool IsAtLeastOneFieldPopulated(GlobalNamespace::Deeplink deeplink) ;

/// @brief Method Log addr 0x21bd7cc size 0x58 virtual false final false
static void Log(::StringW message) ;

// Ctor Parameters []
explicit OculusDeeplinkManager() ;

/// @brief Method .ctor addr 0x21bdaf8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OculusDeeplinkManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusDeeplinkManager, "", "OculusDeeplinkManager");
