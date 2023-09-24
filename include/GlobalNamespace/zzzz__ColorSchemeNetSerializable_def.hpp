#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace GlobalNamespace {
struct ColorNoAlphaSerializable;
}
namespace UnityEngine {
struct Color;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
// Forward declare root types
namespace GlobalNamespace {
struct ColorSchemeNetSerializable;
}
// Type: ::ColorSchemeNetSerializable
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12632))
// CS Name: ColorSchemeNetSerializable
struct CORDL_TYPE ColorSchemeNetSerializable : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr operator  LiteNetLib::Utils::INetSerializable() const;

// Ctor Parameters [CppParam { name: "saberAColor", ty: "GlobalNamespace::ColorNoAlphaSerializable", modifiers: "", def_value: None }, CppParam { name: "saberBColor", ty: "GlobalNamespace::ColorNoAlphaSerializable", modifiers: "", def_value: None }, CppParam { name: "obstaclesColor", ty: "GlobalNamespace::ColorNoAlphaSerializable", modifiers: "", def_value: None }, CppParam { name: "environmentColor0", ty: "GlobalNamespace::ColorNoAlphaSerializable", modifiers: "", def_value: None }, CppParam { name: "environmentColor1", ty: "GlobalNamespace::ColorNoAlphaSerializable", modifiers: "", def_value: None }, CppParam { name: "environmentColor0Boost", ty: "GlobalNamespace::ColorNoAlphaSerializable", modifiers: "", def_value: None }, CppParam { name: "environmentColor1Boost", ty: "GlobalNamespace::ColorNoAlphaSerializable", modifiers: "", def_value: None }]
constexpr ColorSchemeNetSerializable(GlobalNamespace::ColorNoAlphaSerializable saberAColor, GlobalNamespace::ColorNoAlphaSerializable saberBColor, GlobalNamespace::ColorNoAlphaSerializable obstaclesColor, GlobalNamespace::ColorNoAlphaSerializable environmentColor0, GlobalNamespace::ColorNoAlphaSerializable environmentColor1, GlobalNamespace::ColorNoAlphaSerializable environmentColor0Boost, GlobalNamespace::ColorNoAlphaSerializable environmentColor1Boost) noexcept;


                    constexpr ColorSchemeNetSerializable(ColorSchemeNetSerializable const&) = default;
                    constexpr ColorSchemeNetSerializable(ColorSchemeNetSerializable&&) = default;
                    constexpr ColorSchemeNetSerializable& operator=(ColorSchemeNetSerializable const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ColorSchemeNetSerializable& operator=(ColorSchemeNetSerializable&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x70};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ColorSchemeNetSerializable(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 GlobalNamespace::ColorNoAlphaSerializable __declspec(property(get=__get_saberAColor, put=__set_saberAColor))  saberAColor;

constexpr void __set_saberAColor(GlobalNamespace::ColorNoAlphaSerializable value) ;

constexpr GlobalNamespace::ColorNoAlphaSerializable __get_saberAColor() const;

 GlobalNamespace::ColorNoAlphaSerializable __declspec(property(get=__get_saberBColor, put=__set_saberBColor))  saberBColor;

constexpr void __set_saberBColor(GlobalNamespace::ColorNoAlphaSerializable value) ;

constexpr GlobalNamespace::ColorNoAlphaSerializable __get_saberBColor() const;

 GlobalNamespace::ColorNoAlphaSerializable __declspec(property(get=__get_obstaclesColor, put=__set_obstaclesColor))  obstaclesColor;

constexpr void __set_obstaclesColor(GlobalNamespace::ColorNoAlphaSerializable value) ;

constexpr GlobalNamespace::ColorNoAlphaSerializable __get_obstaclesColor() const;

 GlobalNamespace::ColorNoAlphaSerializable __declspec(property(get=__get_environmentColor0, put=__set_environmentColor0))  environmentColor0;

constexpr void __set_environmentColor0(GlobalNamespace::ColorNoAlphaSerializable value) ;

constexpr GlobalNamespace::ColorNoAlphaSerializable __get_environmentColor0() const;

 GlobalNamespace::ColorNoAlphaSerializable __declspec(property(get=__get_environmentColor1, put=__set_environmentColor1))  environmentColor1;

constexpr void __set_environmentColor1(GlobalNamespace::ColorNoAlphaSerializable value) ;

constexpr GlobalNamespace::ColorNoAlphaSerializable __get_environmentColor1() const;

 GlobalNamespace::ColorNoAlphaSerializable __declspec(property(get=__get_environmentColor0Boost, put=__set_environmentColor0Boost))  environmentColor0Boost;

constexpr void __set_environmentColor0Boost(GlobalNamespace::ColorNoAlphaSerializable value) ;

constexpr GlobalNamespace::ColorNoAlphaSerializable __get_environmentColor0Boost() const;

 GlobalNamespace::ColorNoAlphaSerializable __declspec(property(get=__get_environmentColor1Boost, put=__set_environmentColor1Boost))  environmentColor1Boost;

constexpr void __set_environmentColor1Boost(GlobalNamespace::ColorNoAlphaSerializable value) ;

constexpr GlobalNamespace::ColorNoAlphaSerializable __get_environmentColor1Boost() const;


// Methods

/// @brief Method .ctor addr 0xd9d860 size 0x180 virtual false final false
 void _ctor(UnityEngine::Color saberAColor, UnityEngine::Color saberBColor, UnityEngine::Color obstaclesColor, UnityEngine::Color environmentColor0, UnityEngine::Color environmentColor1, UnityEngine::Color environmentColor0Boost, UnityEngine::Color environmentColor1Boost) ;

/// @brief Method Serialize addr 0xd9d9e0 size 0x80 virtual true final true
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0xd9da60 size 0x80 virtual true final true
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorSchemeNetSerializable, "", "ColorSchemeNetSerializable");
