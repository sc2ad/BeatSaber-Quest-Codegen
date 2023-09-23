#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class ServerCodeEntryViewController;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class SelectMultiplayerLobbyDestination;
}
namespace System {
class Exception;
}
namespace GlobalNamespace {
struct GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType;
}
namespace GlobalNamespace {
class INetworkPlayerModel;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace HMUI {
class ViewController;
}
namespace GlobalNamespace {
class FadeInOutController;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace GlobalNamespace {
class MultiplayerModeSelectionViewController;
}
namespace GlobalNamespace {
class LobbyDataModelsManager;
}
namespace GlobalNamespace {
class IUnifiedNetworkPlayerModel;
}
namespace GlobalNamespace {
class QuickPlaySetupData;
}
namespace GlobalNamespace {
class ILobbyGameStateController;
}
namespace GlobalNamespace {
class IMultiplayerStatusModel;
}
namespace GlobalNamespace {
struct CreateServerFormData;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace GlobalNamespace {
class MultiplayerLobbyConnectionController;
}
namespace UnityEngine {
class AudioClip;
}
namespace GlobalNamespace {
class SongPreviewPlayer;
}
namespace GlobalNamespace {
struct MultiplayerUnavailableReason;
}
namespace GlobalNamespace {
class GameServerBrowserFlowCoordinator;
}
namespace GlobalNamespace {
class SimpleDialogPromptViewController;
}
namespace GlobalNamespace {
class GameServerLobbyFlowCoordinator;
}
namespace GlobalNamespace {
class XPlatformAuthFeatureFlag;
}
namespace GlobalNamespace {
class JoinQuickPlayViewController;
}
namespace GlobalNamespace {
class SongPackMaskModelSO;
}
namespace GlobalNamespace {
class CreateServerViewController;
}
namespace GlobalNamespace {
class IQuickPlaySetupModel;
}
namespace GlobalNamespace {
class AvatarDataModel;
}
namespace GlobalNamespace {
class JoiningLobbyViewController;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace HMUI {
struct HMUI__ViewController__AnimationType;
}
namespace GlobalNamespace {
struct GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace GlobalNamespace {
class MultiplayerStatusData;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerModeSelectionFlowCoordinator;
}
namespace GlobalNamespace {
struct GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52;
}
namespace GlobalNamespace {
struct GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51;
}
// Type: ::<TryShowModeSelection>d__51
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5603))
// CS Name: MultiplayerModeSelectionFlowCoordinator::<TryShowModeSelection>d__51
struct CORDL_TYPE GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::MultiplayerModeSelectionFlowCoordinator", modifiers: "", def_value: None }, CppParam { name: "_multiplayerStatusData_5__2", ty: "GlobalNamespace::MultiplayerStatusData", modifiers: "", def_value: None }, CppParam { name: "_exception_5__3", ty: "System::Exception", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::MultiplayerStatusData>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::QuickPlaySetupData>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, GlobalNamespace::MultiplayerModeSelectionFlowCoordinator __4__this, GlobalNamespace::MultiplayerStatusData _multiplayerStatusData_5__2, System::Exception _exception_5__3, System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::MultiplayerStatusData> __u__2, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::QuickPlaySetupData> __u__3) noexcept;


                    constexpr GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51(GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51 const&) = default;
                    constexpr GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51(GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51&&) = default;
                    constexpr GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51& operator=(GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51& operator=(GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x58};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncVoidMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value) ;

constexpr System::Runtime::CompilerServices::AsyncVoidMethodBuilder __get___t__builder() const;

 GlobalNamespace::MultiplayerModeSelectionFlowCoordinator __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::MultiplayerModeSelectionFlowCoordinator value) ;

constexpr GlobalNamespace::MultiplayerModeSelectionFlowCoordinator __get___4__this() const;

 GlobalNamespace::MultiplayerStatusData __declspec(property(get=__get__multiplayerStatusData_5__2, put=__set__multiplayerStatusData_5__2))  _multiplayerStatusData_5__2;

constexpr void __set__multiplayerStatusData_5__2(GlobalNamespace::MultiplayerStatusData value) ;

constexpr GlobalNamespace::MultiplayerStatusData __get__multiplayerStatusData_5__2() const;

