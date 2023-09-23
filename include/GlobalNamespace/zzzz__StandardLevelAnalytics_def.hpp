#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelAnalytics;
}
// Type: ::StandardLevelAnalytics
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4007))
// CS Name: StandardLevelAnalytics
class CORDL_TYPE StandardLevelAnalytics : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~StandardLevelAnalytics() = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelAnalytics", modifiers: " const&", def_value: None }]
constexpr StandardLevelAnalytics(StandardLevelAnalytics const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelAnalytics", modifiers: "&&", def_value: None }]
constexpr StandardLevelAnalytics(StandardLevelAnalytics&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StandardLevelAnalytics(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr StandardLevelAnalytics& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StandardLevelAnalytics& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StandardLevelAnalytics& operator=(StandardLevelAnalytics&& o) noexcept = default;
  constexpr StandardLevelAnalytics& operator=(StandardLevelAnalytics const& o) noexcept = default;
                


// Fields

 GlobalNamespace::StandardLevelScenesTransitionSetupDataSO __declspec(property(get=__get__standardLevelScenesTransitionSetupData, put=__set__standardLevelScenesTransitionSetupData))  _standardLevelScenesTransitionSetupData;

constexpr void __set__standardLevelScenesTransitionSetupData(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::StandardLevelScenesTransitionSetupDataSO __get__standardLevelScenesTransitionSetupData() const;

 GlobalNamespace::IAnalyticsModel __declspec(property(get=__get__analyticsModel, put=__set__analyticsModel))  _analyticsModel;

constexpr void __set__analyticsModel(GlobalNamespace::IAnalyticsModel value) ;

constexpr GlobalNamespace::IAnalyticsModel __get__analyticsModel() const;


// Methods

/// @brief Method Start addr 0x20b3250 size 0x8c virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20b32dc size 0x8c virtual false final false
 void OnDestroy() ;

/// @brief Method HandleStandardLevelDidFinishEvent addr 0x20b3368 size 0x644 virtual false final false
 void HandleStandardLevelDidFinishEvent(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO standardLevelScenesTransitionSetupData, GlobalNamespace::LevelCompletionResults levelCompletionResults) ;

// Ctor Parameters []
explicit StandardLevelAnalytics() ;

/// @brief Method .ctor addr 0x20b39ac size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::StandardLevelAnalytics);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelAnalytics, "", "StandardLevelAnalytics");
