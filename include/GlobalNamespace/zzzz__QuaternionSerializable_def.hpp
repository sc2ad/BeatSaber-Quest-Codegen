#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace UnityEngine {
struct Quaternion;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
// Forward declare root types
namespace GlobalNamespace {
struct QuaternionSerializable;
}
// Type: ::QuaternionSerializable
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15130))
// CS Name: QuaternionSerializable
struct CORDL_TYPE QuaternionSerializable : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::LiteNetLib::Utils::INetSerializable
constexpr operator  ::LiteNetLib::Utils::INetSerializable() const;

/// @brief Convert operator to ::System::IEquatable_1<::GlobalNamespace::QuaternionSerializable>
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::QuaternionSerializable>() const;

// Ctor Parameters [CppParam { name: "_a", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_b", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_c", ty: "int32_t", modifiers: "", def_value: None }]
constexpr QuaternionSerializable(int32_t _a, int32_t _b, int32_t _c) noexcept;


                    constexpr QuaternionSerializable(QuaternionSerializable const&) = default;
                    constexpr QuaternionSerializable(QuaternionSerializable&&) = default;
                    constexpr QuaternionSerializable& operator=(QuaternionSerializable const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr QuaternionSerializable& operator=(QuaternionSerializable&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit QuaternionSerializable(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get__a, put=__set__a))  _a;

constexpr void __set__a(int32_t value) ;

constexpr int32_t __get__a() const;

 int32_t __declspec(property(get=__get__b, put=__set__b))  _b;

constexpr void __set__b(int32_t value) ;

constexpr int32_t __get__b() const;

 int32_t __declspec(property(get=__get__c, put=__set__c))  _c;

constexpr void __set__c(int32_t value) ;

constexpr int32_t __get__c() const;

/// @brief Field kSqrtTwo offset 0
static constexpr float_t  kSqrtTwo{1.4142135};

/// @brief Field kOneOverSqrtTwo offset 0
static constexpr float_t  kOneOverSqrtTwo{0.70710677};

/// @brief Field kScale offset 0
static constexpr float_t  kScale{11584.53};

/// @brief Field kInvScale offset 0
static constexpr float_t  kInvScale{0.00008632201};


// Properties

static ::GlobalNamespace::QuaternionSerializable __declspec(property(get=get_identity))  identity;


// Methods

/// @brief Method get_identity addr 0x121aa30 size 0x64 virtual false final false
static ::GlobalNamespace::QuaternionSerializable get_identity() ;

/// @brief Method ToSmallest addr 0x121abf8 size 0x3e8 virtual false final false
static void ToSmallest(::UnityEngine::Quaternion q, ByRef<int32_t> sa, ByRef<int32_t> sb, ByRef<int32_t> sc) ;

/// @brief Method FromSmallest addr 0x121afe0 size 0xd0 virtual false final false
static ::UnityEngine::Quaternion FromSmallest(int32_t sa, int32_t sb, int32_t sc) ;

/// @brief Method Serialize addr 0x12175c4 size 0x54 virtual true final true
 void Serialize(::LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0x1217408 size 0x64 virtual true final true
 void Deserialize(::LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Equals addr 0x121b0b0 size 0x34 virtual true final true
 bool Equals(::GlobalNamespace::QuaternionSerializable other) ;

/// @brief Method Equals addr 0x121b0e4 size 0x98 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Approximately addr 0x121b17c size 0x80 virtual false final false
 bool Approximately(::GlobalNamespace::QuaternionSerializable other) ;

/// @brief Method GetHashCode addr 0x121b20c size 0x18 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method GetSize addr 0x121b224 size 0x54 virtual false final false
 int32_t GetSize() ;

/// @brief Method .ctor addr 0x121aa94 size 0x164 virtual false final false
 void _ctor(::UnityEngine::Quaternion q) ;

/// @brief Method .ctor addr 0x121b278 size 0xc virtual false final false
 void _ctor(::LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method ToString addr 0x121b284 size 0x38 virtual true final false
 ::StringW ToString() ;

/// @brief Method op_Implicit addr 0x121b1fc size 0x10 virtual false final false
static ::UnityEngine::Quaternion op_Implicit___UnityEngine__Quaternion(::GlobalNamespace::QuaternionSerializable q) ;

/// @brief Method op_Implicit addr 0x12179ac size 0x2c virtual false final false
static ::GlobalNamespace::QuaternionSerializable op_Implicit___GlobalNamespace__QuaternionSerializable(::UnityEngine::Quaternion q) ;

/// @brief Method op_Addition addr 0x121b2bc size 0x1c virtual false final false
static ::GlobalNamespace::QuaternionSerializable op_Addition(::GlobalNamespace::QuaternionSerializable a, ::GlobalNamespace::QuaternionSerializable b) ;

/// @brief Method op_Subtraction addr 0x121b2d8 size 0x1c virtual false final false
static ::GlobalNamespace::QuaternionSerializable op_Subtraction(::GlobalNamespace::QuaternionSerializable a, ::GlobalNamespace::QuaternionSerializable b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuaternionSerializable, "", "QuaternionSerializable");
