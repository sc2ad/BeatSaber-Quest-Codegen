#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
// Forward declare root types
namespace UnityEngine {
class AudioBehaviour;
}
// Type: UnityEngine::AudioBehaviour
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10129))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15607))
// CS Name: UnityEngine.AudioBehaviour
class CORDL_TYPE AudioBehaviour : public UnityEngine::Behaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AudioBehaviour() = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioBehaviour", modifiers: " const&", def_value: None }]
constexpr AudioBehaviour(AudioBehaviour const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioBehaviour", modifiers: "&&", def_value: None }]
constexpr AudioBehaviour(AudioBehaviour&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AudioBehaviour(void* ptr) noexcept : UnityEngine::Behaviour(ptr) {
}


  constexpr AudioBehaviour& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AudioBehaviour& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AudioBehaviour& operator=(AudioBehaviour&& o) noexcept = default;
  constexpr AudioBehaviour& operator=(AudioBehaviour const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::AudioBehaviour);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AudioBehaviour, "UnityEngine", "AudioBehaviour");
