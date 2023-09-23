#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
struct Vector4;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace GlobalNamespace {
struct Vector4Serializable;
}
// Type: ::Vector4Serializable
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15129))
// CS Name: Vector4Serializable
struct CORDL_TYPE Vector4Serializable : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr operator  LiteNetLib::Utils::INetSerializable() const;

/// @brief Convert operator to System::IEquatable_1<GlobalNamespace::Vector4Serializable>
constexpr operator  System::IEquatable_1<GlobalNamespace::Vector4Serializable>() const;

// Ctor Parameters [CppParam { name: "_x", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_y", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_z", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_w", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Vector4Serializable(int32_t _x, int32_t _y, int32_t _z, int32_t _w) noexcept;


                    constexpr Vector4Serializable(Vector4Serializable const&) = default;
                    constexpr Vector4Serializable(Vector4Serializable&&) = default;
                    constexpr Vector4Serializable& operator=(Vector4Serializable const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Vector4Serializable& operator=(Vector4Serializable&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Vector4Serializable(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get__x, put=__set__x))  _x;

constexpr void __set__x(int32_t value) ;

constexpr int32_t __get__x() const;

 int32_t __declspec(property(get=__get__y, put=__set__y))  _y;

constexpr void __set__y(int32_t value) ;

constexpr int32_t __get__y() const;

 int32_t __declspec(property(get=__get__z, put=__set__z))  _z;

constexpr void __set__z(int32_t value) ;

constexpr int32_t __get__z() const;

 int32_t __declspec(property(get=__get__w, put=__set__w))  _w;

constexpr void __set__w(int32_t value) ;

constexpr int32_t __get__w() const;


// Methods

/// @brief Method Serialize addr 0x121a104 size 0x68 virtual true final true
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0x121a16c size 0x7c virtual true final true
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Equals addr 0x121a1e8 size 0x44 virtual true final true
 bool Equals(GlobalNamespace::Vector4Serializable other) ;

/// @brief Method Approximately addr 0x121a22c size 0x74 virtual false final false
 bool Approximately(GlobalNamespace::Vector4Serializable other) ;

/// @brief Method Equals addr 0x121a2a0 size 0xa8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x121a348 size 0x1c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x121a364 size 0x25c virtual true final false
 ::StringW ToString() ;

/// @brief Method GetSize addr 0x121a5c0 size 0x6c virtual false final false
 int32_t GetSize() ;

/// @brief Method .ctor addr 0x121a62c size 0x34c virtual false final false
 void _ctor(UnityEngine::Vector4 v) ;

/// @brief Method .ctor addr 0x121a978 size 0x8 virtual false final false
 void _ctor(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method op_Implicit addr 0x121a980 size 0x34 virtual false final false
static UnityEngine::Vector4 op_Implicit_UnityEngine__Vector4(GlobalNamespace::Vector4Serializable v) ;

/// @brief Method op_Implicit addr 0x121a9b4 size 0x24 virtual false final false
static GlobalNamespace::Vector4Serializable op_Implicit_GlobalNamespace__Vector4Serializable(UnityEngine::Vector4 v) ;

/// @brief Method op_Addition addr 0x121a9d8 size 0x2c virtual false final false
static GlobalNamespace::Vector4Serializable op_Addition(GlobalNamespace::Vector4Serializable a, GlobalNamespace::Vector4Serializable b) ;

/// @brief Method op_Subtraction addr 0x121aa04 size 0x2c virtual false final false
static GlobalNamespace::Vector4Serializable op_Subtraction(GlobalNamespace::Vector4Serializable a, GlobalNamespace::Vector4Serializable b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Vector4Serializable, "", "Vector4Serializable");
