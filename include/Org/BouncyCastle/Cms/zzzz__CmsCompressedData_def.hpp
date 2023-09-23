#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfo;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsCompressedData;
}
// Type: Org.BouncyCastle.Cms::CmsCompressedData
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(628))
// CS Name: Org.BouncyCastle.Cms.CmsCompressedData
class CORDL_TYPE CmsCompressedData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CmsCompressedData() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsCompressedData", modifiers: " const&", def_value: None }]
constexpr CmsCompressedData(CmsCompressedData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsCompressedData", modifiers: "&&", def_value: None }]
constexpr CmsCompressedData(CmsCompressedData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsCompressedData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CmsCompressedData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmsCompressedData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmsCompressedData& operator=(CmsCompressedData&& o) noexcept = default;
  constexpr CmsCompressedData& operator=(CmsCompressedData const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Cms::ContentInfo __declspec(property(get=__get_contentInfo, put=__set_contentInfo))  contentInfo;

constexpr void __set_contentInfo(Org::BouncyCastle::Asn1::Cms::ContentInfo value) ;

constexpr Org::BouncyCastle::Asn1::Cms::ContentInfo __get_contentInfo() const;


// Properties

 Org::BouncyCastle::Asn1::Cms::ContentInfo __declspec(property(get=get_ContentInfo))  ContentInfo;


// Methods

// Ctor Parameters [CppParam { name: "compressedData", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit CmsCompressedData(::ArrayW<uint8_t> compressedData) ;

/// @brief Method .ctor addr 0x1152480 size 0x38 virtual false final false
 void _ctor(::ArrayW<uint8_t> compressedData) ;

// Ctor Parameters [CppParam { name: "compressedDataStream", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit CmsCompressedData(System::IO::Stream compressedDataStream) ;

/// @brief Method .ctor addr 0x11524e0 size 0x38 virtual false final false
 void _ctor(System::IO::Stream compressedDataStream) ;

// Ctor Parameters [CppParam { name: "contentInfo", ty: "Org::BouncyCastle::Asn1::Cms::ContentInfo", modifiers: "", def_value: None }]
explicit CmsCompressedData(Org::BouncyCastle::Asn1::Cms::ContentInfo contentInfo) ;

/// @brief Method .ctor addr 0x11524b8 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cms::ContentInfo contentInfo) ;

/// @brief Method GetContent addr 0x1152518 size 0x26c virtual false final false
 ::ArrayW<uint8_t> GetContent() ;

/// @brief Method GetContent addr 0x1152784 size 0x1e8 virtual false final false
 ::ArrayW<uint8_t> GetContent(int32_t limit) ;

/// @brief Method get_ContentInfo addr 0x115296c size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Cms::ContentInfo get_ContentInfo() ;

/// @brief Method GetEncoded addr 0x1152974 size 0x1c virtual false final false
 ::ArrayW<uint8_t> GetEncoded() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::CmsCompressedData);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::CmsCompressedData, "Org.BouncyCastle.Cms", "CmsCompressedData");