 System::Exception __declspec(property(get=__get__exception_5__3, put=__set__exception_5__3))  _exception_5__3;

constexpr void __set__exception_5__3(System::Exception value) ;

constexpr System::Exception __get__exception_5__3() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<bool> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<bool> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<bool> __get___u__1() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::MultiplayerStatusData> __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::MultiplayerStatusData> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::MultiplayerStatusData> __get___u__2() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::QuickPlaySetupData> __declspec(property(get=__get___u__3, put=__set___u__3))  __u__3;

constexpr void __set___u__3(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::QuickPlaySetupData> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::QuickPlaySetupData> __get___u__3() const;


// Methods

/// @brief Method MoveNext addr 0x21416d8 size 0xae8 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21421c0 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<ResolveAndPresentNextFlowCoordinator>d__52
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5604))
// CS Name: MultiplayerModeSelectionFlowCoordinator::<ResolveAndPresentNextFlowCoordinator>d__52
struct CORDL_TYPE GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::MultiplayerModeSelectionFlowCoordinator", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, GlobalNamespace::MultiplayerModeSelectionFlowCoordinator __4__this, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;


                    constexpr GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52(GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52 const&) = default;
                    constexpr GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52(GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52&&) = default;
                    constexpr GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52& operator=(GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52& operator=(GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncVoidMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value) ;

constexpr System::Runtime::CompilerServices::AsyncVoidMethodBuilder __get___t__builder() const;

 GlobalNamespace::MultiplayerModeSelectionFlowCoordinator __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::MultiplayerModeSelectionFlowCoordinator value) ;

constexpr GlobalNamespace::MultiplayerModeSelectionFlowCoordinator __get___4__this() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21421cc size 0x390 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x214255c size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplayerModeSelectionFlowCoordinator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13633))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5605))
// CS Name: MultiplayerModeSelectionFlowCoordinator
class CORDL_TYPE MultiplayerModeSelectionFlowCoordinator : public HMUI::FlowCoordinator {
public:
// Declarations
using _ResolveAndPresentNextFlowCoordinator_d__52 = GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52;

using _TryShowModeSelection_d__51 = GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x198};

