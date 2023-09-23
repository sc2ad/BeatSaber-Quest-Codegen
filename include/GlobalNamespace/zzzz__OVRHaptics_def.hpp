#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class OVRHapticsClip;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class OVRNativeBuffer;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__OVRHaptics__Config;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRHaptics__OVRHapticsChannel;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRHaptics__OVRHapticsOutput;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker;
}
namespace GlobalNamespace {
class OVRHaptics;
}
// Type: ::Config
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8487))
// CS Name: OVRHaptics::Config
class CORDL_TYPE GlobalNamespace__OVRHaptics__Config : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__OVRHaptics__Config() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRHaptics__Config", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRHaptics__Config(GlobalNamespace__OVRHaptics__Config const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRHaptics__Config", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRHaptics__Config(GlobalNamespace__OVRHaptics__Config&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRHaptics__Config(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRHaptics__Config& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRHaptics__Config& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRHaptics__Config& operator=(GlobalNamespace__OVRHaptics__Config&& o) noexcept = default;
  constexpr GlobalNamespace__OVRHaptics__Config& operator=(GlobalNamespace__OVRHaptics__Config const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get__SampleRateHz_k__BackingField, put=__set__SampleRateHz_k__BackingField))  _SampleRateHz_k__BackingField;

static void __set__SampleRateHz_k__BackingField(int32_t value) ;

static int32_t __get__SampleRateHz_k__BackingField() ;

static int32_t __declspec(property(get=__get__SampleSizeInBytes_k__BackingField, put=__set__SampleSizeInBytes_k__BackingField))  _SampleSizeInBytes_k__BackingField;

static void __set__SampleSizeInBytes_k__BackingField(int32_t value) ;

static int32_t __get__SampleSizeInBytes_k__BackingField() ;

static int32_t __declspec(property(get=__get__MinimumSafeSamplesQueued_k__BackingField, put=__set__MinimumSafeSamplesQueued_k__BackingField))  _MinimumSafeSamplesQueued_k__BackingField;

static void __set__MinimumSafeSamplesQueued_k__BackingField(int32_t value) ;

static int32_t __get__MinimumSafeSamplesQueued_k__BackingField() ;

static int32_t __declspec(property(get=__get__MinimumBufferSamplesCount_k__BackingField, put=__set__MinimumBufferSamplesCount_k__BackingField))  _MinimumBufferSamplesCount_k__BackingField;

static void __set__MinimumBufferSamplesCount_k__BackingField(int32_t value) ;

static int32_t __get__MinimumBufferSamplesCount_k__BackingField() ;

static int32_t __declspec(property(get=__get__OptimalBufferSamplesCount_k__BackingField, put=__set__OptimalBufferSamplesCount_k__BackingField))  _OptimalBufferSamplesCount_k__BackingField;

static void __set__OptimalBufferSamplesCount_k__BackingField(int32_t value) ;

static int32_t __get__OptimalBufferSamplesCount_k__BackingField() ;

static int32_t __declspec(property(get=__get__MaximumBufferSamplesCount_k__BackingField, put=__set__MaximumBufferSamplesCount_k__BackingField))  _MaximumBufferSamplesCount_k__BackingField;

static void __set__MaximumBufferSamplesCount_k__BackingField(int32_t value) ;

static int32_t __get__MaximumBufferSamplesCount_k__BackingField() ;


// Properties

static int32_t __declspec(property(get=get_SampleRateHz, put=set_SampleRateHz))  SampleRateHz;

static int32_t __declspec(property(get=get_SampleSizeInBytes, put=set_SampleSizeInBytes))  SampleSizeInBytes;

static int32_t __declspec(property(get=get_MinimumSafeSamplesQueued, put=set_MinimumSafeSamplesQueued))  MinimumSafeSamplesQueued;

static int32_t __declspec(property(get=get_MinimumBufferSamplesCount, put=set_MinimumBufferSamplesCount))  MinimumBufferSamplesCount;

static int32_t __declspec(property(get=get_OptimalBufferSamplesCount, put=set_OptimalBufferSamplesCount))  OptimalBufferSamplesCount;

static int32_t __declspec(property(get=get_MaximumBufferSamplesCount, put=set_MaximumBufferSamplesCount))  MaximumBufferSamplesCount;


// Methods

/// @brief Method get_SampleRateHz addr 0x25bab94 size 0x58 virtual false final false
static int32_t get_SampleRateHz() ;

/// @brief Method set_SampleRateHz addr 0x25babec size 0x5c virtual false final false
static void set_SampleRateHz(int32_t value) ;

/// @brief Method get_SampleSizeInBytes addr 0x25bac48 size 0x58 virtual false final false
static int32_t get_SampleSizeInBytes() ;

/// @brief Method set_SampleSizeInBytes addr 0x25baca0 size 0x5c virtual false final false
static void set_SampleSizeInBytes(int32_t value) ;

/// @brief Method get_MinimumSafeSamplesQueued addr 0x25bacfc size 0x58 virtual false final false
static int32_t get_MinimumSafeSamplesQueued() ;

/// @brief Method set_MinimumSafeSamplesQueued addr 0x25bad54 size 0x5c virtual false final false
static void set_MinimumSafeSamplesQueued(int32_t value) ;

/// @brief Method get_MinimumBufferSamplesCount addr 0x25badb0 size 0x58 virtual false final false
static int32_t get_MinimumBufferSamplesCount() ;

/// @brief Method set_MinimumBufferSamplesCount addr 0x25bae08 size 0x5c virtual false final false
static void set_MinimumBufferSamplesCount(int32_t value) ;

/// @brief Method get_OptimalBufferSamplesCount addr 0x25bae64 size 0x58 virtual false final false
static int32_t get_OptimalBufferSamplesCount() ;

/// @brief Method set_OptimalBufferSamplesCount addr 0x25baebc size 0x5c virtual false final false
static void set_OptimalBufferSamplesCount(int32_t value) ;

/// @brief Method get_MaximumBufferSamplesCount addr 0x25baf18 size 0x58 virtual false final false
static int32_t get_MaximumBufferSamplesCount() ;

/// @brief Method set_MaximumBufferSamplesCount addr 0x25baf70 size 0x5c virtual false final false
static void set_MaximumBufferSamplesCount(int32_t value) ;

/// @brief Method Load addr 0x25b9c10 size 0x200 virtual false final false
static void Load() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRHapticsChannel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8488))
// CS Name: OVRHaptics::OVRHapticsChannel
class CORDL_TYPE GlobalNamespace__OVRHaptics__OVRHapticsChannel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__OVRHaptics__OVRHapticsChannel() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRHaptics__OVRHapticsChannel", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRHaptics__OVRHapticsChannel(GlobalNamespace__OVRHaptics__OVRHapticsChannel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRHaptics__OVRHapticsChannel", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRHaptics__OVRHapticsChannel(GlobalNamespace__OVRHaptics__OVRHapticsChannel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRHaptics__OVRHapticsChannel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRHaptics__OVRHapticsChannel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRHaptics__OVRHapticsChannel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRHaptics__OVRHapticsChannel& operator=(GlobalNamespace__OVRHaptics__OVRHapticsChannel&& o) noexcept = default;
  constexpr GlobalNamespace__OVRHaptics__OVRHapticsChannel& operator=(GlobalNamespace__OVRHaptics__OVRHapticsChannel const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__OVRHaptics__OVRHapticsOutput __declspec(property(get=__get_m_output, put=__set_m_output))  m_output;

constexpr void __set_m_output(GlobalNamespace::GlobalNamespace__OVRHaptics__OVRHapticsOutput value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRHaptics__OVRHapticsOutput __get_m_output() const;


// Methods

// Ctor Parameters [CppParam { name: "outputIndex", ty: "uint32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__OVRHaptics__OVRHapticsChannel(uint32_t outputIndex) ;

/// @brief Method .ctor addr 0x25b9fb4 size 0x98 virtual false final false
 void _ctor(uint32_t outputIndex) ;

/// @brief Method Preempt addr 0x25bafd0 size 0x18 virtual false final false
 void Preempt(GlobalNamespace::OVRHapticsClip clip) ;

/// @brief Method Queue addr 0x25bb108 size 0x18 virtual false final false
 void Queue(GlobalNamespace::OVRHapticsClip clip) ;

/// @brief Method Mix addr 0x25bb208 size 0x18 virtual false final false
 void Mix(GlobalNamespace::OVRHapticsClip clip) ;

/// @brief Method Clear addr 0x25bb6d8 size 0x18 virtual false final false
 void Clear() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ClipPlaybackTracker
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8489))
// CS Name: OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker
class CORDL_TYPE GlobalNamespace__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker(GlobalNamespace__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker(GlobalNamespace__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker& operator=(GlobalNamespace__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker&& o) noexcept = default;
  constexpr GlobalNamespace__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker& operator=(GlobalNamespace__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__ReadCount_k__BackingField, put=__set__ReadCount_k__BackingField))  _ReadCount_k__BackingField;

constexpr void __set__ReadCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__ReadCount_k__BackingField() const;

 GlobalNamespace::OVRHapticsClip __declspec(property(get=__get__Clip_k__BackingField, put=__set__Clip_k__BackingField))  _Clip_k__BackingField;

constexpr void __set__Clip_k__BackingField(GlobalNamespace::OVRHapticsClip value) ;

constexpr GlobalNamespace::OVRHapticsClip __get__Clip_k__BackingField() const;


// Properties

 int32_t __declspec(property(get=get_ReadCount, put=set_ReadCount))  ReadCount;

 GlobalNamespace::OVRHapticsClip __declspec(property(get=get_Clip, put=set_Clip))  Clip;


// Methods

/// @brief Method get_ReadCount addr 0x25bba90 size 0x8 virtual false final false
 int32_t get_ReadCount() ;

/// @brief Method set_ReadCount addr 0x25bba98 size 0x8 virtual false final false
 void set_ReadCount(int32_t value) ;

/// @brief Method get_Clip addr 0x25bbaa0 size 0x8 virtual false final false
 GlobalNamespace::OVRHapticsClip get_Clip() ;

/// @brief Method set_Clip addr 0x25bbaa8 size 0x8 virtual false final false
 void set_Clip(GlobalNamespace::OVRHapticsClip value) ;

// Ctor Parameters [CppParam { name: "clip", ty: "GlobalNamespace::OVRHapticsClip", modifiers: "", def_value: None }]
explicit GlobalNamespace__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker(GlobalNamespace::OVRHapticsClip clip) ;

/// @brief Method .ctor addr 0x25bb860 size 0x28 virtual false final false
 void _ctor(GlobalNamespace::OVRHapticsClip clip) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRHapticsOutput
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8490))
// CS Name: OVRHaptics::OVRHapticsOutput
class CORDL_TYPE GlobalNamespace__OVRHaptics__OVRHapticsOutput : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ClipPlaybackTracker = GlobalNamespace::GlobalNamespace__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~GlobalNamespace__OVRHaptics__OVRHapticsOutput() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRHaptics__OVRHapticsOutput", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRHaptics__OVRHapticsOutput(GlobalNamespace__OVRHaptics__OVRHapticsOutput const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRHaptics__OVRHapticsOutput", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRHaptics__OVRHapticsOutput(GlobalNamespace__OVRHaptics__OVRHapticsOutput&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRHaptics__OVRHapticsOutput(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRHaptics__OVRHapticsOutput& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRHaptics__OVRHapticsOutput& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRHaptics__OVRHapticsOutput& operator=(GlobalNamespace__OVRHaptics__OVRHapticsOutput&& o) noexcept = default;
  constexpr GlobalNamespace__OVRHaptics__OVRHapticsOutput& operator=(GlobalNamespace__OVRHaptics__OVRHapticsOutput const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_lowLatencyMode, put=__set_m_lowLatencyMode))  m_lowLatencyMode;

constexpr void __set_m_lowLatencyMode(bool value) ;

constexpr bool __get_m_lowLatencyMode() const;

 bool __declspec(property(get=__get_m_paddingEnabled, put=__set_m_paddingEnabled))  m_paddingEnabled;

constexpr void __set_m_paddingEnabled(bool value) ;

constexpr bool __get_m_paddingEnabled() const;

 int32_t __declspec(property(get=__get_m_prevSamplesQueued, put=__set_m_prevSamplesQueued))  m_prevSamplesQueued;

constexpr void __set_m_prevSamplesQueued(int32_t value) ;

constexpr int32_t __get_m_prevSamplesQueued() const;

 float_t __declspec(property(get=__get_m_prevSamplesQueuedTime, put=__set_m_prevSamplesQueuedTime))  m_prevSamplesQueuedTime;

constexpr void __set_m_prevSamplesQueuedTime(float_t value) ;

constexpr float_t __get_m_prevSamplesQueuedTime() const;

 int32_t __declspec(property(get=__get_m_numPredictionHits, put=__set_m_numPredictionHits))  m_numPredictionHits;

constexpr void __set_m_numPredictionHits(int32_t value) ;

constexpr int32_t __get_m_numPredictionHits() const;

 int32_t __declspec(property(get=__get_m_numPredictionMisses, put=__set_m_numPredictionMisses))  m_numPredictionMisses;

constexpr void __set_m_numPredictionMisses(int32_t value) ;

constexpr int32_t __get_m_numPredictionMisses() const;

 int32_t __declspec(property(get=__get_m_numUnderruns, put=__set_m_numUnderruns))  m_numUnderruns;

constexpr void __set_m_numUnderruns(int32_t value) ;

constexpr int32_t __get_m_numUnderruns() const;

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker> __declspec(property(get=__get_m_pendingClips, put=__set_m_pendingClips))  m_pendingClips;

constexpr void __set_m_pendingClips(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker> __get_m_pendingClips() const;

 uint32_t __declspec(property(get=__get_m_controller, put=__set_m_controller))  m_controller;

constexpr void __set_m_controller(uint32_t value) ;

constexpr uint32_t __get_m_controller() const;

 GlobalNamespace::OVRNativeBuffer __declspec(property(get=__get_m_nativeBuffer, put=__set_m_nativeBuffer))  m_nativeBuffer;

constexpr void __set_m_nativeBuffer(GlobalNamespace::OVRNativeBuffer value) ;

constexpr GlobalNamespace::OVRNativeBuffer __get_m_nativeBuffer() const;

 GlobalNamespace::OVRHapticsClip __declspec(property(get=__get_m_paddingClip, put=__set_m_paddingClip))  m_paddingClip;

constexpr void __set_m_paddingClip(GlobalNamespace::OVRHapticsClip value) ;

constexpr GlobalNamespace::OVRHapticsClip __get_m_paddingClip() const;

 int32_t __declspec(property(get=__get_PrevSampleRateHz, put=__set_PrevSampleRateHz))  PrevSampleRateHz;

constexpr void __set_PrevSampleRateHz(int32_t value) ;

constexpr int32_t __get_PrevSampleRateHz() const;


// Methods

// Ctor Parameters [CppParam { name: "controller", ty: "uint32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__OVRHaptics__OVRHapticsOutput(uint32_t controller) ;

/// @brief Method .ctor addr 0x25b9e10 size 0x1a4 virtual false final false
 void _ctor(uint32_t controller) ;

/// @brief Method Process addr 0x25ba128 size 0xa6c virtual false final false
 void Process() ;

/// @brief Method Preempt addr 0x25bafe8 size 0x120 virtual false final false
 void Preempt(GlobalNamespace::OVRHapticsClip clip) ;

/// @brief Method Queue addr 0x25bb120 size 0xe8 virtual false final false
 void Queue(GlobalNamespace::OVRHapticsClip clip) ;

/// @brief Method Mix addr 0x25bb220 size 0x4b8 virtual false final false
 void Mix(GlobalNamespace::OVRHapticsClip clip) ;

/// @brief Method Clear addr 0x25bb6f0 size 0x70 virtual false final false
 void Clear() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRHaptics
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8491))
// CS Name: OVRHaptics
class CORDL_TYPE OVRHaptics : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using OVRHapticsOutput = GlobalNamespace::GlobalNamespace__OVRHaptics__OVRHapticsOutput;

