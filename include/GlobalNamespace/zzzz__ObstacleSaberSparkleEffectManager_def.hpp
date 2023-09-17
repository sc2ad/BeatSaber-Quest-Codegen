#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace GlobalNamespace {
class ObstacleSaberSparkleEffect;
}
namespace GlobalNamespace {
class Saber;
}
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
class SaberManager;
}
namespace GlobalNamespace {
struct SaberType;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class HapticFeedbackManager;
}
// Forward declare root types
namespace GlobalNamespace {
class ObstacleSaberSparkleEffectManager;
}
// Type: ::ObstacleSaberSparkleEffectManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5009))
// CS Name: ObstacleSaberSparkleEffectManager
class CORDL_TYPE ObstacleSaberSparkleEffectManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~ObstacleSaberSparkleEffectManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleSaberSparkleEffectManager", modifiers: " const&", def_value: None }]
constexpr ObstacleSaberSparkleEffectManager(ObstacleSaberSparkleEffectManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleSaberSparkleEffectManager", modifiers: "&&", def_value: None }]
constexpr ObstacleSaberSparkleEffectManager(ObstacleSaberSparkleEffectManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObstacleSaberSparkleEffectManager(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ObstacleSaberSparkleEffectManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObstacleSaberSparkleEffectManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObstacleSaberSparkleEffectManager& operator=(ObstacleSaberSparkleEffectManager&& o) noexcept = default;
  constexpr ObstacleSaberSparkleEffectManager& operator=(ObstacleSaberSparkleEffectManager const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::ObstacleSaberSparkleEffect __declspec(property(get=__get__obstacleSaberSparkleEffectPrefab, put=__set__obstacleSaberSparkleEffectPrefab))  _obstacleSaberSparkleEffectPrefab;

constexpr void __set__obstacleSaberSparkleEffectPrefab(::GlobalNamespace::ObstacleSaberSparkleEffect value) ;

constexpr ::GlobalNamespace::ObstacleSaberSparkleEffect __get__obstacleSaberSparkleEffectPrefab() const;

 ::Libraries::HM::HMLib::VR::HapticPresetSO __declspec(property(get=__get__rumblePreset, put=__set__rumblePreset))  _rumblePreset;

constexpr void __set__rumblePreset(::Libraries::HM::HMLib::VR::HapticPresetSO value) ;

constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO __get__rumblePreset() const;

 ::GlobalNamespace::BeatmapObjectManager __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager))  _beatmapObjectManager;

constexpr void __set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager value) ;

constexpr ::GlobalNamespace::BeatmapObjectManager __get__beatmapObjectManager() const;

 ::GlobalNamespace::SaberManager __declspec(property(get=__get__saberManager, put=__set__saberManager))  _saberManager;

constexpr void __set__saberManager(::GlobalNamespace::SaberManager value) ;

constexpr ::GlobalNamespace::SaberManager __get__saberManager() const;

 ::GlobalNamespace::HapticFeedbackManager __declspec(property(get=__get__hapticFeedbackManager, put=__set__hapticFeedbackManager))  _hapticFeedbackManager;

constexpr void __set__hapticFeedbackManager(::GlobalNamespace::HapticFeedbackManager value) ;

constexpr ::GlobalNamespace::HapticFeedbackManager __get__hapticFeedbackManager() const;

 ::GlobalNamespace::ColorManager __declspec(property(get=__get__colorManager, put=__set__colorManager))  _colorManager;

constexpr void __set__colorManager(::GlobalNamespace::ColorManager value) ;

constexpr ::GlobalNamespace::ColorManager __get__colorManager() const;

 ::System::Action_1<::GlobalNamespace::SaberType> __declspec(property(get=__get_sparkleEffectDidStartEvent, put=__set_sparkleEffectDidStartEvent))  sparkleEffectDidStartEvent;

constexpr void __set_sparkleEffectDidStartEvent(::System::Action_1<::GlobalNamespace::SaberType> value) ;

constexpr ::System::Action_1<::GlobalNamespace::SaberType> __get_sparkleEffectDidStartEvent() const;

 ::System::Action_1<::GlobalNamespace::SaberType> __declspec(property(get=__get_sparkleEffectDidEndEvent, put=__set_sparkleEffectDidEndEvent))  sparkleEffectDidEndEvent;

constexpr void __set_sparkleEffectDidEndEvent(::System::Action_1<::GlobalNamespace::SaberType> value) ;

constexpr ::System::Action_1<::GlobalNamespace::SaberType> __get_sparkleEffectDidEndEvent() const;

 ::ArrayW<::GlobalNamespace::Saber> __declspec(property(get=__get__sabers, put=__set__sabers))  _sabers;

constexpr void __set__sabers(::ArrayW<::GlobalNamespace::Saber> value) ;

constexpr ::ArrayW<::GlobalNamespace::Saber> __get__sabers() const;

 ::ArrayW<::GlobalNamespace::ObstacleSaberSparkleEffect> __declspec(property(get=__get__effects, put=__set__effects))  _effects;

constexpr void __set__effects(::ArrayW<::GlobalNamespace::ObstacleSaberSparkleEffect> value) ;

constexpr ::ArrayW<::GlobalNamespace::ObstacleSaberSparkleEffect> __get__effects() const;

 ::ArrayW<::UnityEngine::Transform> __declspec(property(get=__get__effectsTransforms, put=__set__effectsTransforms))  _effectsTransforms;

constexpr void __set__effectsTransforms(::ArrayW<::UnityEngine::Transform> value) ;

constexpr ::ArrayW<::UnityEngine::Transform> __get__effectsTransforms() const;

 ::ArrayW<bool> __declspec(property(get=__get__isSystemActive, put=__set__isSystemActive))  _isSystemActive;

constexpr void __set__isSystemActive(::ArrayW<bool> value) ;

constexpr ::ArrayW<bool> __get__isSystemActive() const;

 ::ArrayW<bool> __declspec(property(get=__get__wasSystemActive, put=__set__wasSystemActive))  _wasSystemActive;

constexpr void __set__wasSystemActive(::ArrayW<bool> value) ;

constexpr ::ArrayW<bool> __get__wasSystemActive() const;

 ::ArrayW<::UnityEngine::Vector3> __declspec(property(get=__get__burnMarkPositions, put=__set__burnMarkPositions))  _burnMarkPositions;

constexpr void __set__burnMarkPositions(::ArrayW<::UnityEngine::Vector3> value) ;

constexpr ::ArrayW<::UnityEngine::Vector3> __get__burnMarkPositions() const;


// Methods

/// @brief Method add_sparkleEffectDidStartEvent addr 0x225ab04 size 0xb0 virtual false final false
 void add_sparkleEffectDidStartEvent(::System::Action_1<::GlobalNamespace::SaberType> value) ;

/// @brief Method remove_sparkleEffectDidStartEvent addr 0x225abb4 size 0xb0 virtual false final false
 void remove_sparkleEffectDidStartEvent(::System::Action_1<::GlobalNamespace::SaberType> value) ;

/// @brief Method add_sparkleEffectDidEndEvent addr 0x225ac64 size 0xb0 virtual false final false
 void add_sparkleEffectDidEndEvent(::System::Action_1<::GlobalNamespace::SaberType> value) ;

/// @brief Method remove_sparkleEffectDidEndEvent addr 0x225ad14 size 0xb0 virtual false final false
 void remove_sparkleEffectDidEndEvent(::System::Action_1<::GlobalNamespace::SaberType> value) ;

/// @brief Method Start addr 0x225adc4 size 0x2b0 virtual false final false
 void Start() ;

/// @brief Method OnDisable addr 0x225b074 size 0xa4 virtual false final false
 void OnDisable() ;

/// @brief Method Update addr 0x225b118 size 0x618 virtual false final false
 void Update() ;

/// @brief Method GetEffectRotation addr 0x225b9b8 size 0x124 virtual false final false
 ::UnityEngine::Quaternion GetEffectRotation(::UnityEngine::Vector3 pos, ::UnityEngine::Transform transform, ::UnityEngine::Bounds bounds) ;

/// @brief Method BurnMarkPosForSaberType addr 0x225badc size 0x8c virtual false final false
 ::UnityEngine::Vector3 BurnMarkPosForSaberType(::GlobalNamespace::SaberType saberType) ;

/// @brief Method GetBurnMarkPos addr 0x225b730 size 0x288 virtual false final false
 bool GetBurnMarkPos(::UnityEngine::Bounds bounds, ::UnityEngine::Transform transform, ::UnityEngine::Vector3 bladeBottomPos, ::UnityEngine::Vector3 bladeTopPos, ByRef<::UnityEngine::Vector3> burnMarkPos) ;

// Ctor Parameters []
explicit ObstacleSaberSparkleEffectManager() ;

/// @brief Method .ctor addr 0x225bb68 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ObstacleSaberSparkleEffectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleSaberSparkleEffectManager, "", "ObstacleSaberSparkleEffectManager");
