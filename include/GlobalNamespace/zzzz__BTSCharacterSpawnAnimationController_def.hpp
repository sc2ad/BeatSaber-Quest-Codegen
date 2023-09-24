#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace GlobalNamespace {
class MaterialPropertyBlockFloatAnimator;
}
namespace GlobalNamespace {
class MaterialPropertyBlockColorSetter;
}
namespace UnityEngine::Timeline {
class ActivationTrack;
}
namespace GlobalNamespace {
class JumpReceiver;
}
namespace GlobalNamespace {
class SongSpeedData;
}
namespace GlobalNamespace {
class BTSCharacter;
}
// Forward declare root types
namespace GlobalNamespace {
class BTSCharacterSpawnAnimationController;
}
// Type: ::BTSCharacterSpawnAnimationController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3955))
// CS Name: BTSCharacterSpawnAnimationController
class CORDL_TYPE BTSCharacterSpawnAnimationController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~BTSCharacterSpawnAnimationController() = default;

// Ctor Parameters [CppParam { name: "", ty: "BTSCharacterSpawnAnimationController", modifiers: " const&", def_value: None }]
constexpr BTSCharacterSpawnAnimationController(BTSCharacterSpawnAnimationController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BTSCharacterSpawnAnimationController", modifiers: "&&", def_value: None }]
constexpr BTSCharacterSpawnAnimationController(BTSCharacterSpawnAnimationController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BTSCharacterSpawnAnimationController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BTSCharacterSpawnAnimationController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BTSCharacterSpawnAnimationController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BTSCharacterSpawnAnimationController& operator=(BTSCharacterSpawnAnimationController&& o) noexcept = default;
  constexpr BTSCharacterSpawnAnimationController& operator=(BTSCharacterSpawnAnimationController const& o) noexcept = default;
                


// Fields

 UnityEngine::Playables::PlayableDirector __declspec(property(get=__get__spawnCharacterPlayableDirector, put=__set__spawnCharacterPlayableDirector))  _spawnCharacterPlayableDirector;

constexpr void __set__spawnCharacterPlayableDirector(UnityEngine::Playables::PlayableDirector value) ;

constexpr UnityEngine::Playables::PlayableDirector __get__spawnCharacterPlayableDirector() const;

 GlobalNamespace::JumpReceiver __declspec(property(get=__get__jumpReceiver, put=__set__jumpReceiver))  _jumpReceiver;

constexpr void __set__jumpReceiver(GlobalNamespace::JumpReceiver value) ;

constexpr GlobalNamespace::JumpReceiver __get__jumpReceiver() const;

 float_t __declspec(property(get=__get__appearAnimationEndTime, put=__set__appearAnimationEndTime))  _appearAnimationEndTime;

constexpr void __set__appearAnimationEndTime(float_t value) ;

constexpr float_t __get__appearAnimationEndTime() const;

 float_t __declspec(property(get=__get__disappearAnimationStartTime, put=__set__disappearAnimationStartTime))  _disappearAnimationStartTime;

constexpr void __set__disappearAnimationStartTime(float_t value) ;

constexpr float_t __get__disappearAnimationStartTime() const;

 GlobalNamespace::MaterialPropertyBlockColorSetter __declspec(property(get=__get__rimLightColorSetter, put=__set__rimLightColorSetter))  _rimLightColorSetter;

constexpr void __set__rimLightColorSetter(GlobalNamespace::MaterialPropertyBlockColorSetter value) ;

constexpr GlobalNamespace::MaterialPropertyBlockColorSetter __get__rimLightColorSetter() const;

 GlobalNamespace::MaterialPropertyBlockFloatAnimator __declspec(property(get=__get__rimLightIntensityAnimator, put=__set__rimLightIntensityAnimator))  _rimLightIntensityAnimator;

constexpr void __set__rimLightIntensityAnimator(GlobalNamespace::MaterialPropertyBlockFloatAnimator value) ;

constexpr GlobalNamespace::MaterialPropertyBlockFloatAnimator __get__rimLightIntensityAnimator() const;

 GlobalNamespace::MaterialPropertyBlockFloatAnimator __declspec(property(get=__get__rimLightEdgeStartAnimator, put=__set__rimLightEdgeStartAnimator))  _rimLightEdgeStartAnimator;

constexpr void __set__rimLightEdgeStartAnimator(GlobalNamespace::MaterialPropertyBlockFloatAnimator value) ;

constexpr GlobalNamespace::MaterialPropertyBlockFloatAnimator __get__rimLightEdgeStartAnimator() const;

 GlobalNamespace::SongSpeedData __declspec(property(get=__get__songSpeedData, put=__set__songSpeedData))  _songSpeedData;

constexpr void __set__songSpeedData(GlobalNamespace::SongSpeedData value) ;

constexpr GlobalNamespace::SongSpeedData __get__songSpeedData() const;

/// @brief Field kCharacterActivationStreamName offset 0
static constexpr ::ConstString  kCharacterActivationStreamName{u"CharacterActivationTrack"};

 UnityEngine::Timeline::ActivationTrack __declspec(property(get=__get__characterActivationTrack, put=__set__characterActivationTrack))  _characterActivationTrack;

constexpr void __set__characterActivationTrack(UnityEngine::Timeline::ActivationTrack value) ;

constexpr UnityEngine::Timeline::ActivationTrack __get__characterActivationTrack() const;

 GlobalNamespace::BTSCharacter __declspec(property(get=__get__currentBtsCharacter, put=__set__currentBtsCharacter))  _currentBtsCharacter;

constexpr void __set__currentBtsCharacter(GlobalNamespace::BTSCharacter value) ;

constexpr GlobalNamespace::BTSCharacter __get__currentBtsCharacter() const;

 float_t __declspec(property(get=__get__defaultSpawnCharacterDuration, put=__set__defaultSpawnCharacterDuration))  _defaultSpawnCharacterDuration;

constexpr void __set__defaultSpawnCharacterDuration(float_t value) ;

constexpr float_t __get__defaultSpawnCharacterDuration() const;

 double_t __declspec(property(get=__get__playableDirectorTimeBeforePause, put=__set__playableDirectorTimeBeforePause))  _playableDirectorTimeBeforePause;

constexpr void __set__playableDirectorTimeBeforePause(double_t value) ;

constexpr double_t __get__playableDirectorTimeBeforePause() const;

 float_t __declspec(property(get=__get__animatorNormalizedTimeBeforePause, put=__set__animatorNormalizedTimeBeforePause))  _animatorNormalizedTimeBeforePause;

constexpr void __set__animatorNormalizedTimeBeforePause(float_t value) ;

constexpr float_t __get__animatorNormalizedTimeBeforePause() const;


// Properties

 bool __declspec(property(get=get_isCharacterVisible))  isCharacterVisible;

 float_t __declspec(property(get=get_duration))  duration;

 UnityEngine::Timeline::ActivationTrack __declspec(property(get=get_characterActivationTrack))  characterActivationTrack;


// Methods

/// @brief Method get_isCharacterVisible addr 0x20a73b4 size 0x28 virtual false final false
 bool get_isCharacterVisible() ;

/// @brief Method get_duration addr 0x20a73dc size 0x38 virtual false final false
 float_t get_duration() ;

/// @brief Method get_characterActivationTrack addr 0x20a7414 size 0x410 virtual false final false
 UnityEngine::Timeline::ActivationTrack get_characterActivationTrack() ;

/// @brief Method PlayAnimation addr 0x20a7824 size 0xcc virtual false final false
 void PlayAnimation() ;

/// @brief Method EndEarlyAnimation addr 0x20a78f0 size 0x74 virtual false final false
 void EndEarlyAnimation() ;

/// @brief Method StopAnimation addr 0x20a7964 size 0x1c virtual false final false
 void StopAnimation() ;

/// @brief Method SetCharacter addr 0x20a7980 size 0x94 virtual false final false
 void SetCharacter(GlobalNamespace::BTSCharacter btsCharacter) ;

/// @brief Method WillResumeAnimation addr 0x20a7a14 size 0x60 virtual false final false
 void WillResumeAnimation() ;

/// @brief Method ResumeAnimation addr 0x20a7a74 size 0x60 virtual false final false
 void ResumeAnimation() ;

/// @brief Method PauseAnimation addr 0x20a7ad4 size 0x9c virtual false final false
 void PauseAnimation() ;

static GlobalNamespace::BTSCharacterSpawnAnimationController New_ctor() ;

/// @brief Method .ctor addr 0x20a7b70 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BTSCharacterSpawnAnimationController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BTSCharacterSpawnAnimationController, "", "BTSCharacterSpawnAnimationController");
