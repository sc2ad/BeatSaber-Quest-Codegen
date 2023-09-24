#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class IFormatProvider;
}
namespace System::IO {
class System__IO__TextWriter__SyncTextWriter;
}
namespace System::IO {
class System__IO__TextWriter__NullTextWriter;
}
namespace System {
class IDisposable;
}
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace System::IO {
class TextWriter;
}
// Type: System.IO::TextWriter
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3572))
// CS Name: System.IO.TextWriter
class CORDL_TYPE TextWriter : public System::MarshalByRefObject {
public:
// Declarations
using SyncTextWriter = System::IO::System__IO__TextWriter__SyncTextWriter;

using NullTextWriter = System::IO::System__IO__TextWriter__NullTextWriter;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~TextWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextWriter", modifiers: " const&", def_value: None }]
constexpr TextWriter(TextWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextWriter", modifiers: "&&", def_value: None }]
constexpr TextWriter(TextWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextWriter(void* ptr) noexcept : System::MarshalByRefObject(ptr) {
}


  constexpr TextWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextWriter& operator=(TextWriter&& o) noexcept = default;
  constexpr TextWriter& operator=(TextWriter const& o) noexcept = default;
                


// Fields

static System::IO::TextWriter __declspec(property(get=__get_Null, put=__set_Null))  Null;

static void __set_Null(System::IO::TextWriter value) ;

static System::IO::TextWriter __get_Null() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_s_coreNewLine, put=__set_s_coreNewLine))  s_coreNewLine;

static void __set_s_coreNewLine(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_s_coreNewLine() ;

 ::ArrayW<char16_t> __declspec(property(get=__get_CoreNewLine, put=__set_CoreNewLine))  CoreNewLine;

constexpr void __set_CoreNewLine(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get_CoreNewLine() const;

 ::StringW __declspec(property(get=__get_CoreNewLineStr, put=__set_CoreNewLineStr))  CoreNewLineStr;

constexpr void __set_CoreNewLineStr(::StringW value) ;

constexpr ::StringW __get_CoreNewLineStr() const;

 System::IFormatProvider __declspec(property(get=__get__internalFormatProvider, put=__set__internalFormatProvider))  _internalFormatProvider;

constexpr void __set__internalFormatProvider(System::IFormatProvider value) ;

constexpr System::IFormatProvider __get__internalFormatProvider() const;


// Properties

 System::IFormatProvider __declspec(property(get=get_FormatProvider))  FormatProvider;

 System::Text::Encoding __declspec(property(get=get_Encoding))  Encoding;

 ::StringW __declspec(property(get=get_NewLine))  NewLine;


// Methods

static System::IO::TextWriter New_ctor() ;

/// @brief Method .ctor addr 0x2395ee4 size 0x7c virtual false final false
 void _ctor() ;

static System::IO::TextWriter New_ctor(System::IFormatProvider formatProvider) ;

/// @brief Method .ctor addr 0x2395748 size 0x88 virtual false final false
 void _ctor(System::IFormatProvider formatProvider) ;

/// @brief Method get_FormatProvider addr 0x2397a20 size 0x68 virtual true final false
 System::IFormatProvider get_FormatProvider() ;

/// @brief Method Close addr 0x2397a88 size 0x6c virtual true final false
 void Close() ;

/// @brief Method Dispose addr 0x2397af4 size 0x4 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method Dispose addr 0x2397af8 size 0x6c virtual true final true
 void Dispose() ;

/// @brief Method Flush addr 0x2397b64 size 0x4 virtual true final false
 void Flush() ;

/// @brief Method get_Encoding addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Text::Encoding get_Encoding() ;

/// @brief Method get_NewLine addr 0x2397b68 size 0x8 virtual true final false
 ::StringW get_NewLine() ;

/// @brief Method Write addr 0x2397b70 size 0x4 virtual true final false
 void Write(char16_t value) ;

/// @brief Method Write addr 0x2397b74 size 0x20 virtual true final false
 void Write(::ArrayW<char16_t> buffer) ;

/// @brief Method Write addr 0x2397b94 size 0x1b4 virtual true final false
 void Write(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method Write addr 0x2397d48 size 0x38 virtual true final false
 void Write(::StringW value) ;

/// @brief Method Write addr 0x2397d80 size 0x6c virtual true final false
 void Write(::StringW format, ::bs_hook::Il2CppWrapperType arg0, ::bs_hook::Il2CppWrapperType arg1, ::bs_hook::Il2CppWrapperType arg2) ;

/// @brief Method WriteLine addr 0x2397dec size 0x14 virtual true final false
 void WriteLine() ;

/// @brief Method WriteLine addr 0x2397e00 size 0x30 virtual true final false
 void WriteLine(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method WriteLine addr 0x2397e30 size 0x3c virtual true final false
 void WriteLine(::StringW value) ;

/// @brief Method WriteLine addr 0x2397e6c size 0x6c virtual true final false
 void WriteLine(::StringW format, ::bs_hook::Il2CppWrapperType arg0, ::bs_hook::Il2CppWrapperType arg1, ::bs_hook::Il2CppWrapperType arg2) ;

/// @brief Method Synchronized addr 0x2397ed8 size 0xc0 virtual false final false
static System::IO::TextWriter Synchronized(System::IO::TextWriter writer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
NEED_NO_BOX(System::IO::TextWriter);
DEFINE_IL2CPP_ARG_TYPE(System::IO::TextWriter, "System.IO", "TextWriter");
