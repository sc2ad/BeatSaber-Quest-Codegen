#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System {
class Array;
}
// Forward declare root types
namespace System {
class Buffer;
}
// Type: System::Buffer
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2547))
// CS Name: System.Buffer
class CORDL_TYPE Buffer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Buffer() = default;

// Ctor Parameters [CppParam { name: "", ty: "Buffer", modifiers: " const&", def_value: None }]
constexpr Buffer(Buffer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Buffer", modifiers: "&&", def_value: None }]
constexpr Buffer(Buffer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Buffer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Buffer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Buffer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Buffer& operator=(Buffer&& o) noexcept = default;
  constexpr Buffer& operator=(Buffer const& o) noexcept = default;
                


// Methods

/// @brief Method InternalBlockCopy addr 0x246daf0 size 0x4 virtual false final false
static bool InternalBlockCopy(System::Array src, int32_t srcOffsetBytes, System::Array dst, int32_t dstOffsetBytes, int32_t byteCount) ;

/// @brief Method IndexOfByte addr 0x246daf4 size 0x110 virtual false final false
static int32_t IndexOfByte(void* src, uint8_t value, int32_t index, int32_t count) ;

/// @brief Method _ByteLength addr 0x246dc04 size 0x4 virtual false final false
static int32_t _ByteLength(System::Array array) ;

/// @brief Method ZeroMemory addr 0x246dc08 size 0x24 virtual false final false
static void ZeroMemory(void* src, int64_t len) ;

/// @brief Method Memcpy addr 0x246dc2c size 0x34 virtual false final false
static void Memcpy(void* pDest, int32_t destIndex, ::ArrayW<uint8_t> src, int32_t srcIndex, int32_t len) ;

/// @brief Method InternalMemcpy addr 0x246dccc size 0x4 virtual false final false
static void InternalMemcpy(void* dest, void* src, int32_t count) ;

/// @brief Method ByteLength addr 0x246dcd0 size 0x9c virtual false final false
static int32_t ByteLength(System::Array array) ;

/// @brief Method BlockCopy addr 0x246dd6c size 0x1c0 virtual false final false
static void BlockCopy(System::Array src, int32_t srcOffset, System::Array dst, int32_t dstOffset, int32_t count) ;

/// @brief Method MemoryCopy addr 0x246df2c size 0x80 virtual false final false
static void MemoryCopy(void* source, void* destination, int64_t destinationSizeInBytes, int64_t sourceBytesToCopy) ;

/// @brief Method memcpy4 addr 0x246dfd8 size 0x8c virtual false final false
static void memcpy4(void* dest, void* src, int32_t size) ;

/// @brief Method memcpy2 addr 0x246e064 size 0x7c virtual false final false
static void memcpy2(void* dest, void* src, int32_t size) ;

/// @brief Method memcpy1 addr 0x246e0e0 size 0xac virtual false final false
static void memcpy1(void* dest, void* src, int32_t size) ;

/// @brief Method Memcpy addr 0x246dc60 size 0x6c virtual false final false
static void Memcpy(void* dest, void* src, int32_t len, bool useICall) ;

/// @brief Method Memmove addr 0x246dfac size 0x2c virtual false final false
static void Memmove(void* dest, void* src, uint32_t len) ;

/// @brief Method Memmove addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void Memmove(ByRef<T> destination, ByRef<T> source, uint64_t elementCount) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::Buffer);
DEFINE_IL2CPP_ARG_TYPE(System::Buffer, "System", "Buffer");
