#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct Vector3Serializable;
}
// Type: ::Vector3Serializable
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15128))
// CS Name: Vector3Serializable
struct CORDL_TYPE Vector3Serializable : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr operator  LiteNetLib::Utils::INetSerializable() const;

/// @brief Convert operator to System::IEquatable_1<GlobalNamespace::Vector3Serializable>
constexpr operator  System::IEquatable_1<GlobalNamespace::Vector3Serializable>() const;

// Ctor Parameters [CppParam { name: "_x", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_y", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_z", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Vector3Serializable(int32_t _x, int32_t _y, int32_t _z) noexcept;


                    constexpr Vector3Serializable(Vector3Serializable const&) = default;
                    constexpr Vector3Serializable(Vector3Serializable&&) = default;
                    constexpr Vector3Serializable& operator=(Vector3Serializable const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Vector3Serializable& operator=(Vector3Serializable&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Vector3Serializable(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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


// Methods

/// @brief Method Serialize addr 0x1217570 size 0x54 virtual true final true
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0x12173a4 size 0x64 virtual true final true
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Equals addr 0x1219a48 size 0x34 virtual true final true
 bool Equals(GlobalNamespace::Vector3Serializable other) ;

/// @brief Method Approximately addr 0x1219a7c size 0x60 virtual false final false
 bool Approximately(GlobalNamespace::Vector3Serializable other) ;

/// @brief Method Equals addr 0x1219adc size 0x98 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x1219b74 size 0x28 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x1219b9c size 0x1fc virtual true final false
 ::StringW ToString() ;

/// @brief Method GetSize addr 0x1219d98 size 0x54 virtual false final false
 int32_t GetSize() ;

/// @brief Method .ctor addr 0x1219e10 size 0x288 virtual false final false
 void _ctor(UnityEngine::Vector3 v) ;

/// @brief Method .ctor addr 0x121a098 size 0xc virtual false final false
 void _ctor(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method op_Implicit addr 0x121a0a4 size 0x28 virtual false final false
static UnityEngine::Vector3 op_Implicit_UnityEngine__Vector3(GlobalNamespace::Vector3Serializable v) ;

/// @brief Method op_Implicit addr 0x1217980 size 0x2c virtual false final false
static GlobalNamespace::Vector3Serializable op_Implicit_GlobalNamespace__Vector3Serializable(UnityEngine::Vector3 v) ;

/// @brief Method op_Addition addr 0x121a0cc size 0x1c virtual false final false
static GlobalNamespace::Vector3Serializable op_Addition(GlobalNamespace::Vector3Serializable a, GlobalNamespace::Vector3Serializable b) ;

/// @brief Method op_Subtraction addr 0x121a0e8 size 0x1c virtual false final false
static GlobalNamespace::Vector3Serializable op_Subtraction(GlobalNamespace::Vector3Serializable a, GlobalNamespace::Vector3Serializable b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Vector3Serializable, "", "Vector3Serializable");
