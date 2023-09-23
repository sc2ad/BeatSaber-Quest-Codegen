#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace GlobalNamespace {
struct PublicServerInfo;
}
// Type: ::PublicServerInfo
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12873))
// CS Name: PublicServerInfo
struct CORDL_TYPE PublicServerInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "code", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "currentPlayerCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PublicServerInfo(::StringW code, int32_t currentPlayerCount) noexcept;


                    constexpr PublicServerInfo(PublicServerInfo const&) = default;
                    constexpr PublicServerInfo(PublicServerInfo&&) = default;
                    constexpr PublicServerInfo& operator=(PublicServerInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PublicServerInfo& operator=(PublicServerInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PublicServerInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_code, put=__set_code))  code;

constexpr void __set_code(::StringW value) ;

constexpr ::StringW __get_code() const;

 int32_t __declspec(property(get=__get_currentPlayerCount, put=__set_currentPlayerCount))  currentPlayerCount;

constexpr void __set_currentPlayerCount(int32_t value) ;

constexpr int32_t __get_currentPlayerCount() const;


// Methods

/// @brief Method .ctor addr 0xdc724c size 0xc virtual false final false
 void _ctor(::StringW code, int32_t currentPlayerCount) ;

/// @brief Method Serialize addr 0xdc7258 size 0x40 virtual false final false
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0xdc7298 size 0x40 virtual false final false
static GlobalNamespace::PublicServerInfo Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PublicServerInfo, "", "PublicServerInfo");
