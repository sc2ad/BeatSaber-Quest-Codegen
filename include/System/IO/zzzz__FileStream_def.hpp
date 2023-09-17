#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::IO {
struct FileShare;
}
namespace System::IO {
struct FileAccess;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class IAsyncResult;
}
namespace System::Threading::Tasks {
class Task;
}
namespace Microsoft::Win32::SafeHandles {
class SafeFileHandle;
}
namespace System {
class AsyncCallback;
}
namespace System::IO {
struct FileMode;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
struct FileOptions;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Runtime::InteropServices {
class SafeHandle;
}
// Forward declare root types
namespace System::IO {
class FileStream;
}
namespace System::IO {
class ____System__IO__FileStream__ReadDelegate;
}
namespace System::IO {
class ____System__IO__FileStream__WriteDelegate;
}
// Type: ::ReadDelegate
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3610))
// CS Name: System.IO.FileStream::ReadDelegate
class CORDL_TYPE ____System__IO__FileStream__ReadDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____System__IO__FileStream__ReadDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__IO__FileStream__ReadDelegate", modifiers: " const&", def_value: None }]
constexpr ____System__IO__FileStream__ReadDelegate(____System__IO__FileStream__ReadDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__IO__FileStream__ReadDelegate", modifiers: "&&", def_value: None }]
constexpr ____System__IO__FileStream__ReadDelegate(____System__IO__FileStream__ReadDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__IO__FileStream__ReadDelegate(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____System__IO__FileStream__ReadDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__IO__FileStream__ReadDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__IO__FileStream__ReadDelegate& operator=(____System__IO__FileStream__ReadDelegate&& o) noexcept = default;
  constexpr ____System__IO__FileStream__ReadDelegate& operator=(____System__IO__FileStream__ReadDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____System__IO__FileStream__ReadDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x23cee7c size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x23d0a38 size 0x14 virtual true final false
 int32_t Invoke(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method BeginInvoke addr 0x23cef54 size 0xa8 virtual true final false
 ::System::IAsyncResult BeginInvoke(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x23cf160 size 0x28 virtual true final false
 int32_t EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
// Type: ::WriteDelegate
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3611))
// CS Name: System.IO.FileStream::WriteDelegate
class CORDL_TYPE ____System__IO__FileStream__WriteDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____System__IO__FileStream__WriteDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__IO__FileStream__WriteDelegate", modifiers: " const&", def_value: None }]
constexpr ____System__IO__FileStream__WriteDelegate(____System__IO__FileStream__WriteDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__IO__FileStream__WriteDelegate", modifiers: "&&", def_value: None }]
constexpr ____System__IO__FileStream__WriteDelegate(____System__IO__FileStream__WriteDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__IO__FileStream__WriteDelegate(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____System__IO__FileStream__WriteDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__IO__FileStream__WriteDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__IO__FileStream__WriteDelegate& operator=(____System__IO__FileStream__WriteDelegate&& o) noexcept = default;
  constexpr ____System__IO__FileStream__WriteDelegate& operator=(____System__IO__FileStream__WriteDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____System__IO__FileStream__WriteDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x23cfafc size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x23d0a4c size 0x14 virtual true final false
 void Invoke(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method BeginInvoke addr 0x23cfbd4 size 0xa8 virtual true final false
 ::System::IAsyncResult BeginInvoke(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x23cfde4 size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
// Type: System.IO::FileStream
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3612))
// CS Name: System.IO.FileStream
class CORDL_TYPE FileStream : public ::System::IO::Stream {
public:
// Declarations
using WriteDelegate = ::System::IO::____System__IO__FileStream__WriteDelegate;

using ReadDelegate = ::System::IO::____System__IO__FileStream__ReadDelegate;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~FileStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "FileStream", modifiers: " const&", def_value: None }]
constexpr FileStream(FileStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FileStream", modifiers: "&&", def_value: None }]
constexpr FileStream(FileStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FileStream(void* ptr) noexcept : ::System::IO::Stream(ptr) {
}


  constexpr FileStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FileStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FileStream& operator=(FileStream&& o) noexcept = default;
  constexpr FileStream& operator=(FileStream const& o) noexcept = default;
                


// Fields

static ::ArrayW<uint8_t> __declspec(property(get=__get_buf_recycle, put=__set_buf_recycle))  buf_recycle;

static void __set_buf_recycle(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_buf_recycle() ;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_buf_recycle_lock, put=__set_buf_recycle_lock))  buf_recycle_lock;

static void __set_buf_recycle_lock(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_buf_recycle_lock() ;

 ::ArrayW<uint8_t> __declspec(property(get=__get_buf, put=__set_buf))  buf;

constexpr void __set_buf(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_buf() const;

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 ::Microsoft::Win32::SafeHandles::SafeFileHandle __declspec(property(get=__get_safeHandle, put=__set_safeHandle))  safeHandle;

constexpr void __set_safeHandle(::Microsoft::Win32::SafeHandles::SafeFileHandle value) ;

constexpr ::Microsoft::Win32::SafeHandles::SafeFileHandle __get_safeHandle() const;

 bool __declspec(property(get=__get_isExposed, put=__set_isExposed))  isExposed;

constexpr void __set_isExposed(bool value) ;

constexpr bool __get_isExposed() const;

 int64_t __declspec(property(get=__get_append_startpos, put=__set_append_startpos))  append_startpos;

constexpr void __set_append_startpos(int64_t value) ;

constexpr int64_t __get_append_startpos() const;

 ::System::IO::FileAccess __declspec(property(get=__get_access, put=__set_access))  access;

constexpr void __set_access(::System::IO::FileAccess value) ;

constexpr ::System::IO::FileAccess __get_access() const;

 bool __declspec(property(get=__get_owner, put=__set_owner))  owner;

constexpr void __set_owner(bool value) ;

constexpr bool __get_owner() const;

 bool __declspec(property(get=__get_async, put=__set_async))  async;

constexpr void __set_async(bool value) ;

constexpr bool __get_async() const;

 bool __declspec(property(get=__get_canseek, put=__set_canseek))  canseek;

constexpr void __set_canseek(bool value) ;

constexpr bool __get_canseek() const;

 bool __declspec(property(get=__get_anonymous, put=__set_anonymous))  anonymous;

constexpr void __set_anonymous(bool value) ;

constexpr bool __get_anonymous() const;

 bool __declspec(property(get=__get_buf_dirty, put=__set_buf_dirty))  buf_dirty;

constexpr void __set_buf_dirty(bool value) ;

constexpr bool __get_buf_dirty() const;

 int32_t __declspec(property(get=__get_buf_size, put=__set_buf_size))  buf_size;

constexpr void __set_buf_size(int32_t value) ;

constexpr int32_t __get_buf_size() const;

 int32_t __declspec(property(get=__get_buf_length, put=__set_buf_length))  buf_length;

constexpr void __set_buf_length(int32_t value) ;

constexpr int32_t __get_buf_length() const;

 int32_t __declspec(property(get=__get_buf_offset, put=__set_buf_offset))  buf_offset;

constexpr void __set_buf_offset(int32_t value) ;

constexpr int32_t __get_buf_offset() const;

 int64_t __declspec(property(get=__get_buf_start, put=__set_buf_start))  buf_start;

constexpr void __set_buf_start(int64_t value) ;

constexpr int64_t __get_buf_start() const;


// Properties

 bool __declspec(property(get=get_CanRead))  CanRead;

 bool __declspec(property(get=get_CanWrite))  CanWrite;

 bool __declspec(property(get=get_CanSeek))  CanSeek;

 int64_t __declspec(property(get=get_Length))  Length;

 int64_t __declspec(property(get=get_Position, put=set_Position))  Position;

 ::Microsoft::Win32::SafeHandles::SafeFileHandle __declspec(property(get=get_SafeFileHandle))  SafeFileHandle;


// Methods

// Ctor Parameters [CppParam { name: "handle", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "access", ty: "::System::IO::FileAccess", modifiers: "", def_value: None }, CppParam { name: "ownsHandle", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: None }]
explicit FileStream(::cordl_internals::intptr_t handle, ::System::IO::FileAccess access, bool ownsHandle, int32_t bufferSize) ;

/// @brief Method .ctor addr 0x23cb8c0 size 0x10 virtual false final false
 void _ctor(::cordl_internals::intptr_t handle, ::System::IO::FileAccess access, bool ownsHandle, int32_t bufferSize) ;

// Ctor Parameters [CppParam { name: "handle", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "access", ty: "::System::IO::FileAccess", modifiers: "", def_value: None }, CppParam { name: "ownsHandle", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "isAsync", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isConsoleWrapper", ty: "bool", modifiers: "", def_value: None }]
explicit FileStream(::cordl_internals::intptr_t handle, ::System::IO::FileAccess access, bool ownsHandle, int32_t bufferSize, bool isAsync, bool isConsoleWrapper) ;

/// @brief Method .ctor addr 0x23cb8d0 size 0x1ac virtual false final false
 void _ctor(::cordl_internals::intptr_t handle, ::System::IO::FileAccess access, bool ownsHandle, int32_t bufferSize, bool isAsync, bool isConsoleWrapper) ;

// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "::System::IO::FileMode", modifiers: "", def_value: None }]
explicit FileStream(::StringW path, ::System::IO::FileMode mode) ;

/// @brief Method .ctor addr 0x23cbd64 size 0x34 virtual false final false
 void _ctor(::StringW path, ::System::IO::FileMode mode) ;

// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "::System::IO::FileMode", modifiers: "", def_value: None }, CppParam { name: "access", ty: "::System::IO::FileAccess", modifiers: "", def_value: None }]
explicit FileStream(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access) ;

/// @brief Method .ctor addr 0x23cc4c0 size 0x2c virtual false final false
 void _ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access) ;

// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "::System::IO::FileMode", modifiers: "", def_value: None }, CppParam { name: "access", ty: "::System::IO::FileAccess", modifiers: "", def_value: None }, CppParam { name: "share", ty: "::System::IO::FileShare", modifiers: "", def_value: None }]
explicit FileStream(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share) ;

/// @brief Method .ctor addr 0x23cc504 size 0x24 virtual false final false
 void _ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share) ;

// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "::System::IO::FileMode", modifiers: "", def_value: None }, CppParam { name: "access", ty: "::System::IO::FileAccess", modifiers: "", def_value: None }, CppParam { name: "share", ty: "::System::IO::FileShare", modifiers: "", def_value: None }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: None }]
explicit FileStream(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize) ;

/// @brief Method .ctor addr 0x23cc528 size 0x20 virtual false final false
 void _ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize) ;

// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "::System::IO::FileMode", modifiers: "", def_value: None }, CppParam { name: "access", ty: "::System::IO::FileAccess", modifiers: "", def_value: None }, CppParam { name: "share", ty: "::System::IO::FileShare", modifiers: "", def_value: None }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "useAsync", ty: "bool", modifiers: "", def_value: None }]
explicit FileStream(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize, bool useAsync) ;

/// @brief Method .ctor addr 0x23cc548 size 0x28 virtual false final false
 void _ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize, bool useAsync) ;

// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "::System::IO::FileMode", modifiers: "", def_value: None }, CppParam { name: "access", ty: "::System::IO::FileAccess", modifiers: "", def_value: None }, CppParam { name: "share", ty: "::System::IO::FileShare", modifiers: "", def_value: None }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "options", ty: "::System::IO::FileOptions", modifiers: "", def_value: None }]
explicit FileStream(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize, ::System::IO::FileOptions options) ;

/// @brief Method .ctor addr 0x23cc570 size 0x20 virtual false final false
 void _ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize, ::System::IO::FileOptions options) ;

// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "::System::IO::FileMode", modifiers: "", def_value: None }, CppParam { name: "access", ty: "::System::IO::FileAccess", modifiers: "", def_value: None }, CppParam { name: "share", ty: "::System::IO::FileShare", modifiers: "", def_value: None }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "isAsync", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "anonymous", ty: "bool", modifiers: "", def_value: None }]
explicit FileStream(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize, bool isAsync, bool anonymous) ;

/// @brief Method .ctor addr 0x23cc4ec size 0x18 virtual false final false
 void _ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize, bool isAsync, bool anonymous) ;

// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "::System::IO::FileMode", modifiers: "", def_value: None }, CppParam { name: "access", ty: "::System::IO::FileAccess", modifiers: "", def_value: None }, CppParam { name: "share", ty: "::System::IO::FileShare", modifiers: "", def_value: None }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "anonymous", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "options", ty: "::System::IO::FileOptions", modifiers: "", def_value: None }]
explicit FileStream(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize, bool anonymous, ::System::IO::FileOptions options) ;

/// @brief Method .ctor addr 0x23cbd98 size 0x728 virtual false final false
 void _ctor(::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare share, int32_t bufferSize, bool anonymous, ::System::IO::FileOptions options) ;

/// @brief Method Init addr 0x23cba7c size 0x2e8 virtual false final false
 void Init(::Microsoft::Win32::SafeHandles::SafeFileHandle safeHandle, ::System::IO::FileAccess access, bool ownsHandle, int32_t bufferSize, bool isAsync, bool isConsoleWrapper) ;

/// @brief Method get_CanRead addr 0x23cdda0 size 0x14 virtual true final false
 bool get_CanRead() ;

/// @brief Method get_CanWrite addr 0x23cddb4 size 0x14 virtual true final false
 bool get_CanWrite() ;

/// @brief Method get_CanSeek addr 0x23cddc8 size 0x8 virtual true final false
 bool get_CanSeek() ;

/// @brief Method get_Length addr 0x23cddd0 size 0x164 virtual true final false
 int64_t get_Length() ;

/// @brief Method get_Position addr 0x23ce06c size 0x170 virtual true final false
 int64_t get_Position() ;

/// @brief Method set_Position addr 0x23ce1dc size 0x90 virtual true final false
 void set_Position(int64_t value) ;

/// @brief Method get_SafeFileHandle addr 0x23ce26c size 0x3c virtual true final false
 ::Microsoft::Win32::SafeHandles::SafeFileHandle get_SafeFileHandle() ;

/// @brief Method ExposeHandle addr 0x23cdc38 size 0x28 virtual false final false
 void ExposeHandle() ;

/// @brief Method ReadByte addr 0x23ce420 size 0x148 virtual true final false
 int32_t ReadByte() ;

/// @brief Method WriteByte addr 0x23ce6c0 size 0x15c virtual true final false
 void WriteByte(uint8_t value) ;

/// @brief Method Read addr 0x23ce81c size 0x268 virtual true final false
 int32_t Read(ByRef<::ArrayW<uint8_t>> array, int32_t offset, int32_t count) ;

/// @brief Method ReadInternal addr 0x23cea84 size 0x9c virtual false final false
 int32_t ReadInternal(::ArrayW<uint8_t> dest, int32_t offset, int32_t count) ;

/// @brief Method BeginRead addr 0x23cebd8 size 0x2a4 virtual true final false
 ::System::IAsyncResult BeginRead(::ArrayW<uint8_t> array, int32_t offset, int32_t numBytes, ::System::AsyncCallback userCallback, ::bs_hook::Il2CppWrapperType stateObject) ;

/// @brief Method EndRead addr 0x23ceffc size 0x164 virtual true final false
 int32_t EndRead(::System::IAsyncResult asyncResult) ;

/// @brief Method Write addr 0x23cf188 size 0x23c virtual true final false
 void Write(::ArrayW<uint8_t> array, int32_t offset, int32_t count) ;

/// @brief Method WriteInternal addr 0x23cf3c4 size 0x1b4 virtual false final false
 void WriteInternal(::ArrayW<uint8_t> src, int32_t offset, int32_t count) ;

/// @brief Method BeginWrite addr 0x23cf738 size 0x2ec virtual true final false
 ::System::IAsyncResult BeginWrite(::ArrayW<uint8_t> array, int32_t offset, int32_t numBytes, ::System::AsyncCallback userCallback, ::bs_hook::Il2CppWrapperType stateObject) ;

/// @brief Method EndWrite addr 0x23cfc7c size 0x168 virtual true final false
 void EndWrite(::System::IAsyncResult asyncResult) ;

/// @brief Method Seek addr 0x23cfdf0 size 0x264 virtual true final false
 int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin) ;

/// @brief Method SetLength addr 0x23d0054 size 0x210 virtual true final false
 void SetLength(int64_t value) ;

/// @brief Method Flush addr 0x23d0394 size 0x78 virtual true final false
 void Flush() ;

/// @brief Method Finalize addr 0x23d040c size 0xa4 virtual true final false
 void Finalize() ;

/// @brief Method Dispose addr 0x23d04b0 size 0x334 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method FlushAsync addr 0x23d07e8 size 0x88 virtual true final false
 ::System::Threading::Tasks::Task FlushAsync(::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method ReadAsync addr 0x23d0870 size 0x4 virtual true final false
 ::System::Threading::Tasks::Task_1<int32_t> ReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method WriteAsync addr 0x23d0874 size 0x4 virtual true final false
 ::System::Threading::Tasks::Task WriteAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method ReadSegment addr 0x23ceb20 size 0xb8 virtual false final false
 int32_t ReadSegment(::ArrayW<uint8_t> dest, int32_t dest_offset, int32_t count) ;

/// @brief Method WriteSegment addr 0x23cf6c0 size 0x78 virtual false final false
 int32_t WriteSegment(::ArrayW<uint8_t> src, int32_t src_offset, int32_t count) ;

/// @brief Method FlushBuffer addr 0x23ce2a8 size 0x178 virtual false final false
 void FlushBuffer() ;

/// @brief Method FlushBufferIfDirty addr 0x23cdf34 size 0x10 virtual false final false
 void FlushBufferIfDirty() ;

/// @brief Method RefillBuffer addr 0x23ce690 size 0x30 virtual false final false
 void RefillBuffer() ;

/// @brief Method ReadData addr 0x23ce568 size 0x128 virtual false final false
 int32_t ReadData(::System::Runtime::InteropServices::SafeHandle safeHandle, ::ArrayW<uint8_t> buf, int32_t offset, int32_t count) ;

/// @brief Method InitBuffer addr 0x23cd9ac size 0x28c virtual false final false
 void InitBuffer(int32_t size, bool isZeroSize) ;

/// @brief Method GetSecureFileName addr 0x23cd0f0 size 0x78 virtual false final false
 ::StringW GetSecureFileName(::StringW filename) ;

/// @brief Method GetSecureFileName addr 0x23ccbe4 size 0xa8 virtual false final false
 ::StringW GetSecureFileName(::StringW filename, bool full) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
} // end anonymous namespace
NEED_NO_BOX(::System::IO::FileStream);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::FileStream, "System.IO", "FileStream");
NEED_NO_BOX(::System::IO::____System__IO__FileStream__ReadDelegate);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::____System__IO__FileStream__ReadDelegate, "System.IO", "FileStream/ReadDelegate");
NEED_NO_BOX(::System::IO::____System__IO__FileStream__WriteDelegate);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::____System__IO__FileStream__WriteDelegate, "System.IO", "FileStream/WriteDelegate");
