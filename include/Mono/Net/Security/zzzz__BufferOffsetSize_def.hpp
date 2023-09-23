#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace Mono::Net::Security {
class BufferOffsetSize;
}
// Type: Mono.Net.Security::BufferOffsetSize
namespace Mono::Net::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7666))
// CS Name: Mono.Net.Security.BufferOffsetSize
class CORDL_TYPE BufferOffsetSize : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

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

 int32_t __declspec(property(get=__get_TotalBytes, put=__set_TotalBytes))  TotalBytes;

constexpr void __set_TotalBytes(int32_t value) ;

constexpr int32_t __get_TotalBytes() const;

 bool __declspec(property(get=__get_Complete, put=__set_Complete))  Complete;

constexpr void __set_Complete(bool value) ;

constexpr bool __get_Complete() const;


// Properties

 int32_t __declspec(property(get=get_EndOffset))  EndOffset;

 int32_t __declspec(property(get=get_Remaining))  Remaining;


// Methods

/// @brief Method get_EndOffset addr 0x268c454 size 0xc virtual false final false
 int32_t get_EndOffset() ;

/// @brief Method get_Remaining addr 0x268c460 size 0x28 virtual false final false
 int32_t get_Remaining() ;

// Ctor Parameters [CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }]
explicit BufferOffsetSize(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) ;

/// @brief Method .ctor addr 0x268c488 size 0x104 virtual false final false
 void _ctor(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) ;

/// @brief Method ToString addr 0x268c58c size 0xa0 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Net::Security
NEED_NO_BOX(Mono::Net::Security::BufferOffsetSize);
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::BufferOffsetSize, "Mono.Net.Security", "BufferOffsetSize");
