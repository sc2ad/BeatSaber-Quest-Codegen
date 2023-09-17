#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System {
struct TermInfoNumbers;
}
namespace System {
struct TermInfoStrings;
}
// Forward declare root types
namespace System {
class TermInfoReader;
}
// Type: System::TermInfoReader
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2624))
// CS Name: System.TermInfoReader
class CORDL_TYPE TermInfoReader : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~TermInfoReader() = default;

// Ctor Parameters [CppParam { name: "", ty: "TermInfoReader", modifiers: " const&", def_value: None }]
constexpr TermInfoReader(TermInfoReader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TermInfoReader", modifiers: "&&", def_value: None }]
constexpr TermInfoReader(TermInfoReader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TermInfoReader(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TermInfoReader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TermInfoReader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TermInfoReader& operator=(TermInfoReader&& o) noexcept = default;
  constexpr TermInfoReader& operator=(TermInfoReader const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_boolSize, put=__set_boolSize))  boolSize;

constexpr void __set_boolSize(int32_t value) ;

constexpr int32_t __get_boolSize() const;

 int32_t __declspec(property(get=__get_numSize, put=__set_numSize))  numSize;

constexpr void __set_numSize(int32_t value) ;

constexpr int32_t __get_numSize() const;

 int32_t __declspec(property(get=__get_strOffsets, put=__set_strOffsets))  strOffsets;

constexpr void __set_strOffsets(int32_t value) ;

constexpr int32_t __get_strOffsets() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_buffer() const;

 int32_t __declspec(property(get=__get_booleansOffset, put=__set_booleansOffset))  booleansOffset;

constexpr void __set_booleansOffset(int32_t value) ;

constexpr int32_t __get_booleansOffset() const;

 int32_t __declspec(property(get=__get_intOffset, put=__set_intOffset))  intOffset;

constexpr void __set_intOffset(int32_t value) ;

constexpr int32_t __get_intOffset() const;


// Methods

// Ctor Parameters [CppParam { name: "term", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "filename", ty: "::StringW", modifiers: "", def_value: None }]
explicit TermInfoReader(::StringW term, ::StringW filename) ;

/// @brief Method .ctor addr 0x2492130 size 0x2d8 virtual false final false
 void _ctor(::StringW term, ::StringW filename) ;

// Ctor Parameters [CppParam { name: "term", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit TermInfoReader(::StringW term, ::ArrayW<uint8_t> buffer) ;

/// @brief Method .ctor addr 0x2492408 size 0x8c virtual false final false
 void _ctor(::StringW term, ::ArrayW<uint8_t> buffer) ;

/// @brief Method DetermineVersion addr 0x2498094 size 0xb0 virtual false final false
 void DetermineVersion(int16_t magic) ;

/// @brief Method ReadHeader addr 0x2497fa0 size 0xc0 virtual false final false
 void ReadHeader(::ArrayW<uint8_t> buffer, ByRef<int32_t> position) ;

/// @brief Method ReadNames addr 0x2498060 size 0x34 virtual false final false
 void ReadNames(::ArrayW<uint8_t> buffer, ByRef<int32_t> position) ;

/// @brief Method Get addr 0x2492d90 size 0x60 virtual false final false
 int32_t Get(::System::TermInfoNumbers number) ;

/// @brief Method Get addr 0x2492d00 size 0x90 virtual false final false
 ::StringW Get(::System::TermInfoStrings tstr) ;

/// @brief Method GetStringBytes addr 0x2496c44 size 0x90 virtual false final false
 ::ArrayW<uint8_t> GetStringBytes(::System::TermInfoStrings tstr) ;

/// @brief Method GetInt16 addr 0x2498144 size 0x50 virtual false final false
 int16_t GetInt16(::ArrayW<uint8_t> buffer, int32_t offset) ;

/// @brief Method GetString addr 0x2498194 size 0x7c virtual false final false
 ::StringW GetString(::ArrayW<uint8_t> buffer, int32_t offset) ;

/// @brief Method GetStringBytes addr 0x2498210 size 0xb8 virtual false final false
 ::ArrayW<uint8_t> GetStringBytes(::ArrayW<uint8_t> buffer, int32_t offset) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::TermInfoReader);
DEFINE_IL2CPP_ARG_TYPE(::System::TermInfoReader, "System", "TermInfoReader");
