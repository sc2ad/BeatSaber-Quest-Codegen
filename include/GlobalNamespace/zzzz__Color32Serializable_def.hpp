#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
struct Color32;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
// Forward declare root types
namespace GlobalNamespace {
struct Color32Serializable;
}
// Type: ::Color32Serializable
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15133))
// CS Name: Color32Serializable
struct CORDL_TYPE Color32Serializable : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr operator  LiteNetLib::Utils::INetSerializable() const;

/// @brief Convert operator to System::IEquatable_1<GlobalNamespace::Color32Serializable>
constexpr operator  System::IEquatable_1<GlobalNamespace::Color32Serializable>() const;

// Ctor Parameters [CppParam { name: "_color", ty: "UnityEngine::Color32", modifiers: "", def_value: None }]
constexpr Color32Serializable(UnityEngine::Color32 _color) noexcept;


                    constexpr Color32Serializable(Color32Serializable const&) = default;
                    constexpr Color32Serializable(Color32Serializable&&) = default;
                    constexpr Color32Serializable& operator=(Color32Serializable const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Color32Serializable& operator=(Color32Serializable&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Color32Serializable(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Color32 __declspec(property(get=__get__color, put=__set__color))  _color;

constexpr void __set__color(UnityEngine::Color32 value) ;

constexpr UnityEngine::Color32 __get__color() const;


// Methods

/// @brief Method .ctor addr 0x121baac size 0x8 virtual false final false
 void _ctor(UnityEngine::Color32 color) ;

/// @brief Method Serialize addr 0x12164ac size 0x60 virtual true final true
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0x12166f0 size 0x64 virtual true final true
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method op_Implicit addr 0x121bab4 size 0x8 virtual false final false
static UnityEngine::Color32 op_Implicit_UnityEngine__Color32(GlobalNamespace::Color32Serializable c) ;

/// @brief Method op_Implicit addr 0x12164a4 size 0x8 virtual false final false
static GlobalNamespace::Color32Serializable op_Implicit_GlobalNamespace__Color32Serializable(UnityEngine::Color32 c) ;

/// @brief Method Equals addr 0x121babc size 0x48 virtual true final true
 bool Equals(GlobalNamespace::Color32Serializable other) ;

/// @brief Method Equals addr 0x121bb04 size 0xa8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x121bbac size 0x68 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x121bc14 size 0x8 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Color32Serializable, "", "Color32Serializable");
