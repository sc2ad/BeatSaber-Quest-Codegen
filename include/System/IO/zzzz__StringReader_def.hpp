#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace System::IO {
class StringReader;
}
// Type: System.IO::StringReader
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3569))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3608))
// CS Name: System.IO.StringReader
class CORDL_TYPE StringReader : public System::IO::TextReader {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~StringReader() = default;

// Ctor Parameters [CppParam { name: "", ty: "StringReader", modifiers: " const&", def_value: None }]
constexpr StringReader(StringReader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StringReader", modifiers: "&&", def_value: None }]
constexpr StringReader(StringReader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StringReader(void* ptr) noexcept : System::IO::TextReader(ptr) {
}


  constexpr StringReader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StringReader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StringReader& operator=(StringReader&& o) noexcept = default;
  constexpr StringReader& operator=(StringReader const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__s, put=__set__s))  _s;

constexpr void __set__s(::StringW value) ;

constexpr ::StringW __get__s() const;

 int32_t __declspec(property(get=__get__pos, put=__set__pos))  _pos;

constexpr void __set__pos(int32_t value) ;

constexpr int32_t __get__pos() const;

 int32_t __declspec(property(get=__get__length, put=__set__length))  _length;

constexpr void __set__length(int32_t value) ;

constexpr int32_t __get__length() const;


// Methods

static System::IO::StringReader New_ctor(::StringW s) ;

/// @brief Method .ctor addr 0x23caf88 size 0xcc virtual false final false
 void _ctor(::StringW s) ;

/// @brief Method Close addr 0x23cb054 size 0x10 virtual true final false
 void Close() ;

/// @brief Method Dispose addr 0x23cb064 size 0x10 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method Peek addr 0x23cb074 size 0x3c virtual true final false
 int32_t Peek() ;

/// @brief Method Read addr 0x23cb0b0 size 0x44 virtual true final false
 int32_t Read() ;

/// @brief Method Read addr 0x23cb0f4 size 0x1bc virtual true final false
 int32_t Read(ByRef<::ArrayW<char16_t>> buffer, int32_t index, int32_t count) ;

/// @brief Method ReadToEnd addr 0x23cb2b0 size 0x3c virtual true final false
 ::StringW ReadToEnd() ;

/// @brief Method ReadLine addr 0x23cb2ec size 0x114 virtual true final false
 ::StringW ReadLine() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
NEED_NO_BOX(System::IO::StringReader);
DEFINE_IL2CPP_ARG_TYPE(System::IO::StringReader, "System.IO", "StringReader");
