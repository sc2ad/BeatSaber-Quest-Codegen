#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace GlobalNamespace {
class ILobbyPlayerData;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmap;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IReadOnlyDictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ILobbyPlayersDataModel;
}
// Type: ::ILobbyPlayersDataModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4501))
// CS Name: ILobbyPlayersDataModel
class CORDL_TYPE ILobbyPlayersDataModel : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::GlobalNamespace::ILobbyPlayerData>
constexpr operator  ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::GlobalNamespace::ILobbyPlayerData>() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData>>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData>>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData>>
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData>>() const noexcept;

~ILobbyPlayersDataModel() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ILobbyPlayersDataModel(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_localUserId))  localUserId;

 ::StringW __declspec(property(get=get_partyOwnerId))  partyOwnerId;


// Methods

/// @brief Method add_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_didChangeEvent(::System::Action_1<::StringW> value) ;

/// @brief Method remove_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_didChangeEvent(::System::Action_1<::StringW> value) ;

/// @brief Method get_localUserId addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_localUserId() ;

/// @brief Method get_partyOwnerId addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_partyOwnerId() ;

/// @brief Method SetLocalPlayerBeatmapLevel addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetLocalPlayerBeatmapLevel(::GlobalNamespace::PreviewDifficultyBeatmap beatmapLevel) ;

/// @brief Method ClearLocalPlayerBeatmapLevel addr 0x0 size 0xffffffffffffffff virtual true final false
 void ClearLocalPlayerBeatmapLevel() ;

/// @brief Method SetLocalPlayerGameplayModifiers addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetLocalPlayerGameplayModifiers(::GlobalNamespace::GameplayModifiers modifiers) ;

/// @brief Method ClearLocalPlayerGameplayModifiers addr 0x0 size 0xffffffffffffffff virtual true final false
 void ClearLocalPlayerGameplayModifiers() ;

/// @brief Method SetLocalPlayerIsActive addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetLocalPlayerIsActive(bool isActive) ;

/// @brief Method SetLocalPlayerIsReady addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetLocalPlayerIsReady(bool isReady) ;

/// @brief Method SetLocalPlayerIsInLobby addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetLocalPlayerIsInLobby(bool isInLobby) ;

/// @brief Method RequestKickPlayer addr 0x0 size 0xffffffffffffffff virtual true final false
 void RequestKickPlayer(::StringW kickedUserId) ;

/// @brief Method ClearData addr 0x0 size 0xffffffffffffffff virtual true final false
 void ClearData() ;

/// @brief Method ClearRecommendations addr 0x0 size 0xffffffffffffffff virtual true final false
 void ClearRecommendations() ;

/// @brief Method Activate addr 0x0 size 0xffffffffffffffff virtual true final false
 void Activate() ;

/// @brief Method Deactivate addr 0x0 size 0xffffffffffffffff virtual true final false
 void Deactivate() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ILobbyPlayersDataModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ILobbyPlayersDataModel, "", "ILobbyPlayersDataModel");
