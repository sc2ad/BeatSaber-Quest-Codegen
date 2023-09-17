#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace OVR::OpenVR {
struct EVRSettingsError;
}
namespace System::Text {
class StringBuilder;
}
namespace OVR::OpenVR {
struct IVRSettings;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRSettings;
}
// Type: OVR.OpenVR::CVRSettings
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9355))
// CS Name: OVR.OpenVR.CVRSettings
class CORDL_TYPE CVRSettings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~CVRSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "CVRSettings", modifiers: " const&", def_value: None }]
constexpr CVRSettings(CVRSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CVRSettings", modifiers: "&&", def_value: None }]
constexpr CVRSettings(CVRSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CVRSettings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CVRSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CVRSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CVRSettings& operator=(CVRSettings&& o) noexcept = default;
  constexpr CVRSettings& operator=(CVRSettings const& o) noexcept = default;
                


// Fields

 ::OVR::OpenVR::IVRSettings __declspec(property(get=__get_FnTable, put=__set_FnTable))  FnTable;

constexpr void __set_FnTable(::OVR::OpenVR::IVRSettings value) ;

constexpr ::OVR::OpenVR::IVRSettings __get_FnTable() const;


// Methods

// Ctor Parameters [CppParam { name: "pInterface", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit CVRSettings(::cordl_internals::intptr_t pInterface) ;

/// @brief Method .ctor addr 0x26679d0 size 0x114 virtual false final false
 void _ctor(::cordl_internals::intptr_t pInterface) ;

/// @brief Method GetSettingsErrorNameFromEnum addr 0x2667ae4 size 0x84 virtual false final false
 ::StringW GetSettingsErrorNameFromEnum(::OVR::OpenVR::EVRSettingsError eError) ;

/// @brief Method Sync addr 0x2667b68 size 0x28 virtual false final false
 bool Sync(bool bForce, ByRef<::OVR::OpenVR::EVRSettingsError> peError) ;

/// @brief Method SetBool addr 0x2667b90 size 0x28 virtual false final false
 void SetBool(::StringW pchSection, ::StringW pchSettingsKey, bool bValue, ByRef<::OVR::OpenVR::EVRSettingsError> peError) ;

/// @brief Method SetInt32 addr 0x2667bb8 size 0x24 virtual false final false
 void SetInt32(::StringW pchSection, ::StringW pchSettingsKey, int32_t nValue, ByRef<::OVR::OpenVR::EVRSettingsError> peError) ;

/// @brief Method SetFloat addr 0x2667bdc size 0x24 virtual false final false
 void SetFloat(::StringW pchSection, ::StringW pchSettingsKey, float_t flValue, ByRef<::OVR::OpenVR::EVRSettingsError> peError) ;

/// @brief Method SetString addr 0x2667c00 size 0x24 virtual false final false
 void SetString(::StringW pchSection, ::StringW pchSettingsKey, ::StringW pchValue, ByRef<::OVR::OpenVR::EVRSettingsError> peError) ;

/// @brief Method GetBool addr 0x2667c24 size 0x24 virtual false final false
 bool GetBool(::StringW pchSection, ::StringW pchSettingsKey, ByRef<::OVR::OpenVR::EVRSettingsError> peError) ;

/// @brief Method GetInt32 addr 0x2667c48 size 0x24 virtual false final false
 int32_t GetInt32(::StringW pchSection, ::StringW pchSettingsKey, ByRef<::OVR::OpenVR::EVRSettingsError> peError) ;

/// @brief Method GetFloat addr 0x2667c6c size 0x24 virtual false final false
 float_t GetFloat(::StringW pchSection, ::StringW pchSettingsKey, ByRef<::OVR::OpenVR::EVRSettingsError> peError) ;

/// @brief Method GetString addr 0x2667c90 size 0x24 virtual false final false
 void GetString(::StringW pchSection, ::StringW pchSettingsKey, ::System::Text::StringBuilder pchValue, uint32_t unValueLen, ByRef<::OVR::OpenVR::EVRSettingsError> peError) ;

/// @brief Method RemoveSection addr 0x2667cb4 size 0x24 virtual false final false
 void RemoveSection(::StringW pchSection, ByRef<::OVR::OpenVR::EVRSettingsError> peError) ;

/// @brief Method RemoveKeyInSection addr 0x2667cd8 size 0x24 virtual false final false
 void RemoveKeyInSection(::StringW pchSection, ::StringW pchSettingsKey, ByRef<::OVR::OpenVR::EVRSettingsError> peError) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
NEED_NO_BOX(::OVR::OpenVR::CVRSettings);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRSettings, "OVR.OpenVR", "CVRSettings");
