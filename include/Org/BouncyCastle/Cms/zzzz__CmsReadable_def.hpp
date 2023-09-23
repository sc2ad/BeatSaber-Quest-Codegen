#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsReadable;
}
// Type: Org.BouncyCastle.Cms::CmsReadable
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(644))
// CS Name: Org.BouncyCastle.Cms.CmsReadable
class CORDL_TYPE CmsReadable : public ::cordl_internals::InterfaceW {
public:
// Declarations
~CmsReadable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsReadable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetInputStream addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IO::Stream GetInputStream() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::CmsReadable);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::CmsReadable, "Org.BouncyCastle.Cms", "CmsReadable");
