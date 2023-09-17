#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
namespace {
// Forward declare root types
namespace UnityEngine {
class AudioReverbZone;
}
// Type: UnityEngine::AudioReverbZone
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10129))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15610))
// CS Name: UnityEngine.AudioReverbZone
class CORDL_TYPE AudioReverbZone : public ::UnityEngine::Behaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AudioReverbZone() = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioReverbZone", modifiers: " const&", def_value: None }]
constexpr AudioReverbZone(AudioReverbZone const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioReverbZone", modifiers: "&&", def_value: None }]
constexpr AudioReverbZone(AudioReverbZone&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AudioReverbZone(void* ptr) noexcept : ::UnityEngine::Behaviour(ptr) {
}


  constexpr AudioReverbZone& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AudioReverbZone& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AudioReverbZone& operator=(AudioReverbZone&& o) noexcept = default;
  constexpr AudioReverbZone& operator=(AudioReverbZone const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::AudioReverbZone);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioReverbZone, "UnityEngine", "AudioReverbZone");
