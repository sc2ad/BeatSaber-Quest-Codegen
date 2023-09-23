#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class Animator;
}
namespace GlobalNamespace {
class IScoreController;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Image;
}
// Forward declare root types
namespace GlobalNamespace {
class ScoreMultiplierUIController;
}
// Type: ::ScoreMultiplierUIController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5143))
// CS Name: ScoreMultiplierUIController
class CORDL_TYPE ScoreMultiplierUIController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~ScoreMultiplierUIController() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScoreMultiplierUIController", modifiers: " const&", def_value: None }]
constexpr ScoreMultiplierUIController(ScoreMultiplierUIController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScoreMultiplierUIController", modifiers: "&&", def_value: None }]
constexpr ScoreMultiplierUIController(ScoreMultiplierUIController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScoreMultiplierUIController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ScoreMultiplierUIController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScoreMultiplierUIController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScoreMultiplierUIController& operator=(ScoreMultiplierUIController&& o) noexcept = default;
  constexpr ScoreMultiplierUIController& operator=(ScoreMultiplierUIController const& o) noexcept = default;
                


// Fields

 ::ArrayW<TMPro::TextMeshProUGUI> __declspec(property(get=__get__multiplierTexts, put=__set__multiplierTexts))  _multiplierTexts;

constexpr void __set__multiplierTexts(::ArrayW<TMPro::TextMeshProUGUI> value) ;

constexpr ::ArrayW<TMPro::TextMeshProUGUI> __get__multiplierTexts() const;

 UnityEngine::UI::Image __declspec(property(get=__get__multiplierProgressImage, put=__set__multiplierProgressImage))  _multiplierProgressImage;

constexpr void __set__multiplierProgressImage(UnityEngine::UI::Image value) ;

constexpr UnityEngine::UI::Image __get__multiplierProgressImage() const;

 UnityEngine::Animator __declspec(property(get=__get__multiplierAnimator, put=__set__multiplierAnimator))  _multiplierAnimator;

constexpr void __set__multiplierAnimator(UnityEngine::Animator value) ;

constexpr UnityEngine::Animator __get__multiplierAnimator() const;

 GlobalNamespace::IScoreController __declspec(property(get=__get__scoreController, put=__set__scoreController))  _scoreController;

constexpr void __set__scoreController(GlobalNamespace::IScoreController value) ;

constexpr GlobalNamespace::IScoreController __get__scoreController() const;

 int32_t __declspec(property(get=__get__prevMultiplier, put=__set__prevMultiplier))  _prevMultiplier;

constexpr void __set__prevMultiplier(int32_t value) ;

constexpr int32_t __get__prevMultiplier() const;

 int32_t __declspec(property(get=__get__multiplierIncreasedTriggerId, put=__set__multiplierIncreasedTriggerId))  _multiplierIncreasedTriggerId;

constexpr void __set__multiplierIncreasedTriggerId(int32_t value) ;

constexpr int32_t __get__multiplierIncreasedTriggerId() const;

 float_t __declspec(property(get=__get__progressTarget, put=__set__progressTarget))  _progressTarget;

constexpr void __set__progressTarget(float_t value) ;

constexpr float_t __get__progressTarget() const;


// Methods

/// @brief Method Start addr 0x22772f4 size 0xe4 virtual false final false
 void Start() ;

/// @brief Method OnEnable addr 0x2277574 size 0x4 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2277578 size 0x4 virtual false final false
 void OnDisable() ;

/// @brief Method RegisterForEvents addr 0x22773d8 size 0x19c virtual false final false
 void RegisterForEvents() ;

/// @brief Method UnregisterFromEvents addr 0x227757c size 0x108 virtual false final false
 void UnregisterFromEvents() ;

/// @brief Method Update addr 0x2277684 size 0x80 virtual false final false
 void Update() ;

/// @brief Method HandleMultiplierDidChange addr 0x2277704 size 0xcc virtual false final false
 void HandleMultiplierDidChange(int32_t multiplier, float_t progress) ;

// Ctor Parameters []
explicit ScoreMultiplierUIController() ;

/// @brief Method .ctor addr 0x22777d0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ScoreMultiplierUIController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScoreMultiplierUIController, "", "ScoreMultiplierUIController");
