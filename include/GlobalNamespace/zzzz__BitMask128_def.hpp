#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
template<typename T>
class IEquatable_1;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
template<typename T>
class INetImmutableSerializable_1;
}
namespace GlobalNamespace {
template<typename T>
class IBitMask_1;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
// Forward declare root types
namespace GlobalNamespace {
struct BitMask128;
}
// Type: ::BitMask128
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15081))
// CS Name: BitMask128
struct CORDL_TYPE BitMask128 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMask128>
constexpr operator  ::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMask128>() const;

/// @brief Convert operator to ::System::IEquatable_1<::GlobalNamespace::BitMask128>
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::BitMask128>() const;

/// @brief Convert operator to ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::BitMask128>
constexpr operator  ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::BitMask128>() const;

// Ctor Parameters [CppParam { name: "_d0", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_d1", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr BitMask128(uint64_t _d0, uint64_t _d1) noexcept;


                    constexpr BitMask128(BitMask128 const&) = default;
                    constexpr BitMask128(BitMask128&&) = default;
                    constexpr BitMask128& operator=(BitMask128 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BitMask128& operator=(BitMask128&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BitMask128(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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


// Properties

 int32_t __declspec(property(get=get_bitCount))  bitCount;

static ::GlobalNamespace::BitMask128 __declspec(property(get=get_maxValue))  maxValue;


// Methods

/// @brief Method get_bitCount addr 0x121391c size 0x8 virtual true final true
 int32_t get_bitCount() ;

/// @brief Method get_maxValue addr 0x1213924 size 0xc virtual false final false
static ::GlobalNamespace::BitMask128 get_maxValue() ;

/// @brief Method .ctor addr 0x1213930 size 0x8 virtual false final false
 void _ctor(uint64_t d0, uint64_t d1) ;

/// @brief Method .ctor addr 0x1213938 size 0x8 virtual false final false
 void _ctor(uint64_t value) ;

/// @brief Method SetBits addr 0x1213940 size 0x68 virtual true final true
 ::GlobalNamespace::BitMask128 SetBits(int32_t offset, uint64_t bits) ;

/// @brief Method GetBits addr 0x12139a8 size 0xbc virtual true final true
 uint64_t GetBits(int32_t offset, int32_t count) ;

/// @brief Method op_BitwiseOr addr 0x1213a64 size 0x14 virtual false final false
static ::GlobalNamespace::BitMask128 op_BitwiseOr(ByRef<::GlobalNamespace::BitMask128> a, ByRef<::GlobalNamespace::BitMask128> b) ;

/// @brief Method op_BitwiseAnd addr 0x1213a78 size 0x14 virtual false final false
static ::GlobalNamespace::BitMask128 op_BitwiseAnd(ByRef<::GlobalNamespace::BitMask128> a, ByRef<::GlobalNamespace::BitMask128> b) ;

/// @brief Method op_ExclusiveOr addr 0x1213a8c size 0x14 virtual false final false
static ::GlobalNamespace::BitMask128 op_ExclusiveOr(ByRef<::GlobalNamespace::BitMask128> a, ByRef<::GlobalNamespace::BitMask128> b) ;

/// @brief Method op_LeftShift addr 0x1213aa0 size 0x34 virtual false final false
static ::GlobalNamespace::BitMask128 op_LeftShift(ByRef<::GlobalNamespace::BitMask128> a, int32_t bits) ;

/// @brief Method op_RightShift addr 0x1213ad4 size 0x34 virtual false final false
static ::GlobalNamespace::BitMask128 op_RightShift(ByRef<::GlobalNamespace::BitMask128> a, int32_t bits) ;

/// @brief Method op_Equality addr 0x1213b08 size 0x2c virtual false final false
static bool op_Equality(ByRef<::GlobalNamespace::BitMask128> a, ByRef<::GlobalNamespace::BitMask128> b) ;

/// @brief Method op_Inequality addr 0x1213b34 size 0x2c virtual false final false
static bool op_Inequality(ByRef<::GlobalNamespace::BitMask128> a, ByRef<::GlobalNamespace::BitMask128> b) ;

/// @brief Method op_Implicit addr 0x1213b60 size 0xc virtual false final false
static ::GlobalNamespace::BitMask128 op_Implicit___GlobalNamespace__BitMask128(uint64_t value) ;

/// @brief Method Serialize addr 0x1213b6c size 0x40 virtual true final true
 void Serialize(::LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method CreateFromSerializedData addr 0x1213bac size 0x8 virtual true final true
 ::GlobalNamespace::BitMask128 CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Deserialize addr 0x1213bb4 size 0x40 virtual false final false
static ::GlobalNamespace::BitMask128 Deserialize(::LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method ToString addr 0x1213bf4 size 0x8c virtual true final false
 ::StringW ToString() ;

/// @brief Method Equals addr 0x1213c80 size 0x24 virtual true final true
 bool Equals(::GlobalNamespace::BitMask128 other) ;

/// @brief Method Equals addr 0x1213ca4 size 0x88 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x1213d2c size 0x48 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BitMask128, "", "BitMask128");
