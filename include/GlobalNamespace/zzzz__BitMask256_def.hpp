#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
template<typename T>
class IBitMask_1;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace LiteNetLib::Utils {
template<typename T>
class INetImmutableSerializable_1;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
// Forward declare root types
namespace GlobalNamespace {
struct BitMask256;
}
// Type: ::BitMask256
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15082))
// CS Name: BitMask256
struct CORDL_TYPE BitMask256 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IBitMask_1<GlobalNamespace::BitMask256>
constexpr operator  GlobalNamespace::IBitMask_1<GlobalNamespace::BitMask256>() const;

/// @brief Convert operator to System::IEquatable_1<GlobalNamespace::BitMask256>
constexpr operator  System::IEquatable_1<GlobalNamespace::BitMask256>() const;

/// @brief Convert operator to LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::BitMask256>
constexpr operator  LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::BitMask256>() const;

// Ctor Parameters [CppParam { name: "_d0", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_d1", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_d2", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_d3", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr BitMask256(uint64_t _d0, uint64_t _d1, uint64_t _d2, uint64_t _d3) noexcept;


                    constexpr BitMask256(BitMask256 const&) = default;
                    constexpr BitMask256(BitMask256&&) = default;
                    constexpr BitMask256& operator=(BitMask256 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BitMask256& operator=(BitMask256&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BitMask256(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint64_t __declspec(property(get=__get__d0, put=__set__d0))  _d0;

constexpr void __set__d0(uint64_t value) ;

constexpr uint64_t __get__d0() const;

 uint64_t __declspec(property(get=__get__d1, put=__set__d1))  _d1;

constexpr void __set__d1(uint64_t value) ;

constexpr uint64_t __get__d1() const;

 uint64_t __declspec(property(get=__get__d2, put=__set__d2))  _d2;

constexpr void __set__d2(uint64_t value) ;

constexpr uint64_t __get__d2() const;

 uint64_t __declspec(property(get=__get__d3, put=__set__d3))  _d3;

constexpr void __set__d3(uint64_t value) ;

constexpr uint64_t __get__d3() const;


// Properties

 int32_t __declspec(property(get=get_bitCount))  bitCount;

static GlobalNamespace::BitMask256 __declspec(property(get=get_maxValue))  maxValue;


// Methods

/// @brief Method get_bitCount addr 0x1213d74 size 0x8 virtual true final true
 int32_t get_bitCount() ;

/// @brief Method get_maxValue addr 0x1213d7c size 0xc virtual false final false
static GlobalNamespace::BitMask256 get_maxValue() ;

/// @brief Method .ctor addr 0x1213d88 size 0xc virtual false final false
 void _ctor(uint64_t d0, uint64_t d1, uint64_t d2, uint64_t d3) ;

/// @brief Method .ctor addr 0x1213d94 size 0xc virtual false final false
 void _ctor(uint64_t value) ;

/// @brief Method SetBits addr 0x1213da0 size 0xcc virtual true final true
 GlobalNamespace::BitMask256 SetBits(int32_t offset, uint64_t bits) ;

/// @brief Method GetBits addr 0x1213e6c size 0x160 virtual true final true
 uint64_t GetBits(int32_t offset, int32_t count) ;

/// @brief Method op_BitwiseOr addr 0x1213fcc size 0x18 virtual false final false
static GlobalNamespace::BitMask256 op_BitwiseOr(ByRef<GlobalNamespace::BitMask256> a, ByRef<GlobalNamespace::BitMask256> b) ;

/// @brief Method op_BitwiseAnd addr 0x1213fe4 size 0x18 virtual false final false
static GlobalNamespace::BitMask256 op_BitwiseAnd(ByRef<GlobalNamespace::BitMask256> a, ByRef<GlobalNamespace::BitMask256> b) ;

/// @brief Method op_ExclusiveOr addr 0x1213ffc size 0x18 virtual false final false
static GlobalNamespace::BitMask256 op_ExclusiveOr(ByRef<GlobalNamespace::BitMask256> a, ByRef<GlobalNamespace::BitMask256> b) ;

/// @brief Method op_LeftShift addr 0x1214014 size 0x58 virtual false final false
static GlobalNamespace::BitMask256 op_LeftShift(ByRef<GlobalNamespace::BitMask256> a, int32_t bits) ;

/// @brief Method op_RightShift addr 0x121406c size 0x58 virtual false final false
static GlobalNamespace::BitMask256 op_RightShift(ByRef<GlobalNamespace::BitMask256> a, int32_t bits) ;

/// @brief Method op_Equality addr 0x12140c4 size 0x4c virtual false final false
static bool op_Equality(ByRef<GlobalNamespace::BitMask256> a, ByRef<GlobalNamespace::BitMask256> b) ;

/// @brief Method op_Inequality addr 0x1214110 size 0x4c virtual false final false
static bool op_Inequality(ByRef<GlobalNamespace::BitMask256> a, ByRef<GlobalNamespace::BitMask256> b) ;

/// @brief Method op_Implicit addr 0x121415c size 0xc virtual false final false
static GlobalNamespace::BitMask256 op_Implicit_GlobalNamespace__BitMask256(uint64_t value) ;

/// @brief Method Serialize addr 0x1214168 size 0x60 virtual true final true
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method CreateFromSerializedData addr 0x12141c8 size 0x2c virtual true final true
 GlobalNamespace::BitMask256 CreateFromSerializedData(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Deserialize addr 0x12141f4 size 0x6c virtual false final false
static GlobalNamespace::BitMask256 Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method ToString addr 0x1214260 size 0xd4 virtual true final false
 ::StringW ToString() ;

/// @brief Method Equals addr 0x1214334 size 0x4c virtual true final true
 bool Equals(GlobalNamespace::BitMask256 other) ;

/// @brief Method Equals addr 0x1214380 size 0xa8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x1214428 size 0x88 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BitMask256, "", "BitMask256");
