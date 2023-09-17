#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
struct MultiplayerPlayerLayout;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
template<typename T>
class Comparison_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerPlayerPlacement;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MultiplayerPlayerPlacement____c;
}
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5323))
// CS Name: MultiplayerPlayerPlacement::<>c
class CORDL_TYPE ____GlobalNamespace__MultiplayerPlayerPlacement____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____GlobalNamespace__MultiplayerPlayerPlacement____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MultiplayerPlayerPlacement____c", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerPlayerPlacement____c(____GlobalNamespace__MultiplayerPlayerPlacement____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MultiplayerPlayerPlacement____c", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerPlayerPlacement____c(____GlobalNamespace__MultiplayerPlayerPlacement____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MultiplayerPlayerPlacement____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__MultiplayerPlayerPlacement____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MultiplayerPlayerPlacement____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MultiplayerPlayerPlacement____c& operator=(____GlobalNamespace__MultiplayerPlayerPlacement____c&& o) noexcept = default;
  constexpr ____GlobalNamespace__MultiplayerPlayerPlacement____c& operator=(____GlobalNamespace__MultiplayerPlayerPlacement____c const& o) noexcept = default;
                


// Fields

static ::GlobalNamespace::____GlobalNamespace__MultiplayerPlayerPlacement____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::GlobalNamespace::____GlobalNamespace__MultiplayerPlayerPlacement____c value) ;

static ::GlobalNamespace::____GlobalNamespace__MultiplayerPlayerPlacement____c __get___9() ;

static ::System::Comparison_1<::GlobalNamespace::IConnectedPlayer> __declspec(property(get=__get___9__4_0, put=__set___9__4_0))  __9__4_0;

static void __set___9__4_0(::System::Comparison_1<::GlobalNamespace::IConnectedPlayer> value) ;

static ::System::Comparison_1<::GlobalNamespace::IConnectedPlayer> __get___9__4_0() ;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MultiplayerPlayerPlacement____c() ;

/// @brief Method .ctor addr 0x20ff974 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SortPlayers>b__4_0 addr 0x20ff97c size 0x128 virtual false final false
 int32_t _SortPlayers_b__4_0(::GlobalNamespace::IConnectedPlayer p1, ::GlobalNamespace::IConnectedPlayer p2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplayerPlayerPlacement
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5324))
// CS Name: MultiplayerPlayerPlacement
class CORDL_TYPE MultiplayerPlayerPlacement : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = ::GlobalNamespace::____GlobalNamespace__MultiplayerPlayerPlacement____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MultiplayerPlayerPlacement() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerPlayerPlacement", modifiers: " const&", def_value: None }]
constexpr MultiplayerPlayerPlacement(MultiplayerPlayerPlacement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerPlayerPlacement", modifiers: "&&", def_value: None }]
constexpr MultiplayerPlayerPlacement(MultiplayerPlayerPlacement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerPlayerPlacement(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MultiplayerPlayerPlacement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerPlayerPlacement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerPlayerPlacement& operator=(MultiplayerPlayerPlacement&& o) noexcept = default;
  constexpr MultiplayerPlayerPlacement& operator=(MultiplayerPlayerPlacement const& o) noexcept = default;
                


// Methods

/// @brief Method GetPlayerWorldPosition addr 0x20ff3d0 size 0x148 virtual false final false
static ::UnityEngine::Vector3 GetPlayerWorldPosition(float_t outerCircleRadius, float_t outerCirclePositionAngle, ::GlobalNamespace::MultiplayerPlayerLayout layout) ;

/// @brief Method GetOuterCirclePositionAngleForPlayer addr 0x20ff518 size 0x10 virtual false final false
static float_t GetOuterCirclePositionAngleForPlayer(int32_t playerIndex, int32_t localPlayerIndex, float_t angleBetweenPlayers) ;

/// @brief Method GetOuterCircleRadius addr 0x20ff528 size 0x44 virtual false final false
static float_t GetOuterCircleRadius(float_t angleBetweenPlayers, float_t innerCircleRadius) ;

/// @brief Method GetAngleBetweenPlayersWithEvenAdjustment addr 0x20ff56c size 0x20 virtual false final false
static float_t GetAngleBetweenPlayersWithEvenAdjustment(int32_t numberOfPlayers, ::GlobalNamespace::MultiplayerPlayerLayout layout) ;

/// @brief Method SortPlayers addr 0x20ff58c size 0xfc virtual false final false
static void SortPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer> players) ;

/// @brief Method GetLocalPlayerIndex addr 0x20ff688 size 0x288 virtual false final false
static int32_t GetLocalPlayerIndex(::System::Collections::Generic::IList_1<::GlobalNamespace::IConnectedPlayer> otherPlayers, ::GlobalNamespace::IConnectedPlayer localPlayer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerPlayerPlacement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerPlayerPlacement, "", "MultiplayerPlayerPlacement");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MultiplayerPlayerPlacement____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MultiplayerPlayerPlacement____c, "", "MultiplayerPlayerPlacement/<>c");
