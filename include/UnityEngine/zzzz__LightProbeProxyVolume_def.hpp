#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
// Forward declare root types
namespace UnityEngine {
class LightProbeProxyVolume;
}
// Type: UnityEngine::LightProbeProxyVolume
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10129))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10066))
// CS Name: UnityEngine.LightProbeProxyVolume
class CORDL_TYPE LightProbeProxyVolume : public UnityEngine::Behaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~LightProbeProxyVolume() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightProbeProxyVolume", modifiers: " const&", def_value: None }]
constexpr LightProbeProxyVolume(LightProbeProxyVolume const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightProbeProxyVolume", modifiers: "&&", def_value: None }]
constexpr LightProbeProxyVolume(LightProbeProxyVolume&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightProbeProxyVolume(void* ptr) noexcept : UnityEngine::Behaviour(ptr) {
}


  constexpr LightProbeProxyVolume& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightProbeProxyVolume& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightProbeProxyVolume& operator=(LightProbeProxyVolume&& o) noexcept = default;
  constexpr LightProbeProxyVolume& operator=(LightProbeProxyVolume const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::LightProbeProxyVolume);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::LightProbeProxyVolume, "UnityEngine", "LightProbeProxyVolume");
