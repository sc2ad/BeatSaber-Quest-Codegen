#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System {
class AsyncCallback;
}
namespace System::Net {
class HttpWebRequest;
}
namespace System::Net {
class WebOperation;
}
namespace System::Net {
class WebConnection;
}
namespace System::Net {
class ServicePoint;
}
namespace System {
class Exception;
}
namespace System {
class IAsyncResult;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::IO {
struct SeekOrigin;
}
// Forward declare root types
namespace System::Net {
class WebConnectionStream;
}
// Type: System.Net::WebConnectionStream
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8071))
// CS Name: System.Net.WebConnectionStream
class CORDL_TYPE WebConnectionStream : public ::System::IO::Stream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~WebConnectionStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "WebConnectionStream", modifiers: " const&", def_value: None }]
constexpr WebConnectionStream(WebConnectionStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WebConnectionStream", modifiers: "&&", def_value: None }]
constexpr WebConnectionStream(WebConnectionStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WebConnectionStream(void* ptr) noexcept : ::System::IO::Stream(ptr) {
}


  constexpr WebConnectionStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WebConnectionStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WebConnectionStream& operator=(WebConnectionStream&& o) noexcept = default;
  constexpr WebConnectionStream& operator=(WebConnectionStream const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_closed, put=__set_closed))  closed;

constexpr void __set_closed(bool value) ;

constexpr bool __get_closed() const;

 bool __declspec(property(get=__get_disposed, put=__set_disposed))  disposed;

constexpr void __set_disposed(bool value) ;

constexpr bool __get_disposed() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_locker, put=__set_locker))  locker;

