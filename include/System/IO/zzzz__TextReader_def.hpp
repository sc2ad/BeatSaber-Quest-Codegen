#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::IO {
class System__IO__TextReader__SyncTextReader;
}
namespace System::IO {
class System__IO__TextReader__NullTextReader;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::IO {
class TextReader;
}
// Type: System.IO::TextReader
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3569))
// CS Name: System.IO.TextReader
class CORDL_TYPE TextReader : public System::MarshalByRefObject {
public:
// Declarations
using SyncTextReader = System::IO::System__IO__TextReader__SyncTextReader;

using NullTextReader = System::IO::System__IO__TextReader__NullTextReader;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TextReader() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextReader", modifiers: " const&", def_value: None }]
constexpr TextReader(TextReader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextReader", modifiers: "&&", def_value: None }]
constexpr TextReader(TextReader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextReader(void* ptr) noexcept : System::MarshalByRefObject(ptr) {
}


  constexpr TextReader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextReader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextReader& operator=(TextReader&& o) noexcept = default;
  constexpr TextReader& operator=(TextReader const& o) noexcept = default;
                


// Fields

static System::IO::TextReader __declspec(property(get=__get_Null, put=__set_Null))  Null;

static void __set_Null(System::IO::TextReader value) ;

static System::IO::TextReader __get_Null() ;


// Methods

static System::IO::TextReader New_ctor() ;

/// @brief Method .ctor addr 0x2393948 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Close addr 0x239720c size 0x6c virtual true final false
 void Close() ;

/// @brief Method Dispose addr 0x2397278 size 0x6c virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x23972e4 size 0x4 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method Peek addr 0x23972e8 size 0x8 virtual true final false
 int32_t Peek() ;

/// @brief Method Read addr 0x23972f0 size 0x8 virtual true final false
 int32_t Read() ;

/// @brief Method Read addr 0x23972f8 size 0x1bc virtual true final false
 int32_t Read(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method ReadToEnd addr 0x23974b4 size 0xfc virtual true final false
 ::StringW ReadToEnd() ;

/// @brief Method ReadLine addr 0x23975b0 size 0xf0 virtual true final false
 ::StringW ReadLine() ;

/// @brief Method Synchronized addr 0x23976a0 size 0xc0 virtual false final false
static System::IO::TextReader Synchronized(System::IO::TextReader reader) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
NEED_NO_BOX(System::IO::TextReader);
DEFINE_IL2CPP_ARG_TYPE(System::IO::TextReader, "System.IO", "TextReader");
