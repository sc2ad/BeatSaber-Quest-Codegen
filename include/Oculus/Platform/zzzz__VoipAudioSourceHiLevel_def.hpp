#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
class AudioSource;
}
namespace Oculus::Platform {
struct VoipSampleRate;
}
namespace Oculus::Platform {
class IVoipPCMSource;
}
// Forward declare root types
namespace Oculus::Platform {
class VoipAudioSourceHiLevel;
}
namespace Oculus::Platform {
class ____Oculus__Platform__VoipAudioSourceHiLevel__FilterReadDelegate;
}
// Type: ::FilterReadDelegate
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13369))
// CS Name: Oculus.Platform.VoipAudioSourceHiLevel::FilterReadDelegate
class CORDL_TYPE ____Oculus__Platform__VoipAudioSourceHiLevel__FilterReadDelegate : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____Oculus__Platform__VoipAudioSourceHiLevel__FilterReadDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Oculus__Platform__VoipAudioSourceHiLevel__FilterReadDelegate", modifiers: " const&", def_value: None }]
constexpr ____Oculus__Platform__VoipAudioSourceHiLevel__FilterReadDelegate(____Oculus__Platform__VoipAudioSourceHiLevel__FilterReadDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Oculus__Platform__VoipAudioSourceHiLevel__FilterReadDelegate", modifiers: "&&", def_value: None }]
constexpr ____Oculus__Platform__VoipAudioSourceHiLevel__FilterReadDelegate(____Oculus__Platform__VoipAudioSourceHiLevel__FilterReadDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Oculus__Platform__VoipAudioSourceHiLevel__FilterReadDelegate(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ____Oculus__Platform__VoipAudioSourceHiLevel__FilterReadDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Oculus__Platform__VoipAudioSourceHiLevel__FilterReadDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Oculus__Platform__VoipAudioSourceHiLevel__FilterReadDelegate& operator=(____Oculus__Platform__VoipAudioSourceHiLevel__FilterReadDelegate&& o) noexcept = default;
  constexpr ____Oculus__Platform__VoipAudioSourceHiLevel__FilterReadDelegate& operator=(____Oculus__Platform__VoipAudioSourceHiLevel__FilterReadDelegate const& o) noexcept = default;
                


// Fields

 ::Oculus::Platform::VoipAudioSourceHiLevel __declspec(property(get=__get_parent, put=__set_parent))  parent;

constexpr void __set_parent(::Oculus::Platform::VoipAudioSourceHiLevel value) ;

constexpr ::Oculus::Platform::VoipAudioSourceHiLevel __get_parent() const;

 ::ArrayW<float_t> __declspec(property(get=__get_scratchBuffer, put=__set_scratchBuffer))  scratchBuffer;

constexpr void __set_scratchBuffer(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_scratchBuffer() const;


// Methods

/// @brief Method Awake addr 0x259add4 size 0xb8 virtual false final false
 void Awake() ;

/// @brief Method OnAudioFilterRead addr 0x259ae8c size 0x4cc virtual false final false
 void OnAudioFilterRead(::ArrayW<float_t> data, int32_t channels) ;

// Ctor Parameters []
explicit ____Oculus__Platform__VoipAudioSourceHiLevel__FilterReadDelegate() ;

/// @brief Method .ctor addr 0x259b358 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
// Type: Oculus.Platform::VoipAudioSourceHiLevel
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13370))
// CS Name: Oculus.Platform.VoipAudioSourceHiLevel
class CORDL_TYPE VoipAudioSourceHiLevel : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using FilterReadDelegate = ::Oculus::Platform::____Oculus__Platform__VoipAudioSourceHiLevel__FilterReadDelegate;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~VoipAudioSourceHiLevel() = default;

// Ctor Parameters [CppParam { name: "", ty: "VoipAudioSourceHiLevel", modifiers: " const&", def_value: None }]
constexpr VoipAudioSourceHiLevel(VoipAudioSourceHiLevel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VoipAudioSourceHiLevel", modifiers: "&&", def_value: None }]
constexpr VoipAudioSourceHiLevel(VoipAudioSourceHiLevel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VoipAudioSourceHiLevel(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr VoipAudioSourceHiLevel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VoipAudioSourceHiLevel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VoipAudioSourceHiLevel& operator=(VoipAudioSourceHiLevel&& o) noexcept = default;
  constexpr VoipAudioSourceHiLevel& operator=(VoipAudioSourceHiLevel const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_initialPlaybackDelayMS, put=__set_initialPlaybackDelayMS))  initialPlaybackDelayMS;

constexpr void __set_initialPlaybackDelayMS(int32_t value) ;

constexpr int32_t __get_initialPlaybackDelayMS() const;

 ::UnityEngine::AudioSource __declspec(property(get=__get_audioSource, put=__set_audioSource))  audioSource;

constexpr void __set_audioSource(::UnityEngine::AudioSource value) ;

constexpr ::UnityEngine::AudioSource __get_audioSource() const;

 float_t __declspec(property(get=__get_peakAmplitude, put=__set_peakAmplitude))  peakAmplitude;

constexpr void __set_peakAmplitude(float_t value) ;

constexpr float_t __get_peakAmplitude() const;

 ::Oculus::Platform::IVoipPCMSource __declspec(property(get=__get_pcmSource, put=__set_pcmSource))  pcmSource;

constexpr void __set_pcmSource(::Oculus::Platform::IVoipPCMSource value) ;

constexpr ::Oculus::Platform::IVoipPCMSource __get_pcmSource() const;

static int32_t __declspec(property(get=__get_audioSystemPlaybackFrequency, put=__set_audioSystemPlaybackFrequency))  audioSystemPlaybackFrequency;

static void __set_audioSystemPlaybackFrequency(int32_t value) ;

static int32_t __get_audioSystemPlaybackFrequency() ;

static bool __declspec(property(get=__get_verboseLogging, put=__set_verboseLogging))  verboseLogging;

static void __set_verboseLogging(bool value) ;

static bool __get_verboseLogging() ;


// Properties

 uint64_t __declspec(property(put=set_senderID))  senderID;


// Methods

/// @brief Method set_senderID addr 0x259a668 size 0xac virtual false final false
 void set_senderID(uint64_t value) ;

/// @brief Method Stop addr 0x259a714 size 0x4 virtual false final false
 void Stop() ;

/// @brief Method SampleRateToEnum addr 0x259a718 size 0x3c virtual false final false
 ::Oculus::Platform::VoipSampleRate SampleRateToEnum(int32_t rate) ;

/// @brief Method Awake addr 0x259a754 size 0x2a4 virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x259a9f8 size 0x1c virtual false final false
 void Start() ;

/// @brief Method CreatePCMSource addr 0x259aa14 size 0x60 virtual true final false
 void CreatePCMSource() ;

/// @brief Method MSToElements addr 0x259aa7c size 0x68 virtual false final false
static int32_t MSToElements(int32_t ms) ;

/// @brief Method Update addr 0x259aae4 size 0x2e8 virtual false final false
 void Update() ;

// Ctor Parameters []
explicit VoipAudioSourceHiLevel() ;

/// @brief Method .ctor addr 0x259adcc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::VoipAudioSourceHiLevel);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::VoipAudioSourceHiLevel, "Oculus.Platform", "VoipAudioSourceHiLevel");
NEED_NO_BOX(::Oculus::Platform::____Oculus__Platform__VoipAudioSourceHiLevel__FilterReadDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::____Oculus__Platform__VoipAudioSourceHiLevel__FilterReadDelegate, "Oculus.Platform", "VoipAudioSourceHiLevel/FilterReadDelegate");
