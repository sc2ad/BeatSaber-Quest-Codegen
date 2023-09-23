#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
namespace UnityEngine::Playables {
class IPlayable;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace UnityEngine::Audio {
struct AudioMixerPlayable;
}
// Type: UnityEngine.Audio::AudioMixerPlayable
namespace UnityEngine::Audio {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15620))
// CS Name: UnityEngine.Audio.AudioMixerPlayable
struct CORDL_TYPE AudioMixerPlayable : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::Playables::IPlayable
constexpr operator  UnityEngine::Playables::IPlayable() const;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::Audio::AudioMixerPlayable>
constexpr operator  System::IEquatable_1<UnityEngine::Audio::AudioMixerPlayable>() const;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
constexpr AudioMixerPlayable(UnityEngine::Playables::PlayableHandle m_Handle) noexcept;


                    constexpr AudioMixerPlayable(AudioMixerPlayable const&) = default;
                    constexpr AudioMixerPlayable(AudioMixerPlayable&&) = default;
                    constexpr AudioMixerPlayable& operator=(AudioMixerPlayable const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AudioMixerPlayable& operator=(AudioMixerPlayable&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AudioMixerPlayable(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Playables::PlayableHandle __declspec(property(get=__get_m_Handle, put=__set_m_Handle))  m_Handle;

constexpr void __set_m_Handle(UnityEngine::Playables::PlayableHandle value) ;

constexpr UnityEngine::Playables::PlayableHandle __get_m_Handle() const;


// Methods

/// @brief Method Create addr 0x2b274a8 size 0x3c virtual false final false
static UnityEngine::Audio::AudioMixerPlayable Create(UnityEngine::Playables::PlayableGraph graph, int32_t inputCount, bool normalizeInputVolumes) ;

/// @brief Method CreateHandle addr 0x2b274e4 size 0xdc virtual false final false
static UnityEngine::Playables::PlayableHandle CreateHandle(UnityEngine::Playables::PlayableGraph graph, int32_t inputCount, bool normalizeInputVolumes) ;

/// @brief Method .ctor addr 0x2b275c0 size 0xc0 virtual false final false
 void _ctor(UnityEngine::Playables::PlayableHandle handle) ;

/// @brief Method GetHandle addr 0x2b276d4 size 0xc virtual true final true
 UnityEngine::Playables::PlayableHandle GetHandle() ;

/// @brief Method op_Implicit addr 0x2b276e0 size 0x30 virtual false final false
static UnityEngine::Playables::Playable op_Implicit_UnityEngine__Playables__Playable(UnityEngine::Audio::AudioMixerPlayable playable) ;

/// @brief Method Equals addr 0x2b27710 size 0x78 virtual true final true
 bool Equals(UnityEngine::Audio::AudioMixerPlayable other) ;

/// @brief Method CreateAudioMixerPlayableInternal addr 0x2b27680 size 0x54 virtual false final false
static bool CreateAudioMixerPlayableInternal(ByRef<UnityEngine::Playables::PlayableGraph> graph, bool normalizeInputVolumes, ByRef<UnityEngine::Playables::PlayableHandle> handle) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Audio
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Audio::AudioMixerPlayable, "UnityEngine.Audio", "AudioMixerPlayable");