using OVRHapticsChannel = GlobalNamespace::GlobalNamespace__OVRHaptics__OVRHapticsChannel;

using Config = GlobalNamespace::GlobalNamespace__OVRHaptics__Config;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OVRHaptics() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRHaptics", modifiers: " const&", def_value: None }]
constexpr OVRHaptics(OVRHaptics const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRHaptics", modifiers: "&&", def_value: None }]
constexpr OVRHaptics(OVRHaptics&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRHaptics(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OVRHaptics& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRHaptics& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRHaptics& operator=(OVRHaptics&& o) noexcept = default;
  constexpr OVRHaptics& operator=(OVRHaptics const& o) noexcept = default;
                


// Fields

static ::ArrayW<GlobalNamespace::GlobalNamespace__OVRHaptics__OVRHapticsChannel> __declspec(property(get=__get_Channels, put=__set_Channels))  Channels;

static void __set_Channels(::ArrayW<GlobalNamespace::GlobalNamespace__OVRHaptics__OVRHapticsChannel> value) ;

static ::ArrayW<GlobalNamespace::GlobalNamespace__OVRHaptics__OVRHapticsChannel> __get_Channels() ;

static GlobalNamespace::GlobalNamespace__OVRHaptics__OVRHapticsChannel __declspec(property(get=__get_LeftChannel, put=__set_LeftChannel))  LeftChannel;

static void __set_LeftChannel(GlobalNamespace::GlobalNamespace__OVRHaptics__OVRHapticsChannel value) ;

static GlobalNamespace::GlobalNamespace__OVRHaptics__OVRHapticsChannel __get_LeftChannel() ;

static GlobalNamespace::GlobalNamespace__OVRHaptics__OVRHapticsChannel __declspec(property(get=__get_RightChannel, put=__set_RightChannel))  RightChannel;

static void __set_RightChannel(GlobalNamespace::GlobalNamespace__OVRHaptics__OVRHapticsChannel value) ;

static GlobalNamespace::GlobalNamespace__OVRHaptics__OVRHapticsChannel __get_RightChannel() ;

static ::ArrayW<GlobalNamespace::GlobalNamespace__OVRHaptics__OVRHapticsOutput> __declspec(property(get=__get_m_outputs, put=__set_m_outputs))  m_outputs;

static void __set_m_outputs(::ArrayW<GlobalNamespace::GlobalNamespace__OVRHaptics__OVRHapticsOutput> value) ;

static ::ArrayW<GlobalNamespace::GlobalNamespace__OVRHaptics__OVRHapticsOutput> __get_m_outputs() ;


// Methods

/// @brief Method Process addr 0x25ba04c size 0xdc virtual false final false
static void Process() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRHaptics__Config);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRHaptics__Config, "", "OVRHaptics/Config");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRHaptics__OVRHapticsChannel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRHaptics__OVRHapticsChannel, "", "OVRHaptics/OVRHapticsChannel");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRHaptics__OVRHapticsOutput);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRHaptics__OVRHapticsOutput, "", "OVRHaptics/OVRHapticsOutput");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker, "", "OVRHaptics/OVRHapticsOutput/ClipPlaybackTracker");
NEED_NO_BOX(GlobalNamespace::OVRHaptics);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRHaptics, "", "OVRHaptics");
