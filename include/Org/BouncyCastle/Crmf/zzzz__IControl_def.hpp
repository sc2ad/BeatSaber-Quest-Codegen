#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class IControl;
}
// Type: Org.BouncyCastle.Crmf::IControl
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(694))
// CS Name: Org.BouncyCastle.Crmf.IControl
class CORDL_TYPE IControl : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IControl() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IControl(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_Type))  Type;

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method get_Type addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_Type() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Asn1::Asn1Encodable get_Value() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crmf
NEED_NO_BOX(Org::BouncyCastle::Crmf::IControl);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crmf::IControl, "Org.BouncyCastle.Crmf", "IControl");
