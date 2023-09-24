#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsContentInfoParser_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Cms {
class CmsTypedStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsCompressedDataParser;
}
// Type: Org.BouncyCastle.Cms::CmsCompressedDataParser
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(620))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(630))
// CS Name: Org.BouncyCastle.Cms.CmsCompressedDataParser
class CORDL_TYPE CmsCompressedDataParser : public Org::BouncyCastle::Cms::CmsContentInfoParser {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CmsCompressedDataParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsCompressedDataParser", modifiers: " const&", def_value: None }]
constexpr CmsCompressedDataParser(CmsCompressedDataParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsCompressedDataParser", modifiers: "&&", def_value: None }]
constexpr CmsCompressedDataParser(CmsCompressedDataParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsCompressedDataParser(void* ptr) noexcept : Org::BouncyCastle::Cms::CmsContentInfoParser(ptr) {
}


  constexpr CmsCompressedDataParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmsCompressedDataParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmsCompressedDataParser& operator=(CmsCompressedDataParser&& o) noexcept = default;
  constexpr CmsCompressedDataParser& operator=(CmsCompressedDataParser const& o) noexcept = default;
                


// Methods

static Org::BouncyCastle::Cms::CmsCompressedDataParser New_ctor(::ArrayW<uint8_t> compressedData) ;

/// @brief Method .ctor addr 0x1152d84 size 0x78 virtual false final false
 void _ctor(::ArrayW<uint8_t> compressedData) ;

static Org::BouncyCastle::Cms::CmsCompressedDataParser New_ctor(System::IO::Stream compressedData) ;

/// @brief Method .ctor addr 0x1152dfc size 0x4 virtual false final false
 void _ctor(System::IO::Stream compressedData) ;

/// @brief Method GetContent addr 0x1152e00 size 0x300 virtual false final false
 Org::BouncyCastle::Cms::CmsTypedStream GetContent() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::CmsCompressedDataParser);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::CmsCompressedDataParser, "Org.BouncyCastle.Cms", "CmsCompressedDataParser");
