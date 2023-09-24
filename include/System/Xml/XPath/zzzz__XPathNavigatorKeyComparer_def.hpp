#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections {
class IEqualityComparer;
}
// Forward declare root types
namespace System::Xml::XPath {
class XPathNavigatorKeyComparer;
}
// Type: System.Xml.XPath::XPathNavigatorKeyComparer
namespace System::Xml::XPath {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11525))
// CS Name: System.Xml.XPath.XPathNavigatorKeyComparer
class CORDL_TYPE XPathNavigatorKeyComparer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IEqualityComparer
constexpr operator  System::Collections::IEqualityComparer() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~XPathNavigatorKeyComparer() = default;

// Ctor Parameters [CppParam { name: "", ty: "XPathNavigatorKeyComparer", modifiers: " const&", def_value: None }]
constexpr XPathNavigatorKeyComparer(XPathNavigatorKeyComparer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XPathNavigatorKeyComparer", modifiers: "&&", def_value: None }]
constexpr XPathNavigatorKeyComparer(XPathNavigatorKeyComparer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XPathNavigatorKeyComparer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XPathNavigatorKeyComparer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XPathNavigatorKeyComparer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XPathNavigatorKeyComparer& operator=(XPathNavigatorKeyComparer&& o) noexcept = default;
  constexpr XPathNavigatorKeyComparer& operator=(XPathNavigatorKeyComparer const& o) noexcept = default;
                


// Methods

/// @brief Method System.Collections.IEqualityComparer.Equals addr 0x2718288 size 0xdc virtual true final true
 bool System_Collections_IEqualityComparer_Equals(::bs_hook::Il2CppWrapperType obj1, ::bs_hook::Il2CppWrapperType obj2) ;

/// @brief Method System.Collections.IEqualityComparer.GetHashCode addr 0x2718364 size 0x1d0 virtual true final true
 int32_t System_Collections_IEqualityComparer_GetHashCode(::bs_hook::Il2CppWrapperType obj) ;

static System::Xml::XPath::XPathNavigatorKeyComparer New_ctor() ;

/// @brief Method .ctor addr 0x2718280 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::XPath
NEED_NO_BOX(System::Xml::XPath::XPathNavigatorKeyComparer);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XPath::XPathNavigatorKeyComparer, "System.Xml.XPath", "XPathNavigatorKeyComparer");
