#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cmath>
namespace {
// Forward declare root types
namespace UnityEngine {
class AudioLowPassFilter;
}
// Type: UnityEngine::AudioLowPassFilter
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10129))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15611))
// CS Name: UnityEngine.AudioLowPassFilter
class CORDL_TYPE AudioLowPassFilter : public ::UnityEngine::Behaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AudioLowPassFilter() = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioLowPassFilter", modifiers: " const&", def_value: None }]
constexpr AudioLowPassFilter(AudioLowPassFilter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioLowPassFilter", modifiers: "&&", def_value: None }]
constexpr AudioLowPassFilter(AudioLowPassFilter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AudioLowPassFilter(void* ptr) noexcept : ::UnityEngine::Behaviour(ptr) {
}


  constexpr AudioLowPassFilter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AudioLowPassFilter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AudioLowPassFilter& operator=(AudioLowPassFilter&& o) noexcept = default;
  constexpr AudioLowPassFilter& operator=(AudioLowPassFilter const& o) noexcept = default;
                


// Properties

 float_t __declspec(property(get=get_cutoffFrequency, put=set_cutoffFrequency))  cutoffFrequency;


// Methods

/// @brief Method get_cutoffFrequency addr 0x2b264ac size 0x3c virtual false final false
 float_t get_cutoffFrequency() ;

/// @brief Method set_cutoffFrequency addr 0x2b264e8 size 0x4c virtual false final false
 void set_cutoffFrequency(float_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::AudioLowPassFilter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioLowPassFilter, "UnityEngine", "AudioLowPassFilter");
