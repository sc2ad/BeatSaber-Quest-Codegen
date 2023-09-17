#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Text {
class DecoderFallbackBuffer;
}
// Type: System.Text::DecoderFallbackBuffer
namespace System::Text {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2830))
// CS Name: System.Text.DecoderFallbackBuffer
class CORDL_TYPE DecoderFallbackBuffer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DecoderFallbackBuffer() = default;

// Ctor Parameters [CppParam { name: "", ty: "DecoderFallbackBuffer", modifiers: " const&", def_value: None }]
constexpr DecoderFallbackBuffer(DecoderFallbackBuffer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DecoderFallbackBuffer", modifiers: "&&", def_value: None }]
constexpr DecoderFallbackBuffer(DecoderFallbackBuffer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DecoderFallbackBuffer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DecoderFallbackBuffer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DecoderFallbackBuffer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DecoderFallbackBuffer& operator=(DecoderFallbackBuffer&& o) noexcept = default;
  constexpr DecoderFallbackBuffer& operator=(DecoderFallbackBuffer const& o) noexcept = default;
                


// Fields

 void* __declspec(property(get=__get_byteStart, put=__set_byteStart))  byteStart;

constexpr void __set_byteStart(void* value) ;

constexpr void* __get_byteStart() const;

 void* __declspec(property(get=__get_charEnd, put=__set_charEnd))  charEnd;

constexpr void __set_charEnd(void* value) ;

constexpr void* __get_charEnd() const;


// Properties

 int32_t __declspec(property(get=get_Remaining))  Remaining;


// Methods

/// @brief Method Fallback addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Fallback(::ArrayW<uint8_t> bytesUnknown, int32_t index) ;

/// @brief Method GetNextChar addr 0x0 size 0xffffffffffffffff virtual true final false
 char16_t GetNextChar() ;

/// @brief Method get_Remaining addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_Remaining() ;

/// @brief Method Reset addr 0x24c2f24 size 0x28 virtual true final false
 void Reset() ;

/// @brief Method InternalReset addr 0x24c1708 size 0x10 virtual false final false
 void InternalReset() ;

/// @brief Method InternalInitialize addr 0x24c1478 size 0x8 virtual false final false
 void InternalInitialize(void* byteStart, void* charEnd) ;

/// @brief Method InternalFallback addr 0x24c2f4c size 0x190 virtual true final false
 bool InternalFallback(::ArrayW<uint8_t> bytes, void* pBytes, ByRef<void*> chars) ;

/// @brief Method InternalFallback addr 0x24c30dc size 0x170 virtual true final false
 int32_t InternalFallback(::ArrayW<uint8_t> bytes, void* pBytes) ;

/// @brief Method ThrowLastBytesRecursive addr 0x24c324c size 0x1fc virtual false final false
 void ThrowLastBytesRecursive(::ArrayW<uint8_t> bytesUnknown) ;

// Ctor Parameters []
explicit DecoderFallbackBuffer() ;

/// @brief Method .ctor addr 0x24c28f4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
} // end anonymous namespace
NEED_NO_BOX(::System::Text::DecoderFallbackBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::DecoderFallbackBuffer, "System.Text", "DecoderFallbackBuffer");
