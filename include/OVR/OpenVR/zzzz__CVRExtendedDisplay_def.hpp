#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace OVR::OpenVR {
struct IVRExtendedDisplay;
}
namespace OVR::OpenVR {
struct EVREye;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRExtendedDisplay;
}
// Type: OVR.OpenVR::CVRExtendedDisplay
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9342))
// CS Name: OVR.OpenVR.CVRExtendedDisplay
class CORDL_TYPE CVRExtendedDisplay : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CVRExtendedDisplay() = default;

// Ctor Parameters [CppParam { name: "", ty: "CVRExtendedDisplay", modifiers: " const&", def_value: None }]
constexpr CVRExtendedDisplay(CVRExtendedDisplay const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CVRExtendedDisplay", modifiers: "&&", def_value: None }]
constexpr CVRExtendedDisplay(CVRExtendedDisplay&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CVRExtendedDisplay(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CVRExtendedDisplay& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CVRExtendedDisplay& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CVRExtendedDisplay& operator=(CVRExtendedDisplay&& o) noexcept = default;
  constexpr CVRExtendedDisplay& operator=(CVRExtendedDisplay const& o) noexcept = default;
                


// Fields

 OVR::OpenVR::IVRExtendedDisplay __declspec(property(get=__get_FnTable, put=__set_FnTable))  FnTable;

constexpr void __set_FnTable(OVR::OpenVR::IVRExtendedDisplay value) ;

constexpr OVR::OpenVR::IVRExtendedDisplay __get_FnTable() const;


// Methods

// Ctor Parameters [CppParam { name: "pInterface", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit CVRExtendedDisplay(::cordl_internals::intptr_t pInterface) ;

/// @brief Method .ctor addr 0x2664560 size 0x114 virtual false final false
 void _ctor(::cordl_internals::intptr_t pInterface) ;

/// @brief Method GetWindowBounds addr 0x2664674 size 0x34 virtual false final false
 void GetWindowBounds(ByRef<int32_t> pnX, ByRef<int32_t> pnY, ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight) ;

/// @brief Method GetEyeOutputViewport addr 0x26646a8 size 0x34 virtual false final false
 void GetEyeOutputViewport(OVR::OpenVR::EVREye eEye, ByRef<uint32_t> pnX, ByRef<uint32_t> pnY, ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight) ;

/// @brief Method GetDXGIOutputInfo addr 0x26646dc size 0x2c virtual false final false
 void GetDXGIOutputInfo(ByRef<int32_t> pnAdapterIndex, ByRef<int32_t> pnAdapterOutputIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
NEED_NO_BOX(OVR::OpenVR::CVRExtendedDisplay);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRExtendedDisplay, "OVR.OpenVR", "CVRExtendedDisplay");
