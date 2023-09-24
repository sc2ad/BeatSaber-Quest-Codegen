#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Text {
class StringBuilder;
}
namespace OVR::OpenVR {
struct IVRResources;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRResources;
}
// Type: OVR.OpenVR::CVRResources
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9357))
// CS Name: OVR.OpenVR.CVRResources
class CORDL_TYPE CVRResources : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CVRResources() = default;

// Ctor Parameters [CppParam { name: "", ty: "CVRResources", modifiers: " const&", def_value: None }]
constexpr CVRResources(CVRResources const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CVRResources", modifiers: "&&", def_value: None }]
constexpr CVRResources(CVRResources&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CVRResources(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CVRResources& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CVRResources& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CVRResources& operator=(CVRResources&& o) noexcept = default;
  constexpr CVRResources& operator=(CVRResources const& o) noexcept = default;
                


// Fields

 OVR::OpenVR::IVRResources __declspec(property(get=__get_FnTable, put=__set_FnTable))  FnTable;

constexpr void __set_FnTable(OVR::OpenVR::IVRResources value) ;

constexpr OVR::OpenVR::IVRResources __get_FnTable() const;


// Methods

static OVR::OpenVR::CVRResources New_ctor(::cordl_internals::intptr_t pInterface) ;

/// @brief Method .ctor addr 0x2667f24 size 0x10c virtual false final false
 void _ctor(::cordl_internals::intptr_t pInterface) ;

/// @brief Method LoadSharedResource addr 0x2668030 size 0x24 virtual false final false
 uint32_t LoadSharedResource(::StringW pchResourceName, ::StringW pchBuffer, uint32_t unBufferLen) ;

/// @brief Method GetResourceFullPath addr 0x2668054 size 0x24 virtual false final false
 uint32_t GetResourceFullPath(::StringW pchResourceName, ::StringW pchResourceTypeDirectory, System::Text::StringBuilder pchPathBuffer, uint32_t unBufferLen) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
NEED_NO_BOX(OVR::OpenVR::CVRResources);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRResources, "OVR.OpenVR", "CVRResources");
