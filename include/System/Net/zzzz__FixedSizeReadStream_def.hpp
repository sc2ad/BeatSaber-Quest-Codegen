#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Net/zzzz__WebReadStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace System::IO {
class Stream;
}
namespace System::Net {
struct System__Net__FixedSizeReadStream___ProcessReadAsync_d__5;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Net {
class WebOperation;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
// Forward declare root types
namespace System::Net {
class FixedSizeReadStream;
}
namespace System::Net {
struct System__Net__FixedSizeReadStream___ProcessReadAsync_d__5;
}
// Type: ::<ProcessReadAsync>d__5
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8017))
// CS Name: System.Net.FixedSizeReadStream::<ProcessReadAsync>d__5
struct CORDL_TYPE System__Net__FixedSizeReadStream___ProcessReadAsync_d__5 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "System::Net::FixedSizeReadStream", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
constexpr System__Net__FixedSizeReadStream___ProcessReadAsync_d__5(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, System::Threading::CancellationToken cancellationToken, System::Net::FixedSizeReadStream __4__this, int32_t size, ::ArrayW<uint8_t> buffer, int32_t offset, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1) noexcept;


                    constexpr System__Net__FixedSizeReadStream___ProcessReadAsync_d__5(System__Net__FixedSizeReadStream___ProcessReadAsync_d__5 const&) = default;
                    constexpr System__Net__FixedSizeReadStream___ProcessReadAsync_d__5(System__Net__FixedSizeReadStream___ProcessReadAsync_d__5&&) = default;
                    constexpr System__Net__FixedSizeReadStream___ProcessReadAsync_d__5& operator=(System__Net__FixedSizeReadStream___ProcessReadAsync_d__5 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__FixedSizeReadStream___ProcessReadAsync_d__5& operator=(System__Net__FixedSizeReadStream___ProcessReadAsync_d__5&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x58};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__FixedSizeReadStream___ProcessReadAsync_d__5(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __get___t__builder() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::Net::FixedSizeReadStream __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(System::Net::FixedSizeReadStream value) ;

constexpr System::Net::FixedSizeReadStream __get___4__this() const;

 int32_t __declspec(property(get=__get_size, put=__set_size))  size;

constexpr void __set_size(int32_t value) ;

constexpr int32_t __get_size() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_buffer() const;

 int32_t __declspec(property(get=__get_offset, put=__set_offset))  offset;

constexpr void __set_offset(int32_t value) ;

constexpr int32_t __get_offset() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x283240c size 0x2b0 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x28326bc size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: System.Net::FixedSizeReadStream
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8018))
// CS Name: System.Net.FixedSizeReadStream
class CORDL_TYPE FixedSizeReadStream : public System::Net::WebReadStream {
public:
// Declarations
using _ProcessReadAsync_d__5 = System::Net::System__Net__FixedSizeReadStream___ProcessReadAsync_d__5;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~FixedSizeReadStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "FixedSizeReadStream", modifiers: " const&", def_value: None }]
constexpr FixedSizeReadStream(FixedSizeReadStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FixedSizeReadStream", modifiers: "&&", def_value: None }]
constexpr FixedSizeReadStream(FixedSizeReadStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FixedSizeReadStream(void* ptr) noexcept : System::Net::WebReadStream(ptr) {
}


  constexpr FixedSizeReadStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FixedSizeReadStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FixedSizeReadStream& operator=(FixedSizeReadStream&& o) noexcept = default;
  constexpr FixedSizeReadStream& operator=(FixedSizeReadStream const& o) noexcept = default;
                


// Fields

 int64_t __declspec(property(get=__get__ContentLength_k__BackingField, put=__set__ContentLength_k__BackingField))  _ContentLength_k__BackingField;

constexpr void __set__ContentLength_k__BackingField(int64_t value) ;

constexpr int64_t __get__ContentLength_k__BackingField() const;

 int64_t __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(int64_t value) ;

constexpr int64_t __get_position() const;


// Properties

 int64_t __declspec(property(get=get_ContentLength))  ContentLength;


// Methods

/// @brief Method get_ContentLength addr 0x28322b4 size 0x8 virtual false final false
 int64_t get_ContentLength() ;

static System::Net::FixedSizeReadStream New_ctor(System::Net::WebOperation operation, System::IO::Stream innerStream, int64_t contentLength) ;

/// @brief Method .ctor addr 0x28322bc size 0x28 virtual false final false
 void _ctor(System::Net::WebOperation operation, System::IO::Stream innerStream, int64_t contentLength) ;

/// @brief Method ProcessReadAsync addr 0x28322e4 size 0x128 virtual true final false
 System::Threading::Tasks::Task_1<int32_t> ProcessReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, System::Threading::CancellationToken cancellationToken) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::FixedSizeReadStream);
DEFINE_IL2CPP_ARG_TYPE(System::Net::FixedSizeReadStream, "System.Net", "FixedSizeReadStream");
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__FixedSizeReadStream___ProcessReadAsync_d__5, "System.Net", "FixedSizeReadStream/<ProcessReadAsync>d__5");
