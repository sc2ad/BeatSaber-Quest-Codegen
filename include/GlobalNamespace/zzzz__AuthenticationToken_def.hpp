#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace LiteNetLib::Utils {
template<typename T>
class INetImmutableSerializable_1;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
struct GlobalNamespace__AuthenticationToken__Platform;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__AuthenticationToken__Platform;
}
namespace GlobalNamespace {
struct AuthenticationToken;
}
// Type: ::Platform
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12623))
// CS Name: AuthenticationToken::Platform
struct CORDL_TYPE GlobalNamespace__AuthenticationToken__Platform : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__AuthenticationToken__Platform(uint8_t value__) noexcept;


                    constexpr GlobalNamespace__AuthenticationToken__Platform(GlobalNamespace__AuthenticationToken__Platform const&) = default;
                    constexpr GlobalNamespace__AuthenticationToken__Platform(GlobalNamespace__AuthenticationToken__Platform&&) = default;
                    constexpr GlobalNamespace__AuthenticationToken__Platform& operator=(GlobalNamespace__AuthenticationToken__Platform const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__AuthenticationToken__Platform& operator=(GlobalNamespace__AuthenticationToken__Platform&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__AuthenticationToken__Platform(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__AuthenticationToken__Platform_Unwrapped : uint8_t {
__Test = 0u,
__OculusRift = 1u,
__OculusQuest = 2u,
__Steam = 3u,
__PS4 = 4u,
__PS4Dev = 5u,
__PS4Cert = 6u,
__PS5 = 7u,
__PS5Dev = 8u,
__PS5Cert = 9u,
__Oculus = 2u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__AuthenticationToken__Platform_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__AuthenticationToken__Platform_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = uint8_t;


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field Test offset 0
static GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform const Test;

/// @brief Field OculusRift offset 0
static GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform const OculusRift;

/// @brief Field OculusQuest offset 0
static GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform const OculusQuest;

/// @brief Field Steam offset 0
static GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform const Steam;

/// @brief Field PS4 offset 0
static GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform const PS4;

/// @brief Field PS4Dev offset 0
static GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform const PS4Dev;

/// @brief Field PS4Cert offset 0
static GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform const PS4Cert;

/// @brief Field PS5 offset 0
static GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform const PS5;

/// @brief Field PS5Dev offset 0
static GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform const PS5Dev;

/// @brief Field PS5Cert offset 0
static GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform const PS5Cert;

/// @brief Field Oculus offset 0
static GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform const Oculus;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::AuthenticationToken
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12624))
// CS Name: AuthenticationToken
struct CORDL_TYPE AuthenticationToken : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Platform = GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform;

/// @brief Convert operator to LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::AuthenticationToken>
constexpr operator  LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::AuthenticationToken>() const;

// Ctor Parameters [CppParam { name: "platform", ty: "GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform", modifiers: "", def_value: None }, CppParam { name: "userId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "userName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "sessionToken", ty: "::StringW", modifiers: "", def_value: None }]
constexpr AuthenticationToken(GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform platform, ::StringW userId, ::StringW userName, ::StringW sessionToken) noexcept;


                    constexpr AuthenticationToken(AuthenticationToken const&) = default;
                    constexpr AuthenticationToken(AuthenticationToken&&) = default;
                    constexpr AuthenticationToken& operator=(AuthenticationToken const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AuthenticationToken& operator=(AuthenticationToken&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AuthenticationToken(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform __declspec(property(get=__get_platform, put=__set_platform))  platform;

constexpr void __set_platform(GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform value) ;

constexpr GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform __get_platform() const;

 ::StringW __declspec(property(get=__get_userId, put=__set_userId))  userId;

constexpr void __set_userId(::StringW value) ;

constexpr ::StringW __get_userId() const;

 ::StringW __declspec(property(get=__get_userName, put=__set_userName))  userName;

constexpr void __set_userName(::StringW value) ;

constexpr ::StringW __get_userName() const;

 ::StringW __declspec(property(get=__get_sessionToken, put=__set_sessionToken))  sessionToken;

constexpr void __set_sessionToken(::StringW value) ;

constexpr ::StringW __get_sessionToken() const;


// Methods

/// @brief Method .ctor addr 0xd9c56c size 0x10 virtual false final false
 void _ctor(GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform platform, ::StringW userId, ::StringW userName, ::StringW sessionToken) ;

/// @brief Method Serialize addr 0xd9c57c size 0x94 virtual true final true
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method CreateFromSerializedData addr 0xd9c728 size 0x2c virtual true final true
 GlobalNamespace::AuthenticationToken CreateFromSerializedData(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Deserialize addr 0xd9c754 size 0xf0 virtual false final false
static GlobalNamespace::AuthenticationToken Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method FromHex addr 0xd9c640 size 0xe8 virtual false final false
static ::ArrayW<uint8_t> FromHex(::StringW str) ;

/// @brief Method GetHexVal addr 0xd9c90c size 0xcc virtual false final false
static uint8_t GetHexVal(char16_t c) ;

/// @brief Method FromUtf8 addr 0xd9c610 size 0x30 virtual false final false
static ::ArrayW<uint8_t> FromUtf8(::StringW str) ;

/// @brief Method ToHex addr 0xd9c874 size 0x98 virtual false final false
static ::StringW ToHex(::ArrayW<uint8_t> bytes) ;

/// @brief Method ToUtf8 addr 0xd9c844 size 0x30 virtual false final false
static ::StringW ToUtf8(::ArrayW<uint8_t> bytes) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform, "", "AuthenticationToken/Platform");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AuthenticationToken, "", "AuthenticationToken");
