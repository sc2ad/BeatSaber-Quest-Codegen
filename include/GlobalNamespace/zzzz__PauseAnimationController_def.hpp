#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine {
class Animator;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class PauseAnimationController;
}
// Type: ::PauseAnimationController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5162))
// CS Name: PauseAnimationController
class CORDL_TYPE PauseAnimationController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PauseAnimationController() = default;

// Ctor Parameters [CppParam { name: "", ty: "PauseAnimationController", modifiers: " const&", def_value: None }]
constexpr PauseAnimationController(PauseAnimationController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PauseAnimationController", modifiers: "&&", def_value: None }]
constexpr PauseAnimationController(PauseAnimationController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PauseAnimationController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr PauseAnimationController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PauseAnimationController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PauseAnimationController& operator=(PauseAnimationController&& o) noexcept = default;
  constexpr PauseAnimationController& operator=(PauseAnimationController const& o) noexcept = default;
                


// Fields

 UnityEngine::Animator __declspec(property(get=__get__animator, put=__set__animator))  _animator;

constexpr void __set__animator(UnityEngine::Animator value) ;

constexpr UnityEngine::Animator __get__animator() const;

 System::Action __declspec(property(get=__get_resumeFromPauseAnimationDidFinishEvent, put=__set_resumeFromPauseAnimationDidFinishEvent))  resumeFromPauseAnimationDidFinishEvent;

constexpr void __set_resumeFromPauseAnimationDidFinishEvent(System::Action value) ;

constexpr System::Action __get_resumeFromPauseAnimationDidFinishEvent() const;


// Methods

/// @brief Method add_resumeFromPauseAnimationDidFinishEvent addr 0x20d1780 size 0x9c virtual false final false
 void add_resumeFromPauseAnimationDidFinishEvent(System::Action value) ;

/// @brief Method remove_resumeFromPauseAnimationDidFinishEvent addr 0x20d181c size 0x9c virtual false final false
 void remove_resumeFromPauseAnimationDidFinishEvent(System::Action value) ;

/// @brief Method Awake addr 0x20d18b8 size 0x30 virtual false final false
 void Awake() ;

/// @brief Method StartEnterPauseAnimation addr 0x20d18e8 size 0x78 virtual false final false
 void StartEnterPauseAnimation() ;

/// @brief Method StartResumeFromPauseAnimation addr 0x20d1960 size 0x78 virtual false final false
 void StartResumeFromPauseAnimation() ;

/// @brief Method EnterPauseAnimationDidFinish addr 0x20d19d8 size 0x30 virtual false final false
 void EnterPauseAnimationDidFinish() ;

/// @brief Method ResumeFromPauseAnimationDidFinish addr 0x20d1a08 size 0x50 virtual false final false
 void ResumeFromPauseAnimationDidFinish() ;

// Ctor Parameters []
explicit PauseAnimationController() ;

/// @brief Method .ctor addr 0x20d1a58 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PauseAnimationController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PauseAnimationController, "", "PauseAnimationController");
