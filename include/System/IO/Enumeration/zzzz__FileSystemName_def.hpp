#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System::IO::Enumeration {
class FileSystemName;
}
// Type: System.IO.Enumeration::FileSystemName
namespace System::IO::Enumeration {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3641))
// CS Name: System.IO.Enumeration.FileSystemName
class CORDL_TYPE FileSystemName : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~FileSystemName() = default;

// Ctor Parameters [CppParam { name: "", ty: "FileSystemName", modifiers: " const&", def_value: None }]
constexpr FileSystemName(FileSystemName const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FileSystemName", modifiers: "&&", def_value: None }]
constexpr FileSystemName(FileSystemName&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FileSystemName(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FileSystemName& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FileSystemName& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FileSystemName& operator=(FileSystemName&& o) noexcept = default;
  constexpr FileSystemName& operator=(FileSystemName const& o) noexcept = default;
                


// Fields

static ::ArrayW<char16_t> __declspec(property(get=__get_s_wildcardChars, put=__set_s_wildcardChars))  s_wildcardChars;

static void __set_s_wildcardChars(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_s_wildcardChars() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_s_simpleWildcardChars, put=__set_s_simpleWildcardChars))  s_simpleWildcardChars;

static void __set_s_simpleWildcardChars(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_s_simpleWildcardChars() ;


// Methods

/// @brief Method TranslateWin32Expression addr 0x23d614c size 0x39c virtual false final false
static ::StringW TranslateWin32Expression(::StringW expression) ;

/// @brief Method MatchesWin32Expression addr 0x23d6794 size 0x88 virtual false final false
static bool MatchesWin32Expression(System::ReadOnlySpan_1<char16_t> expression, System::ReadOnlySpan_1<char16_t> name, bool ignoreCase) ;

/// @brief Method MatchesSimpleExpression addr 0x23d670c size 0x88 virtual false final false
static bool MatchesSimpleExpression(System::ReadOnlySpan_1<char16_t> expression, System::ReadOnlySpan_1<char16_t> name, bool ignoreCase) ;

/// @brief Method MatchPattern addr 0x23d784c size 0x754 virtual false final false
static bool MatchPattern(System::ReadOnlySpan_1<char16_t> expression, System::ReadOnlySpan_1<char16_t> name, bool ignoreCase, bool useExtendedWildcards) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO::Enumeration
NEED_NO_BOX(System::IO::Enumeration::FileSystemName);
DEFINE_IL2CPP_ARG_TYPE(System::IO::Enumeration::FileSystemName, "System.IO.Enumeration", "FileSystemName");
