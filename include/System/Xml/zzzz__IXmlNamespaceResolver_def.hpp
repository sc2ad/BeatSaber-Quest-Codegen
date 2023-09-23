#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System::Xml {
class IXmlNamespaceResolver;
}
// Type: System.Xml::IXmlNamespaceResolver
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11473))
// CS Name: System.Xml.IXmlNamespaceResolver
class CORDL_TYPE IXmlNamespaceResolver : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IXmlNamespaceResolver() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IXmlNamespaceResolver(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method LookupNamespace addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW LookupNamespace(::StringW prefix) ;

/// @brief Method LookupPrefix addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW LookupPrefix(::StringW namespaceName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::IXmlNamespaceResolver);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::IXmlNamespaceResolver, "System.Xml", "IXmlNamespaceResolver");
