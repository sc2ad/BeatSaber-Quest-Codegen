#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace Oculus::Platform {
class PlatformSettings;
}
// Type: Oculus.Platform::PlatformSettings
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13345))
// CS Name: Oculus.Platform.PlatformSettings
class CORDL_TYPE PlatformSettings : public UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~PlatformSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlatformSettings", modifiers: " const&", def_value: None }]
constexpr PlatformSettings(PlatformSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlatformSettings", modifiers: "&&", def_value: None }]
constexpr PlatformSettings(PlatformSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlatformSettings(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr PlatformSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlatformSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlatformSettings& operator=(PlatformSettings&& o) noexcept = default;
  constexpr PlatformSettings& operator=(PlatformSettings const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_ovrAppID, put=__set_ovrAppID))  ovrAppID;

constexpr void __set_ovrAppID(::StringW value) ;

constexpr ::StringW __get_ovrAppID() const;

 ::StringW __declspec(property(get=__get_ovrMobileAppID, put=__set_ovrMobileAppID))  ovrMobileAppID;

constexpr void __set_ovrMobileAppID(::StringW value) ;

constexpr ::StringW __get_ovrMobileAppID() const;

 bool __declspec(property(get=__get_ovrUseStandalonePlatform, put=__set_ovrUseStandalonePlatform))  ovrUseStandalonePlatform;

constexpr void __set_ovrUseStandalonePlatform(bool value) ;

constexpr bool __get_ovrUseStandalonePlatform() const;

static Oculus::Platform::PlatformSettings __declspec(property(get=__get_instance, put=__set_instance))  instance;

static void __set_instance(Oculus::Platform::PlatformSettings value) ;

static Oculus::Platform::PlatformSettings __get_instance() ;


// Properties

static ::StringW __declspec(property(get=get_AppID, put=set_AppID))  AppID;

static ::StringW __declspec(property(get=get_MobileAppID, put=set_MobileAppID))  MobileAppID;

static bool __declspec(property(get=get_UseStandalonePlatform, put=set_UseStandalonePlatform))  UseStandalonePlatform;

static Oculus::Platform::PlatformSettings __declspec(property(get=get_Instance, put=set_Instance))  Instance;


// Methods

/// @brief Method get_AppID addr 0x2598f30 size 0x1c virtual false final false
static ::StringW get_AppID() ;

/// @brief Method set_AppID addr 0x2599070 size 0x20 virtual false final false
static void set_AppID(::StringW value) ;

/// @brief Method get_MobileAppID addr 0x2599090 size 0x1c virtual false final false
static ::StringW get_MobileAppID() ;

/// @brief Method set_MobileAppID addr 0x25990ac size 0x20 virtual false final false
static void set_MobileAppID(::StringW value) ;

/// @brief Method get_UseStandalonePlatform addr 0x25990cc size 0x1c virtual false final false
static bool get_UseStandalonePlatform() ;

/// @brief Method set_UseStandalonePlatform addr 0x25990e8 size 0x24 virtual false final false
static void set_UseStandalonePlatform(bool value) ;

/// @brief Method get_Instance addr 0x2598f4c size 0x124 virtual false final false
static Oculus::Platform::PlatformSettings get_Instance() ;

/// @brief Method set_Instance addr 0x259910c size 0x4c virtual false final false
static void set_Instance(Oculus::Platform::PlatformSettings value) ;

// Ctor Parameters []
explicit PlatformSettings() ;

/// @brief Method .ctor addr 0x2599158 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::PlatformSettings);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::PlatformSettings, "Oculus.Platform", "PlatformSettings");
