#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System {
struct UriSyntaxFlags;
}
// Type: System::UriSyntaxFlags
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7741))
// CS Name: System.UriSyntaxFlags
struct CORDL_TYPE UriSyntaxFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UriSyntaxFlags(int32_t value__) noexcept;


                    constexpr UriSyntaxFlags(UriSyntaxFlags const&) = default;
                    constexpr UriSyntaxFlags(UriSyntaxFlags&&) = default;
                    constexpr UriSyntaxFlags& operator=(UriSyntaxFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UriSyntaxFlags& operator=(UriSyntaxFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UriSyntaxFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UriSyntaxFlags_Unwrapped : int32_t {
__None = 0,
__MustHaveAuthority = 1,
__OptionalAuthority = 2,
__MayHaveUserInfo = 4,
__MayHavePort = 8,
__MayHavePath = 16,
__MayHaveQuery = 32,
__MayHaveFragment = 64,
__AllowEmptyHost = 128,
__AllowUncHost = 256,
__AllowDnsHost = 512,
__AllowIPv4Host = 1024,
__AllowIPv6Host = 2048,
__AllowAnInternetHost = 3584,
__AllowAnyOtherHost = 4096,
__FileLikeUri = 8192,
__MailToLikeUri = 16384,
__V1_UnknownUri = 65536,
__SimpleUserSyntax = 131072,
__BuiltInSyntax = 262144,
__ParserSchemeOnly = 524288,
__AllowDOSPath = 1048576,
__PathIsRooted = 2097152,
__ConvertPathSlashes = 4194304,
__CompressPath = 8388608,
__CanonicalizeAsFilePath = 16777216,
__UnEscapeDotsAndSlashes = 33554432,
__AllowIdn = 67108864,
__AllowIriParsing = 268435456,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UriSyntaxFlags_Unwrapped () const noexcept {
return std::bit_cast<__UriSyntaxFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::System::UriSyntaxFlags const None;

/// @brief Field MustHaveAuthority offset 0
static ::System::UriSyntaxFlags const MustHaveAuthority;

/// @brief Field OptionalAuthority offset 0
static ::System::UriSyntaxFlags const OptionalAuthority;

/// @brief Field MayHaveUserInfo offset 0
static ::System::UriSyntaxFlags const MayHaveUserInfo;

/// @brief Field MayHavePort offset 0
static ::System::UriSyntaxFlags const MayHavePort;

/// @brief Field MayHavePath offset 0
static ::System::UriSyntaxFlags const MayHavePath;

/// @brief Field MayHaveQuery offset 0
static ::System::UriSyntaxFlags const MayHaveQuery;

/// @brief Field MayHaveFragment offset 0
static ::System::UriSyntaxFlags const MayHaveFragment;

/// @brief Field AllowEmptyHost offset 0
static ::System::UriSyntaxFlags const AllowEmptyHost;

/// @brief Field AllowUncHost offset 0
static ::System::UriSyntaxFlags const AllowUncHost;

/// @brief Field AllowDnsHost offset 0
static ::System::UriSyntaxFlags const AllowDnsHost;

/// @brief Field AllowIPv4Host offset 0
static ::System::UriSyntaxFlags const AllowIPv4Host;

/// @brief Field AllowIPv6Host offset 0
static ::System::UriSyntaxFlags const AllowIPv6Host;

/// @brief Field AllowAnInternetHost offset 0
static ::System::UriSyntaxFlags const AllowAnInternetHost;

/// @brief Field AllowAnyOtherHost offset 0
static ::System::UriSyntaxFlags const AllowAnyOtherHost;

/// @brief Field FileLikeUri offset 0
static ::System::UriSyntaxFlags const FileLikeUri;

/// @brief Field MailToLikeUri offset 0
static ::System::UriSyntaxFlags const MailToLikeUri;

/// @brief Field V1_UnknownUri offset 0
static ::System::UriSyntaxFlags const V1_UnknownUri;

/// @brief Field SimpleUserSyntax offset 0
static ::System::UriSyntaxFlags const SimpleUserSyntax;

/// @brief Field BuiltInSyntax offset 0
static ::System::UriSyntaxFlags const BuiltInSyntax;

/// @brief Field ParserSchemeOnly offset 0
static ::System::UriSyntaxFlags const ParserSchemeOnly;

/// @brief Field AllowDOSPath offset 0
static ::System::UriSyntaxFlags const AllowDOSPath;

/// @brief Field PathIsRooted offset 0
static ::System::UriSyntaxFlags const PathIsRooted;

/// @brief Field ConvertPathSlashes offset 0
static ::System::UriSyntaxFlags const ConvertPathSlashes;

/// @brief Field CompressPath offset 0
static ::System::UriSyntaxFlags const CompressPath;

/// @brief Field CanonicalizeAsFilePath offset 0
static ::System::UriSyntaxFlags const CanonicalizeAsFilePath;

/// @brief Field UnEscapeDotsAndSlashes offset 0
static ::System::UriSyntaxFlags const UnEscapeDotsAndSlashes;

/// @brief Field AllowIdn offset 0
static ::System::UriSyntaxFlags const AllowIdn;

/// @brief Field AllowIriParsing offset 0
static ::System::UriSyntaxFlags const AllowIriParsing;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::UriSyntaxFlags, "System", "UriSyntaxFlags");
