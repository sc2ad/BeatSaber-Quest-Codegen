#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Text {
class UnicodeEncoding;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Text {
class Encoding;
}
namespace System {
class IFormatProvider;
}
// Forward declare root types
namespace System::IO {
class StringWriter;
}
// Type: System.IO::StringWriter
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3572))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3609))
// CS Name: System.IO.StringWriter
class CORDL_TYPE StringWriter : public ::System::IO::TextWriter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~StringWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "StringWriter", modifiers: " const&", def_value: None }]
constexpr StringWriter(StringWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StringWriter", modifiers: "&&", def_value: None }]
constexpr StringWriter(StringWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StringWriter(void* ptr) noexcept : ::System::IO::TextWriter(ptr) {
}


  constexpr StringWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StringWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StringWriter& operator=(StringWriter&& o) noexcept = default;
  constexpr StringWriter& operator=(StringWriter const& o) noexcept = default;
                


// Fields

static ::System::Text::UnicodeEncoding __declspec(property(get=__get_m_encoding, put=__set_m_encoding))  m_encoding;

static void __set_m_encoding(::System::Text::UnicodeEncoding value) ;

static ::System::Text::UnicodeEncoding __get_m_encoding() ;

 ::System::Text::StringBuilder __declspec(property(get=__get__sb, put=__set__sb))  _sb;

constexpr void __set__sb(::System::Text::StringBuilder value) ;

constexpr ::System::Text::StringBuilder __get__sb() const;

 bool __declspec(property(get=__get__isOpen, put=__set__isOpen))  _isOpen;

constexpr void __set__isOpen(bool value) ;

constexpr bool __get__isOpen() const;


// Properties

 ::System::Text::Encoding __declspec(property(get=get_Encoding))  Encoding;


// Methods

// Ctor Parameters []
explicit StringWriter() ;

/// @brief Method .ctor addr 0x23cb400 size 0x94 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "formatProvider", ty: "::System::IFormatProvider", modifiers: "", def_value: None }]
explicit StringWriter(::System::IFormatProvider formatProvider) ;

/// @brief Method .ctor addr 0x23cb57c size 0x74 virtual false final false
 void _ctor(::System::IFormatProvider formatProvider) ;

// Ctor Parameters [CppParam { name: "sb", ty: "::System::Text::StringBuilder", modifiers: "", def_value: None }, CppParam { name: "formatProvider", ty: "::System::IFormatProvider", modifiers: "", def_value: None }]
explicit StringWriter(::System::Text::StringBuilder sb, ::System::IFormatProvider formatProvider) ;

/// @brief Method .ctor addr 0x23cb494 size 0xe8 virtual false final false
 void _ctor(::System::Text::StringBuilder sb, ::System::IFormatProvider formatProvider) ;

/// @brief Method Close addr 0x23cb5f0 size 0x10 virtual true final false
 void Close() ;

/// @brief Method Dispose addr 0x23cb600 size 0x10 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method get_Encoding addr 0x23cb610 size 0xac virtual true final false
 ::System::Text::Encoding get_Encoding() ;

/// @brief Method Write addr 0x23cb6bc size 0x28 virtual true final false
 void Write(char16_t value) ;

/// @brief Method Write addr 0x23cb6e4 size 0x188 virtual true final false
 void Write(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method Write addr 0x23cb86c size 0x34 virtual true final false
 void Write(::StringW value) ;

/// @brief Method ToString addr 0x23cb8a0 size 0x20 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
} // end anonymous namespace
NEED_NO_BOX(::System::IO::StringWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::StringWriter, "System.IO", "StringWriter");
