#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__StreamWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class TermInfoDriver;
}
namespace System::Text {
class Encoding;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace System::IO {
class CStreamWriter;
}
// Type: System.IO::CStreamWriter
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3566))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3623))
// CS Name: System.IO.CStreamWriter
class CORDL_TYPE CStreamWriter : public System::IO::StreamWriter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~CStreamWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "CStreamWriter", modifiers: " const&", def_value: None }]
constexpr CStreamWriter(CStreamWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CStreamWriter", modifiers: "&&", def_value: None }]
constexpr CStreamWriter(CStreamWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CStreamWriter(void* ptr) noexcept : System::IO::StreamWriter(ptr) {
}


  constexpr CStreamWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CStreamWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CStreamWriter& operator=(CStreamWriter&& o) noexcept = default;
  constexpr CStreamWriter& operator=(CStreamWriter const& o) noexcept = default;
                


// Fields

 System::TermInfoDriver __declspec(property(get=__get_driver, put=__set_driver))  driver;

constexpr void __set_driver(System::TermInfoDriver value) ;

constexpr System::TermInfoDriver __get_driver() const;


// Methods

static System::IO::CStreamWriter New_ctor(System::IO::Stream stream, System::Text::Encoding encoding, bool leaveOpen) ;

/// @brief Method .ctor addr 0x23d4d1c size 0x128 virtual false final false
 void _ctor(System::IO::Stream stream, System::Text::Encoding encoding, bool leaveOpen) ;

/// @brief Method Write addr 0x23d4e44 size 0x348 virtual true final false
 void Write(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method Write addr 0x23d518c size 0x18c virtual true final false
 void Write(char16_t val) ;

/// @brief Method InternalWriteString addr 0x23d539c size 0x84 virtual false final false
 void InternalWriteString(::StringW val) ;

/// @brief Method InternalWriteChar addr 0x23d5318 size 0x84 virtual false final false
 void InternalWriteChar(char16_t val) ;

/// @brief Method InternalWriteChars addr 0x23d5420 size 0x8c virtual false final false
 void InternalWriteChars(::ArrayW<char16_t> buffer, int32_t n) ;

/// @brief Method Write addr 0x23d54ac size 0x28 virtual true final false
 void Write(::ArrayW<char16_t> val) ;

/// @brief Method Write addr 0x23d54d4 size 0xcc virtual true final false
 void Write(::StringW val) ;

/// @brief Method WriteLine addr 0x23d55a0 size 0x44 virtual true final false
 void WriteLine(::StringW val) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
NEED_NO_BOX(System::IO::CStreamWriter);
DEFINE_IL2CPP_ARG_TYPE(System::IO::CStreamWriter, "System.IO", "CStreamWriter");