virtual ~MultiplayerModeSelectionFlowCoordinator() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerModeSelectionFlowCoordinator", modifiers: " const&", def_value: None }]
constexpr MultiplayerModeSelectionFlowCoordinator(MultiplayerModeSelectionFlowCoordinator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerModeSelectionFlowCoordinator", modifiers: "&&", def_value: None }]
constexpr MultiplayerModeSelectionFlowCoordinator(MultiplayerModeSelectionFlowCoordinator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerModeSelectionFlowCoordinator(void* ptr) noexcept : HMUI::FlowCoordinator(ptr) {
}


  constexpr MultiplayerModeSelectionFlowCoordinator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerModeSelectionFlowCoordinator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerModeSelectionFlowCoordinator& operator=(MultiplayerModeSelectionFlowCoordinator&& o) noexcept = default;
  constexpr MultiplayerModeSelectionFlowCoordinator& operator=(MultiplayerModeSelectionFlowCoordinator const& o) noexcept = default;
                


// Fields

 UnityEngine::AudioClip __declspec(property(get=__get__ambienceAudioClip, put=__set__ambienceAudioClip))  _ambienceAudioClip;

constexpr void __set__ambienceAudioClip(UnityEngine::AudioClip value) ;

constexpr UnityEngine::AudioClip __get__ambienceAudioClip() const;

 GlobalNamespace::SongPackMaskModelSO __declspec(property(get=__get__songPackMaskModel, put=__set__songPackMaskModel))  _songPackMaskModel;

constexpr void __set__songPackMaskModel(GlobalNamespace::SongPackMaskModelSO value) ;

constexpr GlobalNamespace::SongPackMaskModelSO __get__songPackMaskModel() const;

 GlobalNamespace::GameServerBrowserFlowCoordinator __declspec(property(get=__get__gameServerBrowserFlowCoordinator, put=__set__gameServerBrowserFlowCoordinator))  _gameServerBrowserFlowCoordinator;

constexpr void __set__gameServerBrowserFlowCoordinator(GlobalNamespace::GameServerBrowserFlowCoordinator value) ;

constexpr GlobalNamespace::GameServerBrowserFlowCoordinator __get__gameServerBrowserFlowCoordinator() const;

 GlobalNamespace::GameServerLobbyFlowCoordinator __declspec(property(get=__get__gameServerLobbyFlowCoordinator, put=__set__gameServerLobbyFlowCoordinator))  _gameServerLobbyFlowCoordinator;

constexpr void __set__gameServerLobbyFlowCoordinator(GlobalNamespace::GameServerLobbyFlowCoordinator value) ;

constexpr GlobalNamespace::GameServerLobbyFlowCoordinator __get__gameServerLobbyFlowCoordinator() const;

 GlobalNamespace::MultiplayerModeSelectionViewController __declspec(property(get=__get__multiplayerModeSelectionViewController, put=__set__multiplayerModeSelectionViewController))  _multiplayerModeSelectionViewController;

constexpr void __set__multiplayerModeSelectionViewController(GlobalNamespace::MultiplayerModeSelectionViewController value) ;

constexpr GlobalNamespace::MultiplayerModeSelectionViewController __get__multiplayerModeSelectionViewController() const;

 GlobalNamespace::CreateServerViewController __declspec(property(get=__get__createServerViewController, put=__set__createServerViewController))  _createServerViewController;

constexpr void __set__createServerViewController(GlobalNamespace::CreateServerViewController value) ;

constexpr GlobalNamespace::CreateServerViewController __get__createServerViewController() const;

 GlobalNamespace::JoinQuickPlayViewController __declspec(property(get=__get__joinQuickPlayViewController, put=__set__joinQuickPlayViewController))  _joinQuickPlayViewController;

constexpr void __set__joinQuickPlayViewController(GlobalNamespace::JoinQuickPlayViewController value) ;

constexpr GlobalNamespace::JoinQuickPlayViewController __get__joinQuickPlayViewController() const;

 GlobalNamespace::ServerCodeEntryViewController __declspec(property(get=__get__serverCodeEntryViewController, put=__set__serverCodeEntryViewController))  _serverCodeEntryViewController;

constexpr void __set__serverCodeEntryViewController(GlobalNamespace::ServerCodeEntryViewController value) ;

constexpr GlobalNamespace::ServerCodeEntryViewController __get__serverCodeEntryViewController() const;

 GlobalNamespace::SimpleDialogPromptViewController __declspec(property(get=__get__simpleDialogPromptViewController, put=__set__simpleDialogPromptViewController))  _simpleDialogPromptViewController;

constexpr void __set__simpleDialogPromptViewController(GlobalNamespace::SimpleDialogPromptViewController value) ;

constexpr GlobalNamespace::SimpleDialogPromptViewController __get__simpleDialogPromptViewController() const;

 GlobalNamespace::JoiningLobbyViewController __declspec(property(get=__get__joiningLobbyViewController, put=__set__joiningLobbyViewController))  _joiningLobbyViewController;

constexpr void __set__joiningLobbyViewController(GlobalNamespace::JoiningLobbyViewController value) ;

constexpr GlobalNamespace::JoiningLobbyViewController __get__joiningLobbyViewController() const;

 GlobalNamespace::IUnifiedNetworkPlayerModel __declspec(property(get=__get__unifiedNetworkPlayerModel, put=__set__unifiedNetworkPlayerModel))  _unifiedNetworkPlayerModel;

constexpr void __set__unifiedNetworkPlayerModel(GlobalNamespace::IUnifiedNetworkPlayerModel value) ;

constexpr GlobalNamespace::IUnifiedNetworkPlayerModel __get__unifiedNetworkPlayerModel() const;

 GlobalNamespace::AvatarDataModel __declspec(property(get=__get__avatarDataModel, put=__set__avatarDataModel))  _avatarDataModel;

constexpr void __set__avatarDataModel(GlobalNamespace::AvatarDataModel value) ;

constexpr GlobalNamespace::AvatarDataModel __get__avatarDataModel() const;

 GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager))  _multiplayerSessionManager;

