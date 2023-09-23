#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRLoaderBase;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrEnvironmentBlendMode;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features {
struct UnityEngine__XR__OpenXR__Features__OpenXRFeature__LoaderEvent;
}
namespace UnityEngine::XR::OpenXR::Features {
struct UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent;
}
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRFeature;
}
// Type: ::LoaderEvent
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14199))
// CS Name: UnityEngine.XR.OpenXR.Features.OpenXRFeature::LoaderEvent
struct CORDL_TYPE UnityEngine__XR__OpenXR__Features__OpenXRFeature__LoaderEvent : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__XR__OpenXR__Features__OpenXRFeature__LoaderEvent(int32_t value__) noexcept;


                    constexpr UnityEngine__XR__OpenXR__Features__OpenXRFeature__LoaderEvent(UnityEngine__XR__OpenXR__Features__OpenXRFeature__LoaderEvent const&) = default;
                    constexpr UnityEngine__XR__OpenXR__Features__OpenXRFeature__LoaderEvent(UnityEngine__XR__OpenXR__Features__OpenXRFeature__LoaderEvent&&) = default;
                    constexpr UnityEngine__XR__OpenXR__Features__OpenXRFeature__LoaderEvent& operator=(UnityEngine__XR__OpenXR__Features__OpenXRFeature__LoaderEvent const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__XR__OpenXR__Features__OpenXRFeature__LoaderEvent& operator=(UnityEngine__XR__OpenXR__Features__OpenXRFeature__LoaderEvent&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__XR__OpenXR__Features__OpenXRFeature__LoaderEvent(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__XR__OpenXR__Features__OpenXRFeature__LoaderEvent_Unwrapped : int32_t {
__SubsystemCreate = 0,
__SubsystemDestroy = 1,
__SubsystemStart = 2,
__SubsystemStop = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__XR__OpenXR__Features__OpenXRFeature__LoaderEvent_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__XR__OpenXR__Features__OpenXRFeature__LoaderEvent_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field SubsystemCreate offset 0
static UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__LoaderEvent const SubsystemCreate;

/// @brief Field SubsystemDestroy offset 0
static UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__LoaderEvent const SubsystemDestroy;

/// @brief Field SubsystemStart offset 0
static UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__LoaderEvent const SubsystemStart;

/// @brief Field SubsystemStop offset 0
static UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__LoaderEvent const SubsystemStop;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Features
// Type: ::NativeEvent
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14200))
// CS Name: UnityEngine.XR.OpenXR.Features.OpenXRFeature::NativeEvent
struct CORDL_TYPE UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent(int32_t value__) noexcept;


                    constexpr UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent(UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent const&) = default;
                    constexpr UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent(UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent&&) = default;
                    constexpr UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent& operator=(UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent& operator=(UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent_Unwrapped : int32_t {
__XrSetupConfigValues = 0,
__XrSystemIdChanged = 1,
__XrInstanceChanged = 2,
__XrSessionChanged = 3,
__XrBeginSession = 4,
__XrSessionStateChanged = 5,
__XrChangedSpaceApp = 6,
__XrEndSession = 7,
__XrDestroySession = 8,
__XrDestroyInstance = 9,
__XrIdle = 10,
__XrReady = 11,
__XrSynchronized = 12,
__XrVisible = 13,
__XrFocused = 14,
__XrStopping = 15,
__XrExiting = 16,
__XrLossPending = 17,
__XrInstanceLossPending = 18,
__XrRestartRequested = 19,
__XrRequestRestartLoop = 20,
__XrRequestGetSystemLoop = 21,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field XrSetupConfigValues offset 0
static UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent const XrSetupConfigValues;

/// @brief Field XrSystemIdChanged offset 0
static UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent const XrSystemIdChanged;

/// @brief Field XrInstanceChanged offset 0
static UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent const XrInstanceChanged;

/// @brief Field XrSessionChanged offset 0
static UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent const XrSessionChanged;

/// @brief Field XrBeginSession offset 0
static UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent const XrBeginSession;

/// @brief Field XrSessionStateChanged offset 0
static UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent const XrSessionStateChanged;

/// @brief Field XrChangedSpaceApp offset 0
static UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent const XrChangedSpaceApp;

/// @brief Field XrEndSession offset 0
static UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent const XrEndSession;

/// @brief Field XrDestroySession offset 0
static UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent const XrDestroySession;

/// @brief Field XrDestroyInstance offset 0
static UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent const XrDestroyInstance;

/// @brief Field XrIdle offset 0
static UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent const XrIdle;

/// @brief Field XrReady offset 0
static UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent const XrReady;

/// @brief Field XrSynchronized offset 0
static UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent const XrSynchronized;

/// @brief Field XrVisible offset 0
static UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent const XrVisible;

/// @brief Field XrFocused offset 0
static UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent const XrFocused;

/// @brief Field XrStopping offset 0
static UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent const XrStopping;

/// @brief Field XrExiting offset 0
static UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent const XrExiting;

/// @brief Field XrLossPending offset 0
static UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent const XrLossPending;

/// @brief Field XrInstanceLossPending offset 0
static UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent const XrInstanceLossPending;

/// @brief Field XrRestartRequested offset 0
static UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent const XrRestartRequested;

/// @brief Field XrRequestRestartLoop offset 0
static UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent const XrRequestRestartLoop;

/// @brief Field XrRequestGetSystemLoop offset 0
static UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent const XrRequestGetSystemLoop;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Features
// Type: UnityEngine.XR.OpenXR.Features::OpenXRFeature
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14201))
// CS Name: UnityEngine.XR.OpenXR.Features.OpenXRFeature
class CORDL_TYPE OpenXRFeature : public UnityEngine::ScriptableObject {
public:
// Declarations
using NativeEvent = UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent;

using LoaderEvent = UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__LoaderEvent;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~OpenXRFeature() = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRFeature", modifiers: " const&", def_value: None }]
constexpr OpenXRFeature(OpenXRFeature const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRFeature", modifiers: "&&", def_value: None }]
constexpr OpenXRFeature(OpenXRFeature&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OpenXRFeature(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr OpenXRFeature& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OpenXRFeature& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OpenXRFeature& operator=(OpenXRFeature&& o) noexcept = default;
  constexpr OpenXRFeature& operator=(OpenXRFeature const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_enabled, put=__set_m_enabled))  m_enabled;

constexpr void __set_m_enabled(bool value) ;

constexpr bool __get_m_enabled() const;

 bool __declspec(property(get=__get__failedInitialization_k__BackingField, put=__set__failedInitialization_k__BackingField))  _failedInitialization_k__BackingField;

constexpr void __set__failedInitialization_k__BackingField(bool value) ;

constexpr bool __get__failedInitialization_k__BackingField() const;

static bool __declspec(property(get=__get__requiredFeatureFailed_k__BackingField, put=__set__requiredFeatureFailed_k__BackingField))  _requiredFeatureFailed_k__BackingField;

static void __set__requiredFeatureFailed_k__BackingField(bool value) ;

static bool __get__requiredFeatureFailed_k__BackingField() ;

 ::StringW __declspec(property(get=__get_nameUi, put=__set_nameUi))  nameUi;

constexpr void __set_nameUi(::StringW value) ;

constexpr ::StringW __get_nameUi() const;

 ::StringW __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(::StringW value) ;

constexpr ::StringW __get_version() const;

 ::StringW __declspec(property(get=__get_featureIdInternal, put=__set_featureIdInternal))  featureIdInternal;

constexpr void __set_featureIdInternal(::StringW value) ;

constexpr ::StringW __get_featureIdInternal() const;

 ::StringW __declspec(property(get=__get_openxrExtensionStrings, put=__set_openxrExtensionStrings))  openxrExtensionStrings;

constexpr void __set_openxrExtensionStrings(::StringW value) ;

constexpr ::StringW __get_openxrExtensionStrings() const;

 ::StringW __declspec(property(get=__get_company, put=__set_company))  company;

constexpr void __set_company(::StringW value) ;

constexpr ::StringW __get_company() const;

 int32_t __declspec(property(get=__get_priority, put=__set_priority))  priority;

constexpr void __set_priority(int32_t value) ;

constexpr int32_t __get_priority() const;

 bool __declspec(property(get=__get_required, put=__set_required))  required;

constexpr void __set_required(bool value) ;

constexpr bool __get_required() const;

 bool __declspec(property(get=__get_internalFieldsUpdated, put=__set_internalFieldsUpdated))  internalFieldsUpdated;

constexpr void __set_internalFieldsUpdated(bool value) ;

constexpr bool __get_internalFieldsUpdated() const;

/// @brief Field Library offset 0
static constexpr ::ConstString  Library{u"UnityOpenXR"};


// Properties

 bool __declspec(property(get=get_failedInitialization, put=set_failedInitialization))  failedInitialization;

static bool __declspec(property(get=get_requiredFeatureFailed, put=set_requiredFeatureFailed))  requiredFeatureFailed;

 bool __declspec(property(get=get_enabled, put=set_enabled))  enabled;

static ::cordl_internals::intptr_t __declspec(property(get=get_xrGetInstanceProcAddr))  xrGetInstanceProcAddr;


// Methods

/// @brief Method get_failedInitialization addr 0x2aeff98 size 0x8 virtual false final false
 bool get_failedInitialization() ;

/// @brief Method set_failedInitialization addr 0x2aeffa0 size 0xc virtual false final false
 void set_failedInitialization(bool value) ;

/// @brief Method get_requiredFeatureFailed addr 0x2aeffac size 0x48 virtual false final false
static bool get_requiredFeatureFailed() ;

/// @brief Method set_requiredFeatureFailed addr 0x2aefff4 size 0x4c virtual false final false
static void set_requiredFeatureFailed(bool value) ;

/// @brief Method get_enabled addr 0x2aea2d4 size 0xec virtual false final false
 bool get_enabled() ;

/// @brief Method set_enabled addr 0x2af0040 size 0x15c virtual false final false
 void set_enabled(bool value) ;

/// @brief Method get_xrGetInstanceProcAddr addr 0x2af019c size 0x8 virtual false final false
static ::cordl_internals::intptr_t get_xrGetInstanceProcAddr() ;

/// @brief Method HookGetInstanceProcAddr addr 0x2af0220 size 0x8 virtual true final false
 ::cordl_internals::intptr_t HookGetInstanceProcAddr(::cordl_internals::intptr_t func) ;

/// @brief Method OnSubsystemCreate addr 0x2af0228 size 0x4 virtual true final false
 void OnSubsystemCreate() ;

/// @brief Method OnSubsystemStart addr 0x2af022c size 0x4 virtual true final false
 void OnSubsystemStart() ;

/// @brief Method OnSubsystemStop addr 0x2af0230 size 0x4 virtual true final false
 void OnSubsystemStop() ;

/// @brief Method OnSubsystemDestroy addr 0x2af0234 size 0x4 virtual true final false
 void OnSubsystemDestroy() ;

/// @brief Method OnInstanceCreate addr 0x2af0238 size 0x8 virtual true final false
 bool OnInstanceCreate(uint64_t xrInstance) ;

/// @brief Method OnSystemChange addr 0x2af0240 size 0x4 virtual true final false
 void OnSystemChange(uint64_t xrSystem) ;

/// @brief Method OnSessionCreate addr 0x2af0244 size 0x4 virtual true final false
 void OnSessionCreate(uint64_t xrSession) ;

/// @brief Method OnAppSpaceChange addr 0x2af0248 size 0x4 virtual true final false
 void OnAppSpaceChange(uint64_t xrSpace) ;

/// @brief Method OnSessionStateChange addr 0x2af024c size 0x4 virtual true final false
 void OnSessionStateChange(int32_t oldState, int32_t newState) ;

/// @brief Method OnSessionBegin addr 0x2af0250 size 0x4 virtual true final false
 void OnSessionBegin(uint64_t xrSession) ;

/// @brief Method OnSessionEnd addr 0x2af0254 size 0x4 virtual true final false
 void OnSessionEnd(uint64_t xrSession) ;

/// @brief Method OnSessionExiting addr 0x2af0258 size 0x4 virtual true final false
 void OnSessionExiting(uint64_t xrSession) ;

/// @brief Method OnSessionDestroy addr 0x2af025c size 0x4 virtual true final false
 void OnSessionDestroy(uint64_t xrSession) ;

/// @brief Method OnInstanceDestroy addr 0x2af0260 size 0x4 virtual true final false
 void OnInstanceDestroy(uint64_t xrInstance) ;

/// @brief Method OnSessionLossPending addr 0x2af0264 size 0x4 virtual true final false
 void OnSessionLossPending(uint64_t xrSession) ;

/// @brief Method OnInstanceLossPending addr 0x2af0268 size 0x4 virtual true final false
 void OnInstanceLossPending(uint64_t xrInstance) ;

/// @brief Method OnFormFactorChange addr 0x2af026c size 0x4 virtual true final false
 void OnFormFactorChange(int32_t xrFormFactor) ;

/// @brief Method OnViewConfigurationTypeChange addr 0x2af0270 size 0x4 virtual true final false
 void OnViewConfigurationTypeChange(int32_t xrViewConfigurationType) ;

/// @brief Method OnEnvironmentBlendModeChange addr 0x2af0274 size 0x4 virtual true final false
 void OnEnvironmentBlendModeChange(UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode xrEnvironmentBlendMode) ;

/// @brief Method OnEnabledChange addr 0x2af0278 size 0x4 virtual true final false
 void OnEnabledChange() ;

/// @brief Method PathToString addr 0x2af027c size 0x7c virtual false final false
static ::StringW PathToString(uint64_t path) ;

/// @brief Method StringToPath addr 0x2af0384 size 0x24 virtual false final false
static uint64_t StringToPath(::StringW str) ;

/// @brief Method GetCurrentInteractionProfile addr 0x2af0448 size 0x24 virtual false final false
static uint64_t GetCurrentInteractionProfile(uint64_t userPath) ;

/// @brief Method GetCurrentInteractionProfile addr 0x2af04f8 size 0x3c virtual false final false
static uint64_t GetCurrentInteractionProfile(::StringW userPath) ;

/// @brief Method GetCurrentAppSpace addr 0x2af0534 size 0x24 virtual false final false
static uint64_t GetCurrentAppSpace() ;

/// @brief Method GetViewConfigurationTypeForRenderPass addr 0x2af05dc size 0x4 virtual false final false
static int32_t GetViewConfigurationTypeForRenderPass(int32_t renderPassIndex) ;

/// @brief Method SetEnvironmentBlendMode addr 0x2af065c size 0x4 virtual false final false
static void SetEnvironmentBlendMode(UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode xrEnvironmentBlendMode) ;

/// @brief Method GetEnvironmentBlendMode addr 0x2af06dc size 0x4 virtual false final false
static UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode GetEnvironmentBlendMode() ;

/// @brief Method CreateSubsystem addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TDescriptor,typename TSubsystem>
 void CreateSubsystem(System::Collections::Generic::List_1<TDescriptor> descriptors, ::StringW id) ;

/// @brief Method StartSubsystem addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void StartSubsystem() ;

/// @brief Method StopSubsystem addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void StopSubsystem() ;

/// @brief Method DestroySubsystem addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void DestroySubsystem() ;

/// @brief Method OnEnable addr 0x2af0748 size 0x4 virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2af074c size 0x4 virtual true final false
 void OnDisable() ;

/// @brief Method Awake addr 0x2af0750 size 0x4 virtual true final false
 void Awake() ;

/// @brief Method ReceiveLoaderEvent addr 0x2ae7de8 size 0x1d4 virtual false final false
static bool ReceiveLoaderEvent(UnityEngine::XR::OpenXR::OpenXRLoaderBase loader, UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__LoaderEvent e) ;

/// @brief Method ReceiveNativeEvent addr 0x2aeaad0 size 0x300 virtual false final false
static void ReceiveNativeEvent(UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent e, uint64_t payload) ;

/// @brief Method Initialize addr 0x2ae6fe0 size 0x120 virtual false final false
static void Initialize() ;

/// @brief Method HookGetInstanceProcAddr addr 0x2ae7168 size 0x11c virtual false final false
static void HookGetInstanceProcAddr() ;

/// @brief Method GetAction addr 0x2af0924 size 0x58 virtual false final false
 uint64_t GetAction(UnityEngine::InputSystem::InputAction inputAction) ;

/// @brief Method Internal_PathToStringPtr addr 0x2af02f8 size 0x8c virtual false final false
static bool Internal_PathToStringPtr(uint64_t pathId, ByRef<::cordl_internals::intptr_t> path) ;

/// @brief Method Internal_StringToPath addr 0x2af03a8 size 0xa0 virtual false final false
static bool Internal_StringToPath(::StringW str, ByRef<uint64_t> pathId) ;

/// @brief Method Internal_GetCurrentInteractionProfile addr 0x2af046c size 0x8c virtual false final false
static bool Internal_GetCurrentInteractionProfile(uint64_t pathId, ByRef<uint64_t> interactionProfile) ;

/// @brief Method Internal_GetFormFactor addr 0x2af0754 size 0x68 virtual false final false
static int32_t Internal_GetFormFactor() ;

/// @brief Method Internal_GetViewConfigurationType addr 0x2af07bc size 0x68 virtual false final false
static int32_t Internal_GetViewConfigurationType() ;

/// @brief Method Internal_GetViewTypeFromRenderIndex addr 0x2af05e0 size 0x7c virtual false final false
static int32_t Internal_GetViewTypeFromRenderIndex(int32_t renderPassIndex) ;

/// @brief Method Internal_GetSessionState addr 0x2af0824 size 0x84 virtual false final false
static void Internal_GetSessionState(ByRef<int32_t> oldState, ByRef<int32_t> newState) ;

/// @brief Method Internal_GetEnvironmentBlendMode addr 0x2af06e0 size 0x68 virtual false final false
static UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode Internal_GetEnvironmentBlendMode() ;

/// @brief Method Internal_SetEnvironmentBlendMode addr 0x2af0660 size 0x7c virtual false final false
static void Internal_SetEnvironmentBlendMode(UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode xrEnvironmentBlendMode) ;

/// @brief Method Internal_GetAppSpace addr 0x2af0558 size 0x84 virtual false final false
static bool Internal_GetAppSpace(ByRef<uint64_t> appSpace) ;

/// @brief Method Internal_GetProcAddressPtr addr 0x2af01a4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t Internal_GetProcAddressPtr(bool loaderDefault) ;

/// @brief Method Internal_SetProcAddressPtrAndLoadStage1 addr 0x2af08a8 size 0x7c virtual false final false
static void Internal_SetProcAddressPtrAndLoadStage1(::cordl_internals::intptr_t func) ;

// Ctor Parameters []
explicit OpenXRFeature() ;

/// @brief Method .ctor addr 0x2af097c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Features
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__LoaderEvent, "UnityEngine.XR.OpenXR.Features", "OpenXRFeature/LoaderEvent");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent, "UnityEngine.XR.OpenXR.Features", "OpenXRFeature/NativeEvent");
NEED_NO_BOX(UnityEngine::XR::OpenXR::Features::OpenXRFeature);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::Features::OpenXRFeature, "UnityEngine.XR.OpenXR.Features", "OpenXRFeature");
