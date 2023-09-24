#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System {
class Action;
}
namespace UnityEngine {
struct AudioConfiguration;
}
namespace UnityEngine {
class UnityEngine__AudioSettings__AudioConfigurationChangeHandler;
}
namespace UnityEngine {
class UnityEngine__AudioSettings__Mobile;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace UnityEngine {
class AudioSettings;
}
namespace UnityEngine {
class UnityEngine__AudioSettings__AudioConfigurationChangeHandler;
}
namespace UnityEngine {
class UnityEngine__AudioSettings__Mobile;
}
// Type: ::AudioConfigurationChangeHandler
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15601))
// CS Name: UnityEngine.AudioSettings::AudioConfigurationChangeHandler
class CORDL_TYPE UnityEngine__AudioSettings__AudioConfigurationChangeHandler : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__AudioSettings__AudioConfigurationChangeHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__AudioSettings__AudioConfigurationChangeHandler", modifiers: " const&", def_value: None }]
constexpr UnityEngine__AudioSettings__AudioConfigurationChangeHandler(UnityEngine__AudioSettings__AudioConfigurationChangeHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__AudioSettings__AudioConfigurationChangeHandler", modifiers: "&&", def_value: None }]
constexpr UnityEngine__AudioSettings__AudioConfigurationChangeHandler(UnityEngine__AudioSettings__AudioConfigurationChangeHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__AudioSettings__AudioConfigurationChangeHandler(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__AudioSettings__AudioConfigurationChangeHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__AudioSettings__AudioConfigurationChangeHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__AudioSettings__AudioConfigurationChangeHandler& operator=(UnityEngine__AudioSettings__AudioConfigurationChangeHandler&& o) noexcept = default;
  constexpr UnityEngine__AudioSettings__AudioConfigurationChangeHandler& operator=(UnityEngine__AudioSettings__AudioConfigurationChangeHandler const& o) noexcept = default;
                


// Methods

static UnityEngine::UnityEngine__AudioSettings__AudioConfigurationChangeHandler New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2b246ec size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2b247b0 size 0x18 virtual true final false
 void Invoke(bool deviceWasChanged) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: ::Mobile
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15602))
// CS Name: UnityEngine.AudioSettings::Mobile
class CORDL_TYPE UnityEngine__AudioSettings__Mobile : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__AudioSettings__Mobile() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__AudioSettings__Mobile", modifiers: " const&", def_value: None }]
constexpr UnityEngine__AudioSettings__Mobile(UnityEngine__AudioSettings__Mobile const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__AudioSettings__Mobile", modifiers: "&&", def_value: None }]
constexpr UnityEngine__AudioSettings__Mobile(UnityEngine__AudioSettings__Mobile&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__AudioSettings__Mobile(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__AudioSettings__Mobile& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__AudioSettings__Mobile& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__AudioSettings__Mobile& operator=(UnityEngine__AudioSettings__Mobile&& o) noexcept = default;
  constexpr UnityEngine__AudioSettings__Mobile& operator=(UnityEngine__AudioSettings__Mobile const& o) noexcept = default;
                


// Fields

static bool __declspec(property(get=__get__muteState_k__BackingField, put=__set__muteState_k__BackingField))  _muteState_k__BackingField;

static void __set__muteState_k__BackingField(bool value) ;

static bool __get__muteState_k__BackingField() ;

static bool __declspec(property(get=__get__stopAudioOutputOnMute, put=__set__stopAudioOutputOnMute))  _stopAudioOutputOnMute;

static void __set__stopAudioOutputOnMute(bool value) ;

static bool __get__stopAudioOutputOnMute() ;

static System::Action_1<bool> __declspec(property(get=__get_OnMuteStateChanged, put=__set_OnMuteStateChanged))  OnMuteStateChanged;

static void __set_OnMuteStateChanged(System::Action_1<bool> value) ;

static System::Action_1<bool> __get_OnMuteStateChanged() ;


// Properties

static bool __declspec(property(get=get_muteState, put=set_muteState))  muteState;

static bool __declspec(property(get=get_stopAudioOutputOnMute))  stopAudioOutputOnMute;


// Methods

/// @brief Method get_muteState addr 0x2b247c8 size 0x48 virtual false final false
static bool get_muteState() ;

/// @brief Method set_muteState addr 0x2b24810 size 0x4c virtual false final false
static void set_muteState(bool value) ;

/// @brief Method get_stopAudioOutputOnMute addr 0x2b2485c size 0x48 virtual false final false
static bool get_stopAudioOutputOnMute() ;

/// @brief Method InvokeOnMuteStateChanged addr 0x2b248a4 size 0x17c virtual false final false
static void InvokeOnMuteStateChanged(bool mute) ;

/// @brief Method InvokeIsStopAudioOutputOnMuteEnabled addr 0x2b24a70 size 0x48 virtual false final false
static bool InvokeIsStopAudioOutputOnMuteEnabled() ;

/// @brief Method StartAudioOutput addr 0x2b24a48 size 0x28 virtual false final false
static void StartAudioOutput() ;

/// @brief Method StopAudioOutput addr 0x2b24a20 size 0x28 virtual false final false
static void StopAudioOutput() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::AudioSettings
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15603))
// CS Name: UnityEngine.AudioSettings
class CORDL_TYPE AudioSettings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Mobile = UnityEngine::UnityEngine__AudioSettings__Mobile;

using AudioConfigurationChangeHandler = UnityEngine::UnityEngine__AudioSettings__AudioConfigurationChangeHandler;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AudioSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioSettings", modifiers: " const&", def_value: None }]
constexpr AudioSettings(AudioSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioSettings", modifiers: "&&", def_value: None }]
constexpr AudioSettings(AudioSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AudioSettings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AudioSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AudioSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AudioSettings& operator=(AudioSettings&& o) noexcept = default;
  constexpr AudioSettings& operator=(AudioSettings const& o) noexcept = default;
                


// Fields

static UnityEngine::UnityEngine__AudioSettings__AudioConfigurationChangeHandler __declspec(property(get=__get_OnAudioConfigurationChanged, put=__set_OnAudioConfigurationChanged))  OnAudioConfigurationChanged;

static void __set_OnAudioConfigurationChanged(UnityEngine::UnityEngine__AudioSettings__AudioConfigurationChangeHandler value) ;

static UnityEngine::UnityEngine__AudioSettings__AudioConfigurationChangeHandler __get_OnAudioConfigurationChanged() ;

static System::Action __declspec(property(get=__get_OnAudioSystemShuttingDown, put=__set_OnAudioSystemShuttingDown))  OnAudioSystemShuttingDown;

static void __set_OnAudioSystemShuttingDown(System::Action value) ;

static System::Action __get_OnAudioSystemShuttingDown() ;

static System::Action __declspec(property(get=__get_OnAudioSystemStartedUp, put=__set_OnAudioSystemStartedUp))  OnAudioSystemStartedUp;

static void __set_OnAudioSystemStartedUp(System::Action value) ;

static System::Action __get_OnAudioSystemStartedUp() ;


// Properties

static double_t __declspec(property(get=get_dspTime))  dspTime;

static int32_t __declspec(property(get=get_outputSampleRate))  outputSampleRate;


// Methods

/// @brief Method GetSampleRate addr 0x2b2442c size 0x28 virtual false final false
static int32_t GetSampleRate() ;

/// @brief Method get_dspTime addr 0x2b24454 size 0x28 virtual false final false
static double_t get_dspTime() ;

/// @brief Method get_outputSampleRate addr 0x2b2447c size 0x28 virtual false final false
static int32_t get_outputSampleRate() ;

/// @brief Method GetSpatializerPluginName addr 0x2b244a4 size 0x28 virtual false final false
static ::StringW GetSpatializerPluginName() ;

/// @brief Method GetConfiguration addr 0x2b244cc size 0x60 virtual false final false
static UnityEngine::AudioConfiguration GetConfiguration() ;

/// @brief Method InvokeOnAudioConfigurationChanged addr 0x2b24568 size 0x6c virtual false final false
static void InvokeOnAudioConfigurationChanged(bool deviceWasChanged) ;

/// @brief Method InvokeOnAudioSystemShuttingDown addr 0x2b245d4 size 0x64 virtual false final false
static void InvokeOnAudioSystemShuttingDown() ;

/// @brief Method InvokeOnAudioSystemStartedUp addr 0x2b24638 size 0x64 virtual false final false
static void InvokeOnAudioSystemStartedUp() ;

/// @brief Method StartAudioOutput addr 0x2b2469c size 0x28 virtual false final false
static bool StartAudioOutput() ;

/// @brief Method StopAudioOutput addr 0x2b246c4 size 0x28 virtual false final false
static bool StopAudioOutput() ;

/// @brief Method GetConfiguration_Injected addr 0x2b2452c size 0x3c virtual false final false
static void GetConfiguration_Injected(ByRef<UnityEngine::AudioConfiguration> ret) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::AudioSettings);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AudioSettings, "UnityEngine", "AudioSettings");
NEED_NO_BOX(UnityEngine::UnityEngine__AudioSettings__AudioConfigurationChangeHandler);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__AudioSettings__AudioConfigurationChangeHandler, "UnityEngine", "AudioSettings/AudioConfigurationChangeHandler");
NEED_NO_BOX(UnityEngine::UnityEngine__AudioSettings__Mobile);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__AudioSettings__Mobile, "UnityEngine", "AudioSettings/Mobile");
