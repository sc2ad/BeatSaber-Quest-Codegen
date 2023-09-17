#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace OVR::OpenVR {
struct IVRIOBuffer;
}
namespace OVR::OpenVR {
struct EIOBufferMode;
}
namespace OVR::OpenVR {
struct EIOBufferError;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRIOBuffer;
}
// Type: OVR.OpenVR::CVRIOBuffer
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9360))
// CS Name: OVR.OpenVR.CVRIOBuffer
class CORDL_TYPE CVRIOBuffer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~CVRIOBuffer() = default;

// Ctor Parameters [CppParam { name: "", ty: "CVRIOBuffer", modifiers: " const&", def_value: None }]
constexpr CVRIOBuffer(CVRIOBuffer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CVRIOBuffer", modifiers: "&&", def_value: None }]
constexpr CVRIOBuffer(CVRIOBuffer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CVRIOBuffer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CVRIOBuffer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CVRIOBuffer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CVRIOBuffer& operator=(CVRIOBuffer&& o) noexcept = default;
  constexpr CVRIOBuffer& operator=(CVRIOBuffer const& o) noexcept = default;
                


// Fields

 ::OVR::OpenVR::IVRIOBuffer __declspec(property(get=__get_FnTable, put=__set_FnTable))  FnTable;

constexpr void __set_FnTable(::OVR::OpenVR::IVRIOBuffer value) ;

constexpr ::OVR::OpenVR::IVRIOBuffer __get_FnTable() const;


// Methods

// Ctor Parameters [CppParam { name: "pInterface", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit CVRIOBuffer(::cordl_internals::intptr_t pInterface) ;

/// @brief Method .ctor addr 0x26685d8 size 0x114 virtual false final false
 void _ctor(::cordl_internals::intptr_t pInterface) ;

/// @brief Method Open addr 0x26686ec size 0x28 virtual false final false
 ::OVR::OpenVR::EIOBufferError Open(::StringW pchPath, ::OVR::OpenVR::EIOBufferMode mode, uint32_t unElementSize, uint32_t unElements, ByRef<uint64_t> pulBuffer) ;

/// @brief Method Close addr 0x2668714 size 0x24 virtual false final false
 ::OVR::OpenVR::EIOBufferError Close(uint64_t ulBuffer) ;

/// @brief Method Read addr 0x2668738 size 0x28 virtual false final false
 ::OVR::OpenVR::EIOBufferError Read(uint64_t ulBuffer, ::cordl_internals::intptr_t pDst, uint32_t unBytes, ByRef<uint32_t> punRead) ;

/// @brief Method Write addr 0x2668760 size 0x24 virtual false final false
 ::OVR::OpenVR::EIOBufferError Write(uint64_t ulBuffer, ::cordl_internals::intptr_t pSrc, uint32_t unBytes) ;

/// @brief Method PropertyContainer addr 0x2668784 size 0x24 virtual false final false
 uint64_t PropertyContainer(uint64_t ulBuffer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
NEED_NO_BOX(::OVR::OpenVR::CVRIOBuffer);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRIOBuffer, "OVR.OpenVR", "CVRIOBuffer");
