#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace MS::Internal::Xml::Cache {
struct XPathNode;
}
// Forward declare root types
namespace MS::Internal::Xml::Cache {
class XPathNodePageInfo;
}
// Type: MS.Internal.Xml.Cache::XPathNodePageInfo
namespace MS::Internal::Xml::Cache {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11713))
// CS Name: MS.Internal.Xml.Cache.XPathNodePageInfo
class CORDL_TYPE XPathNodePageInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~XPathNodePageInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "XPathNodePageInfo", modifiers: " const&", def_value: None }]
constexpr XPathNodePageInfo(XPathNodePageInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XPathNodePageInfo", modifiers: "&&", def_value: None }]
constexpr XPathNodePageInfo(XPathNodePageInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XPathNodePageInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XPathNodePageInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XPathNodePageInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XPathNodePageInfo& operator=(XPathNodePageInfo&& o) noexcept = default;
  constexpr XPathNodePageInfo& operator=(XPathNodePageInfo const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__pageNum, put=__set__pageNum))  _pageNum;

constexpr void __set__pageNum(int32_t value) ;

constexpr int32_t __get__pageNum() const;

 int32_t __declspec(property(get=__get__nodeCount, put=__set__nodeCount))  _nodeCount;

constexpr void __set__nodeCount(int32_t value) ;

constexpr int32_t __get__nodeCount() const;

 ::ArrayW<MS::Internal::Xml::Cache::XPathNode> __declspec(property(get=__get__pageNext, put=__set__pageNext))  _pageNext;

constexpr void __set__pageNext(::ArrayW<MS::Internal::Xml::Cache::XPathNode> value) ;

constexpr ::ArrayW<MS::Internal::Xml::Cache::XPathNode> __get__pageNext() const;


// Properties

 int32_t __declspec(property(get=get_PageNumber))  PageNumber;

 int32_t __declspec(property(get=get_NodeCount))  NodeCount;

 ::ArrayW<MS::Internal::Xml::Cache::XPathNode> __declspec(property(get=get_NextPage))  NextPage;


// Methods

/// @brief Method get_PageNumber addr 0x2757e9c size 0x8 virtual false final false
 int32_t get_PageNumber() ;

/// @brief Method get_NodeCount addr 0x2757ea4 size 0x8 virtual false final false
 int32_t get_NodeCount() ;

/// @brief Method get_NextPage addr 0x2757eac size 0x8 virtual false final false
 ::ArrayW<MS::Internal::Xml::Cache::XPathNode> get_NextPage() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def MS::Internal::Xml::Cache
NEED_NO_BOX(MS::Internal::Xml::Cache::XPathNodePageInfo);
DEFINE_IL2CPP_ARG_TYPE(MS::Internal::Xml::Cache::XPathNodePageInfo, "MS.Internal.Xml.Cache", "XPathNodePageInfo");
