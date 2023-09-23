#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace GlobalNamespace {
class DirectionalLight;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
// Forward declare root types
namespace GlobalNamespace {
class TubeLightIntensityBehaviour;
}
// Type: ::TubeLightIntensityBehaviour
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10361))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6077))
// CS Name: TubeLightIntensityBehaviour
class CORDL_TYPE TubeLightIntensityBehaviour : public UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~TubeLightIntensityBehaviour() = default;

// Ctor Parameters [CppParam { name: "", ty: "TubeLightIntensityBehaviour", modifiers: " const&", def_value: None }]
constexpr TubeLightIntensityBehaviour(TubeLightIntensityBehaviour const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TubeLightIntensityBehaviour", modifiers: "&&", def_value: None }]
constexpr TubeLightIntensityBehaviour(TubeLightIntensityBehaviour&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TubeLightIntensityBehaviour(void* ptr) noexcept : UnityEngine::Playables::PlayableBehaviour(ptr) {
}


  constexpr TubeLightIntensityBehaviour& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TubeLightIntensityBehaviour& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TubeLightIntensityBehaviour& operator=(TubeLightIntensityBehaviour&& o) noexcept = default;
  constexpr TubeLightIntensityBehaviour& operator=(TubeLightIntensityBehaviour const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__noPredefinedStartValue, put=__set__noPredefinedStartValue))  _noPredefinedStartValue;

constexpr void __set__noPredefinedStartValue(bool value) ;

constexpr bool __get__noPredefinedStartValue() const;

 float_t __declspec(property(get=__get__startLightIntensity, put=__set__startLightIntensity))  _startLightIntensity;

constexpr void __set__startLightIntensity(float_t value) ;

constexpr float_t __get__startLightIntensity() const;

 float_t __declspec(property(get=__get__startLaserIntensity, put=__set__startLaserIntensity))  _startLaserIntensity;

constexpr void __set__startLaserIntensity(float_t value) ;

constexpr float_t __get__startLaserIntensity() const;

 float_t __declspec(property(get=__get__endLightIntensity, put=__set__endLightIntensity))  _endLightIntensity;

constexpr void __set__endLightIntensity(float_t value) ;

constexpr float_t __get__endLightIntensity() const;

 float_t __declspec(property(get=__get__endLaserIntensity, put=__set__endLaserIntensity))  _endLaserIntensity;

constexpr void __set__endLaserIntensity(float_t value) ;

constexpr float_t __get__endLaserIntensity() const;

 bool __declspec(property(get=__get__disableWhenFinished, put=__set__disableWhenFinished))  _disableWhenFinished;

constexpr void __set__disableWhenFinished(bool value) ;

constexpr bool __get__disableWhenFinished() const;

 float_t __declspec(property(get=__get__blend, put=__set__blend))  _blend;

constexpr void __set__blend(float_t value) ;

constexpr float_t __get__blend() const;

 bool __declspec(property(get=__get__initialized, put=__set__initialized))  _initialized;

constexpr void __set__initialized(bool value) ;

constexpr bool __get__initialized() const;

 float_t __declspec(property(get=__get__originalLightIntensity, put=__set__originalLightIntensity))  _originalLightIntensity;

constexpr void __set__originalLightIntensity(float_t value) ;

constexpr float_t __get__originalLightIntensity() const;

 float_t __declspec(property(get=__get__originalLaserIntensity, put=__set__originalLaserIntensity))  _originalLaserIntensity;

constexpr void __set__originalLaserIntensity(float_t value) ;

constexpr float_t __get__originalLaserIntensity() const;

 ::ArrayW<GlobalNamespace::TubeBloomPrePassLight> __declspec(property(get=__get__tubeLights, put=__set__tubeLights))  _tubeLights;

constexpr void __set__tubeLights(::ArrayW<GlobalNamespace::TubeBloomPrePassLight> value) ;

constexpr ::ArrayW<GlobalNamespace::TubeBloomPrePassLight> __get__tubeLights() const;

 ::ArrayW<GlobalNamespace::DirectionalLight> __declspec(property(get=__get__directionalLights, put=__set__directionalLights))  _directionalLights;

constexpr void __set__directionalLights(::ArrayW<GlobalNamespace::DirectionalLight> value) ;

constexpr ::ArrayW<GlobalNamespace::DirectionalLight> __get__directionalLights() const;

 bool __declspec(property(get=__get__started, put=__set__started))  _started;

constexpr void __set__started(bool value) ;

constexpr bool __get__started() const;

 bool __declspec(property(get=__get__finished, put=__set__finished))  _finished;

constexpr void __set__finished(bool value) ;

constexpr bool __get__finished() const;

 float_t __declspec(property(get=__get__firstFrameLightIntensity, put=__set__firstFrameLightIntensity))  _firstFrameLightIntensity;

constexpr void __set__firstFrameLightIntensity(float_t value) ;

constexpr float_t __get__firstFrameLightIntensity() const;

 float_t __declspec(property(get=__get__firstFrameLaserIntensity, put=__set__firstFrameLaserIntensity))  _firstFrameLaserIntensity;

constexpr void __set__firstFrameLaserIntensity(float_t value) ;

constexpr float_t __get__firstFrameLaserIntensity() const;


// Methods

/// @brief Method ProcessFrame addr 0x21b385c size 0x370 virtual true final false
 void ProcessFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info, ::bs_hook::Il2CppWrapperType playerData) ;

/// @brief Method EnableObjects addr 0x21b3bcc size 0xd4 virtual false final false
 void EnableObjects(bool on) ;

/// @brief Method OnPlayableDestroy addr 0x21b3ca0 size 0xcc virtual true final false
 void OnPlayableDestroy(UnityEngine::Playables::Playable playable) ;

// Ctor Parameters []
explicit TubeLightIntensityBehaviour() ;

/// @brief Method .ctor addr 0x21b3d6c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::TubeLightIntensityBehaviour);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TubeLightIntensityBehaviour, "", "TubeLightIntensityBehaviour");
