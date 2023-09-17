#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Net {
class BufferOffsetSize;
}
// Type: System.Net::BufferOffsetSize
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7951))
// CS Name: System.Net.BufferOffsetSize
class CORDL_TYPE BufferOffsetSize : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BufferOffsetSize() = default;

// Ctor Parameters [CppParam { name: "", ty: "BufferOffsetSize", modifiers: " const&", def_value: None }]
constexpr BufferOffsetSize(BufferOffsetSize const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BufferOffsetSize", modifiers: "&&", def_value: None }]
constexpr BufferOffsetSize(BufferOffsetSize&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BufferOffsetSize(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BufferOffsetSize& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BufferOffsetSize& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BufferOffsetSize& operator=(BufferOffsetSize&& o) noexcept = default;
  constexpr BufferOffsetSize& operator=(BufferOffsetSize const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_Buffer, put=__set_Buffer))  Buffer;

constexpr void __set_Buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_Buffer() const;

 int32_t __declspec(property(get=__get_Offset, put=__set_Offset))  Offset;

constexpr void __set_Offset(int32_t value) ;

constexpr int32_t __get_Offset() const;

 int32_t __declspec(property(get=__get_Size, put=__set_Size))  Size;

constexpr void __set_Size(int32_t value) ;

constexpr int32_t __get_Size() const;


// Methods

// Ctor Parameters [CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "copyBuffer", ty: "bool", modifiers: "", def_value: None }]
explicit BufferOffsetSize(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, bool copyBuffer) ;

/// @brief Method .ctor addr 0x2814688 size 0xac virtual false final false
 void _ctor(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, bool copyBuffer) ;

// Ctor Parameters [CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "copyBuffer", ty: "bool", modifiers: "", def_value: None }]
explicit BufferOffsetSize(::ArrayW<uint8_t> buffer, bool copyBuffer) ;

/// @brief Method .ctor addr 0x2814734 size 0x20 virtual false final false
 void _ctor(::ArrayW<uint8_t> buffer, bool copyBuffer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
NEED_NO_BOX(::System::Net::BufferOffsetSize);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::BufferOffsetSize, "System.Net", "BufferOffsetSize");
