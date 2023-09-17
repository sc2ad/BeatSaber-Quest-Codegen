#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
// Forward declare root types
namespace Org::BouncyCastle::OpenSsl {
class IPasswordFinder;
}
// Type: Org.BouncyCastle.OpenSsl::IPasswordFinder
namespace Org::BouncyCastle::OpenSsl {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1680))
// CS Name: Org.BouncyCastle.OpenSsl.IPasswordFinder
class CORDL_TYPE IPasswordFinder : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IPasswordFinder() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPasswordFinder(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetPassword addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<char16_t> GetPassword() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::OpenSsl
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::OpenSsl::IPasswordFinder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::OpenSsl::IPasswordFinder, "Org.BouncyCastle.OpenSsl", "IPasswordFinder");
