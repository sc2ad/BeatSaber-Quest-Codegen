#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace UnityEngine {
struct Color;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct ColorSerializable;
}
// Type: ::ColorSerializable
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15132))
// CS Name: ColorSerializable
struct CORDL_TYPE ColorSerializable : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr operator  LiteNetLib::Utils::INetSerializable() const;

/// @brief Convert operator to System::IEquatable_1<GlobalNamespace::ColorSerializable>
constexpr operator  System::IEquatable_1<GlobalNamespace::ColorSerializable>() const;

// Ctor Parameters [CppParam { name: "_color", ty: "UnityEngine::Color", modifiers: "", def_value: None }]
constexpr ColorSerializable(UnityEngine::Color _color) noexcept;


                    constexpr ColorSerializable(ColorSerializable const&) = default;
                    constexpr ColorSerializable(ColorSerializable&&) = default;
                    constexpr ColorSerializable& operator=(ColorSerializable const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ColorSerializable& operator=(ColorSerializable&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ColorSerializable(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Color __declspec(property(get=__get__color, put=__set__color))  _color;

constexpr void __set__color(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__color() const;


// Methods

/// @brief Method .ctor addr 0x121b790 size 0xc virtual false final false
 void _ctor(UnityEngine::Color color) ;

/// @brief Method Serialize addr 0x121b79c size 0x60 virtual true final true
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0x121b7fc size 0x64 virtual true final true
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method op_Implicit addr 0x121b860 size 0x4 virtual false final false
static UnityEngine::Color op_Implicit_UnityEngine__Color(GlobalNamespace::ColorSerializable c) ;

/// @brief Method op_Implicit addr 0x121b864 size 0x4 virtual false final false
static GlobalNamespace::ColorSerializable op_Implicit_GlobalNamespace__ColorSerializable(UnityEngine::Color c) ;

/// @brief Method Equals addr 0x121b868 size 0x13c virtual true final true
 bool Equals(GlobalNamespace::ColorSerializable other) ;

/// @brief Method Equals addr 0x121b9a4 size 0x7c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x121ba20 size 0x84 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x121baa4 size 0x8 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorSerializable, "", "ColorSerializable");