constexpr void __set__multiplayerSessionManager(GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr GlobalNamespace::IMultiplayerSessionManager __get__multiplayerSessionManager() const;

 GlobalNamespace::FadeInOutController __declspec(property(get=__get__fadeInOutController, put=__set__fadeInOutController))  _fadeInOutController;

constexpr void __set__fadeInOutController(GlobalNamespace::FadeInOutController value) ;

constexpr GlobalNamespace::FadeInOutController __get__fadeInOutController() const;

 GlobalNamespace::LobbyDataModelsManager __declspec(property(get=__get__lobbyDataModelsManager, put=__set__lobbyDataModelsManager))  _lobbyDataModelsManager;

constexpr void __set__lobbyDataModelsManager(GlobalNamespace::LobbyDataModelsManager value) ;

constexpr GlobalNamespace::LobbyDataModelsManager __get__lobbyDataModelsManager() const;

 GlobalNamespace::MultiplayerLobbyConnectionController __declspec(property(get=__get__multiplayerLobbyConnectionController, put=__set__multiplayerLobbyConnectionController))  _multiplayerLobbyConnectionController;

constexpr void __set__multiplayerLobbyConnectionController(GlobalNamespace::MultiplayerLobbyConnectionController value) ;

constexpr GlobalNamespace::MultiplayerLobbyConnectionController __get__multiplayerLobbyConnectionController() const;

 GlobalNamespace::IMultiplayerStatusModel __declspec(property(get=__get__multiplayerStatusModel, put=__set__multiplayerStatusModel))  _multiplayerStatusModel;

constexpr void __set__multiplayerStatusModel(GlobalNamespace::IMultiplayerStatusModel value) ;

constexpr GlobalNamespace::IMultiplayerStatusModel __get__multiplayerStatusModel() const;

 GlobalNamespace::IQuickPlaySetupModel __declspec(property(get=__get__quickPlaySetupModel, put=__set__quickPlaySetupModel))  _quickPlaySetupModel;

constexpr void __set__quickPlaySetupModel(GlobalNamespace::IQuickPlaySetupModel value) ;

constexpr GlobalNamespace::IQuickPlaySetupModel __get__quickPlaySetupModel() const;

 GlobalNamespace::PlayerDataModel __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel))  _playerDataModel;

constexpr void __set__playerDataModel(GlobalNamespace::PlayerDataModel value) ;

constexpr GlobalNamespace::PlayerDataModel __get__playerDataModel() const;

 GlobalNamespace::SongPreviewPlayer __declspec(property(get=__get__songPreviewPlayer, put=__set__songPreviewPlayer))  _songPreviewPlayer;

constexpr void __set__songPreviewPlayer(GlobalNamespace::SongPreviewPlayer value) ;

constexpr GlobalNamespace::SongPreviewPlayer __get__songPreviewPlayer() const;

 GlobalNamespace::IAnalyticsModel __declspec(property(get=__get__analyticsModel, put=__set__analyticsModel))  _analyticsModel;

constexpr void __set__analyticsModel(GlobalNamespace::IAnalyticsModel value) ;

constexpr GlobalNamespace::IAnalyticsModel __get__analyticsModel() const;

 GlobalNamespace::ILobbyGameStateController __declspec(property(get=__get__lobbyGameStateController, put=__set__lobbyGameStateController))  _lobbyGameStateController;

constexpr void __set__lobbyGameStateController(GlobalNamespace::ILobbyGameStateController value) ;

constexpr GlobalNamespace::ILobbyGameStateController __get__lobbyGameStateController() const;

 GlobalNamespace::XPlatformAuthFeatureFlag __declspec(property(get=__get__xPlatformAuthFeatureFlag, put=__set__xPlatformAuthFeatureFlag))  _xPlatformAuthFeatureFlag;

constexpr void __set__xPlatformAuthFeatureFlag(GlobalNamespace::XPlatformAuthFeatureFlag value) ;

constexpr GlobalNamespace::XPlatformAuthFeatureFlag __get__xPlatformAuthFeatureFlag() const;

 System::Action_1<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator> __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent))  didFinishEvent;

constexpr void __set_didFinishEvent(System::Action_1<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator> value) ;

constexpr System::Action_1<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator> __get_didFinishEvent() const;

 System::Threading::CancellationTokenSource __declspec(property(get=__get__joiningLobbyCancellationTokenSource, put=__set__joiningLobbyCancellationTokenSource))  _joiningLobbyCancellationTokenSource;

constexpr void __set__joiningLobbyCancellationTokenSource(System::Threading::CancellationTokenSource value) ;

constexpr System::Threading::CancellationTokenSource __get__joiningLobbyCancellationTokenSource() const;

 System::Threading::CancellationTokenSource __declspec(property(get=__get__cancellationTokenSource, put=__set__cancellationTokenSource))  _cancellationTokenSource;

constexpr void __set__cancellationTokenSource(System::Threading::CancellationTokenSource value) ;

