#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System::IO {
class PathInternal;
}
// Type: System.IO::PathInternal
namespace System::IO {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3559))
// CS Name: System.IO.PathInternal
class CORDL_TYPE PathInternal : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PathInternal() = default;

// Ctor Parameters [CppParam { name: "", ty: "PathInternal", modifiers: " const&", def_value: None }]
constexpr PathInternal(PathInternal const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PathInternal", modifiers: "&&", def_value: None }]
constexpr PathInternal(PathInternal&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PathInternal(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PathInternal& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PathInternal& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PathInternal& operator=(PathInternal&& o) noexcept = default;
  constexpr PathInternal& operator=(PathInternal const& o) noexcept = default;
                


// Fields

static bool __declspec(property(get=__get_s_isCaseSensitive, put=__set_s_isCaseSensitive))  s_isCaseSensitive;

static void __set_s_isCaseSensitive(bool value) ;

static bool __get_s_isCaseSensitive() ;


// Properties

static bool __declspec(property(get=get_IsCaseSensitive))  IsCaseSensitive;


// Methods

/// @brief Method GetRootLength addr 0x239245c size 0x7c virtual false final false
static int32_t GetRootLength(::System::ReadOnlySpan_1<char16_t> path) ;

/// @brief Method IsDirectorySeparator addr 0x23924d8 size 0x10 virtual false final false
static bool IsDirectorySeparator(char16_t c) ;

/// @brief Method EndsInDirectorySeparator addr 0x23924e8 size 0x88 virtual false final false
static bool EndsInDirectorySeparator(::System::ReadOnlySpan_1<char16_t> path) ;

/// @brief Method StartsWithDirectorySeparator addr 0x2392570 size 0x7c virtual false final false
static bool StartsWithDirectorySeparator(::System::ReadOnlySpan_1<char16_t> path) ;

/// @brief Method TrimEndingDirectorySeparator addr 0x23925ec size 0x140 virtual false final false
static ::StringW TrimEndingDirectorySeparator(::StringW path) ;

/// @brief Method TrimEndingDirectorySeparator addr 0x23927a8 size 0xe0 virtual false final false
static ::System::ReadOnlySpan_1<char16_t> TrimEndingDirectorySeparator(::System::ReadOnlySpan_1<char16_t> path) ;

/// @brief Method IsRoot addr 0x239272c size 0x7c virtual false final false
static bool IsRoot(::System::ReadOnlySpan_1<char16_t> path) ;

/// @brief Method get_IsCaseSensitive addr 0x2392888 size 0x58 virtual false final false
static bool get_IsCaseSensitive() ;

/// @brief Method GetIsCaseSensitive addr 0x23928e0 size 0x304 virtual false final false
static bool GetIsCaseSensitive() ;

/// @brief Method IsPartiallyQualified addr 0x2392da0 size 0x8 virtual false final false
static bool IsPartiallyQualified(::StringW path) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
} // end anonymous namespace
NEED_NO_BOX(::System::IO::PathInternal);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::PathInternal, "System.IO", "PathInternal");
