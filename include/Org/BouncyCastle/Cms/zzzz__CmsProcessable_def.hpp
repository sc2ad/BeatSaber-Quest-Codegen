#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsProcessable;
}
// Type: Org.BouncyCastle.Cms::CmsProcessable
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(643))
// CS Name: Org.BouncyCastle.Cms.CmsProcessable
class CORDL_TYPE CmsProcessable : public ::cordl_internals::InterfaceW {
public:
// Declarations
~CmsProcessable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsProcessable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual true final false
 void Write(System::IO::Stream outStream) ;

/// @brief Method GetContent addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType GetContent() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::CmsProcessable);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::CmsProcessable, "Org.BouncyCastle.Cms", "CmsProcessable");
