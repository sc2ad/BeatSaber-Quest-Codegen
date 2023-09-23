#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::IO {
class Stream;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class IDisposable;
}
namespace System::Net::Http::Headers {
class HttpContentHeaders;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Text {
class Encoding;
}
namespace System::Net {
class TransportContext;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
// Forward declare root types
namespace System::Net::Http {
class HttpContent;
}
namespace System::Net::Http {
class System__Net__Http__HttpContent__FixedMemoryStream;
}
namespace System::Net::Http {
struct System__Net__Http__HttpContent___LoadIntoBufferAsync_d__17;
}
namespace System::Net::Http {
struct System__Net__Http__HttpContent___ReadAsStringAsync_d__20;
}
// Type: ::FixedMemoryStream
namespace System::Net::Http {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14806))
// CS Name: System.Net.Http.HttpContent::FixedMemoryStream
class CORDL_TYPE System__Net__Http__HttpContent__FixedMemoryStream : public System::IO::MemoryStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~System__Net__Http__HttpContent__FixedMemoryStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__Http__HttpContent__FixedMemoryStream", modifiers: " const&", def_value: None }]
constexpr System__Net__Http__HttpContent__FixedMemoryStream(System__Net__Http__HttpContent__FixedMemoryStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__Http__HttpContent__FixedMemoryStream", modifiers: "&&", def_value: None }]
constexpr System__Net__Http__HttpContent__FixedMemoryStream(System__Net__Http__HttpContent__FixedMemoryStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__Http__HttpContent__FixedMemoryStream(void* ptr) noexcept : System::IO::MemoryStream(ptr) {
}


  constexpr System__Net__Http__HttpContent__FixedMemoryStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__Http__HttpContent__FixedMemoryStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__Http__HttpContent__FixedMemoryStream& operator=(System__Net__Http__HttpContent__FixedMemoryStream&& o) noexcept = default;
  constexpr System__Net__Http__HttpContent__FixedMemoryStream& operator=(System__Net__Http__HttpContent__FixedMemoryStream const& o) noexcept = default;
                


// Fields

 int64_t __declspec(property(get=__get_maxSize, put=__set_maxSize))  maxSize;

constexpr void __set_maxSize(int64_t value) ;

constexpr int64_t __get_maxSize() const;


// Methods

// Ctor Parameters [CppParam { name: "maxSize", ty: "int64_t", modifiers: "", def_value: None }]
explicit System__Net__Http__HttpContent__FixedMemoryStream(int64_t maxSize) ;

/// @brief Method .ctor addr 0x26a0f34 size 0x28 virtual false final false
 void _ctor(int64_t maxSize) ;

/// @brief Method CheckOverflow addr 0x26a118c size 0xb0 virtual false final false
 void CheckOverflow(int32_t count) ;

/// @brief Method WriteByte addr 0x26a12a4 size 0x30 virtual true final false
 void WriteByte(uint8_t value) ;

/// @brief Method Write addr 0x26a12d4 size 0x48 virtual true final false
 void Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http
// Type: ::<LoadIntoBufferAsync>d__17
namespace System::Net::Http {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14807))
// CS Name: System.Net.Http.HttpContent::<LoadIntoBufferAsync>d__17
struct CORDL_TYPE System__Net__Http__HttpContent___LoadIntoBufferAsync_d__17 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "System::Net::Http::HttpContent", modifiers: "", def_value: None }, CppParam { name: "maxBufferSize", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr System__Net__Http__HttpContent___LoadIntoBufferAsync_d__17(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, System::Net::Http::HttpContent __4__this, int64_t maxBufferSize, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept;


                    constexpr System__Net__Http__HttpContent___LoadIntoBufferAsync_d__17(System__Net__Http__HttpContent___LoadIntoBufferAsync_d__17 const&) = default;
                    constexpr System__Net__Http__HttpContent___LoadIntoBufferAsync_d__17(System__Net__Http__HttpContent___LoadIntoBufferAsync_d__17&&) = default;
                    constexpr System__Net__Http__HttpContent___LoadIntoBufferAsync_d__17& operator=(System__Net__Http__HttpContent___LoadIntoBufferAsync_d__17 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__Http__HttpContent___LoadIntoBufferAsync_d__17& operator=(System__Net__Http__HttpContent___LoadIntoBufferAsync_d__17&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__Http__HttpContent___LoadIntoBufferAsync_d__17(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder __get___t__builder() const;

 System::Net::Http::HttpContent __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(System::Net::Http::HttpContent value) ;

constexpr System::Net::Http::HttpContent __get___4__this() const;

 int64_t __declspec(property(get=__get_maxBufferSize, put=__set_maxBufferSize))  maxBufferSize;

constexpr void __set_maxBufferSize(int64_t value) ;

constexpr int64_t __get_maxBufferSize() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x26a131c size 0x264 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x26a1580 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::Http
// Type: ::<ReadAsStringAsync>d__20
namespace System::Net::Http {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14808))
// CS Name: System.Net.Http.HttpContent::<ReadAsStringAsync>d__20
struct CORDL_TYPE System__Net__Http__HttpContent___ReadAsStringAsync_d__20 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "System::Net::Http::HttpContent", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr System__Net__Http__HttpContent___ReadAsStringAsync_d__20(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder, System::Net::Http::HttpContent __4__this, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept;


                    constexpr System__Net__Http__HttpContent___ReadAsStringAsync_d__20(System__Net__Http__HttpContent___ReadAsStringAsync_d__20 const&) = default;
                    constexpr System__Net__Http__HttpContent___ReadAsStringAsync_d__20(System__Net__Http__HttpContent___ReadAsStringAsync_d__20&&) = default;
                    constexpr System__Net__Http__HttpContent___ReadAsStringAsync_d__20& operator=(System__Net__Http__HttpContent___ReadAsStringAsync_d__20 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__Http__HttpContent___ReadAsStringAsync_d__20& operator=(System__Net__Http__HttpContent___ReadAsStringAsync_d__20&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__Http__HttpContent___ReadAsStringAsync_d__20(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __get___t__builder() const;

 System::Net::Http::HttpContent __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(System::Net::Http::HttpContent value) ;

constexpr System::Net::Http::HttpContent __get___4__this() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x26a158c size 0x370 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x26a1a78 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::Http
// Type: System.Net.Http::HttpContent
namespace System::Net::Http {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14809))
// CS Name: System.Net.Http.HttpContent
class CORDL_TYPE HttpContent : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _ReadAsStringAsync_d__20 = System::Net::Http::System__Net__Http__HttpContent___ReadAsStringAsync_d__20;

using _LoadIntoBufferAsync_d__17 = System::Net::Http::System__Net__Http__HttpContent___LoadIntoBufferAsync_d__17;

using FixedMemoryStream = System::Net::Http::System__Net__Http__HttpContent__FixedMemoryStream;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~HttpContent() = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpContent", modifiers: " const&", def_value: None }]
constexpr HttpContent(HttpContent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpContent", modifiers: "&&", def_value: None }]
constexpr HttpContent(HttpContent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HttpContent(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HttpContent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HttpContent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HttpContent& operator=(HttpContent&& o) noexcept = default;
  constexpr HttpContent& operator=(HttpContent const& o) noexcept = default;
                


// Fields

 System::Net::Http::System__Net__Http__HttpContent__FixedMemoryStream __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(System::Net::Http::System__Net__Http__HttpContent__FixedMemoryStream value) ;

constexpr System::Net::Http::System__Net__Http__HttpContent__FixedMemoryStream __get_buffer() const;

 bool __declspec(property(get=__get_disposed, put=__set_disposed))  disposed;

constexpr void __set_disposed(bool value) ;

constexpr bool __get_disposed() const;

 System::Net::Http::Headers::HttpContentHeaders __declspec(property(get=__get_headers, put=__set_headers))  headers;

constexpr void __set_headers(System::Net::Http::Headers::HttpContentHeaders value) ;

constexpr System::Net::Http::Headers::HttpContentHeaders __get_headers() const;


// Properties

 System::Net::Http::Headers::HttpContentHeaders __declspec(property(get=get_Headers))  Headers;

 System::Nullable_1<int64_t> __declspec(property(get=get_LoadedBufferLength))  LoadedBufferLength;


// Methods

/// @brief Method get_Headers addr 0x269ca5c size 0x6c virtual false final false
 System::Net::Http::Headers::HttpContentHeaders get_Headers() ;

/// @brief Method get_LoadedBufferLength addr 0x26a0dd8 size 0x7c virtual false final false
 System::Nullable_1<int64_t> get_LoadedBufferLength() ;

/// @brief Method CopyToAsync addr 0x269eb70 size 0x8 virtual false final false
 System::Threading::Tasks::Task CopyToAsync(System::IO::Stream stream) ;

/// @brief Method CopyToAsync addr 0x26a0e54 size 0x7c virtual false final false
 System::Threading::Tasks::Task CopyToAsync(System::IO::Stream stream, System::Net::TransportContext context) ;

/// @brief Method CreateFixedMemoryStream addr 0x26a0ed0 size 0x64 virtual false final false
static System::Net::Http::System__Net__Http__HttpContent__FixedMemoryStream CreateFixedMemoryStream(int64_t maxBufferSize) ;

/// @brief Method Dispose addr 0x26a0f5c size 0x10 virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x26a0f6c size 0x2c virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method LoadIntoBufferAsync addr 0x26a0f98 size 0x8 virtual false final false
 System::Threading::Tasks::Task LoadIntoBufferAsync() ;

/// @brief Method LoadIntoBufferAsync addr 0x269ea98 size 0xd8 virtual false final false
 System::Threading::Tasks::Task LoadIntoBufferAsync(int64_t maxBufferSize) ;

/// @brief Method ReadAsStringAsync addr 0x26a0c20 size 0xf0 virtual false final false
 System::Threading::Tasks::Task_1<::StringW> ReadAsStringAsync() ;

/// @brief Method GetEncodingFromBuffer addr 0x26a0fa0 size 0x178 virtual false final false
static System::Text::Encoding GetEncodingFromBuffer(::ArrayW<uint8_t> buffer, int32_t length, ByRef<int32_t> preambleLength) ;

/// @brief Method StartsWith addr 0x26a1118 size 0x74 virtual false final false
static int32_t StartsWith(::ArrayW<uint8_t> array, int32_t length, ::ArrayW<uint8_t> value) ;

/// @brief Method SerializeToStreamAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Threading::Tasks::Task SerializeToStreamAsync(System::IO::Stream stream, System::Net::TransportContext context) ;

/// @brief Method TryComputeLength addr 0x0 size 0xffffffffffffffff virtual true final false
 bool TryComputeLength(ByRef<int64_t> length) ;

// Ctor Parameters []
explicit HttpContent() ;

/// @brief Method .ctor addr 0x269f244 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http
NEED_NO_BOX(System::Net::Http::HttpContent);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::HttpContent, "System.Net.Http", "HttpContent");
NEED_NO_BOX(System::Net::Http::System__Net__Http__HttpContent__FixedMemoryStream);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::System__Net__Http__HttpContent__FixedMemoryStream, "System.Net.Http", "HttpContent/FixedMemoryStream");
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::System__Net__Http__HttpContent___LoadIntoBufferAsync_d__17, "System.Net.Http", "HttpContent/<LoadIntoBufferAsync>d__17");
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::System__Net__Http__HttpContent___ReadAsStringAsync_d__20, "System.Net.Http", "HttpContent/<ReadAsStringAsync>d__20");
