#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Text {
class StringBuilder;
}
namespace OVR::OpenVR {
struct IVRDriverManager;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRDriverManager;
}
// Type: OVR.OpenVR::CVRDriverManager
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9358))
// CS Name: OVR.OpenVR.CVRDriverManager
class CORDL_TYPE CVRDriverManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CVRDriverManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "CVRDriverManager", modifiers: " const&", def_value: None }]
constexpr CVRDriverManager(CVRDriverManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CVRDriverManager", modifiers: "&&", def_value: None }]
constexpr CVRDriverManager(CVRDriverManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CVRDriverManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CVRDriverManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CVRDriverManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CVRDriverManager& operator=(CVRDriverManager&& o) noexcept = default;
  constexpr CVRDriverManager& operator=(CVRDriverManager const& o) noexcept = default;
                


// Fields

 OVR::OpenVR::IVRDriverManager __declspec(property(get=__get_FnTable, put=__set_FnTable))  FnTable;

constexpr void __set_FnTable(OVR::OpenVR::IVRDriverManager value) ;

constexpr OVR::OpenVR::IVRDriverManager __get_FnTable() const;


// Methods

// Ctor Parameters [CppParam { name: "pInterface", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit CVRDriverManager(::cordl_internals::intptr_t pInterface) ;

/// @brief Method .ctor addr 0x2668078 size 0x114 virtual false final false
 void _ctor(::cordl_internals::intptr_t pInterface) ;

/// @brief Method GetDriverCount addr 0x266818c size 0x24 virtual false final false
 uint32_t GetDriverCount() ;

/// @brief Method GetDriverName addr 0x26681b0 size 0x24 virtual false final false
 uint32_t GetDriverName(uint32_t nDriver, System::Text::StringBuilder pchValue, uint32_t unBufferSize) ;

/// @brief Method GetDriverHandle addr 0x26681d4 size 0x24 virtual false final false
 uint64_t GetDriverHandle(::StringW pchDriverName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
NEED_NO_BOX(OVR::OpenVR::CVRDriverManager);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRDriverManager, "OVR.OpenVR", "CVRDriverManager");
