#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::XR::Management {
class XRManagerSettings;
}
// Forward declare root types
namespace UnityEngine::XR::Management {
class XRGeneralSettings;
}
// Type: UnityEngine.XR.Management::XRGeneralSettings
namespace UnityEngine::XR::Management {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15890))
// CS Name: UnityEngine.XR.Management.XRGeneralSettings
class CORDL_TYPE XRGeneralSettings : public UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~XRGeneralSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "XRGeneralSettings", modifiers: " const&", def_value: None }]
constexpr XRGeneralSettings(XRGeneralSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XRGeneralSettings", modifiers: "&&", def_value: None }]
constexpr XRGeneralSettings(XRGeneralSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XRGeneralSettings(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr XRGeneralSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XRGeneralSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XRGeneralSettings& operator=(XRGeneralSettings&& o) noexcept = default;
  constexpr XRGeneralSettings& operator=(XRGeneralSettings const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_k_SettingsKey, put=__set_k_SettingsKey))  k_SettingsKey;

static void __set_k_SettingsKey(::StringW value) ;

static ::StringW __get_k_SettingsKey() ;

static UnityEngine::XR::Management::XRGeneralSettings __declspec(property(get=__get_s_RuntimeSettingsInstance, put=__set_s_RuntimeSettingsInstance))  s_RuntimeSettingsInstance;

static void __set_s_RuntimeSettingsInstance(UnityEngine::XR::Management::XRGeneralSettings value) ;

static UnityEngine::XR::Management::XRGeneralSettings __get_s_RuntimeSettingsInstance() ;

 UnityEngine::XR::Management::XRManagerSettings __declspec(property(get=__get_m_LoaderManagerInstance, put=__set_m_LoaderManagerInstance))  m_LoaderManagerInstance;

constexpr void __set_m_LoaderManagerInstance(UnityEngine::XR::Management::XRManagerSettings value) ;

constexpr UnityEngine::XR::Management::XRManagerSettings __get_m_LoaderManagerInstance() const;

 bool __declspec(property(get=__get_m_InitManagerOnStart, put=__set_m_InitManagerOnStart))  m_InitManagerOnStart;

constexpr void __set_m_InitManagerOnStart(bool value) ;

constexpr bool __get_m_InitManagerOnStart() const;

 UnityEngine::XR::Management::XRManagerSettings __declspec(property(get=__get_m_XRManager, put=__set_m_XRManager))  m_XRManager;

constexpr void __set_m_XRManager(UnityEngine::XR::Management::XRManagerSettings value) ;

constexpr UnityEngine::XR::Management::XRManagerSettings __get_m_XRManager() const;

 bool __declspec(property(get=__get_m_ProviderIntialized, put=__set_m_ProviderIntialized))  m_ProviderIntialized;

constexpr void __set_m_ProviderIntialized(bool value) ;

constexpr bool __get_m_ProviderIntialized() const;

 bool __declspec(property(get=__get_m_ProviderStarted, put=__set_m_ProviderStarted))  m_ProviderStarted;

constexpr void __set_m_ProviderStarted(bool value) ;

constexpr bool __get_m_ProviderStarted() const;


// Properties

 UnityEngine::XR::Management::XRManagerSettings __declspec(property(get=get_Manager, put=set_Manager))  Manager;

static UnityEngine::XR::Management::XRGeneralSettings __declspec(property(get=get_Instance))  Instance;

 UnityEngine::XR::Management::XRManagerSettings __declspec(property(get=get_AssignedSettings))  AssignedSettings;

 bool __declspec(property(get=get_InitManagerOnStart))  InitManagerOnStart;


// Methods

/// @brief Method get_Manager addr 0x2adccd4 size 0x8 virtual false final false
 UnityEngine::XR::Management::XRManagerSettings get_Manager() ;

/// @brief Method set_Manager addr 0x2adccdc size 0x8 virtual false final false
 void set_Manager(UnityEngine::XR::Management::XRManagerSettings value) ;

/// @brief Method get_Instance addr 0x2adcce4 size 0x58 virtual false final false
static UnityEngine::XR::Management::XRGeneralSettings get_Instance() ;

/// @brief Method get_AssignedSettings addr 0x2adcd3c size 0x8 virtual false final false
 UnityEngine::XR::Management::XRManagerSettings get_AssignedSettings() ;

/// @brief Method get_InitManagerOnStart addr 0x2adcd44 size 0x8 virtual false final false
 bool get_InitManagerOnStart() ;

/// @brief Method Awake addr 0x2adcd4c size 0x130 virtual false final false
 void Awake() ;

/// @brief Method Quit addr 0x2adce7c size 0xdc virtual false final false
static void Quit() ;

/// @brief Method Start addr 0x2add008 size 0x4 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x2add0bc size 0x4 virtual false final false
 void OnDestroy() ;

/// @brief Method AttemptInitializeXRSDKOnLoad addr 0x2add0c0 size 0xe4 virtual false final false
static void AttemptInitializeXRSDKOnLoad() ;

/// @brief Method AttemptStartXRSDKOnBeforeSplashScreen addr 0x2add41c size 0xe4 virtual false final false
static void AttemptStartXRSDKOnBeforeSplashScreen() ;

/// @brief Method InitXRSDK addr 0x2add1a4 size 0x278 virtual false final false
 void InitXRSDK() ;

/// @brief Method StartXRSDK addr 0x2add00c size 0xb0 virtual false final false
 void StartXRSDK() ;

/// @brief Method StopXRSDK addr 0x2add818 size 0xac virtual false final false
 void StopXRSDK() ;

/// @brief Method DeInitXRSDK addr 0x2adcf58 size 0xb0 virtual false final false
 void DeInitXRSDK() ;

// Ctor Parameters []
explicit XRGeneralSettings() ;

/// @brief Method .ctor addr 0x2adda84 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Management
NEED_NO_BOX(UnityEngine::XR::Management::XRGeneralSettings);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::Management::XRGeneralSettings, "UnityEngine.XR.Management", "XRGeneralSettings");
