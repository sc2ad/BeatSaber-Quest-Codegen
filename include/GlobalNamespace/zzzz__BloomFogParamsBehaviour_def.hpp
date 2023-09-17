#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
class BloomFogEnvironmentParams;
}
namespace GlobalNamespace {
class BloomFogSO;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomFogParamsBehaviour;
}
// Type: ::BloomFogParamsBehaviour
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10361))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6060))
// CS Name: BloomFogParamsBehaviour
class CORDL_TYPE BloomFogParamsBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BloomFogParamsBehaviour() = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomFogParamsBehaviour", modifiers: " const&", def_value: None }]
constexpr BloomFogParamsBehaviour(BloomFogParamsBehaviour const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomFogParamsBehaviour", modifiers: "&&", def_value: None }]
constexpr BloomFogParamsBehaviour(BloomFogParamsBehaviour&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BloomFogParamsBehaviour(void* ptr) noexcept : ::UnityEngine::Playables::PlayableBehaviour(ptr) {
}


  constexpr BloomFogParamsBehaviour& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BloomFogParamsBehaviour& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BloomFogParamsBehaviour& operator=(BloomFogParamsBehaviour&& o) noexcept = default;
  constexpr BloomFogParamsBehaviour& operator=(BloomFogParamsBehaviour const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::BloomFogEnvironmentParams __declspec(property(get=__get__bloomFogParams, put=__set__bloomFogParams))  _bloomFogParams;

constexpr void __set__bloomFogParams(::GlobalNamespace::BloomFogEnvironmentParams value) ;

constexpr ::GlobalNamespace::BloomFogEnvironmentParams __get__bloomFogParams() const;

 float_t __declspec(property(get=__get__blend, put=__set__blend))  _blend;

constexpr void __set__blend(float_t value) ;

constexpr float_t __get__blend() const;

 ::GlobalNamespace::BloomFogSO __declspec(property(get=__get__bloomFog, put=__set__bloomFog))  _bloomFog;

constexpr void __set__bloomFog(::GlobalNamespace::BloomFogSO value) ;

constexpr ::GlobalNamespace::BloomFogSO __get__bloomFog() const;

 bool __declspec(property(get=__get__initialized, put=__set__initialized))  _initialized;

constexpr void __set__initialized(bool value) ;

constexpr bool __get__initialized() const;


// Methods

/// @brief Method ProcessFrame addr 0x21b1b70 size 0x158 virtual true final false
 void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::bs_hook::Il2CppWrapperType playerData) ;

/// @brief Method OnPlayableDestroy addr 0x21b1cc8 size 0x90 virtual true final false
 void OnPlayableDestroy(::UnityEngine::Playables::Playable playable) ;

// Ctor Parameters []
explicit BloomFogParamsBehaviour() ;

/// @brief Method .ctor addr 0x21b1d58 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BloomFogParamsBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomFogParamsBehaviour, "", "BloomFogParamsBehaviour");
