#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Exception;
}
namespace System::Collections {
class ICollection;
}
namespace System::Globalization {
class CompareInfo;
}
namespace System::Collections {
class IList;
}
namespace System::IO {
class TextWriter;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities {
class Platform;
}
// Type: Org.BouncyCastle.Utilities::Platform
namespace Org::BouncyCastle::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1836))
// CS Name: Org.BouncyCastle.Utilities.Platform
class CORDL_TYPE Platform : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Platform() = default;

// Ctor Parameters [CppParam { name: "", ty: "Platform", modifiers: " const&", def_value: None }]
constexpr Platform(Platform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Platform", modifiers: "&&", def_value: None }]
constexpr Platform(Platform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Platform(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Platform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Platform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Platform& operator=(Platform&& o) noexcept = default;
  constexpr Platform& operator=(Platform const& o) noexcept = default;
                


// Fields

static System::Globalization::CompareInfo __declspec(property(get=__get_InvariantCompareInfo, put=__set_InvariantCompareInfo))  InvariantCompareInfo;

static void __set_InvariantCompareInfo(System::Globalization::CompareInfo value) ;

static System::Globalization::CompareInfo __get_InvariantCompareInfo() ;

static ::StringW __declspec(property(get=__get_NewLine, put=__set_NewLine))  NewLine;

static void __set_NewLine(::StringW value) ;

static ::StringW __get_NewLine() ;


// Methods

/// @brief Method GetNewLine addr 0x10e2a98 size 0x8 virtual false final false
static ::StringW GetNewLine() ;

/// @brief Method EqualsIgnoreCase addr 0x10e2aa0 size 0x7c virtual false final false
static bool EqualsIgnoreCase(::StringW a, ::StringW b) ;

/// @brief Method GetEnvironmentVariable addr 0x10e2b88 size 0x88 virtual false final false
static ::StringW GetEnvironmentVariable(::StringW variable) ;

/// @brief Method CreateNotImplementedException addr 0x10e2c10 size 0x64 virtual false final false
static System::Exception CreateNotImplementedException(::StringW message) ;

/// @brief Method CreateArrayList addr 0x10e2c74 size 0x5c virtual false final false
static System::Collections::IList CreateArrayList() ;

/// @brief Method CreateArrayList addr 0x10e2cd0 size 0x64 virtual false final false
static System::Collections::IList CreateArrayList(int32_t capacity) ;

/// @brief Method CreateArrayList addr 0x10e2d34 size 0x64 virtual false final false
static System::Collections::IList CreateArrayList(System::Collections::ICollection collection) ;

/// @brief Method CreateArrayList addr 0x10e2d98 size 0x314 virtual false final false
static System::Collections::IList CreateArrayList(System::Collections::IEnumerable collection) ;

/// @brief Method CreateHashtable addr 0x10e30ac size 0x5c virtual false final false
static System::Collections::IDictionary CreateHashtable() ;

/// @brief Method CreateHashtable addr 0x10e3108 size 0x64 virtual false final false
static System::Collections::IDictionary CreateHashtable(int32_t capacity) ;

/// @brief Method CreateHashtable addr 0x10e316c size 0x64 virtual false final false
static System::Collections::IDictionary CreateHashtable(System::Collections::IDictionary dictionary) ;

/// @brief Method ToLowerInvariant addr 0x10e31d0 size 0x6c virtual false final false
static ::StringW ToLowerInvariant(::StringW s) ;

/// @brief Method ToUpperInvariant addr 0x10e2b1c size 0x6c virtual false final false
static ::StringW ToUpperInvariant(::StringW s) ;

/// @brief Method Dispose addr 0x10defb8 size 0x20 virtual false final false
static void Dispose(System::IO::Stream s) ;

/// @brief Method Dispose addr 0x10e323c size 0x1c virtual false final false
static void Dispose(System::IO::TextWriter t) ;

/// @brief Method IndexOf addr 0x10e3258 size 0x84 virtual false final false
static int32_t IndexOf(::StringW source, ::StringW value) ;

/// @brief Method LastIndexOf addr 0x10e32dc size 0x88 virtual false final false
static int32_t LastIndexOf(::StringW source, ::StringW value) ;

/// @brief Method StartsWith addr 0x10e3364 size 0x84 virtual false final false
static bool StartsWith(::StringW source, ::StringW prefix) ;

/// @brief Method EndsWith addr 0x10e33e8 size 0x84 virtual false final false
static bool EndsWith(::StringW source, ::StringW suffix) ;

/// @brief Method GetTypeName addr 0x10e346c size 0x2c virtual false final false
static ::StringW GetTypeName(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters []
explicit Platform() ;

/// @brief Method .ctor addr 0x10e3534 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities
NEED_NO_BOX(Org::BouncyCastle::Utilities::Platform);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Platform, "Org.BouncyCastle.Utilities", "Platform");
