#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace LiteNetLib::Utils {
template<typename T>
class INetImmutableSerializable_1;
}
namespace GlobalNamespace {
struct BitMask128;
}
// Forward declare root types
namespace GlobalNamespace {
struct PlayerStateHash;
}
// Type: ::PlayerStateHash
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12869))
// CS Name: PlayerStateHash
struct CORDL_TYPE PlayerStateHash : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::PlayerStateHash>
constexpr operator  LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::PlayerStateHash>() const;

/// @brief Convert operator to System::IEquatable_1<GlobalNamespace::PlayerStateHash>
constexpr operator  System::IEquatable_1<GlobalNamespace::PlayerStateHash>() const;

// Ctor Parameters [CppParam { name: "_bloomFilter", ty: "GlobalNamespace::BitMask128", modifiers: "", def_value: None }]
constexpr PlayerStateHash(GlobalNamespace::BitMask128 _bloomFilter) noexcept;


                    constexpr PlayerStateHash(PlayerStateHash const&) = default;
                    constexpr PlayerStateHash(PlayerStateHash&&) = default;
                    constexpr PlayerStateHash& operator=(PlayerStateHash const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PlayerStateHash& operator=(PlayerStateHash&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PlayerStateHash(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 GlobalNamespace::BitMask128 __declspec(property(get=__get__bloomFilter, put=__set__bloomFilter))  _bloomFilter;

constexpr void __set__bloomFilter(GlobalNamespace::BitMask128 value) ;

constexpr GlobalNamespace::BitMask128 __get__bloomFilter() const;

/// @brief Field kToStringPrefix offset 0
static constexpr ::ConstString  kToStringPrefix{u"[PlayerStateMask "};

/// @brief Field kToStringSuffix offset 0
static constexpr ::ConstString  kToStringSuffix{u"]"};


// Methods

/// @brief Method .ctor addr 0xdc5fc8 size 0x8 virtual false final false
 void _ctor(GlobalNamespace::BitMask128 bloomFilter) ;

/// @brief Method .ctor addr 0xdc5fd0 size 0x64 virtual false final false
 void _ctor(::StringW state) ;

/// @brief Method .ctor addr 0xdc6034 size 0x64 virtual false final false
 void _ctor(System::Collections::Generic::HashSet_1<::StringW> stateHashSet) ;

/// @brief Method Contains addr 0xdc6098 size 0x60 virtual false final false
 bool Contains(::StringW state) ;

/// @brief Method AddState addr 0xdc60f8 size 0x60 virtual false final false
 GlobalNamespace::PlayerStateHash AddState(::StringW state) ;

/// @brief Method Serialize addr 0xdc6158 size 0x8 virtual true final true
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method CreateFromSerializedData addr 0xdc6160 size 0xc virtual true final true
 GlobalNamespace::PlayerStateHash CreateFromSerializedData(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Deserialize addr 0xdc616c size 0x8 virtual false final false
static GlobalNamespace::PlayerStateHash Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method ToString addr 0xdc6174 size 0x7c virtual true final false
 ::StringW ToString() ;

/// @brief Method ToShortString addr 0xdc61f0 size 0x48 virtual false final false
 ::StringW ToShortString() ;

/// @brief Method ToBytes addr 0xdc6238 size 0x48 virtual false final false
 ::ArrayW<uint8_t> ToBytes() ;

/// @brief Method GetHashCode addr 0xdc6280 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0xdc6288 size 0x28 virtual true final true
 bool Equals(GlobalNamespace::PlayerStateHash other) ;

/// @brief Method Equals addr 0xdc62b0 size 0x8c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method TryParse addr 0xdc633c size 0x128 virtual false final false
static bool TryParse(::StringW stringSerializedMask, ByRef<GlobalNamespace::PlayerStateHash> playerStateHash) ;

/// @brief Method Parse addr 0xdc6464 size 0x90 virtual false final false
static GlobalNamespace::PlayerStateHash Parse(::StringW stringSerializedMask) ;

/// @brief Method FromBytes addr 0xdc64f4 size 0x58 virtual false final false
static GlobalNamespace::PlayerStateHash FromBytes(::ArrayW<uint8_t> bytes, int32_t offset) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerStateHash, "", "PlayerStateHash");
