#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/InteropServices/zzzz__SafeHandle_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class Exception;
}
namespace System::IO::Compression {
struct CompressionMode;
}
namespace System::Runtime::InteropServices {
struct GCHandle;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace System::IO::Compression {
class DeflateStreamNative;
}
namespace System::IO::Compression {
class System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle;
}
namespace System::IO::Compression {
class System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite;
}
// Type: ::UnmanagedReadOrWrite
namespace System::IO::Compression {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8401))
// CS Name: System.IO.Compression.DeflateStreamNative::UnmanagedReadOrWrite
class CORDL_TYPE System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite", modifiers: " const&", def_value: None }]
constexpr System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite(System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite", modifiers: "&&", def_value: None }]
constexpr System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite(System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite& operator=(System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite&& o) noexcept = default;
  constexpr System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite& operator=(System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x27b18c4 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x27b211c size 0x14 virtual true final false
 int32_t Invoke(::cordl_internals::intptr_t buffer, int32_t length, ::cordl_internals::intptr_t data) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO::Compression
// Type: ::SafeDeflateStreamHandle
namespace System::IO::Compression {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3328))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8402))
// CS Name: System.IO.Compression.DeflateStreamNative::SafeDeflateStreamHandle
class CORDL_TYPE System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle : public System::Runtime::InteropServices::SafeHandle {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle", modifiers: " const&", def_value: None }]
constexpr System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle(System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle", modifiers: "&&", def_value: None }]
constexpr System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle(System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle(void* ptr) noexcept : System::Runtime::InteropServices::SafeHandle(ptr) {
}


  constexpr System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle& operator=(System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle&& o) noexcept = default;
  constexpr System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle& operator=(System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_IsInvalid))  IsInvalid;


// Methods

/// @brief Method get_IsInvalid addr 0x27b2130 size 0x54 virtual true final false
 bool get_IsInvalid() ;

// Ctor Parameters []
explicit System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle() ;

/// @brief Method .ctor addr 0x27b20c0 size 0x58 virtual false final false
 void _ctor() ;

/// @brief Method ReleaseHandle addr 0x27b2184 size 0x88 virtual true final false
 bool ReleaseHandle() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO::Compression
// Type: System.IO.Compression::DeflateStreamNative
namespace System::IO::Compression {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8403))
// CS Name: System.IO.Compression.DeflateStreamNative
class CORDL_TYPE DeflateStreamNative : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using SafeDeflateStreamHandle = System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle;

using UnmanagedReadOrWrite = System::IO::Compression::System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~DeflateStreamNative() = default;

// Ctor Parameters [CppParam { name: "", ty: "DeflateStreamNative", modifiers: " const&", def_value: None }]
constexpr DeflateStreamNative(DeflateStreamNative const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DeflateStreamNative", modifiers: "&&", def_value: None }]
constexpr DeflateStreamNative(DeflateStreamNative&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DeflateStreamNative(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DeflateStreamNative& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DeflateStreamNative& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DeflateStreamNative& operator=(DeflateStreamNative&& o) noexcept = default;
  constexpr DeflateStreamNative& operator=(DeflateStreamNative const& o) noexcept = default;
                


// Fields

 System::IO::Compression::System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite __declspec(property(get=__get_feeder, put=__set_feeder))  feeder;

constexpr void __set_feeder(System::IO::Compression::System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite value) ;

constexpr System::IO::Compression::System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite __get_feeder() const;

 System::IO::Stream __declspec(property(get=__get_base_stream, put=__set_base_stream))  base_stream;

constexpr void __set_base_stream(System::IO::Stream value) ;

constexpr System::IO::Stream __get_base_stream() const;

 System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle __declspec(property(get=__get_z_stream, put=__set_z_stream))  z_stream;

constexpr void __set_z_stream(System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle value) ;

constexpr System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle __get_z_stream() const;

 System::Runtime::InteropServices::GCHandle __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(System::Runtime::InteropServices::GCHandle value) ;

constexpr System::Runtime::InteropServices::GCHandle __get_data() const;

 bool __declspec(property(get=__get_disposed, put=__set_disposed))  disposed;

constexpr void __set_disposed(bool value) ;

constexpr bool __get_disposed() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_io_buffer, put=__set_io_buffer))  io_buffer;

constexpr void __set_io_buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_io_buffer() const;

 System::Exception __declspec(property(get=__get_last_error, put=__set_last_error))  last_error;

constexpr void __set_last_error(System::Exception value) ;

constexpr System::Exception __get_last_error() const;


// Methods

// Ctor Parameters []
explicit DeflateStreamNative() ;

/// @brief Method .ctor addr 0x27b18bc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Create addr 0x27b00a4 size 0x134 virtual false final false
static System::IO::Compression::DeflateStreamNative Create(System::IO::Stream compressedStream, System::IO::Compression::CompressionMode mode, bool gzip) ;

/// @brief Method Finalize addr 0x27b1a20 size 0x98 virtual true final false
 void Finalize() ;

/// @brief Method Dispose addr 0x27b0334 size 0x104 virtual false final false
 void Dispose(bool disposing) ;

/// @brief Method Flush addr 0x27b0a44 size 0x54 virtual false final false
 void Flush() ;

/// @brief Method ReadZStream addr 0x27b0480 size 0x78 virtual false final false
 int32_t ReadZStream(::cordl_internals::intptr_t buffer, int32_t length) ;

/// @brief Method WriteZStream addr 0x27b0728 size 0x6c virtual false final false
 void WriteZStream(::cordl_internals::intptr_t buffer, int32_t length) ;

/// @brief Method UnmanagedRead addr 0x27b1744 size 0xbc virtual false final false
static int32_t UnmanagedRead(::cordl_internals::intptr_t buffer, int32_t length, ::cordl_internals::intptr_t data) ;

/// @brief Method UnmanagedRead addr 0x27b1d48 size 0x1a4 virtual false final false
 int32_t UnmanagedRead(::cordl_internals::intptr_t buffer, int32_t length) ;

/// @brief Method UnmanagedWrite addr 0x27b1800 size 0xbc virtual false final false
static int32_t UnmanagedWrite(::cordl_internals::intptr_t buffer, int32_t length, ::cordl_internals::intptr_t data) ;

/// @brief Method UnmanagedWrite addr 0x27b1eec size 0x1d4 virtual false final false
 int32_t UnmanagedWrite(::cordl_internals::intptr_t buffer, int32_t length) ;

/// @brief Method CheckResult addr 0x27b1b1c size 0x134 virtual false final false
 void CheckResult(int32_t result, ::StringW where) ;

/// @brief Method CreateZStream addr 0x27b1988 size 0x98 virtual false final false
static System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle CreateZStream(System::IO::Compression::CompressionMode compress, bool gzip, System::IO::Compression::System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite feeder, ::cordl_internals::intptr_t data) ;

/// @brief Method CloseZStream addr 0x27b2118 size 0x4 virtual false final false
static int32_t CloseZStream(::cordl_internals::intptr_t stream) ;

/// @brief Method Flush addr 0x27b1ab8 size 0x64 virtual false final false
static int32_t Flush(System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle stream) ;

/// @brief Method ReadZStream addr 0x27b1c50 size 0x7c virtual false final false
static int32_t ReadZStream(System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle stream, ::cordl_internals::intptr_t buffer, int32_t length) ;

/// @brief Method WriteZStream addr 0x27b1ccc size 0x7c virtual false final false
static int32_t WriteZStream(System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle stream, ::cordl_internals::intptr_t buffer, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO::Compression
NEED_NO_BOX(System::IO::Compression::DeflateStreamNative);
DEFINE_IL2CPP_ARG_TYPE(System::IO::Compression::DeflateStreamNative, "System.IO.Compression", "DeflateStreamNative");
NEED_NO_BOX(System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle);
DEFINE_IL2CPP_ARG_TYPE(System::IO::Compression::System__IO__Compression__DeflateStreamNative__SafeDeflateStreamHandle, "System.IO.Compression", "DeflateStreamNative/SafeDeflateStreamHandle");
NEED_NO_BOX(System::IO::Compression::System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite);
DEFINE_IL2CPP_ARG_TYPE(System::IO::Compression::System__IO__Compression__DeflateStreamNative__UnmanagedReadOrWrite, "System.IO.Compression", "DeflateStreamNative/UnmanagedReadOrWrite");