constexpr void __set_locker(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_locker() const;

 int32_t __declspec(property(get=__get_read_timeout, put=__set_read_timeout))  read_timeout;

constexpr void __set_read_timeout(int32_t value) ;

constexpr int32_t __get_read_timeout() const;

 int32_t __declspec(property(get=__get_write_timeout, put=__set_write_timeout))  write_timeout;

constexpr void __set_write_timeout(int32_t value) ;

constexpr int32_t __get_write_timeout() const;

 ::System::Net::HttpWebRequest __declspec(property(get=__get__Request_k__BackingField, put=__set__Request_k__BackingField))  _Request_k__BackingField;

constexpr void __set__Request_k__BackingField(::System::Net::HttpWebRequest value) ;

constexpr ::System::Net::HttpWebRequest __get__Request_k__BackingField() const;

 ::System::Net::WebConnection __declspec(property(get=__get__Connection_k__BackingField, put=__set__Connection_k__BackingField))  _Connection_k__BackingField;

constexpr void __set__Connection_k__BackingField(::System::Net::WebConnection value) ;

constexpr ::System::Net::WebConnection __get__Connection_k__BackingField() const;

 ::System::Net::WebOperation __declspec(property(get=__get__Operation_k__BackingField, put=__set__Operation_k__BackingField))  _Operation_k__BackingField;

constexpr void __set__Operation_k__BackingField(::System::Net::WebOperation value) ;

constexpr ::System::Net::WebOperation __get__Operation_k__BackingField() const;


// Properties

 ::System::Net::HttpWebRequest __declspec(property(get=get_Request))  Request;

 ::System::Net::WebConnection __declspec(property(get=get_Connection))  Connection;

 ::System::Net::WebOperation __declspec(property(get=get_Operation))  Operation;

 ::System::Net::ServicePoint __declspec(property(get=get_ServicePoint))  ServicePoint;

 bool __declspec(property(get=get_CanTimeout))  CanTimeout;

 int32_t __declspec(property(get=get_ReadTimeout, put=set_ReadTimeout))  ReadTimeout;

 int32_t __declspec(property(get=get_WriteTimeout, put=set_WriteTimeout))  WriteTimeout;

 bool __declspec(property(get=get_CanSeek))  CanSeek;

 int64_t __declspec(property(get=get_Length))  Length;

 int64_t __declspec(property(get=get_Position, put=set_Position))  Position;


// Methods

// Ctor Parameters [CppParam { name: "cnc", ty: "::System::Net::WebConnection", modifiers: "", def_value: None }, CppParam { name: "operation", ty: "::System::Net::WebOperation", modifiers: "", def_value: None }]
explicit WebConnectionStream(::System::Net::WebConnection cnc, ::System::Net::WebOperation operation) ;

/// @brief Method .ctor addr 0x284cfcc size 0xbc virtual false final false
 void _ctor(::System::Net::WebConnection cnc, ::System::Net::WebOperation operation) ;

/// @brief Method get_Request addr 0x284d088 size 0x8 virtual false final false
 ::System::Net::HttpWebRequest get_Request() ;

/// @brief Method get_Connection addr 0x284d090 size 0x8 virtual false final false
 ::System::Net::WebConnection get_Connection() ;

/// @brief Method get_Operation addr 0x284d098 size 0x8 virtual false final false
 ::System::Net::WebOperation get_Operation() ;

/// @brief Method get_ServicePoint addr 0x284d0a0 size 0x1c virtual false final false
 ::System::Net::ServicePoint get_ServicePoint() ;

/// @brief Method get_CanTimeout addr 0x284d0bc size 0x8 virtual true final false
 bool get_CanTimeout() ;

/// @brief Method get_ReadTimeout addr 0x284d0c4 size 0x8 virtual true final false
 int32_t get_ReadTimeout() ;

/// @brief Method set_ReadTimeout addr 0x284d0cc size 0x64 virtual true final false
 void set_ReadTimeout(int32_t value) ;

/// @brief Method get_WriteTimeout addr 0x284d130 size 0x8 virtual true final false
 int32_t get_WriteTimeout() ;

/// @brief Method set_WriteTimeout addr 0x284d138 size 0x64 virtual true final false
 void set_WriteTimeout(int32_t value) ;

/// @brief Method GetException addr 0x284d19c size 0x168 virtual false final false
 ::System::Exception GetException(::System::Exception e) ;

/// @brief Method TryReadFromBufferedContent addr 0x0 size 0xffffffffffffffff virtual true final false
 bool TryReadFromBufferedContent(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ByRef<int32_t> result) ;

/// @brief Method Read addr 0x284d304 size 0x2a4 virtual true final false
 int32_t Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method BeginRead addr 0x284d608 size 0x1d0 virtual true final false
 ::System::IAsyncResult BeginRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::AsyncCallback cb, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndRead addr 0x284d7d8 size 0x124 virtual true final false
 int32_t EndRead(::System::IAsyncResult r) ;

/// @brief Method BeginWrite addr 0x284d8fc size 0x1d0 virtual true final false
 ::System::IAsyncResult BeginWrite(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::AsyncCallback cb, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndWrite addr 0x284dacc size 0xf8 virtual true final false
 void EndWrite(::System::IAsyncResult r) ;

/// @brief Method Write addr 0x284dbc4 size 0x1f8 virtual true final false
 void Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method Flush addr 0x284ddbc size 0x4 virtual true final false
 void Flush() ;

/// @brief Method FlushAsync addr 0x284ddc0 size 0xc0 virtual true final false
 ::System::Threading::Tasks::Task FlushAsync(::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method InternalClose addr 0x284de80 size 0xc virtual false final false
 void InternalClose() ;

/// @brief Method Close_internal addr 0x0 size 0xffffffffffffffff virtual true final false
 void Close_internal(ByRef<bool> disposed) ;

/// @brief Method Close addr 0x284de8c size 0x14 virtual true final false
 void Close() ;

/// @brief Method Seek addr 0x284dea0 size 0x50 virtual true final false
 int64_t Seek(int64_t a, ::System::IO::SeekOrigin b) ;

/// @brief Method SetLength addr 0x284def0 size 0x50 virtual true final false
 void SetLength(int64_t a) ;

/// @brief Method get_CanSeek addr 0x284df40 size 0x8 virtual true final false
 bool get_CanSeek() ;

/// @brief Method get_Length addr 0x284df48 size 0x50 virtual true final false
 int64_t get_Length() ;

/// @brief Method get_Position addr 0x284df98 size 0x50 virtual true final false
 int64_t get_Position() ;

/// @brief Method set_Position addr 0x284dfe8 size 0x50 virtual true final false
 void set_Position(int64_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
NEED_NO_BOX(::System::Net::WebConnectionStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebConnectionStream, "System.Net", "WebConnectionStream");
