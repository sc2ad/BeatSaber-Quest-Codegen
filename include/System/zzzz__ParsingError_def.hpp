#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System {
struct ParsingError;
}
// Type: System::ParsingError
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7732))
// CS Name: System.ParsingError
struct CORDL_TYPE ParsingError : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ParsingError(int32_t value__) noexcept;


                    constexpr ParsingError(ParsingError const&) = default;
                    constexpr ParsingError(ParsingError&&) = default;
                    constexpr ParsingError& operator=(ParsingError const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ParsingError& operator=(ParsingError&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ParsingError(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ParsingError_Unwrapped : int32_t {
__None = 0,
__BadFormat = 1,
__BadScheme = 2,
__BadAuthority = 3,
__EmptyUriString = 4,
__LastRelativeUriOkErrIndex = 4,
__SchemeLimit = 5,
__SizeLimit = 6,
__MustRootedPath = 7,
__BadHostName = 8,
__NonEmptyHost = 9,
__BadPort = 10,
__BadAuthorityTerminator = 11,
__CannotCreateRelative = 12,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ParsingError_Unwrapped () const noexcept {
return std::bit_cast<__ParsingError_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static System::ParsingError const None;

/// @brief Field BadFormat offset 0
static System::ParsingError const BadFormat;

/// @brief Field BadScheme offset 0
static System::ParsingError const BadScheme;

/// @brief Field BadAuthority offset 0
static System::ParsingError const BadAuthority;

/// @brief Field EmptyUriString offset 0
static System::ParsingError const EmptyUriString;

/// @brief Field LastRelativeUriOkErrIndex offset 0
static System::ParsingError const LastRelativeUriOkErrIndex;

/// @brief Field SchemeLimit offset 0
static System::ParsingError const SchemeLimit;

/// @brief Field SizeLimit offset 0
static System::ParsingError const SizeLimit;

/// @brief Field MustRootedPath offset 0
static System::ParsingError const MustRootedPath;

/// @brief Field BadHostName offset 0
static System::ParsingError const BadHostName;

/// @brief Field NonEmptyHost offset 0
static System::ParsingError const NonEmptyHost;

/// @brief Field BadPort offset 0
static System::ParsingError const BadPort;

/// @brief Field BadAuthorityTerminator offset 0
static System::ParsingError const BadAuthorityTerminator;

/// @brief Field CannotCreateRelative offset 0
static System::ParsingError const CannotCreateRelative;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::ParsingError, "System", "ParsingError");
