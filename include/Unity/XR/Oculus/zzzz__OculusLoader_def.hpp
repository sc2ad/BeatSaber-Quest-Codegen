#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/XR/Management/zzzz__XRLoaderHelper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::XR {
class XRDisplaySubsystem;
}
namespace Unity::XR::Oculus {
class OculusSettings;
}
namespace UnityEngine::XR {
class XRInputSubsystemDescriptor;
}
namespace UnityEngine::XR {
class XRDisplaySubsystemDescriptor;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::XR {
class XRInputSubsystem;
}
// Forward declare root types
namespace Unity::XR::Oculus {
struct Unity__XR__Oculus__OculusLoader__DeviceSupportedResult;
}
namespace Unity::XR::Oculus {
class OculusLoader;
}
// Type: ::DeviceSupportedResult
namespace Unity::XR::Oculus {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15221))
// CS Name: Unity.XR.Oculus.OculusLoader::DeviceSupportedResult
struct CORDL_TYPE Unity__XR__Oculus__OculusLoader__DeviceSupportedResult : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__XR__Oculus__OculusLoader__DeviceSupportedResult(int32_t value__) noexcept;


                    constexpr Unity__XR__Oculus__OculusLoader__DeviceSupportedResult(Unity__XR__Oculus__OculusLoader__DeviceSupportedResult const&) = default;
                    constexpr Unity__XR__Oculus__OculusLoader__DeviceSupportedResult(Unity__XR__Oculus__OculusLoader__DeviceSupportedResult&&) = default;
                    constexpr Unity__XR__Oculus__OculusLoader__DeviceSupportedResult& operator=(Unity__XR__Oculus__OculusLoader__DeviceSupportedResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__XR__Oculus__OculusLoader__DeviceSupportedResult& operator=(Unity__XR__Oculus__OculusLoader__DeviceSupportedResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__XR__Oculus__OculusLoader__DeviceSupportedResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Unity__XR__Oculus__OculusLoader__DeviceSupportedResult_Unwrapped : int32_t {
__Supported = 0,
__NotSupported = 1,
__ExitApplication = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Unity__XR__Oculus__OculusLoader__DeviceSupportedResult_Unwrapped () const noexcept {
return std::bit_cast<__Unity__XR__Oculus__OculusLoader__DeviceSupportedResult_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Supported offset 0
static Unity::XR::Oculus::Unity__XR__Oculus__OculusLoader__DeviceSupportedResult const Supported;

/// @brief Field NotSupported offset 0
static Unity::XR::Oculus::Unity__XR__Oculus__OculusLoader__DeviceSupportedResult const NotSupported;

/// @brief Field ExitApplication offset 0
static Unity::XR::Oculus::Unity__XR__Oculus__OculusLoader__DeviceSupportedResult const ExitApplication;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::XR::Oculus
// Type: Unity.XR.Oculus::OculusLoader
namespace Unity::XR::Oculus {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15892))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15222))
// CS Name: Unity.XR.Oculus.OculusLoader
class CORDL_TYPE OculusLoader : public UnityEngine::XR::Management::XRLoaderHelper {
public:
// Declarations
using DeviceSupportedResult = Unity::XR::Oculus::Unity__XR__Oculus__OculusLoader__DeviceSupportedResult;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OculusLoader() = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusLoader", modifiers: " const&", def_value: None }]
constexpr OculusLoader(OculusLoader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusLoader", modifiers: "&&", def_value: None }]
constexpr OculusLoader(OculusLoader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OculusLoader(void* ptr) noexcept : UnityEngine::XR::Management::XRLoaderHelper(ptr) {
}


  constexpr OculusLoader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OculusLoader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OculusLoader& operator=(OculusLoader&& o) noexcept = default;
  constexpr OculusLoader& operator=(OculusLoader const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::List_1<UnityEngine::XR::XRDisplaySubsystemDescriptor> __declspec(property(get=__get_s_DisplaySubsystemDescriptors, put=__set_s_DisplaySubsystemDescriptors))  s_DisplaySubsystemDescriptors;

static void __set_s_DisplaySubsystemDescriptors(System::Collections::Generic::List_1<UnityEngine::XR::XRDisplaySubsystemDescriptor> value) ;

static System::Collections::Generic::List_1<UnityEngine::XR::XRDisplaySubsystemDescriptor> __get_s_DisplaySubsystemDescriptors() ;

static System::Collections::Generic::List_1<UnityEngine::XR::XRInputSubsystemDescriptor> __declspec(property(get=__get_s_InputSubsystemDescriptors, put=__set_s_InputSubsystemDescriptors))  s_InputSubsystemDescriptors;

static void __set_s_InputSubsystemDescriptors(System::Collections::Generic::List_1<UnityEngine::XR::XRInputSubsystemDescriptor> value) ;

static System::Collections::Generic::List_1<UnityEngine::XR::XRInputSubsystemDescriptor> __get_s_InputSubsystemDescriptors() ;


// Properties

 UnityEngine::XR::XRDisplaySubsystem __declspec(property(get=get_displaySubsystem))  displaySubsystem;

 UnityEngine::XR::XRInputSubsystem __declspec(property(get=get_inputSubsystem))  inputSubsystem;


// Methods

/// @brief Method IsDeviceSupported addr 0x2adf1e8 size 0x90 virtual false final false
static Unity::XR::Oculus::Unity__XR__Oculus__OculusLoader__DeviceSupportedResult IsDeviceSupported() ;

/// @brief Method get_displaySubsystem addr 0x2adf27c size 0x70 virtual false final false
 UnityEngine::XR::XRDisplaySubsystem get_displaySubsystem() ;

/// @brief Method get_inputSubsystem addr 0x2adf2ec size 0x70 virtual false final false
 UnityEngine::XR::XRInputSubsystem get_inputSubsystem() ;

/// @brief Method Initialize addr 0x2adf35c size 0x438 virtual true final false
 bool Initialize() ;

/// @brief Method PermissionGrantedCallback addr 0x2adfb24 size 0x64 virtual false final false
 void PermissionGrantedCallback(::StringW permissionName) ;

/// @brief Method Start addr 0x2adfb90 size 0x7c virtual true final false
 bool Start() ;

/// @brief Method Stop addr 0x2adfc0c size 0x7c virtual true final false
 bool Stop() ;

/// @brief Method Deinitialize addr 0x2adfc88 size 0x7c virtual true final false
 bool Deinitialize() ;

/// @brief Method RuntimeLoadOVRPlugin addr 0x2adfd80 size 0x178 virtual false final false
static void RuntimeLoadOVRPlugin() ;

/// @brief Method GetSettings addr 0x2adfefc size 0x48 virtual false final false
 Unity::XR::Oculus::OculusSettings GetSettings() ;

/// @brief Method CheckUnityVersionCompatibility addr 0x2adf794 size 0x2dc virtual false final false
 bool CheckUnityVersionCompatibility() ;

// Ctor Parameters []
explicit OculusLoader() ;

/// @brief Method .ctor addr 0x2adff44 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::Oculus
DEFINE_IL2CPP_ARG_TYPE(Unity::XR::Oculus::Unity__XR__Oculus__OculusLoader__DeviceSupportedResult, "Unity.XR.Oculus", "OculusLoader/DeviceSupportedResult");
NEED_NO_BOX(Unity::XR::Oculus::OculusLoader);
DEFINE_IL2CPP_ARG_TYPE(Unity::XR::Oculus::OculusLoader, "Unity.XR.Oculus", "OculusLoader");
