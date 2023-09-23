#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
class IPlayableOutput;
}
namespace UnityEngine::Playables {
struct PlayableOutput;
}
namespace UnityEngine::Playables {
struct PlayableOutputHandle;
}
// Forward declare root types
namespace UnityEngine::Audio {
struct AudioPlayableOutput;
}
// Type: UnityEngine.Audio::AudioPlayableOutput
namespace UnityEngine::Audio {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15612))
// CS Name: UnityEngine.Audio.AudioPlayableOutput
struct CORDL_TYPE AudioPlayableOutput : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::Playables::IPlayableOutput
constexpr operator  UnityEngine::Playables::IPlayableOutput() const;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "UnityEngine::Playables::PlayableOutputHandle", modifiers: "", def_value: None }]
constexpr AudioPlayableOutput(UnityEngine::Playables::PlayableOutputHandle m_Handle) noexcept;


                    constexpr AudioPlayableOutput(AudioPlayableOutput const&) = default;
                    constexpr AudioPlayableOutput(AudioPlayableOutput&&) = default;
                    constexpr AudioPlayableOutput& operator=(AudioPlayableOutput const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AudioPlayableOutput& operator=(AudioPlayableOutput&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AudioPlayableOutput(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Playables::PlayableOutputHandle __declspec(property(get=__get_m_Handle, put=__set_m_Handle))  m_Handle;

constexpr void __set_m_Handle(UnityEngine::Playables::PlayableOutputHandle value) ;

constexpr UnityEngine::Playables::PlayableOutputHandle __get_m_Handle() const;


// Properties

static UnityEngine::Audio::AudioPlayableOutput __declspec(property(get=get_Null))  Null;


// Methods

/// @brief Method Create addr 0x2b26534 size 0xa8 virtual false final false
static UnityEngine::Audio::AudioPlayableOutput Create(UnityEngine::Playables::PlayableGraph graph, ::StringW name, UnityEngine::AudioSource target) ;

/// @brief Method .ctor addr 0x2b266ac size 0xc0 virtual false final false
 void _ctor(UnityEngine::Playables::PlayableOutputHandle handle) ;

/// @brief Method get_Null addr 0x2b26630 size 0x7c virtual false final false
static UnityEngine::Audio::AudioPlayableOutput get_Null() ;

/// @brief Method GetHandle addr 0x2b267b0 size 0xc virtual true final true
 UnityEngine::Playables::PlayableOutputHandle GetHandle() ;

/// @brief Method op_Implicit addr 0x2b267bc size 0x30 virtual false final false
static UnityEngine::Playables::PlayableOutput op_Implicit_UnityEngine__Playables__PlayableOutput(UnityEngine::Audio::AudioPlayableOutput output) ;

/// @brief Method op_Explicit addr 0x2b267ec size 0x44 virtual false final false
static UnityEngine::Audio::AudioPlayableOutput op_Explicit_UnityEngine__Audio__AudioPlayableOutput(UnityEngine::Playables::PlayableOutput output) ;

/// @brief Method SetTarget addr 0x2b2676c size 0x44 virtual false final false
 void SetTarget(UnityEngine::AudioSource value) ;

/// @brief Method SetEvaluateOnSeek addr 0x2b26874 size 0x44 virtual false final false
 void SetEvaluateOnSeek(bool value) ;

/// @brief Method InternalSetTarget addr 0x2b26830 size 0x44 virtual false final false
static void InternalSetTarget(ByRef<UnityEngine::Playables::PlayableOutputHandle> output, UnityEngine::AudioSource target) ;

/// @brief Method InternalSetEvaluateOnSeek addr 0x2b268b8 size 0x44 virtual false final false
static void InternalSetEvaluateOnSeek(ByRef<UnityEngine::Playables::PlayableOutputHandle> output, bool value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Audio
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Audio::AudioPlayableOutput, "UnityEngine.Audio", "AudioPlayableOutput");
