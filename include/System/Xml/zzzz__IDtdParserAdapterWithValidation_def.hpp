#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace System::Xml {
class IDtdParserAdapter;
}
namespace System::Xml {
class IValidationEventHandling;
}
// Forward declare root types
namespace System::Xml {
class IDtdParserAdapterWithValidation;
}
// Type: System.Xml::IDtdParserAdapterWithValidation
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11370))
// CS Name: System.Xml.IDtdParserAdapterWithValidation
class CORDL_TYPE IDtdParserAdapterWithValidation : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to System::Xml::IDtdParserAdapter
constexpr operator  System::Xml::IDtdParserAdapter() const noexcept;

~IDtdParserAdapterWithValidation() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDtdParserAdapterWithValidation(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 bool __declspec(property(get=get_DtdValidation))  DtdValidation;

 System::Xml::IValidationEventHandling __declspec(property(get=get_ValidationEventHandling))  ValidationEventHandling;


// Methods

/// @brief Method get_DtdValidation addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_DtdValidation() ;

/// @brief Method get_ValidationEventHandling addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Xml::IValidationEventHandling get_ValidationEventHandling() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::IDtdParserAdapterWithValidation);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::IDtdParserAdapterWithValidation, "System.Xml", "IDtdParserAdapterWithValidation");
