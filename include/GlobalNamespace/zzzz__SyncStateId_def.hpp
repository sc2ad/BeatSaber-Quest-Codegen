#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace LiteNetLib::Utils {
template<typename T>
class INetImmutableSerializable_1;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
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
struct SyncStateId;
}
// Type: ::SyncStateId
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12927))
// CS Name: SyncStateId
struct CORDL_TYPE SyncStateId : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::SyncStateId>
constexpr operator  LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::SyncStateId>() const;

/// @brief Convert operator to System::IEquatable_1<GlobalNamespace::SyncStateId>
constexpr operator  System::IEquatable_1<GlobalNamespace::SyncStateId>() const;

// Ctor Parameters [CppParam { name: "_id", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr SyncStateId(uint8_t _id) noexcept;


                    constexpr SyncStateId(SyncStateId const&) = default;
                    constexpr SyncStateId(SyncStateId&&) = default;
                    constexpr SyncStateId& operator=(SyncStateId const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SyncStateId& operator=(SyncStateId&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SyncStateId(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field kMaxValue offset 0
static constexpr uint8_t  kMaxValue{128u};

 uint8_t __declspec(property(get=__get__id, put=__set__id))  _id;

constexpr void __set__id(uint8_t value) ;

constexpr uint8_t __get__id() const;


// Methods

/// @brief Method .ctor addr 0xdcdb10 size 0x8 virtual false final false
 void _ctor(uint8_t id) ;

/// @brief Method Equals addr 0xdcdb18 size 0x10 virtual true final true
 bool Equals(GlobalNamespace::SyncStateId other) ;

/// @brief Method Equals addr 0xdcdb28 size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0xdcdba0 size 0x20 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0xdcdbc0 size 0x20 virtual true final false
 ::StringW ToString() ;

/// @brief Method op_Equality addr 0xdcdbe0 size 0x10 virtual false final false
static bool op_Equality(GlobalNamespace::SyncStateId a, GlobalNamespace::SyncStateId b) ;

/// @brief Method op_Inequality addr 0xdcdbf0 size 0x10 virtual false final false
static bool op_Inequality(GlobalNamespace::SyncStateId a, GlobalNamespace::SyncStateId b) ;

/// @brief Method Increment addr 0xdcdc00 size 0x10 virtual false final false
 GlobalNamespace::SyncStateId Increment() ;

/// @brief Method Before addr 0xdcdc10 size 0x2c virtual false final false
 bool Before(GlobalNamespace::SyncStateId other) ;

/// @brief Method Serialize addr 0xdcce18 size 0x24 virtual true final true
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method SerializeWithFlag addr 0xdccbc8 size 0x34 virtual false final false
 void SerializeWithFlag(LiteNetLib::Utils::NetDataWriter writer, bool flag) ;

/// @brief Method Deserialize addr 0xdcce88 size 0x20 virtual false final false
static GlobalNamespace::SyncStateId Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method DeserializeWithFlag addr 0xdccc64 size 0x2c virtual false final false
static GlobalNamespace::SyncStateId DeserializeWithFlag(LiteNetLib::Utils::NetDataReader reader, ByRef<bool> flag) ;

/// @brief Method CreateFromSerializedData addr 0xdcdc3c size 0x24 virtual true final true
 GlobalNamespace::SyncStateId CreateFromSerializedData(LiteNetLib::Utils::NetDataReader reader) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SyncStateId, "", "SyncStateId");
