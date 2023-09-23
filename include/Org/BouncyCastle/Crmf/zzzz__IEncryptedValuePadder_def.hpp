#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class IEncryptedValuePadder;
}
// Type: Org.BouncyCastle.Crmf::IEncryptedValuePadder
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(702))
// CS Name: Org.BouncyCastle.Crmf.IEncryptedValuePadder
class CORDL_TYPE IEncryptedValuePadder : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IEncryptedValuePadder() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IEncryptedValuePadder(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetPaddedData addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> GetPaddedData(::ArrayW<uint8_t> data) ;

/// @brief Method GetUnpaddedData addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> GetUnpaddedData(::ArrayW<uint8_t> paddedData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crmf
NEED_NO_BOX(Org::BouncyCastle::Crmf::IEncryptedValuePadder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crmf::IEncryptedValuePadder, "Org.BouncyCastle.Crmf", "IEncryptedValuePadder");
