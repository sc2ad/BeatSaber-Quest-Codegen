#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__FilterStream_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsTypedStream;
}
namespace Org::BouncyCastle::Cms {
class ____Org__BouncyCastle__Cms__CmsTypedStream__FullReaderStream;
}
// Type: ::FullReaderStream
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(452))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(662))
// CS Name: Org.BouncyCastle.Cms.CmsTypedStream::FullReaderStream
class CORDL_TYPE ____Org__BouncyCastle__Cms__CmsTypedStream__FullReaderStream : public ::Org::BouncyCastle::Utilities::IO::FilterStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~____Org__BouncyCastle__Cms__CmsTypedStream__FullReaderStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Cms__CmsTypedStream__FullReaderStream", modifiers: " const&", def_value: None }]
constexpr ____Org__BouncyCastle__Cms__CmsTypedStream__FullReaderStream(____Org__BouncyCastle__Cms__CmsTypedStream__FullReaderStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Cms__CmsTypedStream__FullReaderStream", modifiers: "&&", def_value: None }]
constexpr ____Org__BouncyCastle__Cms__CmsTypedStream__FullReaderStream(____Org__BouncyCastle__Cms__CmsTypedStream__FullReaderStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Org__BouncyCastle__Cms__CmsTypedStream__FullReaderStream(void* ptr) noexcept : ::Org::BouncyCastle::Utilities::IO::FilterStream(ptr) {
}


  constexpr ____Org__BouncyCastle__Cms__CmsTypedStream__FullReaderStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Cms__CmsTypedStream__FullReaderStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Cms__CmsTypedStream__FullReaderStream& operator=(____Org__BouncyCastle__Cms__CmsTypedStream__FullReaderStream&& o) noexcept = default;
  constexpr ____Org__BouncyCastle__Cms__CmsTypedStream__FullReaderStream& operator=(____Org__BouncyCastle__Cms__CmsTypedStream__FullReaderStream const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "input", ty: "::System::IO::Stream", modifiers: "", def_value: None }]
explicit ____Org__BouncyCastle__Cms__CmsTypedStream__FullReaderStream(::System::IO::Stream input) ;

/// @brief Method .ctor addr 0x1174e44 size 0x8 virtual false final false
 void _ctor(::System::IO::Stream input) ;

/// @brief Method Read addr 0x1174e5c size 0xc virtual true final false
 int32_t Read(::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
// Type: Org.BouncyCastle.Cms::CmsTypedStream
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(663))
// CS Name: Org.BouncyCastle.Cms.CmsTypedStream
class CORDL_TYPE CmsTypedStream : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using FullReaderStream = ::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsTypedStream__FullReaderStream;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CmsTypedStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsTypedStream", modifiers: " const&", def_value: None }]
constexpr CmsTypedStream(CmsTypedStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsTypedStream", modifiers: "&&", def_value: None }]
constexpr CmsTypedStream(CmsTypedStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsTypedStream(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CmsTypedStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmsTypedStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmsTypedStream& operator=(CmsTypedStream&& o) noexcept = default;
  constexpr CmsTypedStream& operator=(CmsTypedStream const& o) noexcept = default;
                


// Fields

/// @brief Field BufferSize offset 0
static constexpr int32_t  BufferSize{32768};

 ::StringW __declspec(property(get=__get__oid, put=__set__oid))  _oid;

constexpr void __set__oid(::StringW value) ;

constexpr ::StringW __get__oid() const;

 ::System::IO::Stream __declspec(property(get=__get__in, put=__set__in))  _in;

constexpr void __set__in(::System::IO::Stream value) ;

constexpr ::System::IO::Stream __get__in() const;


// Properties

 ::StringW __declspec(property(get=get_ContentType))  ContentType;

 ::System::IO::Stream __declspec(property(get=get_ContentStream))  ContentStream;


// Methods

// Ctor Parameters [CppParam { name: "inStream", ty: "::System::IO::Stream", modifiers: "", def_value: None }]
explicit CmsTypedStream(::System::IO::Stream inStream) ;

/// @brief Method .ctor addr 0x1174d00 size 0x80 virtual false final false
 void _ctor(::System::IO::Stream inStream) ;

// Ctor Parameters [CppParam { name: "oid", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "inStream", ty: "::System::IO::Stream", modifiers: "", def_value: None }]
explicit CmsTypedStream(::StringW oid, ::System::IO::Stream inStream) ;

/// @brief Method .ctor addr 0x1162fa0 size 0x8 virtual false final false
 void _ctor(::StringW oid, ::System::IO::Stream inStream) ;

// Ctor Parameters [CppParam { name: "oid", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "inStream", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "bufSize", ty: "int32_t", modifiers: "", def_value: None }]
explicit CmsTypedStream(::StringW oid, ::System::IO::Stream inStream, int32_t bufSize) ;

/// @brief Method .ctor addr 0x1174d80 size 0xc4 virtual false final false
 void _ctor(::StringW oid, ::System::IO::Stream inStream, int32_t bufSize) ;

/// @brief Method get_ContentType addr 0x1174e4c size 0x8 virtual false final false
 ::StringW get_ContentType() ;

/// @brief Method get_ContentStream addr 0x1174e54 size 0x8 virtual false final false
 ::System::IO::Stream get_ContentStream() ;

/// @brief Method Drain addr 0x1162fa8 size 0x68 virtual false final false
 void Drain() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsTypedStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsTypedStream, "Org.BouncyCastle.Cms", "CmsTypedStream");
NEED_NO_BOX(::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsTypedStream__FullReaderStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsTypedStream__FullReaderStream, "Org.BouncyCastle.Cms", "CmsTypedStream/FullReaderStream");
