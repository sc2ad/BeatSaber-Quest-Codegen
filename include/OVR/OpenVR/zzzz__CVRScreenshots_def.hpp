#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace OVR::OpenVR {
struct EVRScreenshotType;
}
namespace OVR::OpenVR {
struct IVRScreenshots;
}
namespace OVR::OpenVR {
struct EVRScreenshotPropertyFilenames;
}
namespace OVR::OpenVR {
struct EVRScreenshotError;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRScreenshots;
}
// Type: OVR.OpenVR::CVRScreenshots
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9356))
// CS Name: OVR.OpenVR.CVRScreenshots
class CORDL_TYPE CVRScreenshots : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~CVRScreenshots() = default;

// Ctor Parameters [CppParam { name: "", ty: "CVRScreenshots", modifiers: " const&", def_value: None }]
constexpr CVRScreenshots(CVRScreenshots const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CVRScreenshots", modifiers: "&&", def_value: None }]
constexpr CVRScreenshots(CVRScreenshots&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CVRScreenshots(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CVRScreenshots& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CVRScreenshots& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CVRScreenshots& operator=(CVRScreenshots&& o) noexcept = default;
  constexpr CVRScreenshots& operator=(CVRScreenshots const& o) noexcept = default;
                


// Fields

 OVR::OpenVR::IVRScreenshots __declspec(property(get=__get_FnTable, put=__set_FnTable))  FnTable;

constexpr void __set_FnTable(OVR::OpenVR::IVRScreenshots value) ;

constexpr OVR::OpenVR::IVRScreenshots __get_FnTable() const;


// Methods

static OVR::OpenVR::CVRScreenshots New_ctor(::cordl_internals::intptr_t pInterface) ;

/// @brief Method .ctor addr 0x2667cfc size 0x11c virtual false final false
 void _ctor(::cordl_internals::intptr_t pInterface) ;

/// @brief Method RequestScreenshot addr 0x2667e18 size 0x28 virtual false final false
 OVR::OpenVR::EVRScreenshotError RequestScreenshot(ByRef<uint32_t> pOutScreenshotHandle, OVR::OpenVR::EVRScreenshotType type, ::StringW pchPreviewFilename, ::StringW pchVRFilename) ;

/// @brief Method HookScreenshot addr 0x2667e40 size 0x2c virtual false final false
 OVR::OpenVR::EVRScreenshotError HookScreenshot(::ArrayW<OVR::OpenVR::EVRScreenshotType> pSupportedTypes) ;

/// @brief Method GetScreenshotPropertyType addr 0x2667e6c size 0x24 virtual false final false
 OVR::OpenVR::EVRScreenshotType GetScreenshotPropertyType(uint32_t screenshotHandle, ByRef<OVR::OpenVR::EVRScreenshotError> pError) ;

/// @brief Method GetScreenshotPropertyFilename addr 0x2667e90 size 0x24 virtual false final false
 uint32_t GetScreenshotPropertyFilename(uint32_t screenshotHandle, OVR::OpenVR::EVRScreenshotPropertyFilenames filenameType, System::Text::StringBuilder pchFilename, uint32_t cchFilename, ByRef<OVR::OpenVR::EVRScreenshotError> pError) ;

/// @brief Method UpdateScreenshotProgress addr 0x2667eb4 size 0x24 virtual false final false
 OVR::OpenVR::EVRScreenshotError UpdateScreenshotProgress(uint32_t screenshotHandle, float_t flProgress) ;

/// @brief Method TakeStereoScreenshot addr 0x2667ed8 size 0x28 virtual false final false
 OVR::OpenVR::EVRScreenshotError TakeStereoScreenshot(ByRef<uint32_t> pOutScreenshotHandle, ::StringW pchPreviewFilename, ::StringW pchVRFilename) ;

/// @brief Method SubmitScreenshot addr 0x2667f00 size 0x24 virtual false final false
 OVR::OpenVR::EVRScreenshotError SubmitScreenshot(uint32_t screenshotHandle, OVR::OpenVR::EVRScreenshotType type, ::StringW pchSourcePreviewFilename, ::StringW pchSourceVRFilename) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
NEED_NO_BOX(OVR::OpenVR::CVRScreenshots);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRScreenshots, "OVR.OpenVR", "CVRScreenshots");
