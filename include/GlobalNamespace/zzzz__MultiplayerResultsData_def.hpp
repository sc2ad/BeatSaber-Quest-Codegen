#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class MultiplayerBadgesProvider;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerResultsData;
}
// Type: ::MultiplayerResultsData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5332))
// CS Name: MultiplayerResultsData
class CORDL_TYPE MultiplayerResultsData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MultiplayerResultsData() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsData", modifiers: " const&", def_value: None }]
constexpr MultiplayerResultsData(MultiplayerResultsData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsData", modifiers: "&&", def_value: None }]
constexpr MultiplayerResultsData(MultiplayerResultsData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerResultsData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MultiplayerResultsData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerResultsData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerResultsData& operator=(MultiplayerResultsData&& o) noexcept = default;
  constexpr MultiplayerResultsData& operator=(MultiplayerResultsData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__gameId, put=__set__gameId))  _gameId;

constexpr void __set__gameId(::StringW value) ;

constexpr ::StringW __get__gameId() const;

 ::GlobalNamespace::MultiplayerPlayerResultsData __declspec(property(get=__get__localPlayerResultData, put=__set__localPlayerResultData))  _localPlayerResultData;

constexpr void __set__localPlayerResultData(::GlobalNamespace::MultiplayerPlayerResultsData value) ;

constexpr ::GlobalNamespace::MultiplayerPlayerResultsData __get__localPlayerResultData() const;

 ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData> __declspec(property(get=__get__otherPlayersData, put=__set__otherPlayersData))  _otherPlayersData;

constexpr void __set__otherPlayersData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData> value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData> __get__otherPlayersData() const;

 ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData> __declspec(property(get=__get__allPlayersSortedData, put=__set__allPlayersSortedData))  _allPlayersSortedData;

constexpr void __set__allPlayersSortedData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData> value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData> __get__allPlayersSortedData() const;


// Properties

 ::StringW __declspec(property(get=get_gameId))  gameId;

 ::GlobalNamespace::MultiplayerPlayerResultsData __declspec(property(get=get_localPlayerResultData))  localPlayerResultData;

 ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData> __declspec(property(get=get_otherPlayersData))  otherPlayersData;

 ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData> __declspec(property(get=get_allPlayersSortedData))  allPlayersSortedData;


// Methods

/// @brief Method get_gameId addr 0x2100f2c size 0x8 virtual false final false
 ::StringW get_gameId() ;

/// @brief Method get_localPlayerResultData addr 0x2100f34 size 0x8 virtual false final false
 ::GlobalNamespace::MultiplayerPlayerResultsData get_localPlayerResultData() ;

/// @brief Method get_otherPlayersData addr 0x2100f3c size 0x8 virtual false final false
 ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData> get_otherPlayersData() ;

/// @brief Method get_allPlayersSortedData addr 0x2100f44 size 0x8 virtual false final false
 ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData> get_allPlayersSortedData() ;

// Ctor Parameters [CppParam { name: "gameId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "localPlayerResultData", ty: "::GlobalNamespace::MultiplayerLevelCompletionResults", modifiers: "", def_value: None }, CppParam { name: "otherPlayersResultData", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults>", modifiers: "", def_value: None }, CppParam { name: "badgesProvider", ty: "::GlobalNamespace::MultiplayerBadgesProvider", modifiers: "", def_value: None }, CppParam { name: "multiplayerSessionManager", ty: "::GlobalNamespace::IMultiplayerSessionManager", modifiers: "", def_value: None }]
explicit MultiplayerResultsData(::StringW gameId, ::GlobalNamespace::MultiplayerLevelCompletionResults localPlayerResultData, ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults> otherPlayersResultData, ::GlobalNamespace::MultiplayerBadgesProvider badgesProvider, ::GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager) ;

/// @brief Method .ctor addr 0x20f2abc size 0x54c virtual false final false
 void _ctor(::StringW gameId, ::GlobalNamespace::MultiplayerLevelCompletionResults localPlayerResultData, ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults> otherPlayersResultData, ::GlobalNamespace::MultiplayerBadgesProvider badgesProvider, ::GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerResultsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerResultsData, "", "MultiplayerResultsData");
