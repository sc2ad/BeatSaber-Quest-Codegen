#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__AudioBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct FFTWindow;
}
// Forward declare root types
namespace UnityEngine {
class AudioListener;
}
// Type: UnityEngine::AudioListener
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15607))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15608))
// CS Name: UnityEngine.AudioListener
class CORDL_TYPE AudioListener : public UnityEngine::AudioBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AudioListener() = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioListener", modifiers: " const&", def_value: None }]
constexpr AudioListener(AudioListener const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioListener", modifiers: "&&", def_value: None }]
constexpr AudioListener(AudioListener&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AudioListener(void* ptr) noexcept : UnityEngine::AudioBehaviour(ptr) {
}


  constexpr AudioListener& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AudioListener& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AudioListener& operator=(AudioListener&& o) noexcept = default;
  constexpr AudioListener& operator=(AudioListener const& o) noexcept = default;
                


// Properties

static bool __declspec(property(get=get_pause, put=set_pause))  pause;


// Methods

/// @brief Method GetOutputDataHelper addr 0x2b25830 size 0x44 virtual false final false
static void GetOutputDataHelper(ByRef<::ArrayW<float_t>> samples, int32_t channel) ;

/// @brief Method GetSpectrumDataHelper addr 0x2b25874 size 0x54 virtual false final false
static void GetSpectrumDataHelper(ByRef<::ArrayW<float_t>> samples, int32_t channel, UnityEngine::FFTWindow window) ;

/// @brief Method get_pause addr 0x2b258c8 size 0x28 virtual false final false
static bool get_pause() ;

/// @brief Method set_pause addr 0x2b258f0 size 0x3c virtual false final false
static void set_pause(bool value) ;

/// @brief Method GetOutputData addr 0x2b2592c size 0x44 virtual false final false
static void GetOutputData(::ArrayW<float_t> samples, int32_t channel) ;

/// @brief Method GetSpectrumData addr 0x2b25970 size 0x54 virtual false final false
static void GetSpectrumData(::ArrayW<float_t> samples, int32_t channel, UnityEngine::FFTWindow window) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::AudioListener);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AudioListener, "UnityEngine", "AudioListener");
