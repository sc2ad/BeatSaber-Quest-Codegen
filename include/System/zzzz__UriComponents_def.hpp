#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System {
struct UriComponents;
}
// Type: System::UriComponents
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7729))
// CS Name: System.UriComponents
struct CORDL_TYPE UriComponents : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UriComponents(int32_t value__) noexcept;


                    constexpr UriComponents(UriComponents const&) = default;
                    constexpr UriComponents(UriComponents&&) = default;
                    constexpr UriComponents& operator=(UriComponents const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UriComponents& operator=(UriComponents&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UriComponents(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UriComponents_Unwrapped : int32_t {
__Scheme = 1,
__UserInfo = 2,
__Host = 4,
__Port = 8,
__Path = 16,
__Query = 32,
__Fragment = 64,
__StrongPort = 128,
__NormalizedHost = 256,
__KeepDelimiter = 1073741824,
__SerializationInfoString = -2147483648,
__AbsoluteUri = 127,
__HostAndPort = 132,
__StrongAuthority = 134,
__SchemeAndServer = 13,
__HttpRequestUrl = 61,
__PathAndQuery = 48,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UriComponents_Unwrapped () const noexcept {
return std::bit_cast<__UriComponents_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Scheme offset 0
static System::UriComponents const Scheme;

/// @brief Field UserInfo offset 0
static System::UriComponents const UserInfo;

/// @brief Field Host offset 0
static System::UriComponents const Host;

/// @brief Field Port offset 0
static System::UriComponents const Port;

/// @brief Field Path offset 0
static System::UriComponents const Path;

/// @brief Field Query offset 0
static System::UriComponents const Query;

/// @brief Field Fragment offset 0
static System::UriComponents const Fragment;

/// @brief Field StrongPort offset 0
static System::UriComponents const StrongPort;

/// @brief Field NormalizedHost offset 0
static System::UriComponents const NormalizedHost;

/// @brief Field KeepDelimiter offset 0
static System::UriComponents const KeepDelimiter;

/// @brief Field SerializationInfoString offset 0
static System::UriComponents const SerializationInfoString;

/// @brief Field AbsoluteUri offset 0
static System::UriComponents const AbsoluteUri;

/// @brief Field HostAndPort offset 0
static System::UriComponents const HostAndPort;

/// @brief Field StrongAuthority offset 0
static System::UriComponents const StrongAuthority;

/// @brief Field SchemeAndServer offset 0
static System::UriComponents const SchemeAndServer;

/// @brief Field HttpRequestUrl offset 0
static System::UriComponents const HttpRequestUrl;

/// @brief Field PathAndQuery offset 0
static System::UriComponents const PathAndQuery;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::UriComponents, "System", "UriComponents");
