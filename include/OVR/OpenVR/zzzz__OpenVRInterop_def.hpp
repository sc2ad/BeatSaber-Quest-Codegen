#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace OVR::OpenVR {
struct EVRApplicationType;
}
namespace OVR::OpenVR {
struct EVRInitError;
}
// Forward declare root types
namespace OVR::OpenVR {
class OpenVRInterop;
}
// Type: OVR.OpenVR::OpenVRInterop
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9362))
// CS Name: OVR.OpenVR.OpenVRInterop
class CORDL_TYPE OpenVRInterop : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OpenVRInterop() = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenVRInterop", modifiers: " const&", def_value: None }]
constexpr OpenVRInterop(OpenVRInterop const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenVRInterop", modifiers: "&&", def_value: None }]
constexpr OpenVRInterop(OpenVRInterop&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OpenVRInterop(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OpenVRInterop& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OpenVRInterop& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OpenVRInterop& operator=(OpenVRInterop&& o) noexcept = default;
  constexpr OpenVRInterop& operator=(OpenVRInterop const& o) noexcept = default;
                


// Methods

/// @brief Method InitInternal addr 0x2668950 size 0x84 virtual false final false
static uint32_t InitInternal(ByRef<OVR::OpenVR::EVRInitError> peError, OVR::OpenVR::EVRApplicationType eApplicationType) ;

/// @brief Method InitInternal2 addr 0x26689d4 size 0xb0 virtual false final false
static uint32_t InitInternal2(ByRef<OVR::OpenVR::EVRInitError> peError, OVR::OpenVR::EVRApplicationType eApplicationType, ByRefConst<::StringW> pStartupInfo) ;

/// @brief Method ShutdownInternal addr 0x2668a84 size 0x64 virtual false final false
static void ShutdownInternal() ;

/// @brief Method IsHmdPresent addr 0x2668ae8 size 0x70 virtual false final false
static bool IsHmdPresent() ;

/// @brief Method IsRuntimeInstalled addr 0x2668b58 size 0x70 virtual false final false
static bool IsRuntimeInstalled() ;

/// @brief Method GetStringForHmdError addr 0x2668bc8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t GetStringForHmdError(OVR::OpenVR::EVRInitError error) ;

/// @brief Method GetGenericInterface addr 0x2668c44 size 0x9c virtual false final false
static ::cordl_internals::intptr_t GetGenericInterface(ByRefConst<::StringW> pchInterfaceVersion, ByRef<OVR::OpenVR::EVRInitError> peError) ;

/// @brief Method IsInterfaceVersionValid addr 0x2668ce0 size 0x98 virtual false final false
static bool IsInterfaceVersionValid(ByRefConst<::StringW> pchInterfaceVersion) ;

/// @brief Method GetInitToken addr 0x2668d78 size 0x68 virtual false final false
static uint32_t GetInitToken() ;

// Ctor Parameters []
explicit OpenVRInterop() ;

/// @brief Method .ctor addr 0x2668de0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
NEED_NO_BOX(OVR::OpenVR::OpenVRInterop);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OpenVRInterop, "OVR.OpenVR", "OpenVRInterop");
