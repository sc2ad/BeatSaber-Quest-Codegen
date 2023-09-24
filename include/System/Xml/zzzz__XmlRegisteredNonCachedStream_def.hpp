#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Xml {
class XmlDownloadManager;
}
namespace System {
class IAsyncResult;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System {
class AsyncCallback;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace System::Xml {
class XmlRegisteredNonCachedStream;
}
// Type: System.Xml::XmlRegisteredNonCachedStream
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11495))
// CS Name: System.Xml.XmlRegisteredNonCachedStream
class CORDL_TYPE XmlRegisteredNonCachedStream : public System::IO::Stream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~XmlRegisteredNonCachedStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlRegisteredNonCachedStream", modifiers: " const&", def_value: None }]
constexpr XmlRegisteredNonCachedStream(XmlRegisteredNonCachedStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlRegisteredNonCachedStream", modifiers: "&&", def_value: None }]
constexpr XmlRegisteredNonCachedStream(XmlRegisteredNonCachedStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlRegisteredNonCachedStream(void* ptr) noexcept : System::IO::Stream(ptr) {
}


  constexpr XmlRegisteredNonCachedStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlRegisteredNonCachedStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlRegisteredNonCachedStream& operator=(XmlRegisteredNonCachedStream&& o) noexcept = default;
  constexpr XmlRegisteredNonCachedStream& operator=(XmlRegisteredNonCachedStream const& o) noexcept = default;
                


// Fields

 System::IO::Stream __declspec(property(get=__get_stream, put=__set_stream))  stream;

constexpr void __set_stream(System::IO::Stream value) ;

constexpr System::IO::Stream __get_stream() const;

 System::Xml::XmlDownloadManager __declspec(property(get=__get_downloadManager, put=__set_downloadManager))  downloadManager;

constexpr void __set_downloadManager(System::Xml::XmlDownloadManager value) ;

constexpr System::Xml::XmlDownloadManager __get_downloadManager() const;

 ::StringW __declspec(property(get=__get_host, put=__set_host))  host;

constexpr void __set_host(::StringW value) ;

constexpr ::StringW __get_host() const;


// Properties

 bool __declspec(property(get=get_CanRead))  CanRead;

 bool __declspec(property(get=get_CanSeek))  CanSeek;

 bool __declspec(property(get=get_CanWrite))  CanWrite;

 int64_t __declspec(property(get=get_Length))  Length;

 int64_t __declspec(property(get=get_Position, put=set_Position))  Position;


// Methods

static System::Xml::XmlRegisteredNonCachedStream New_ctor(System::IO::Stream stream, System::Xml::XmlDownloadManager downloadManager, ::StringW host) ;

/// @brief Method .ctor addr 0x27108e4 size 0x80 virtual false final false
 void _ctor(System::IO::Stream stream, System::Xml::XmlDownloadManager downloadManager, ::StringW host) ;

/// @brief Method Finalize addr 0x271172c size 0xa4 virtual true final false
 void Finalize() ;

/// @brief Method Dispose addr 0x27117d0 size 0x138 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method BeginRead addr 0x2711908 size 0x24 virtual true final false
 System::IAsyncResult BeginRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method BeginWrite addr 0x271192c size 0x24 virtual true final false
 System::IAsyncResult BeginWrite(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndRead addr 0x2711950 size 0x24 virtual true final false
 int32_t EndRead(System::IAsyncResult asyncResult) ;

/// @brief Method EndWrite addr 0x2711974 size 0x24 virtual true final false
 void EndWrite(System::IAsyncResult asyncResult) ;

/// @brief Method Flush addr 0x2711998 size 0x24 virtual true final false
 void Flush() ;

/// @brief Method Read addr 0x27119bc size 0x24 virtual true final false
 int32_t Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method ReadByte addr 0x27119e0 size 0x24 virtual true final false
 int32_t ReadByte() ;

/// @brief Method Seek addr 0x2711a04 size 0x24 virtual true final false
 int64_t Seek(int64_t offset, System::IO::SeekOrigin origin) ;

/// @brief Method SetLength addr 0x2711a28 size 0x24 virtual true final false
 void SetLength(int64_t value) ;

/// @brief Method Write addr 0x2711a4c size 0x24 virtual true final false
 void Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method WriteByte addr 0x2711a70 size 0x24 virtual true final false
 void WriteByte(uint8_t value) ;

/// @brief Method get_CanRead addr 0x2711a94 size 0x20 virtual true final false
 bool get_CanRead() ;

/// @brief Method get_CanSeek addr 0x2711ab4 size 0x20 virtual true final false
 bool get_CanSeek() ;

/// @brief Method get_CanWrite addr 0x2711ad4 size 0x20 virtual true final false
 bool get_CanWrite() ;

/// @brief Method get_Length addr 0x2711af4 size 0x20 virtual true final false
 int64_t get_Length() ;

/// @brief Method get_Position addr 0x2711b14 size 0x20 virtual true final false
 int64_t get_Position() ;

/// @brief Method set_Position addr 0x2711b34 size 0x24 virtual true final false
 void set_Position(int64_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::XmlRegisteredNonCachedStream);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlRegisteredNonCachedStream, "System.Xml", "XmlRegisteredNonCachedStream");
