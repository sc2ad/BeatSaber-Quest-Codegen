#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Mono/Net/Security/zzzz__BufferOffsetSize_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace Mono::Net::Security {
class BufferOffsetSize2;
}
// Type: Mono.Net.Security::BufferOffsetSize2
namespace Mono::Net::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7666))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7667))
// CS Name: Mono.Net.Security.BufferOffsetSize2
class CORDL_TYPE BufferOffsetSize2 : public Mono::Net::Security::BufferOffsetSize {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BufferOffsetSize2() = default;

// Ctor Parameters [CppParam { name: "", ty: "BufferOffsetSize2", modifiers: " const&", def_value: None }]
constexpr BufferOffsetSize2(BufferOffsetSize2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BufferOffsetSize2", modifiers: "&&", def_value: None }]
constexpr BufferOffsetSize2(BufferOffsetSize2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BufferOffsetSize2(void* ptr) noexcept : Mono::Net::Security::BufferOffsetSize(ptr) {
}


  constexpr BufferOffsetSize2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BufferOffsetSize2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BufferOffsetSize2& operator=(BufferOffsetSize2&& o) noexcept = default;
  constexpr BufferOffsetSize2& operator=(BufferOffsetSize2 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_InitialSize, put=__set_InitialSize))  InitialSize;

constexpr void __set_InitialSize(int32_t value) ;

constexpr int32_t __get_InitialSize() const;


// Methods

// Ctor Parameters [CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }]
explicit BufferOffsetSize2(int32_t size) ;

/// @brief Method .ctor addr 0x268c62c size 0x70 virtual false final false
 void _ctor(int32_t size) ;

/// @brief Method Reset addr 0x268c69c size 0x5c virtual false final false
 void Reset() ;

/// @brief Method MakeRoom addr 0x268c6f8 size 0xb4 virtual false final false
 void MakeRoom(int32_t size) ;

/// @brief Method AppendData addr 0x268c7ac size 0x60 virtual false final false
 void AppendData(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Net::Security
NEED_NO_BOX(Mono::Net::Security::BufferOffsetSize2);
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::BufferOffsetSize2, "Mono.Net.Security", "BufferOffsetSize2");
