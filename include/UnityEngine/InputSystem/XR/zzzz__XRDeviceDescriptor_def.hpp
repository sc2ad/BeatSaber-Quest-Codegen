#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::InputSystem::XR {
struct XRFeatureDescriptor;
}
namespace UnityEngine::XR {
struct InputDeviceCharacteristics;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
class XRDeviceDescriptor;
}
// Type: UnityEngine.InputSystem.XR::XRDeviceDescriptor
namespace UnityEngine::InputSystem::XR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6419))
// CS Name: UnityEngine.InputSystem.XR.XRDeviceDescriptor
class CORDL_TYPE XRDeviceDescriptor : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~XRDeviceDescriptor() = default;

// Ctor Parameters [CppParam { name: "", ty: "XRDeviceDescriptor", modifiers: " const&", def_value: None }]
constexpr XRDeviceDescriptor(XRDeviceDescriptor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XRDeviceDescriptor", modifiers: "&&", def_value: None }]
constexpr XRDeviceDescriptor(XRDeviceDescriptor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XRDeviceDescriptor(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XRDeviceDescriptor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XRDeviceDescriptor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XRDeviceDescriptor& operator=(XRDeviceDescriptor&& o) noexcept = default;
  constexpr XRDeviceDescriptor& operator=(XRDeviceDescriptor const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_deviceName, put=__set_deviceName))  deviceName;

constexpr void __set_deviceName(::StringW value) ;

constexpr ::StringW __get_deviceName() const;

 ::StringW __declspec(property(get=__get_manufacturer, put=__set_manufacturer))  manufacturer;

constexpr void __set_manufacturer(::StringW value) ;

constexpr ::StringW __get_manufacturer() const;

 ::StringW __declspec(property(get=__get_serialNumber, put=__set_serialNumber))  serialNumber;

constexpr void __set_serialNumber(::StringW value) ;

constexpr ::StringW __get_serialNumber() const;

 ::UnityEngine::XR::InputDeviceCharacteristics __declspec(property(get=__get_characteristics, put=__set_characteristics))  characteristics;

constexpr void __set_characteristics(::UnityEngine::XR::InputDeviceCharacteristics value) ;

constexpr ::UnityEngine::XR::InputDeviceCharacteristics __get_characteristics() const;

 int32_t __declspec(property(get=__get_deviceId, put=__set_deviceId))  deviceId;

constexpr void __set_deviceId(int32_t value) ;

constexpr int32_t __get_deviceId() const;

 ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::XRFeatureDescriptor> __declspec(property(get=__get_inputFeatures, put=__set_inputFeatures))  inputFeatures;

constexpr void __set_inputFeatures(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::XRFeatureDescriptor> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::XRFeatureDescriptor> __get_inputFeatures() const;


// Methods

/// @brief Method ToJson addr 0x29359b8 size 0x8 virtual false final false
 ::StringW ToJson() ;

/// @brief Method FromJson addr 0x2933278 size 0x48 virtual false final false
static ::UnityEngine::InputSystem::XR::XRDeviceDescriptor FromJson(::StringW json) ;

// Ctor Parameters []
explicit XRDeviceDescriptor() ;

/// @brief Method .ctor addr 0x29359c0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::XR
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::XR::XRDeviceDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::XRDeviceDescriptor, "UnityEngine.InputSystem.XR", "XRDeviceDescriptor");
