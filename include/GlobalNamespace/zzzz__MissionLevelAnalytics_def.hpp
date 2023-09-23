#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
class MissionLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class MissionCompletionResults;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionLevelAnalytics;
}
// Type: ::MissionLevelAnalytics
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4002))
// CS Name: MissionLevelAnalytics
class CORDL_TYPE MissionLevelAnalytics : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MissionLevelAnalytics() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionLevelAnalytics", modifiers: " const&", def_value: None }]
constexpr MissionLevelAnalytics(MissionLevelAnalytics const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionLevelAnalytics", modifiers: "&&", def_value: None }]
constexpr MissionLevelAnalytics(MissionLevelAnalytics&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionLevelAnalytics(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MissionLevelAnalytics& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionLevelAnalytics& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionLevelAnalytics& operator=(MissionLevelAnalytics&& o) noexcept = default;
  constexpr MissionLevelAnalytics& operator=(MissionLevelAnalytics const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MissionLevelScenesTransitionSetupDataSO __declspec(property(get=__get__missionLevelScenesTransitionSetupData, put=__set__missionLevelScenesTransitionSetupData))  _missionLevelScenesTransitionSetupData;

constexpr void __set__missionLevelScenesTransitionSetupData(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::MissionLevelScenesTransitionSetupDataSO __get__missionLevelScenesTransitionSetupData() const;

 GlobalNamespace::IAnalyticsModel __declspec(property(get=__get__analyticsModel, put=__set__analyticsModel))  _analyticsModel;

constexpr void __set__analyticsModel(GlobalNamespace::IAnalyticsModel value) ;

constexpr GlobalNamespace::IAnalyticsModel __get__analyticsModel() const;


// Methods

/// @brief Method Start addr 0x20b1a3c size 0x8c virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20b1ac8 size 0x8c virtual false final false
 void OnDestroy() ;

/// @brief Method HandleMissionLevelDidFinishEvent addr 0x20b1b54 size 0x21c virtual false final false
 void HandleMissionLevelDidFinishEvent(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO missionLevelScenesTransitionSetupData, GlobalNamespace::MissionCompletionResults missionCompletionResults) ;

// Ctor Parameters []
explicit MissionLevelAnalytics() ;

/// @brief Method .ctor addr 0x20b1d70 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MissionLevelAnalytics);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionLevelAnalytics, "", "MissionLevelAnalytics");