constexpr System::Threading::CancellationTokenSource __get__cancellationTokenSource() const;

 System::Threading::Tasks::TaskCompletionSource_1<bool> __declspec(property(get=__get__transitionFinishedTaskSource, put=__set__transitionFinishedTaskSource))  _transitionFinishedTaskSource;

constexpr void __set__transitionFinishedTaskSource(System::Threading::Tasks::TaskCompletionSource_1<bool> value) ;

constexpr System::Threading::Tasks::TaskCompletionSource_1<bool> __get__transitionFinishedTaskSource() const;

 System::Threading::Tasks::TaskCompletionSource_1<bool> __declspec(property(get=__get__checkingAvailabilityTaskSource, put=__set__checkingAvailabilityTaskSource))  _checkingAvailabilityTaskSource;

constexpr void __set__checkingAvailabilityTaskSource(System::Threading::Tasks::TaskCompletionSource_1<bool> value) ;

constexpr System::Threading::Tasks::TaskCompletionSource_1<bool> __get__checkingAvailabilityTaskSource() const;

 GlobalNamespace::QuickPlaySetupData __declspec(property(get=__get__quickPlaySetupData, put=__set__quickPlaySetupData))  _quickPlaySetupData;

constexpr void __set__quickPlaySetupData(GlobalNamespace::QuickPlaySetupData value) ;

constexpr GlobalNamespace::QuickPlaySetupData __get__quickPlaySetupData() const;

 GlobalNamespace::SelectMultiplayerLobbyDestination __declspec(property(get=__get__lobbyDestination, put=__set__lobbyDestination))  _lobbyDestination;

constexpr void __set__lobbyDestination(GlobalNamespace::SelectMultiplayerLobbyDestination value) ;

constexpr GlobalNamespace::SelectMultiplayerLobbyDestination __get__lobbyDestination() const;


// Methods

/// @brief Method add_didFinishEvent addr 0x2134f44 size 0xb4 virtual false final false
 void add_didFinishEvent(System::Action_1<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator> value) ;

/// @brief Method remove_didFinishEvent addr 0x21356c0 size 0xb4 virtual false final false
 void remove_didFinishEvent(System::Action_1<GlobalNamespace::MultiplayerModeSelectionFlowCoordinator> value) ;

/// @brief Method Setup addr 0x213e458 size 0x8 virtual false final false
 void Setup(GlobalNamespace::SelectMultiplayerLobbyDestination lobbyDestination) ;

/// @brief Method DidActivate addr 0x213e460 size 0x4d8 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x213e9d0 size 0x404 virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method BackButtonWasPressed addr 0x213edd4 size 0xcc virtual true final false
 void BackButtonWasPressed(HMUI::ViewController topViewController) ;

/// @brief Method TopViewControllerWillChange addr 0x213eea0 size 0x24c virtual true final false
 void TopViewControllerWillChange(HMUI::ViewController oldViewController, HMUI::ViewController newViewController, HMUI::HMUI__ViewController__AnimationType animationType) ;

/// @brief Method TransitionDidStart addr 0x213f0ec size 0x160 virtual true final false
 void TransitionDidStart() ;

/// @brief Method TransitionDidFinish addr 0x213f24c size 0x284 virtual true final false
 void TransitionDidFinish() ;

/// @brief Method HandleMultiplayerLobbyConnectionControllerConnectionSuccessActivateModel addr 0x213fa8c size 0x1c virtual false final false
 void HandleMultiplayerLobbyConnectionControllerConnectionSuccessActivateModel() ;

/// @brief Method HandleMultiplayerLobbyConnectionControllerConnectionSuccess addr 0x213faa8 size 0x4 virtual false final false
 void HandleMultiplayerLobbyConnectionControllerConnectionSuccess() ;

/// @brief Method HandleMultiplayerLobbyConnectionControllerConnectionFailed addr 0x213faac size 0xc4 virtual false final false
 void HandleMultiplayerLobbyConnectionControllerConnectionFailed(GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType connectionType, GlobalNamespace::ConnectionFailedReason reason) ;

/// @brief Method HandleMultiplayerLobbyControllerDidFinish addr 0x213fb70 size 0x5e0 virtual false final false
 void HandleMultiplayerLobbyControllerDidFinish(GlobalNamespace::MultiplayerModeSelectionViewController viewController, GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionViewController__MenuButton menuButton) ;

