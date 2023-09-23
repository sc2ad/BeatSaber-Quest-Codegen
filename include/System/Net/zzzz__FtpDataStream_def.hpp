#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Net::Sockets {
class NetworkStream;
}
namespace System::Net {
struct TriState;
}
namespace System::Net {
class ICloseEx;
}
namespace System {
class AsyncCallback;
}
namespace System::Net {
struct CloseExState;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System {
class IAsyncResult;
}
namespace System::Net {
class FtpWebRequest;
}
// Forward declare root types
namespace System::Net {
class FtpDataStream;
}
// Type: System.Net::FtpDataStream
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7894))
// CS Name: System.Net.FtpDataStream
class CORDL_TYPE FtpDataStream : public System::IO::Stream {
public:
// Declarations
/// @brief Convert operator to System::Net::ICloseEx
constexpr operator  System::Net::ICloseEx() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~FtpDataStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "FtpDataStream", modifiers: " const&", def_value: None }]
constexpr FtpDataStream(FtpDataStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FtpDataStream", modifiers: "&&", def_value: None }]
constexpr FtpDataStream(FtpDataStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FtpDataStream(void* ptr) noexcept : System::IO::Stream(ptr) {
}


  constexpr FtpDataStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FtpDataStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FtpDataStream& operator=(FtpDataStream&& o) noexcept = default;
  constexpr FtpDataStream& operator=(FtpDataStream const& o) noexcept = default;
                


// Fields

 System::Net::FtpWebRequest __declspec(property(get=__get__request, put=__set__request))  _request;

constexpr void __set__request(System::Net::FtpWebRequest value) ;

constexpr System::Net::FtpWebRequest __get__request() const;

 System::Net::Sockets::NetworkStream __declspec(property(get=__get__networkStream, put=__set__networkStream))  _networkStream;

constexpr void __set__networkStream(System::Net::Sockets::NetworkStream value) ;

constexpr System::Net::Sockets::NetworkStream __get__networkStream() const;

 bool __declspec(property(get=__get__writeable, put=__set__writeable))  _writeable;

constexpr void __set__writeable(bool value) ;

constexpr bool __get__writeable() const;

 bool __declspec(property(get=__get__readable, put=__set__readable))  _readable;

constexpr void __set__readable(bool value) ;

constexpr bool __get__readable() const;

 bool __declspec(property(get=__get__isFullyRead, put=__set__isFullyRead))  _isFullyRead;

constexpr void __set__isFullyRead(bool value) ;

constexpr bool __get__isFullyRead() const;

 bool __declspec(property(get=__get__closing, put=__set__closing))  _closing;

constexpr void __set__closing(bool value) ;

constexpr bool __get__closing() const;


// Properties

 bool __declspec(property(get=get_CanRead))  CanRead;

 bool __declspec(property(get=get_CanSeek))  CanSeek;

 bool __declspec(property(get=get_CanWrite))  CanWrite;

 int64_t __declspec(property(get=get_Length))  Length;

 int64_t __declspec(property(get=get_Position, put=set_Position))  Position;

 bool __declspec(property(get=get_CanTimeout))  CanTimeout;

 int32_t __declspec(property(get=get_ReadTimeout, put=set_ReadTimeout))  ReadTimeout;

 int32_t __declspec(property(get=get_WriteTimeout, put=set_WriteTimeout))  WriteTimeout;


// Methods

// Ctor Parameters [CppParam { name: "networkStream", ty: "System::Net::Sockets::NetworkStream", modifiers: "", def_value: None }, CppParam { name: "request", ty: "System::Net::FtpWebRequest", modifiers: "", def_value: None }, CppParam { name: "writeOnly", ty: "System::Net::TriState", modifiers: "", def_value: None }]
explicit FtpDataStream(System::Net::Sockets::NetworkStream networkStream, System::Net::FtpWebRequest request, System::Net::TriState writeOnly) ;

/// @brief Method .ctor addr 0x27fe2ec size 0xfc virtual false final false
 void _ctor(System::Net::Sockets::NetworkStream networkStream, System::Net::FtpWebRequest request, System::Net::TriState writeOnly) ;

/// @brief Method Dispose addr 0x2801ee0 size 0x188 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method System.Net.ICloseEx.CloseEx addr 0x2802068 size 0x3e4 virtual true final true
 void System_Net_ICloseEx_CloseEx(System::Net::CloseExState closeState) ;

/// @brief Method CheckError addr 0x280244c size 0x44 virtual false final false
 void CheckError() ;

/// @brief Method get_CanRead addr 0x2802490 size 0x8 virtual true final false
 bool get_CanRead() ;

/// @brief Method get_CanSeek addr 0x2802498 size 0x20 virtual true final false
 bool get_CanSeek() ;

/// @brief Method get_CanWrite addr 0x28024b8 size 0x8 virtual true final false
 bool get_CanWrite() ;

/// @brief Method get_Length addr 0x28024c0 size 0x20 virtual true final false
 int64_t get_Length() ;

/// @brief Method get_Position addr 0x28024e0 size 0x20 virtual true final false
 int64_t get_Position() ;

/// @brief Method set_Position addr 0x2802500 size 0x24 virtual true final false
 void set_Position(int64_t value) ;

/// @brief Method Seek addr 0x2802524 size 0xcc virtual true final false
 int64_t Seek(int64_t offset, System::IO::SeekOrigin origin) ;

/// @brief Method Read addr 0x28025f0 size 0x104 virtual true final false
 int32_t Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) ;

/// @brief Method Write addr 0x28026f4 size 0xd8 virtual true final false
 void Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) ;

/// @brief Method AsyncReadCallback addr 0x28027cc size 0x2b0 virtual false final false
 void AsyncReadCallback(System::IAsyncResult ar) ;

/// @brief Method BeginRead addr 0x2802a7c size 0x1ac virtual true final false
 System::IAsyncResult BeginRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndRead addr 0x2802c28 size 0x1a0 virtual true final false
 int32_t EndRead(System::IAsyncResult ar) ;

/// @brief Method BeginWrite addr 0x2802dc8 size 0xf4 virtual true final false
 System::IAsyncResult BeginWrite(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndWrite addr 0x2802ebc size 0xa0 virtual true final false
 void EndWrite(System::IAsyncResult asyncResult) ;

/// @brief Method Flush addr 0x2802f5c size 0x24 virtual true final false
 void Flush() ;

/// @brief Method SetLength addr 0x2802f80 size 0x24 virtual true final false
 void SetLength(int64_t value) ;

/// @brief Method get_CanTimeout addr 0x2802fa4 size 0x20 virtual true final false
 bool get_CanTimeout() ;

/// @brief Method get_ReadTimeout addr 0x2802fc4 size 0x24 virtual true final false
 int32_t get_ReadTimeout() ;

/// @brief Method set_ReadTimeout addr 0x2802fe8 size 0x24 virtual true final false
 void set_ReadTimeout(int32_t value) ;

/// @brief Method get_WriteTimeout addr 0x280300c size 0x24 virtual true final false
 int32_t get_WriteTimeout() ;

/// @brief Method set_WriteTimeout addr 0x2803030 size 0x24 virtual true final false
 void set_WriteTimeout(int32_t value) ;

/// @brief Method SetSocketTimeoutOption addr 0x2803054 size 0x50 virtual false final false
 void SetSocketTimeoutOption(int32_t timeout) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::FtpDataStream);
DEFINE_IL2CPP_ARG_TYPE(System::Net::FtpDataStream, "System.Net", "FtpDataStream");
