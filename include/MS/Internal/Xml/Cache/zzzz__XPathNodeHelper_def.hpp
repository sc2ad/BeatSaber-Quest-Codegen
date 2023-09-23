#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace MS::Internal::Xml::Cache {
struct XPathNode;
}
// Forward declare root types
namespace MS::Internal::Xml::Cache {
class XPathNodeHelper;
}
// Type: MS.Internal.Xml.Cache::XPathNodeHelper
namespace MS::Internal::Xml::Cache {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11712))
// CS Name: MS.Internal.Xml.Cache.XPathNodeHelper
class CORDL_TYPE XPathNodeHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~XPathNodeHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "XPathNodeHelper", modifiers: " const&", def_value: None }]
constexpr XPathNodeHelper(XPathNodeHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XPathNodeHelper", modifiers: "&&", def_value: None }]
constexpr XPathNodeHelper(XPathNodeHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XPathNodeHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XPathNodeHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XPathNodeHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XPathNodeHelper& operator=(XPathNodeHelper&& o) noexcept = default;
  constexpr XPathNodeHelper& operator=(XPathNodeHelper const& o) noexcept = default;
                


// Methods

/// @brief Method GetLocalNamespaces addr 0x275794c size 0x64 virtual false final false
static int32_t GetLocalNamespaces(::ArrayW<MS::Internal::Xml::Cache::XPathNode> pageElem, int32_t idxElem, ByRef<::ArrayW<MS::Internal::Xml::Cache::XPathNode>> pageNmsp) ;

/// @brief Method GetInScopeNamespaces addr 0x27579b0 size 0xb8 virtual false final false
static int32_t GetInScopeNamespaces(::ArrayW<MS::Internal::Xml::Cache::XPathNode> pageElem, int32_t idxElem, ByRef<::ArrayW<MS::Internal::Xml::Cache::XPathNode>> pageNmsp) ;

/// @brief Method GetParent addr 0x2757c6c size 0x58 virtual false final false
static bool GetParent(ByRef<::ArrayW<MS::Internal::Xml::Cache::XPathNode>> pageNode, ByRef<int32_t> idxNode) ;

/// @brief Method GetLocation addr 0x2757e64 size 0x38 virtual false final false
static int32_t GetLocation(::ArrayW<MS::Internal::Xml::Cache::XPathNode> pageNode, int32_t idxNode) ;

/// @brief Method GetTextFollowing addr 0x27574d0 size 0x160 virtual false final false
static bool GetTextFollowing(ByRef<::ArrayW<MS::Internal::Xml::Cache::XPathNode>> pageCurrent, ByRef<int32_t> idxCurrent, ::ArrayW<MS::Internal::Xml::Cache::XPathNode> pageEnd, int32_t idxEnd) ;

/// @brief Method GetNonDescendant addr 0x2757450 size 0x80 virtual false final false
static bool GetNonDescendant(ByRef<::ArrayW<MS::Internal::Xml::Cache::XPathNode>> pageNode, ByRef<int32_t> idxNode) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def MS::Internal::Xml::Cache
NEED_NO_BOX(MS::Internal::Xml::Cache::XPathNodeHelper);
DEFINE_IL2CPP_ARG_TYPE(MS::Internal::Xml::Cache::XPathNodeHelper, "MS.Internal.Xml.Cache", "XPathNodeHelper");
