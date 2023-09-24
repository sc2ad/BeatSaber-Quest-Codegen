#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfoParser;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsContentInfoParser;
}
// Type: Org.BouncyCastle.Cms::CmsContentInfoParser
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(620))
// CS Name: Org.BouncyCastle.Cms.CmsContentInfoParser
class CORDL_TYPE CmsContentInfoParser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CmsContentInfoParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsContentInfoParser", modifiers: " const&", def_value: None }]
constexpr CmsContentInfoParser(CmsContentInfoParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsContentInfoParser", modifiers: "&&", def_value: None }]
constexpr CmsContentInfoParser(CmsContentInfoParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsContentInfoParser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CmsContentInfoParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmsContentInfoParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmsContentInfoParser& operator=(CmsContentInfoParser&& o) noexcept = default;
  constexpr CmsContentInfoParser& operator=(CmsContentInfoParser const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Cms::ContentInfoParser __declspec(property(get=__get_contentInfo, put=__set_contentInfo))  contentInfo;

constexpr void __set_contentInfo(Org::BouncyCastle::Asn1::Cms::ContentInfoParser value) ;

constexpr Org::BouncyCastle::Asn1::Cms::ContentInfoParser __get_contentInfo() const;

 System::IO::Stream __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(System::IO::Stream value) ;

constexpr System::IO::Stream __get_data() const;


// Methods

static Org::BouncyCastle::Cms::CmsContentInfoParser New_ctor(System::IO::Stream data) ;

/// @brief Method .ctor addr 0x1150394 size 0x248 virtual false final false
 void _ctor(System::IO::Stream data) ;

/// @brief Method Close addr 0x11505dc size 0x5c virtual false final false
 void Close() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::CmsContentInfoParser);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::CmsContentInfoParser, "Org.BouncyCastle.Cms", "CmsContentInfoParser");
