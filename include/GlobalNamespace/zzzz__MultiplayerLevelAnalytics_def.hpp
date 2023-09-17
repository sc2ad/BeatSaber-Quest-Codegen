#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
class MultiplayerResultsData;
}
namespace GlobalNamespace {
class MultiplayerLevelScenesTransitionSetupDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLevelAnalytics;
}
// Type: ::MultiplayerLevelAnalytics
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4003))
// CS Name: MultiplayerLevelAnalytics
class CORDL_TYPE MultiplayerLevelAnalytics : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MultiplayerLevelAnalytics() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelAnalytics", modifiers: " const&", def_value: None }]
constexpr MultiplayerLevelAnalytics(MultiplayerLevelAnalytics const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelAnalytics", modifiers: "&&", def_value: None }]
constexpr MultiplayerLevelAnalytics(MultiplayerLevelAnalytics&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLevelAnalytics(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerLevelAnalytics& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLevelAnalytics& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLevelAnalytics& operator=(MultiplayerLevelAnalytics&& o) noexcept = default;
  constexpr MultiplayerLevelAnalytics& operator=(MultiplayerLevelAnalytics const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO __declspec(property(get=__get__multiplayerLevelScenesTransitionSetupData, put=__set__multiplayerLevelScenesTransitionSetupData))  _multiplayerLevelScenesTransitionSetupData;

constexpr void __set__multiplayerLevelScenesTransitionSetupData(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO value) ;

constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO __get__multiplayerLevelScenesTransitionSetupData() const;

 ::GlobalNamespace::IAnalyticsModel __declspec(property(get=__get__analyticsModel, put=__set__analyticsModel))  _analyticsModel;

constexpr void __set__analyticsModel(::GlobalNamespace::IAnalyticsModel value) ;

constexpr ::GlobalNamespace::IAnalyticsModel __get__analyticsModel() const;


// Methods

/// @brief Method Start addr 0x20b1d78 size 0x8c virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20b1e04 size 0x8c virtual false final false
 void OnDestroy() ;

/// @brief Method HandleMultiplayerLevelDidFinish addr 0x20b1e90 size 0x6a4 virtual false final false
 void HandleMultiplayerLevelDidFinish(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO multiplayerLevelScenesTransitionSetupData, ::GlobalNamespace::MultiplayerResultsData multiplayerResultsData) ;

// Ctor Parameters []
explicit MultiplayerLevelAnalytics() ;

/// @brief Method .ctor addr 0x20b2534 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLevelAnalytics);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLevelAnalytics, "", "MultiplayerLevelAnalytics");
