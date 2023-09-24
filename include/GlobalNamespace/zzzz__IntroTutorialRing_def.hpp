#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
namespace UnityEngine {
class Collider;
}
namespace GlobalNamespace {
struct SaberType;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class CanvasGroup;
}
// Forward declare root types
namespace GlobalNamespace {
class IntroTutorialRing;
}
// Type: ::IntroTutorialRing
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5427))
// CS Name: IntroTutorialRing
class CORDL_TYPE IntroTutorialRing : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~IntroTutorialRing() = default;

// Ctor Parameters [CppParam { name: "", ty: "IntroTutorialRing", modifiers: " const&", def_value: None }]
constexpr IntroTutorialRing(IntroTutorialRing const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IntroTutorialRing", modifiers: "&&", def_value: None }]
constexpr IntroTutorialRing(IntroTutorialRing&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IntroTutorialRing(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr IntroTutorialRing& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IntroTutorialRing& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IntroTutorialRing& operator=(IntroTutorialRing&& o) noexcept = default;
  constexpr IntroTutorialRing& operator=(IntroTutorialRing const& o) noexcept = default;
                


// Fields

 ::ArrayW<UnityEngine::UI::Image> __declspec(property(get=__get__progressImages, put=__set__progressImages))  _progressImages;

constexpr void __set__progressImages(::ArrayW<UnityEngine::UI::Image> value) ;

constexpr ::ArrayW<UnityEngine::UI::Image> __get__progressImages() const;

 GlobalNamespace::SaberType __declspec(property(get=__get__saberType, put=__set__saberType))  _saberType;

constexpr void __set__saberType(GlobalNamespace::SaberType value) ;

constexpr GlobalNamespace::SaberType __get__saberType() const;

 UnityEngine::ParticleSystem __declspec(property(get=__get__particleSystem, put=__set__particleSystem))  _particleSystem;

constexpr void __set__particleSystem(UnityEngine::ParticleSystem value) ;

constexpr UnityEngine::ParticleSystem __get__particleSystem() const;

 UnityEngine::CanvasGroup __declspec(property(get=__get__canvasGroup, put=__set__canvasGroup))  _canvasGroup;

constexpr void __set__canvasGroup(UnityEngine::CanvasGroup value) ;

constexpr UnityEngine::CanvasGroup __get__canvasGroup() const;

 float_t __declspec(property(get=__get__activationDuration, put=__set__activationDuration))  _activationDuration;

constexpr void __set__activationDuration(float_t value) ;

constexpr float_t __get__activationDuration() const;

 ::ArrayW<UnityEngine::UI::Image> __declspec(property(get=__get__ringGLowImages, put=__set__ringGLowImages))  _ringGLowImages;

constexpr void __set__ringGLowImages(::ArrayW<UnityEngine::UI::Image> value) ;

constexpr ::ArrayW<UnityEngine::UI::Image> __get__ringGLowImages() const;

 GlobalNamespace::ColorManager __declspec(property(get=__get__colorManager, put=__set__colorManager))  _colorManager;

constexpr void __set__colorManager(GlobalNamespace::ColorManager value) ;

constexpr GlobalNamespace::ColorManager __get__colorManager() const;

 bool __declspec(property(get=__get__highlighted, put=__set__highlighted))  _highlighted;

constexpr void __set__highlighted(bool value) ;

constexpr bool __get__highlighted() const;

 float_t __declspec(property(get=__get__emitNextParticleTimer, put=__set__emitNextParticleTimer))  _emitNextParticleTimer;

constexpr void __set__emitNextParticleTimer(float_t value) ;

constexpr float_t __get__emitNextParticleTimer() const;

 float_t __declspec(property(get=__get__activationProgress, put=__set__activationProgress))  _activationProgress;

constexpr void __set__activationProgress(float_t value) ;

constexpr float_t __get__activationProgress() const;

 System::Collections::Generic::HashSet_1<GlobalNamespace::SaberType> __declspec(property(get=__get__sabersInside, put=__set__sabersInside))  _sabersInside;

constexpr void __set__sabersInside(System::Collections::Generic::HashSet_1<GlobalNamespace::SaberType> value) ;

constexpr System::Collections::Generic::HashSet_1<GlobalNamespace::SaberType> __get__sabersInside() const;

 bool __declspec(property(get=__get__sabersInsideAfterOnEnable, put=__set__sabersInsideAfterOnEnable))  _sabersInsideAfterOnEnable;

constexpr void __set__sabersInsideAfterOnEnable(bool value) ;

constexpr bool __get__sabersInsideAfterOnEnable() const;


// Properties

 float_t __declspec(property(put=set_alpha))  alpha;

 bool __declspec(property(get=get_fullyActivated))  fullyActivated;

 GlobalNamespace::SaberType __declspec(property(get=get_saberType, put=set_saberType))  saberType;


// Methods

/// @brief Method set_alpha addr 0x2111504 size 0x1c virtual false final false
 void set_alpha(float_t value) ;

/// @brief Method get_fullyActivated addr 0x21112c0 size 0x24 virtual false final false
 bool get_fullyActivated() ;

/// @brief Method get_saberType addr 0x21116b0 size 0x8 virtual false final false
 GlobalNamespace::SaberType get_saberType() ;

/// @brief Method set_saberType addr 0x21116b8 size 0x8 virtual false final false
 void set_saberType(GlobalNamespace::SaberType value) ;

/// @brief Method Start addr 0x21116c0 size 0x8c virtual false final false
 void Start() ;

/// @brief Method OnEnable addr 0x211174c size 0x50 virtual false final false
 void OnEnable() ;

/// @brief Method Update addr 0x211179c size 0x11c virtual false final false
 void Update() ;

/// @brief Method SetProgressImagesfillAmount addr 0x21118b8 size 0x70 virtual false final false
 void SetProgressImagesfillAmount(float_t fillAmount) ;

/// @brief Method OnTriggerEnter addr 0x2111928 size 0x108 virtual false final false
 void OnTriggerEnter(UnityEngine::Collider other) ;

/// @brief Method OnTriggerExit addr 0x2111a30 size 0x108 virtual false final false
 void OnTriggerExit(UnityEngine::Collider other) ;

/// @brief Method OnTriggerStay addr 0x2111b38 size 0x108 virtual false final false
 void OnTriggerStay(UnityEngine::Collider other) ;

static GlobalNamespace::IntroTutorialRing New_ctor() ;

/// @brief Method .ctor addr 0x2111c40 size 0x88 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IntroTutorialRing);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IntroTutorialRing, "", "IntroTutorialRing");
