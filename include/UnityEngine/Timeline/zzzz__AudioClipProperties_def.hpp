#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include <cmath>
// Forward declare root types
namespace UnityEngine::Timeline {
class AudioClipProperties;
}
// Type: UnityEngine.Timeline::AudioClipProperties
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10361))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14076))
// CS Name: UnityEngine.Timeline.AudioClipProperties
class CORDL_TYPE AudioClipProperties : public UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AudioClipProperties() = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioClipProperties", modifiers: " const&", def_value: None }]
constexpr AudioClipProperties(AudioClipProperties const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioClipProperties", modifiers: "&&", def_value: None }]
constexpr AudioClipProperties(AudioClipProperties&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AudioClipProperties(void* ptr) noexcept : UnityEngine::Playables::PlayableBehaviour(ptr) {
}


  constexpr AudioClipProperties& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AudioClipProperties& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AudioClipProperties& operator=(AudioClipProperties&& o) noexcept = default;
  constexpr AudioClipProperties& operator=(AudioClipProperties const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_volume, put=__set_volume))  volume;

constexpr void __set_volume(float_t value) ;

constexpr float_t __get_volume() const;


// Methods

// Ctor Parameters []
explicit AudioClipProperties() ;

/// @brief Method .ctor addr 0x2ac9144 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::AudioClipProperties);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::AudioClipProperties, "UnityEngine.Timeline", "AudioClipProperties");
