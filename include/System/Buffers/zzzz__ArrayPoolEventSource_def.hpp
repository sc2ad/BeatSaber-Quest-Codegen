#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Diagnostics/Tracing/zzzz__EventSource_def.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Buffers {
struct ____System__Buffers__ArrayPoolEventSource__BufferAllocatedReason;
}
namespace System::Buffers {
class ArrayPoolEventSource;
}
// Type: ::BufferAllocatedReason
namespace System::Buffers {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3866))
// CS Name: System.Buffers.ArrayPoolEventSource::BufferAllocatedReason
struct CORDL_TYPE ____System__Buffers__ArrayPoolEventSource__BufferAllocatedReason : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____System__Buffers__ArrayPoolEventSource__BufferAllocatedReason(int32_t value__) noexcept;


                    constexpr ____System__Buffers__ArrayPoolEventSource__BufferAllocatedReason(____System__Buffers__ArrayPoolEventSource__BufferAllocatedReason const&) = default;
                    constexpr ____System__Buffers__ArrayPoolEventSource__BufferAllocatedReason(____System__Buffers__ArrayPoolEventSource__BufferAllocatedReason&&) = default;
                    constexpr ____System__Buffers__ArrayPoolEventSource__BufferAllocatedReason& operator=(____System__Buffers__ArrayPoolEventSource__BufferAllocatedReason const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Buffers__ArrayPoolEventSource__BufferAllocatedReason& operator=(____System__Buffers__ArrayPoolEventSource__BufferAllocatedReason&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Buffers__ArrayPoolEventSource__BufferAllocatedReason(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______System__Buffers__ArrayPoolEventSource__BufferAllocatedReason_Unwrapped : int32_t {
__Pooled = 0,
__OverMaximumSize = 1,
__PoolExhausted = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______System__Buffers__ArrayPoolEventSource__BufferAllocatedReason_Unwrapped () const noexcept {
return std::bit_cast<______System__Buffers__ArrayPoolEventSource__BufferAllocatedReason_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Pooled offset 0
static ::System::Buffers::____System__Buffers__ArrayPoolEventSource__BufferAllocatedReason const Pooled;

/// @brief Field OverMaximumSize offset 0
static ::System::Buffers::____System__Buffers__ArrayPoolEventSource__BufferAllocatedReason const OverMaximumSize;

/// @brief Field PoolExhausted offset 0
static ::System::Buffers::____System__Buffers__ArrayPoolEventSource__BufferAllocatedReason const PoolExhausted;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: System.Buffers::ArrayPoolEventSource
namespace System::Buffers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3732))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3867))
// CS Name: System.Buffers.ArrayPoolEventSource
class CORDL_TYPE ArrayPoolEventSource : public ::System::Diagnostics::Tracing::EventSource {
public:
// Declarations
using BufferAllocatedReason = ::System::Buffers::____System__Buffers__ArrayPoolEventSource__BufferAllocatedReason;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ArrayPoolEventSource() = default;

// Ctor Parameters [CppParam { name: "", ty: "ArrayPoolEventSource", modifiers: " const&", def_value: None }]
constexpr ArrayPoolEventSource(ArrayPoolEventSource const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ArrayPoolEventSource", modifiers: "&&", def_value: None }]
constexpr ArrayPoolEventSource(ArrayPoolEventSource&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ArrayPoolEventSource(void* ptr) noexcept : ::System::Diagnostics::Tracing::EventSource(ptr) {
}


  constexpr ArrayPoolEventSource& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ArrayPoolEventSource& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ArrayPoolEventSource& operator=(ArrayPoolEventSource&& o) noexcept = default;
  constexpr ArrayPoolEventSource& operator=(ArrayPoolEventSource const& o) noexcept = default;
                


// Fields

static ::System::Buffers::ArrayPoolEventSource __declspec(property(get=__get_Log, put=__set_Log))  Log;

static void __set_Log(::System::Buffers::ArrayPoolEventSource value) ;

static ::System::Buffers::ArrayPoolEventSource __get_Log() ;


// Methods

// Ctor Parameters []
explicit ArrayPoolEventSource() ;

/// @brief Method .ctor addr 0x241e440 size 0xac virtual false final false
 void _ctor() ;

/// @brief Method BufferRented addr 0x241e4ec size 0xec virtual false final false
 void BufferRented(int32_t bufferId, int32_t bufferSize, int32_t poolId, int32_t bucketId) ;

/// @brief Method BufferAllocated addr 0x241e5d8 size 0x108 virtual false final false
 void BufferAllocated(int32_t bufferId, int32_t bufferSize, int32_t poolId, int32_t bucketId, ::System::Buffers::____System__Buffers__ArrayPoolEventSource__BufferAllocatedReason reason) ;

/// @brief Method BufferReturned addr 0x241e6e0 size 0x10 virtual false final false
 void BufferReturned(int32_t bufferId, int32_t bufferSize, int32_t poolId) ;

/// @brief Method BufferTrimmed addr 0x241e6f0 size 0x10 virtual false final false
 void BufferTrimmed(int32_t bufferId, int32_t bufferSize, int32_t poolId) ;

/// @brief Method BufferTrimPoll addr 0x241e700 size 0xc virtual false final false
 void BufferTrimPoll(int32_t milliseconds, int32_t pressure) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Buffers::____System__Buffers__ArrayPoolEventSource__BufferAllocatedReason, "System.Buffers", "ArrayPoolEventSource/BufferAllocatedReason");
NEED_NO_BOX(::System::Buffers::ArrayPoolEventSource);
DEFINE_IL2CPP_ARG_TYPE(::System::Buffers::ArrayPoolEventSource, "System.Buffers", "ArrayPoolEventSource");
