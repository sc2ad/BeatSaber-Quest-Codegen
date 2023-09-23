#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class Signal;
}
namespace GlobalNamespace {
class AchievementSO;
}
namespace GlobalNamespace {
class AchievementsModelSO;
}
// Forward declare root types
namespace GlobalNamespace {
class FinishTutorialAchievementHandler;
}
// Type: ::FinishTutorialAchievementHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4113))
// CS Name: FinishTutorialAchievementHandler
class CORDL_TYPE FinishTutorialAchievementHandler : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~FinishTutorialAchievementHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "FinishTutorialAchievementHandler", modifiers: " const&", def_value: None }]
constexpr FinishTutorialAchievementHandler(FinishTutorialAchievementHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FinishTutorialAchievementHandler", modifiers: "&&", def_value: None }]
constexpr FinishTutorialAchievementHandler(FinishTutorialAchievementHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FinishTutorialAchievementHandler(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr FinishTutorialAchievementHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FinishTutorialAchievementHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FinishTutorialAchievementHandler& operator=(FinishTutorialAchievementHandler&& o) noexcept = default;
  constexpr FinishTutorialAchievementHandler& operator=(FinishTutorialAchievementHandler const& o) noexcept = default;
                


// Fields

 GlobalNamespace::AchievementsModelSO __declspec(property(get=__get__achievementsModel, put=__set__achievementsModel))  _achievementsModel;

constexpr void __set__achievementsModel(GlobalNamespace::AchievementsModelSO value) ;

constexpr GlobalNamespace::AchievementsModelSO __get__achievementsModel() const;

 GlobalNamespace::Signal __declspec(property(get=__get__tutorialFinishedSignal, put=__set__tutorialFinishedSignal))  _tutorialFinishedSignal;

constexpr void __set__tutorialFinishedSignal(GlobalNamespace::Signal value) ;

constexpr GlobalNamespace::Signal __get__tutorialFinishedSignal() const;

 GlobalNamespace::AchievementSO __declspec(property(get=__get__finishTutorialAchievement, put=__set__finishTutorialAchievement))  _finishTutorialAchievement;

constexpr void __set__finishTutorialAchievement(GlobalNamespace::AchievementSO value) ;

constexpr GlobalNamespace::AchievementSO __get__finishTutorialAchievement() const;


// Methods

/// @brief Method Start addr 0x20c7080 size 0x8c virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20c710c size 0x8c virtual false final false
 void OnDestroy() ;

/// @brief Method HandleTutorialFinished addr 0x20c7198 size 0x20 virtual false final false
 void HandleTutorialFinished() ;

// Ctor Parameters []
explicit FinishTutorialAchievementHandler() ;

/// @brief Method .ctor addr 0x20c71b8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::FinishTutorialAchievementHandler);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FinishTutorialAchievementHandler, "", "FinishTutorialAchievementHandler");
