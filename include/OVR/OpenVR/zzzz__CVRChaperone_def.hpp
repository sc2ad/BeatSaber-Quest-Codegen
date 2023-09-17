#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace OVR::OpenVR {
struct ChaperoneCalibrationState;
}
namespace OVR::OpenVR {
struct IVRChaperone;
}
namespace OVR::OpenVR {
struct HmdQuad_t;
}
namespace OVR::OpenVR {
struct HmdColor_t;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRChaperone;
}
// Type: OVR.OpenVR::CVRChaperone
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9345))
// CS Name: OVR.OpenVR.CVRChaperone
class CORDL_TYPE CVRChaperone : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~CVRChaperone() = default;

// Ctor Parameters [CppParam { name: "", ty: "CVRChaperone", modifiers: " const&", def_value: None }]
constexpr CVRChaperone(CVRChaperone const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CVRChaperone", modifiers: "&&", def_value: None }]
constexpr CVRChaperone(CVRChaperone&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CVRChaperone(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CVRChaperone& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CVRChaperone& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CVRChaperone& operator=(CVRChaperone&& o) noexcept = default;
  constexpr CVRChaperone& operator=(CVRChaperone const& o) noexcept = default;
                


// Fields

 ::OVR::OpenVR::IVRChaperone __declspec(property(get=__get_FnTable, put=__set_FnTable))  FnTable;

constexpr void __set_FnTable(::OVR::OpenVR::IVRChaperone value) ;

constexpr ::OVR::OpenVR::IVRChaperone __get_FnTable() const;


// Methods

// Ctor Parameters [CppParam { name: "pInterface", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit CVRChaperone(::cordl_internals::intptr_t pInterface) ;

/// @brief Method .ctor addr 0x266508c size 0x114 virtual false final false
 void _ctor(::cordl_internals::intptr_t pInterface) ;

/// @brief Method GetCalibrationState addr 0x26651a0 size 0x24 virtual false final false
 ::OVR::OpenVR::ChaperoneCalibrationState GetCalibrationState() ;

/// @brief Method GetPlayAreaSize addr 0x26651c4 size 0x2c virtual false final false
 bool GetPlayAreaSize(ByRef<float_t> pSizeX, ByRef<float_t> pSizeZ) ;

/// @brief Method GetPlayAreaRect addr 0x26651f0 size 0x24 virtual false final false
 bool GetPlayAreaRect(ByRef<::OVR::OpenVR::HmdQuad_t> rect) ;

/// @brief Method ReloadInfo addr 0x2665214 size 0x24 virtual false final false
 void ReloadInfo() ;

/// @brief Method SetSceneColor addr 0x2665238 size 0x24 virtual false final false
 void SetSceneColor(::OVR::OpenVR::HmdColor_t color) ;

/// @brief Method GetBoundsColor addr 0x266525c size 0x24 virtual false final false
 void GetBoundsColor(ByRef<::OVR::OpenVR::HmdColor_t> pOutputColorArray, int32_t nNumOutputColors, float_t flCollisionBoundsFadeDistance, ByRef<::OVR::OpenVR::HmdColor_t> pOutputCameraColor) ;

/// @brief Method AreBoundsVisible addr 0x2665280 size 0x24 virtual false final false
 bool AreBoundsVisible() ;

/// @brief Method ForceBoundsVisible addr 0x26652a4 size 0x28 virtual false final false
 void ForceBoundsVisible(bool bForce) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
NEED_NO_BOX(::OVR::OpenVR::CVRChaperone);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRChaperone, "OVR.OpenVR", "CVRChaperone");
