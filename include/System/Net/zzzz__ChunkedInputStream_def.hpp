#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Net/zzzz__RequestStream_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Net {
class MonoChunkParser;
}
namespace System::Net {
class HttpListenerContext;
}
namespace System::Net {
class System__Net__ChunkedInputStream__ReadBufferState;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace System::IO {
class Stream;
}
namespace System::Net {
class HttpStreamAsyncResult;
}
// Forward declare root types
namespace System::Net {
class ChunkedInputStream;
}
namespace System::Net {
class System__Net__ChunkedInputStream__ReadBufferState;
}
// Type: ::ReadBufferState
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8004))
// CS Name: System.Net.ChunkedInputStream::ReadBufferState
class CORDL_TYPE System__Net__ChunkedInputStream__ReadBufferState : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~System__Net__ChunkedInputStream__ReadBufferState() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__ChunkedInputStream__ReadBufferState", modifiers: " const&", def_value: None }]
constexpr System__Net__ChunkedInputStream__ReadBufferState(System__Net__ChunkedInputStream__ReadBufferState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__ChunkedInputStream__ReadBufferState", modifiers: "&&", def_value: None }]
constexpr System__Net__ChunkedInputStream__ReadBufferState(System__Net__ChunkedInputStream__ReadBufferState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__ChunkedInputStream__ReadBufferState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Net__ChunkedInputStream__ReadBufferState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__ChunkedInputStream__ReadBufferState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__ChunkedInputStream__ReadBufferState& operator=(System__Net__ChunkedInputStream__ReadBufferState&& o) noexcept = default;
  constexpr System__Net__ChunkedInputStream__ReadBufferState& operator=(System__Net__ChunkedInputStream__ReadBufferState const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_Buffer, put=__set_Buffer))  Buffer;

constexpr void __set_Buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_Buffer() const;

 int32_t __declspec(property(get=__get_Offset, put=__set_Offset))  Offset;

constexpr void __set_Offset(int32_t value) ;

constexpr int32_t __get_Offset() const;

 int32_t __declspec(property(get=__get_Count, put=__set_Count))  Count;

constexpr void __set_Count(int32_t value) ;

constexpr int32_t __get_Count() const;

 int32_t __declspec(property(get=__get_InitialCount, put=__set_InitialCount))  InitialCount;

constexpr void __set_InitialCount(int32_t value) ;

constexpr int32_t __get_InitialCount() const;

 System::Net::HttpStreamAsyncResult __declspec(property(get=__get_Ares, put=__set_Ares))  Ares;

constexpr void __set_Ares(System::Net::HttpStreamAsyncResult value) ;

constexpr System::Net::HttpStreamAsyncResult __get_Ares() const;


// Methods

static System::Net::System__Net__ChunkedInputStream__ReadBufferState New_ctor(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Net::HttpStreamAsyncResult ares) ;

/// @brief Method .ctor addr 0x282a3cc size 0x48 virtual false final false
 void _ctor(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Net::HttpStreamAsyncResult ares) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: System.Net::ChunkedInputStream
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8049))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8005))
// CS Name: System.Net.ChunkedInputStream
class CORDL_TYPE ChunkedInputStream : public System::Net::RequestStream {
public:
// Declarations
using ReadBufferState = System::Net::System__Net__ChunkedInputStream__ReadBufferState;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~ChunkedInputStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "ChunkedInputStream", modifiers: " const&", def_value: None }]
constexpr ChunkedInputStream(ChunkedInputStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ChunkedInputStream", modifiers: "&&", def_value: None }]
constexpr ChunkedInputStream(ChunkedInputStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ChunkedInputStream(void* ptr) noexcept : System::Net::RequestStream(ptr) {
}


  constexpr ChunkedInputStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ChunkedInputStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ChunkedInputStream& operator=(ChunkedInputStream&& o) noexcept = default;
  constexpr ChunkedInputStream& operator=(ChunkedInputStream const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_disposed, put=__set_disposed))  disposed;

constexpr void __set_disposed(bool value) ;

constexpr bool __get_disposed() const;

 System::Net::MonoChunkParser __declspec(property(get=__get_decoder, put=__set_decoder))  decoder;

constexpr void __set_decoder(System::Net::MonoChunkParser value) ;

constexpr System::Net::MonoChunkParser __get_decoder() const;

 System::Net::HttpListenerContext __declspec(property(get=__get_context, put=__set_context))  context;

constexpr void __set_context(System::Net::HttpListenerContext value) ;

constexpr System::Net::HttpListenerContext __get_context() const;

 bool __declspec(property(get=__get_no_more_data, put=__set_no_more_data))  no_more_data;

constexpr void __set_no_more_data(bool value) ;

constexpr bool __get_no_more_data() const;


// Methods

static System::Net::ChunkedInputStream New_ctor(System::Net::HttpListenerContext context, System::IO::Stream stream, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t length) ;

/// @brief Method .ctor addr 0x2829e1c size 0x104 virtual false final false
 void _ctor(System::Net::HttpListenerContext context, System::IO::Stream stream, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t length) ;

/// @brief Method Read addr 0x2829f20 size 0x3c virtual true final false
 int32_t Read(ByRef<::ArrayW<uint8_t>> buffer, int32_t offset, int32_t count) ;

/// @brief Method BeginRead addr 0x2829f5c size 0x308 virtual true final false
 System::IAsyncResult BeginRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback cback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method OnRead addr 0x282a414 size 0x3a4 virtual false final false
 void OnRead(System::IAsyncResult base_ares) ;

/// @brief Method EndRead addr 0x282a998 size 0x2a0 virtual true final false
 int32_t EndRead(System::IAsyncResult ares) ;

/// @brief Method Close addr 0x282ac38 size 0x1c virtual true final false
 void Close() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::ChunkedInputStream);
DEFINE_IL2CPP_ARG_TYPE(System::Net::ChunkedInputStream, "System.Net", "ChunkedInputStream");
NEED_NO_BOX(System::Net::System__Net__ChunkedInputStream__ReadBufferState);
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__ChunkedInputStream__ReadBufferState, "System.Net", "ChunkedInputStream/ReadBufferState");
