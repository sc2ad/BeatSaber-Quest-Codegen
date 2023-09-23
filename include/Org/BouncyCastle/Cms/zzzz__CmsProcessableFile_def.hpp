#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Cms {
class CmsReadable;
}
namespace Org::BouncyCastle::Cms {
class CmsProcessable;
}
namespace System::IO {
class Stream;
}
namespace System::IO {
class FileInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsProcessableFile;
}
// Type: Org.BouncyCastle.Cms::CmsProcessableFile
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(646))
// CS Name: Org.BouncyCastle.Cms.CmsProcessableFile
class CORDL_TYPE CmsProcessableFile : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Cms::CmsProcessable
constexpr operator  Org::BouncyCastle::Cms::CmsProcessable() const noexcept;

/// @brief Convert operator to Org::BouncyCastle::Cms::CmsReadable
constexpr operator  Org::BouncyCastle::Cms::CmsReadable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CmsProcessableFile() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsProcessableFile", modifiers: " const&", def_value: None }]
constexpr CmsProcessableFile(CmsProcessableFile const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsProcessableFile", modifiers: "&&", def_value: None }]
constexpr CmsProcessableFile(CmsProcessableFile&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsProcessableFile(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CmsProcessableFile& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmsProcessableFile& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmsProcessableFile& operator=(CmsProcessableFile&& o) noexcept = default;
  constexpr CmsProcessableFile& operator=(CmsProcessableFile const& o) noexcept = default;
                


// Fields

/// @brief Field DefaultBufSize offset 0
static constexpr int32_t  DefaultBufSize{32768};

 System::IO::FileInfo __declspec(property(get=__get__file, put=__set__file))  _file;

constexpr void __set__file(System::IO::FileInfo value) ;

constexpr System::IO::FileInfo __get__file() const;

 int32_t __declspec(property(get=__get__bufSize, put=__set__bufSize))  _bufSize;

constexpr void __set__bufSize(int32_t value) ;

constexpr int32_t __get__bufSize() const;


// Methods

// Ctor Parameters [CppParam { name: "file", ty: "System::IO::FileInfo", modifiers: "", def_value: None }]
explicit CmsProcessableFile(System::IO::FileInfo file) ;

/// @brief Method .ctor addr 0x1159fdc size 0x30 virtual false final false
 void _ctor(System::IO::FileInfo file) ;

// Ctor Parameters [CppParam { name: "file", ty: "System::IO::FileInfo", modifiers: "", def_value: None }, CppParam { name: "bufSize", ty: "int32_t", modifiers: "", def_value: None }]
explicit CmsProcessableFile(System::IO::FileInfo file, int32_t bufSize) ;

/// @brief Method .ctor addr 0x115a00c size 0x30 virtual false final false
 void _ctor(System::IO::FileInfo file, int32_t bufSize) ;

/// @brief Method GetInputStream addr 0x115a03c size 0x94 virtual true final false
 System::IO::Stream GetInputStream() ;

/// @brief Method Write addr 0x115a0d0 size 0x84 virtual true final false
 void Write(System::IO::Stream zOut) ;

/// @brief Method GetContent addr 0x115a154 size 0x8 virtual true final false
 ::bs_hook::Il2CppWrapperType GetContent() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::CmsProcessableFile);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::CmsProcessableFile, "Org.BouncyCastle.Cms", "CmsProcessableFile");
