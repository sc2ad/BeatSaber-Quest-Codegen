#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::Playables {
struct PlayableOutputHandle;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
// Forward declare root types
namespace UnityEngine::Audio {
class AudioPlayableGraphExtensions;
}
// Type: UnityEngine.Audio::AudioPlayableGraphExtensions
namespace UnityEngine::Audio {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15617))
// CS Name: UnityEngine.Audio.AudioPlayableGraphExtensions
class CORDL_TYPE AudioPlayableGraphExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AudioPlayableGraphExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioPlayableGraphExtensions", modifiers: " const&", def_value: None }]
constexpr AudioPlayableGraphExtensions(AudioPlayableGraphExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioPlayableGraphExtensions", modifiers: "&&", def_value: None }]
constexpr AudioPlayableGraphExtensions(AudioPlayableGraphExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AudioPlayableGraphExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AudioPlayableGraphExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AudioPlayableGraphExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AudioPlayableGraphExtensions& operator=(AudioPlayableGraphExtensions&& o) noexcept = default;
  constexpr AudioPlayableGraphExtensions& operator=(AudioPlayableGraphExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method InternalCreateAudioOutput addr 0x2b265dc size 0x54 virtual false final false
static bool InternalCreateAudioOutput(ByRef<UnityEngine::Playables::PlayableGraph> graph, ::StringW name, ByRef<UnityEngine::Playables::PlayableOutputHandle> handle) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Audio
NEED_NO_BOX(UnityEngine::Audio::AudioPlayableGraphExtensions);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Audio::AudioPlayableGraphExtensions, "UnityEngine.Audio", "AudioPlayableGraphExtensions");
