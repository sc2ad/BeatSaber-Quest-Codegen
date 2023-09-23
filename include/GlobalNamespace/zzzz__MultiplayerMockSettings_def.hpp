#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
namespace GlobalNamespace {
class MultiplayerStatusData;
}
namespace GlobalNamespace {
class MockPlayerSettings;
}
namespace GlobalNamespace {
class QuickPlaySetupData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class MockServerSettings;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerMockSettings;
}
// Type: ::MultiplayerMockSettings
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5288))
// CS Name: MultiplayerMockSettings
class CORDL_TYPE MultiplayerMockSettings : public UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~MultiplayerMockSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerMockSettings", modifiers: " const&", def_value: None }]
constexpr MultiplayerMockSettings(MultiplayerMockSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerMockSettings", modifiers: "&&", def_value: None }]
constexpr MultiplayerMockSettings(MultiplayerMockSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerMockSettings(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr MultiplayerMockSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerMockSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerMockSettings& operator=(MultiplayerMockSettings&& o) noexcept = default;
  constexpr MultiplayerMockSettings& operator=(MultiplayerMockSettings const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__isEnabled, put=__set__isEnabled))  _isEnabled;

constexpr void __set__isEnabled(bool value) ;

constexpr bool __get__isEnabled() const;

 GlobalNamespace::MockPlayerSettings __declspec(property(get=__get__localPlayer, put=__set__localPlayer))  _localPlayer;

constexpr void __set__localPlayer(GlobalNamespace::MockPlayerSettings value) ;

constexpr GlobalNamespace::MockPlayerSettings __get__localPlayer() const;

 System::Collections::Generic::List_1<GlobalNamespace::MockPlayerSettings> __declspec(property(get=__get__otherPlayers, put=__set__otherPlayers))  _otherPlayers;

constexpr void __set__otherPlayers(System::Collections::Generic::List_1<GlobalNamespace::MockPlayerSettings> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::MockPlayerSettings> __get__otherPlayers() const;

 GlobalNamespace::MockServerSettings __declspec(property(get=__get__quickplayServer, put=__set__quickplayServer))  _quickplayServer;

constexpr void __set__quickplayServer(GlobalNamespace::MockServerSettings value) ;

constexpr GlobalNamespace::MockServerSettings __get__quickplayServer() const;

 GlobalNamespace::MultiplayerStatusData __declspec(property(get=__get__multiplayerStatusData, put=__set__multiplayerStatusData))  _multiplayerStatusData;

constexpr void __set__multiplayerStatusData(GlobalNamespace::MultiplayerStatusData value) ;

constexpr GlobalNamespace::MultiplayerStatusData __get__multiplayerStatusData() const;

 GlobalNamespace::QuickPlaySetupData __declspec(property(get=__get__quickPlaySetupData, put=__set__quickPlaySetupData))  _quickPlaySetupData;

constexpr void __set__quickPlaySetupData(GlobalNamespace::QuickPlaySetupData value) ;

constexpr GlobalNamespace::QuickPlaySetupData __get__quickPlaySetupData() const;


// Properties

 GlobalNamespace::MockServerSettings __declspec(property(get=get_quickplayServer))  quickplayServer;

 GlobalNamespace::MockPlayerSettings __declspec(property(get=get_localPlayer))  localPlayer;

 GlobalNamespace::QuickPlaySetupData __declspec(property(get=get_quickPlaySetupData, put=set_quickPlaySetupData))  quickPlaySetupData;

 GlobalNamespace::MultiplayerStatusData __declspec(property(get=get_multiplayerStatusData, put=set_multiplayerStatusData))  multiplayerStatusData;

 System::Collections::Generic::List_1<GlobalNamespace::MockPlayerSettings> __declspec(property(get=get_otherPlayers))  otherPlayers;

 bool __declspec(property(get=get_isEnabled, put=set_isEnabled))  isEnabled;


// Methods

/// @brief Method get_quickplayServer addr 0x20efa8c size 0x8 virtual false final false
 GlobalNamespace::MockServerSettings get_quickplayServer() ;

/// @brief Method get_localPlayer addr 0x20efa94 size 0xac virtual false final false
 GlobalNamespace::MockPlayerSettings get_localPlayer() ;

/// @brief Method get_quickPlaySetupData addr 0x20efb40 size 0x8 virtual false final false
 GlobalNamespace::QuickPlaySetupData get_quickPlaySetupData() ;

/// @brief Method set_quickPlaySetupData addr 0x20efb48 size 0x8 virtual false final false
 void set_quickPlaySetupData(GlobalNamespace::QuickPlaySetupData value) ;

/// @brief Method get_multiplayerStatusData addr 0x20efb50 size 0x8 virtual false final false
 GlobalNamespace::MultiplayerStatusData get_multiplayerStatusData() ;

/// @brief Method set_multiplayerStatusData addr 0x20efb58 size 0x8 virtual false final false
 void set_multiplayerStatusData(GlobalNamespace::MultiplayerStatusData value) ;

/// @brief Method get_otherPlayers addr 0x20efb60 size 0x8 virtual false final false
 System::Collections::Generic::List_1<GlobalNamespace::MockPlayerSettings> get_otherPlayers() ;

/// @brief Method get_isEnabled addr 0x20efb68 size 0x8 virtual false final false
 bool get_isEnabled() ;

/// @brief Method set_isEnabled addr 0x20efb70 size 0xc virtual false final false
 void set_isEnabled(bool value) ;

/// @brief Method SharedSettings addr 0x20efb7c size 0x8 virtual false final false
static GlobalNamespace::MultiplayerMockSettings SharedSettings() ;

// Ctor Parameters []
explicit MultiplayerMockSettings() ;

/// @brief Method .ctor addr 0x20efb84 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerMockSettings);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerMockSettings, "", "MultiplayerMockSettings");
