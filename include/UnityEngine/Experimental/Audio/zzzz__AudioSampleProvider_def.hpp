#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::Experimental::Audio {
class AudioSampleProvider;
}
namespace UnityEngine::Experimental::Audio {
class ____UnityEngine__Experimental__Audio__AudioSampleProvider__SampleFramesHandler;
}
// Type: ::SampleFramesHandler
namespace UnityEngine::Experimental::Audio {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15621))
// CS Name: UnityEngine.Experimental.Audio.AudioSampleProvider::SampleFramesHandler
class CORDL_TYPE ____UnityEngine__Experimental__Audio__AudioSampleProvider__SampleFramesHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____UnityEngine__Experimental__Audio__AudioSampleProvider__SampleFramesHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Experimental__Audio__AudioSampleProvider__SampleFramesHandler", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__Experimental__Audio__AudioSampleProvider__SampleFramesHandler(____UnityEngine__Experimental__Audio__AudioSampleProvider__SampleFramesHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Experimental__Audio__AudioSampleProvider__SampleFramesHandler", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__Experimental__Audio__AudioSampleProvider__SampleFramesHandler(____UnityEngine__Experimental__Audio__AudioSampleProvider__SampleFramesHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__Experimental__Audio__AudioSampleProvider__SampleFramesHandler(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____UnityEngine__Experimental__Audio__AudioSampleProvider__SampleFramesHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__Experimental__Audio__AudioSampleProvider__SampleFramesHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__Experimental__Audio__AudioSampleProvider__SampleFramesHandler& operator=(____UnityEngine__Experimental__Audio__AudioSampleProvider__SampleFramesHandler&& o) noexcept = default;
  constexpr ____UnityEngine__Experimental__Audio__AudioSampleProvider__SampleFramesHandler& operator=(____UnityEngine__Experimental__Audio__AudioSampleProvider__SampleFramesHandler const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____UnityEngine__Experimental__Audio__AudioSampleProvider__SampleFramesHandler(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2b277d8 size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2b27908 size 0x14 virtual true final false
 void Invoke(::UnityEngine::Experimental::Audio::AudioSampleProvider provider, uint32_t sampleFrameCount) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Experimental::Audio
// Type: UnityEngine.Experimental.Audio::AudioSampleProvider
namespace UnityEngine::Experimental::Audio {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15622))
// CS Name: UnityEngine.Experimental.Audio.AudioSampleProvider
class CORDL_TYPE AudioSampleProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using SampleFramesHandler = ::UnityEngine::Experimental::Audio::____UnityEngine__Experimental__Audio__AudioSampleProvider__SampleFramesHandler;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AudioSampleProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioSampleProvider", modifiers: " const&", def_value: None }]
constexpr AudioSampleProvider(AudioSampleProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioSampleProvider", modifiers: "&&", def_value: None }]
constexpr AudioSampleProvider(AudioSampleProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AudioSampleProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AudioSampleProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AudioSampleProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AudioSampleProvider& operator=(AudioSampleProvider&& o) noexcept = default;
  constexpr AudioSampleProvider& operator=(AudioSampleProvider const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Experimental::Audio::____UnityEngine__Experimental__Audio__AudioSampleProvider__SampleFramesHandler __declspec(property(get=__get_sampleFramesAvailable, put=__set_sampleFramesAvailable))  sampleFramesAvailable;

constexpr void __set_sampleFramesAvailable(::UnityEngine::Experimental::Audio::____UnityEngine__Experimental__Audio__AudioSampleProvider__SampleFramesHandler value) ;

constexpr ::UnityEngine::Experimental::Audio::____UnityEngine__Experimental__Audio__AudioSampleProvider__SampleFramesHandler __get_sampleFramesAvailable() const;

 ::UnityEngine::Experimental::Audio::____UnityEngine__Experimental__Audio__AudioSampleProvider__SampleFramesHandler __declspec(property(get=__get_sampleFramesOverflow, put=__set_sampleFramesOverflow))  sampleFramesOverflow;

constexpr void __set_sampleFramesOverflow(::UnityEngine::Experimental::Audio::____UnityEngine__Experimental__Audio__AudioSampleProvider__SampleFramesHandler value) ;

constexpr ::UnityEngine::Experimental::Audio::____UnityEngine__Experimental__Audio__AudioSampleProvider__SampleFramesHandler __get_sampleFramesOverflow() const;


// Methods

/// @brief Method InvokeSampleFramesAvailable addr 0x2b27788 size 0x28 virtual false final false
 void InvokeSampleFramesAvailable(int32_t sampleFrameCount) ;

/// @brief Method InvokeSampleFramesOverflow addr 0x2b277b0 size 0x28 virtual false final false
 void InvokeSampleFramesOverflow(int32_t droppedSampleFrameCount) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Experimental::Audio
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Experimental::Audio::AudioSampleProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Audio::AudioSampleProvider, "UnityEngine.Experimental.Audio", "AudioSampleProvider");
NEED_NO_BOX(::UnityEngine::Experimental::Audio::____UnityEngine__Experimental__Audio__AudioSampleProvider__SampleFramesHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Audio::____UnityEngine__Experimental__Audio__AudioSampleProvider__SampleFramesHandler, "UnityEngine.Experimental.Audio", "AudioSampleProvider/SampleFramesHandler");
