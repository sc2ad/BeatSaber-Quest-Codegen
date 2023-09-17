#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__IncrementalReadDecoder_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Xml {
class BinHexDecoder;
}
// Type: System.Xml::BinHexDecoder
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11374))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11348))
// CS Name: System.Xml.BinHexDecoder
class CORDL_TYPE BinHexDecoder : public ::System::Xml::IncrementalReadDecoder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BinHexDecoder() = default;

// Ctor Parameters [CppParam { name: "", ty: "BinHexDecoder", modifiers: " const&", def_value: None }]
constexpr BinHexDecoder(BinHexDecoder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BinHexDecoder", modifiers: "&&", def_value: None }]
constexpr BinHexDecoder(BinHexDecoder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BinHexDecoder(void* ptr) noexcept : ::System::Xml::IncrementalReadDecoder(ptr) {
}


  constexpr BinHexDecoder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BinHexDecoder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BinHexDecoder& operator=(BinHexDecoder&& o) noexcept = default;
  constexpr BinHexDecoder& operator=(BinHexDecoder const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_buffer() const;

 int32_t __declspec(property(get=__get_curIndex, put=__set_curIndex))  curIndex;

constexpr void __set_curIndex(int32_t value) ;

constexpr int32_t __get_curIndex() const;

 int32_t __declspec(property(get=__get_endIndex, put=__set_endIndex))  endIndex;

constexpr void __set_endIndex(int32_t value) ;

constexpr int32_t __get_endIndex() const;

 bool __declspec(property(get=__get_hasHalfByteCached, put=__set_hasHalfByteCached))  hasHalfByteCached;

constexpr void __set_hasHalfByteCached(bool value) ;

constexpr bool __get_hasHalfByteCached() const;

 uint8_t __declspec(property(get=__get_cachedHalfByte, put=__set_cachedHalfByte))  cachedHalfByte;

constexpr void __set_cachedHalfByte(uint8_t value) ;

constexpr uint8_t __get_cachedHalfByte() const;


// Properties

 bool __declspec(property(get=get_IsFull))  IsFull;


// Methods

/// @brief Method get_IsFull addr 0x26bb2a8 size 0x10 virtual true final false
 bool get_IsFull() ;

/// @brief Method Decode addr 0x26bb2b8 size 0x158 virtual true final false
 int32_t Decode(::ArrayW<char16_t> chars, int32_t startPos, int32_t len) ;

/// @brief Method Decode addr 0x26bb5dc size 0x1e8 virtual false final false
static ::ArrayW<uint8_t> Decode(::ArrayW<char16_t> chars, bool allowOddChars) ;

/// @brief Method Decode addr 0x26bb410 size 0x1cc virtual false final false
static void Decode(void* pChars, void* pCharsEndPos, void* pBytes, void* pBytesEndPos, ByRef<bool> hasHalfByteCached, ByRef<uint8_t> cachedHalfByte, ByRef<int32_t> charsDecoded, ByRef<int32_t> bytesDecoded) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::BinHexDecoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::BinHexDecoder, "System.Xml", "BinHexDecoder");
