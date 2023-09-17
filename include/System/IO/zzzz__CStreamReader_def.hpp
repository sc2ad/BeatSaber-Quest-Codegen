#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__StreamReader_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Text {
class Encoding;
}
namespace System::IO {
class Stream;
}
namespace System {
class TermInfoDriver;
}
// Forward declare root types
namespace System::IO {
class CStreamReader;
}
// Type: System.IO::CStreamReader
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3565))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3622))
// CS Name: System.IO.CStreamReader
class CORDL_TYPE CStreamReader : public ::System::IO::StreamReader {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~CStreamReader() = default;

// Ctor Parameters [CppParam { name: "", ty: "CStreamReader", modifiers: " const&", def_value: None }]
constexpr CStreamReader(CStreamReader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CStreamReader", modifiers: "&&", def_value: None }]
constexpr CStreamReader(CStreamReader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CStreamReader(void* ptr) noexcept : ::System::IO::StreamReader(ptr) {
}


  constexpr CStreamReader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CStreamReader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CStreamReader& operator=(CStreamReader&& o) noexcept = default;
  constexpr CStreamReader& operator=(CStreamReader const& o) noexcept = default;
                


// Fields

 ::System::TermInfoDriver __declspec(property(get=__get_driver, put=__set_driver))  driver;

constexpr void __set_driver(::System::TermInfoDriver value) ;

constexpr ::System::TermInfoDriver __get_driver() const;


// Methods

// Ctor Parameters [CppParam { name: "stream", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "encoding", ty: "::System::Text::Encoding", modifiers: "", def_value: None }]
explicit CStreamReader(::System::IO::Stream stream, ::System::Text::Encoding encoding) ;

/// @brief Method .ctor addr 0x23d47d0 size 0x114 virtual false final false
 void _ctor(::System::IO::Stream stream, ::System::Text::Encoding encoding) ;

/// @brief Method Peek addr 0x23d48e4 size 0x88 virtual true final false
 int32_t Peek() ;

/// @brief Method Read addr 0x23d496c size 0xd0 virtual true final false
 int32_t Read() ;

/// @brief Method Read addr 0x23d4a3c size 0x1b0 virtual true final false
 int32_t Read(ByRef<::ArrayW<char16_t>> dest, int32_t index, int32_t count) ;

/// @brief Method ReadLine addr 0x23d4bec size 0x98 virtual true final false
 ::StringW ReadLine() ;

/// @brief Method ReadToEnd addr 0x23d4c84 size 0x98 virtual true final false
 ::StringW ReadToEnd() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
} // end anonymous namespace
NEED_NO_BOX(::System::IO::CStreamReader);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::CStreamReader, "System.IO", "CStreamReader");
