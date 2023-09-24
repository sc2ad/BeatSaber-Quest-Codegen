#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace System::Xml {
class IDtdParserAdapter;
}
namespace System::Xml {
class IDtdParserAdapterWithValidation;
}
// Forward declare root types
namespace System::Xml {
class IDtdParserAdapterV1;
}
// Type: System.Xml::IDtdParserAdapterV1
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11371))
// CS Name: System.Xml.IDtdParserAdapterV1
class CORDL_TYPE IDtdParserAdapterV1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to System::Xml::IDtdParserAdapterWithValidation
constexpr operator  System::Xml::IDtdParserAdapterWithValidation() const noexcept;

/// @brief Convert operator to System::Xml::IDtdParserAdapter
constexpr operator  System::Xml::IDtdParserAdapter() const noexcept;

~IDtdParserAdapterV1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDtdParserAdapterV1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 bool __declspec(property(get=get_V1CompatibilityMode))  V1CompatibilityMode;

 bool __declspec(property(get=get_Normalization))  Normalization;

 bool __declspec(property(get=get_Namespaces))  Namespaces;


// Methods

/// @brief Method get_V1CompatibilityMode addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_V1CompatibilityMode() ;

/// @brief Method get_Normalization addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_Normalization() ;

/// @brief Method get_Namespaces addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_Namespaces() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::IDtdParserAdapterV1);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::IDtdParserAdapterV1, "System.Xml", "IDtdParserAdapterV1");