/// @brief Method HandleGameServerBrowserFlowCoordinatorDidFinish addr 0x2140150 size 0x14 virtual false final false
 void HandleGameServerBrowserFlowCoordinatorDidFinish(GlobalNamespace::GameServerBrowserFlowCoordinator flowCoordinator) ;

/// @brief Method HandleJoiningLobbyViewControllerDidCancel addr 0x2140164 size 0xc4 virtual false final false
 void HandleJoiningLobbyViewControllerDidCancel() ;

/// @brief Method HandleJoinQuickPlayViewControllerDidFinish addr 0x2140228 size 0x3ec virtual false final false
 void HandleJoinQuickPlayViewControllerDidFinish(bool success) ;

/// @brief Method HandleServerCodeEntryViewControllerDidFinish addr 0x2140614 size 0x124 virtual false final false
 void HandleServerCodeEntryViewControllerDidFinish(bool success, ::StringW code) ;

/// @brief Method HandleCreateServerViewControllerDidFinish addr 0x2140738 size 0x3c0 virtual false final false
 void HandleCreateServerViewControllerDidFinish(bool success, GlobalNamespace::CreateServerFormData data) ;

/// @brief Method HandleGameServerLobbyFlowCoordinatorDidFinish addr 0x2140af8 size 0x258 virtual false final false
 void HandleGameServerLobbyFlowCoordinatorDidFinish() ;

/// @brief Method HandleGameServerLobbyFlowCoordinatorWillFinish addr 0x2140d50 size 0x98 virtual false final false
 void HandleGameServerLobbyFlowCoordinatorWillFinish() ;

/// @brief Method HandleConnectedPlayerManagerCreated addr 0x2140de8 size 0x1e8 virtual false final false
 void HandleConnectedPlayerManagerCreated(GlobalNamespace::INetworkPlayerModel networkPlayerModel) ;

/// @brief Method TryShowModeSelection addr 0x213e938 size 0x98 virtual false final false
 void TryShowModeSelection(bool shouldProvideInitialViewControllers) ;

/// @brief Method ResolveAndPresentNextFlowCoordinator addr 0x213f4d0 size 0x94 virtual false final false
 void ResolveAndPresentNextFlowCoordinator() ;

/// @brief Method PresentConnectionErrorDialog addr 0x213f564 size 0x528 virtual false final false
 void PresentConnectionErrorDialog(GlobalNamespace::GlobalNamespace__MultiplayerLobbyConnectionController__LobbyConnectionType connectionType, GlobalNamespace::ConnectionFailedReason reason) ;

/// @brief Method PresentMasterServerUnavailableErrorDialog addr 0x2140fd0 size 0x44c virtual false final false
 void PresentMasterServerUnavailableErrorDialog(GlobalNamespace::MultiplayerUnavailableReason reason, System::Exception exception, System::Nullable_1<int64_t> maintenanceWindowEndTime, ::StringW remoteLocalizedMessage) ;

/// @brief Method ProcessDeeplinkingToLobby addr 0x214141c size 0xf4 virtual false final false
 void ProcessDeeplinkingToLobby() ;

// Ctor Parameters []
explicit MultiplayerModeSelectionFlowCoordinator() ;

/// @brief Method .ctor addr 0x2141510 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ResolveAndPresentNextFlowCoordinator>b__52_0 addr 0x2141518 size 0x170 virtual false final false
 void _ResolveAndPresentNextFlowCoordinator_b__52_0() ;

/// @brief Method <PresentConnectionErrorDialog>b__53_0 addr 0x2141688 size 0x18 virtual false final false
 void _PresentConnectionErrorDialog_b__53_0(int32_t btnId) ;

/// @brief Method <PresentConnectionErrorDialog>b__53_1 addr 0x21416a0 size 0x18 virtual false final false
 void _PresentConnectionErrorDialog_b__53_1(int32_t btnId) ;

/// @brief Method <PresentMasterServerUnavailableErrorDialog>b__54_0 addr 0x21416b8 size 0x20 virtual false final false
 void _PresentMasterServerUnavailableErrorDialog_b__54_0(int32_t btnId) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerModeSelectionFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerModeSelectionFlowCoordinator, "", "MultiplayerModeSelectionFlowCoordinator");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52, "", "MultiplayerModeSelectionFlowCoordinator/<ResolveAndPresentNextFlowCoordinator>d__52");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51, "", "MultiplayerModeSelectionFlowCoordinator/<TryShowModeSelection>d__51");
