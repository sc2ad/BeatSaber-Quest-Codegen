#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct AudioDataLoadState;
}
// Forward declare root types
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class UnityEngine__AudioClip__PCMReaderCallback;
}
namespace UnityEngine {
class UnityEngine__AudioClip__PCMSetPositionCallback;
}
// Type: ::PCMReaderCallback
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15604))
// CS Name: UnityEngine.AudioClip::PCMReaderCallback
class CORDL_TYPE UnityEngine__AudioClip__PCMReaderCallback : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__AudioClip__PCMReaderCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__AudioClip__PCMReaderCallback", modifiers: " const&", def_value: None }]
constexpr UnityEngine__AudioClip__PCMReaderCallback(UnityEngine__AudioClip__PCMReaderCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__AudioClip__PCMReaderCallback", modifiers: "&&", def_value: None }]
constexpr UnityEngine__AudioClip__PCMReaderCallback(UnityEngine__AudioClip__PCMReaderCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__AudioClip__PCMReaderCallback(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__AudioClip__PCMReaderCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__AudioClip__PCMReaderCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__AudioClip__PCMReaderCallback& operator=(UnityEngine__AudioClip__PCMReaderCallback&& o) noexcept = default;
  constexpr UnityEngine__AudioClip__PCMReaderCallback& operator=(UnityEngine__AudioClip__PCMReaderCallback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UnityEngine__AudioClip__PCMReaderCallback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2b25670 size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2b25744 size 0x14 virtual true final false
 void Invoke(::ArrayW<float_t> data) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: ::PCMSetPositionCallback
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15605))
// CS Name: UnityEngine.AudioClip::PCMSetPositionCallback
class CORDL_TYPE UnityEngine__AudioClip__PCMSetPositionCallback : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__AudioClip__PCMSetPositionCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__AudioClip__PCMSetPositionCallback", modifiers: " const&", def_value: None }]
constexpr UnityEngine__AudioClip__PCMSetPositionCallback(UnityEngine__AudioClip__PCMSetPositionCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__AudioClip__PCMSetPositionCallback", modifiers: "&&", def_value: None }]
constexpr UnityEngine__AudioClip__PCMSetPositionCallback(UnityEngine__AudioClip__PCMSetPositionCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__AudioClip__PCMSetPositionCallback(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__AudioClip__PCMSetPositionCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__AudioClip__PCMSetPositionCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__AudioClip__PCMSetPositionCallback& operator=(UnityEngine__AudioClip__PCMSetPositionCallback&& o) noexcept = default;
  constexpr UnityEngine__AudioClip__PCMSetPositionCallback& operator=(UnityEngine__AudioClip__PCMSetPositionCallback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UnityEngine__AudioClip__PCMSetPositionCallback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2b25758 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2b2581c size 0x14 virtual true final false
 void Invoke(int32_t position) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::AudioClip
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15606))
// CS Name: UnityEngine.AudioClip
class CORDL_TYPE AudioClip : public UnityEngine::Object {
public:
// Declarations
using PCMSetPositionCallback = UnityEngine::UnityEngine__AudioClip__PCMSetPositionCallback;

using PCMReaderCallback = UnityEngine::UnityEngine__AudioClip__PCMReaderCallback;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~AudioClip() = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioClip", modifiers: " const&", def_value: None }]
constexpr AudioClip(AudioClip const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioClip", modifiers: "&&", def_value: None }]
constexpr AudioClip(AudioClip&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AudioClip(void* ptr) noexcept : UnityEngine::Object(ptr) {
}


  constexpr AudioClip& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AudioClip& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AudioClip& operator=(AudioClip&& o) noexcept = default;
  constexpr AudioClip& operator=(AudioClip const& o) noexcept = default;
                


// Fields

 UnityEngine::UnityEngine__AudioClip__PCMReaderCallback __declspec(property(get=__get_m_PCMReaderCallback, put=__set_m_PCMReaderCallback))  m_PCMReaderCallback;

constexpr void __set_m_PCMReaderCallback(UnityEngine::UnityEngine__AudioClip__PCMReaderCallback value) ;

constexpr UnityEngine::UnityEngine__AudioClip__PCMReaderCallback __get_m_PCMReaderCallback() const;

 UnityEngine::UnityEngine__AudioClip__PCMSetPositionCallback __declspec(property(get=__get_m_PCMSetPositionCallback, put=__set_m_PCMSetPositionCallback))  m_PCMSetPositionCallback;

constexpr void __set_m_PCMSetPositionCallback(UnityEngine::UnityEngine__AudioClip__PCMSetPositionCallback value) ;

constexpr UnityEngine::UnityEngine__AudioClip__PCMSetPositionCallback __get_m_PCMSetPositionCallback() const;


// Properties

 float_t __declspec(property(get=get_length))  length;

 int32_t __declspec(property(get=get_samples))  samples;

 int32_t __declspec(property(get=get_channels))  channels;

 int32_t __declspec(property(get=get_frequency))  frequency;

 UnityEngine::AudioDataLoadState __declspec(property(get=get_loadState))  loadState;


// Methods

// Ctor Parameters []
explicit AudioClip() ;

/// @brief Method .ctor addr 0x2b24ab8 size 0x5c virtual false final false
 void _ctor() ;

/// @brief Method GetData addr 0x2b24b14 size 0x5c virtual false final false
static bool GetData(UnityEngine::AudioClip clip, ByRef<::ArrayW<float_t>> data, int32_t numSamples, int32_t samplesOffset) ;

/// @brief Method SetData addr 0x2b24b70 size 0x5c virtual false final false
static bool SetData(UnityEngine::AudioClip clip, ::ArrayW<float_t> data, int32_t numsamples, int32_t samplesOffset) ;

/// @brief Method Construct_Internal addr 0x2b24bcc size 0x28 virtual false final false
static UnityEngine::AudioClip Construct_Internal() ;

/// @brief Method GetName addr 0x2b24bf4 size 0x3c virtual false final false
 ::StringW GetName() ;

/// @brief Method CreateUserSound addr 0x2b24c30 size 0x74 virtual false final false
 void CreateUserSound(::StringW name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool stream) ;

/// @brief Method get_length addr 0x2b24ca4 size 0x3c virtual false final false
 float_t get_length() ;

/// @brief Method get_samples addr 0x2b24ce0 size 0x3c virtual false final false
 int32_t get_samples() ;

/// @brief Method get_channels addr 0x2b24d1c size 0x3c virtual false final false
 int32_t get_channels() ;

/// @brief Method get_frequency addr 0x2b24d58 size 0x3c virtual false final false
 int32_t get_frequency() ;

/// @brief Method LoadAudioData addr 0x2b24d94 size 0x3c virtual false final false
 bool LoadAudioData() ;

/// @brief Method UnloadAudioData addr 0x2b24dd0 size 0x3c virtual false final false
 bool UnloadAudioData() ;

/// @brief Method get_loadState addr 0x2b24e0c size 0x3c virtual false final false
 UnityEngine::AudioDataLoadState get_loadState() ;

/// @brief Method GetData addr 0x2b24e48 size 0x188 virtual false final false
 bool GetData(::ArrayW<float_t> data, int32_t offsetSamples) ;

/// @brief Method SetData addr 0x2b24fd0 size 0x22c virtual false final false
 bool SetData(::ArrayW<float_t> data, int32_t offsetSamples) ;

/// @brief Method Create addr 0x2b251fc size 0x10 virtual false final false
static UnityEngine::AudioClip Create(::StringW name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool stream) ;

/// @brief Method Create addr 0x2b2520c size 0x1bc virtual false final false
static UnityEngine::AudioClip Create(::StringW name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool stream, UnityEngine::UnityEngine__AudioClip__PCMReaderCallback pcmreadercallback, UnityEngine::UnityEngine__AudioClip__PCMSetPositionCallback pcmsetpositioncallback) ;

/// @brief Method add_m_PCMReaderCallback addr 0x2b253c8 size 0x9c virtual false final false
 void add_m_PCMReaderCallback(UnityEngine::UnityEngine__AudioClip__PCMReaderCallback value) ;

/// @brief Method remove_m_PCMReaderCallback addr 0x2b25500 size 0x9c virtual false final false
 void remove_m_PCMReaderCallback(UnityEngine::UnityEngine__AudioClip__PCMReaderCallback value) ;

/// @brief Method add_m_PCMSetPositionCallback addr 0x2b25464 size 0x9c virtual false final false
 void add_m_PCMSetPositionCallback(UnityEngine::UnityEngine__AudioClip__PCMSetPositionCallback value) ;

/// @brief Method remove_m_PCMSetPositionCallback addr 0x2b2559c size 0x9c virtual false final false
 void remove_m_PCMSetPositionCallback(UnityEngine::UnityEngine__AudioClip__PCMSetPositionCallback value) ;

/// @brief Method InvokePCMReaderCallback_Internal addr 0x2b25638 size 0x1c virtual false final false
 void InvokePCMReaderCallback_Internal(::ArrayW<float_t> data) ;

/// @brief Method InvokePCMSetPositionCallback_Internal addr 0x2b25654 size 0x1c virtual false final false
 void InvokePCMSetPositionCallback_Internal(int32_t position) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::AudioClip);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AudioClip, "UnityEngine", "AudioClip");
NEED_NO_BOX(UnityEngine::UnityEngine__AudioClip__PCMReaderCallback);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__AudioClip__PCMReaderCallback, "UnityEngine", "AudioClip/PCMReaderCallback");
NEED_NO_BOX(UnityEngine::UnityEngine__AudioClip__PCMSetPositionCallback);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__AudioClip__PCMSetPositionCallback, "UnityEngine", "AudioClip/PCMSetPositionCallback");
