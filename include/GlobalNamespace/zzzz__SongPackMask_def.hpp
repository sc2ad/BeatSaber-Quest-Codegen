#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
template<typename T>
class INetImmutableSerializable_1;
}
namespace GlobalNamespace {
struct BitMask128;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct SongPackMask;
}
// Type: ::SongPackMask
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15136))
// CS Name: SongPackMask
struct CORDL_TYPE SongPackMask : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::SongPackMask>
constexpr operator  LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::SongPackMask>() const;

/// @brief Convert operator to System::IEquatable_1<GlobalNamespace::SongPackMask>
constexpr operator  System::IEquatable_1<GlobalNamespace::SongPackMask>() const;

// Ctor Parameters [CppParam { name: "_bloomFilter", ty: "GlobalNamespace::BitMask128", modifiers: "", def_value: None }]
constexpr SongPackMask(GlobalNamespace::BitMask128 _bloomFilter) noexcept;


                    constexpr SongPackMask(SongPackMask const&) = default;
                    constexpr SongPackMask(SongPackMask&&) = default;
                    constexpr SongPackMask& operator=(SongPackMask const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SongPackMask& operator=(SongPackMask&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SongPackMask(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field kHashCount offset 0
static constexpr int32_t  kHashCount{2};

/// @brief Field kHashBits offset 0
static constexpr int32_t  kHashBits{13};

 GlobalNamespace::BitMask128 __declspec(property(get=__get__bloomFilter, put=__set__bloomFilter))  _bloomFilter;

constexpr void __set__bloomFilter(GlobalNamespace::BitMask128 value) ;

constexpr GlobalNamespace::BitMask128 __get__bloomFilter() const;

/// @brief Field kToStringPrefix offset 0
static constexpr ::ConstString  kToStringPrefix{u"[SongPackMask "};

/// @brief Field kToStringSuffix offset 0
static constexpr ::ConstString  kToStringSuffix{u"]"};


// Properties

static GlobalNamespace::SongPackMask __declspec(property(get=get_all))  all;


// Methods

/// @brief Method .ctor addr 0x121c694 size 0x64 virtual false final false
 void _ctor(::StringW packId) ;

/// @brief Method .ctor addr 0x121c6f8 size 0x8 virtual false final false
 void _ctor(GlobalNamespace::BitMask128 bloomFilter) ;

/// @brief Method .ctor addr 0x121c700 size 0x64 virtual false final false
 void _ctor(System::Collections::Generic::IEnumerable_1<::StringW> packs) ;

/// @brief Method get_all addr 0x121c764 size 0xc virtual false final false
static GlobalNamespace::SongPackMask get_all() ;

/// @brief Method op_BitwiseOr addr 0x121c770 size 0xc virtual false final false
static GlobalNamespace::SongPackMask op_BitwiseOr(GlobalNamespace::SongPackMask a, GlobalNamespace::SongPackMask b) ;

/// @brief Method op_BitwiseAnd addr 0x121c77c size 0xc virtual false final false
static GlobalNamespace::SongPackMask op_BitwiseAnd(GlobalNamespace::SongPackMask a, GlobalNamespace::SongPackMask b) ;

/// @brief Method op_Equality addr 0x121c788 size 0x18 virtual false final false
static bool op_Equality(GlobalNamespace::SongPackMask a, GlobalNamespace::SongPackMask b) ;

/// @brief Method op_Inequality addr 0x121c7a0 size 0x18 virtual false final false
static bool op_Inequality(GlobalNamespace::SongPackMask a, GlobalNamespace::SongPackMask b) ;

/// @brief Method op_Implicit addr 0x121c7b8 size 0x28 virtual false final false
static GlobalNamespace::SongPackMask op_Implicit_GlobalNamespace__SongPackMask(::StringW id) ;

/// @brief Method Contains addr 0x121c7e0 size 0x1c virtual false final false
 bool Contains(GlobalNamespace::SongPackMask other) ;

/// @brief Method DifferenceFrom addr 0x121c7fc size 0x60 virtual false final false
 int32_t DifferenceFrom(GlobalNamespace::SongPackMask other) ;

/// @brief Method Serialize addr 0x121c85c size 0x4 virtual true final true
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method CreateFromSerializedData addr 0x121c860 size 0x8 virtual true final true
 GlobalNamespace::SongPackMask CreateFromSerializedData(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Deserialize addr 0x121c868 size 0x4 virtual false final false
static GlobalNamespace::SongPackMask Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method ToString addr 0x121c86c size 0x78 virtual true final false
 ::StringW ToString() ;

/// @brief Method ToShortString addr 0x121c8e4 size 0x48 virtual false final false
 ::StringW ToShortString() ;

/// @brief Method ToBytes addr 0x121c92c size 0x48 virtual false final false
 ::ArrayW<uint8_t> ToBytes() ;

/// @brief Method GetHashCode addr 0x121c974 size 0x48 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x121c9bc size 0x24 virtual true final true
 bool Equals(GlobalNamespace::SongPackMask other) ;

/// @brief Method Equals addr 0x121c9e0 size 0x84 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method TryParse addr 0x121ca64 size 0x128 virtual false final false
static bool TryParse(::StringW stringSerializedMask, ByRef<GlobalNamespace::SongPackMask> songPackMask) ;

/// @brief Method Parse addr 0x121cb8c size 0x90 virtual false final false
static GlobalNamespace::SongPackMask Parse(::StringW stringSerializedMask) ;

/// @brief Method FromBytes addr 0x121cc1c size 0x58 virtual false final false
static GlobalNamespace::SongPackMask FromBytes(::ArrayW<uint8_t> bytes, int32_t offset) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SongPackMask, "", "SongPackMask");
