#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace GlobalNamespace {
class MultiplayerBadgeAwardData;
}
namespace System {
class IComparable;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
// Type: ::MultiplayerPlayerResultsData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5325))
// CS Name: MultiplayerPlayerResultsData
class CORDL_TYPE MultiplayerPlayerResultsData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IComparable
constexpr operator  System::IComparable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MultiplayerPlayerResultsData() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerPlayerResultsData", modifiers: " const&", def_value: None }]
constexpr MultiplayerPlayerResultsData(MultiplayerPlayerResultsData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerPlayerResultsData", modifiers: "&&", def_value: None }]
constexpr MultiplayerPlayerResultsData(MultiplayerPlayerResultsData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerPlayerResultsData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MultiplayerPlayerResultsData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerPlayerResultsData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerPlayerResultsData& operator=(MultiplayerPlayerResultsData&& o) noexcept = default;
  constexpr MultiplayerPlayerResultsData& operator=(MultiplayerPlayerResultsData const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IConnectedPlayer __declspec(property(get=__get_connectedPlayer, put=__set_connectedPlayer))  connectedPlayer;

constexpr void __set_connectedPlayer(GlobalNamespace::IConnectedPlayer value) ;

constexpr GlobalNamespace::IConnectedPlayer __get_connectedPlayer() const;

 GlobalNamespace::MultiplayerLevelCompletionResults __declspec(property(get=__get_multiplayerLevelCompletionResults, put=__set_multiplayerLevelCompletionResults))  multiplayerLevelCompletionResults;

constexpr void __set_multiplayerLevelCompletionResults(GlobalNamespace::MultiplayerLevelCompletionResults value) ;

constexpr GlobalNamespace::MultiplayerLevelCompletionResults __get_multiplayerLevelCompletionResults() const;

 GlobalNamespace::MultiplayerBadgeAwardData __declspec(property(get=__get_badge, put=__set_badge))  badge;

constexpr void __set_badge(GlobalNamespace::MultiplayerBadgeAwardData value) ;

constexpr GlobalNamespace::MultiplayerBadgeAwardData __get_badge() const;


// Methods

// Ctor Parameters [CppParam { name: "connectedPlayer", ty: "GlobalNamespace::IConnectedPlayer", modifiers: "", def_value: None }, CppParam { name: "multiplayerLevelCompletionResults", ty: "GlobalNamespace::MultiplayerLevelCompletionResults", modifiers: "", def_value: None }]
explicit MultiplayerPlayerResultsData(GlobalNamespace::IConnectedPlayer connectedPlayer, GlobalNamespace::MultiplayerLevelCompletionResults multiplayerLevelCompletionResults) ;

/// @brief Method .ctor addr 0x20ffaa4 size 0x2c virtual false final false
 void _ctor(GlobalNamespace::IConnectedPlayer connectedPlayer, GlobalNamespace::MultiplayerLevelCompletionResults multiplayerLevelCompletionResults) ;

/// @brief Method CompareTo addr 0x20ffad0 size 0x1e0 virtual true final true
 int32_t CompareTo(::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerPlayerResultsData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerPlayerResultsData, "", "MultiplayerPlayerResultsData");
