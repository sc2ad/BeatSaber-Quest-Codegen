#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace GlobalNamespace {
template<typename T>
class IBitMask_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
// Forward declare root types
namespace GlobalNamespace {
class BitMaskArray;
}
// Type: ::BitMaskArray
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15083))
// CS Name: BitMaskArray
class CORDL_TYPE BitMaskArray : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IBitMask_1<GlobalNamespace::BitMaskArray>
constexpr operator  GlobalNamespace::IBitMask_1<GlobalNamespace::BitMaskArray>() const noexcept;

/// @brief Convert operator to System::IEquatable_1<GlobalNamespace::BitMaskArray>
constexpr operator  System::IEquatable_1<GlobalNamespace::BitMaskArray>() const noexcept;

/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr operator  LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BitMaskArray() = default;

// Ctor Parameters [CppParam { name: "", ty: "BitMaskArray", modifiers: " const&", def_value: None }]
constexpr BitMaskArray(BitMaskArray const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BitMaskArray", modifiers: "&&", def_value: None }]
constexpr BitMaskArray(BitMaskArray&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BitMaskArray(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BitMaskArray& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BitMaskArray& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BitMaskArray& operator=(BitMaskArray&& o) noexcept = default;
  constexpr BitMaskArray& operator=(BitMaskArray const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__bitCount_k__BackingField, put=__set__bitCount_k__BackingField))  _bitCount_k__BackingField;

constexpr void __set__bitCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__bitCount_k__BackingField() const;

 ::ArrayW<uint64_t> __declspec(property(get=__get__data, put=__set__data))  _data;

constexpr void __set__data(::ArrayW<uint64_t> value) ;

constexpr ::ArrayW<uint64_t> __get__data() const;


// Properties

 int32_t __declspec(property(get=get_bitCount))  bitCount;


// Methods

/// @brief Method get_bitCount addr 0x12144b0 size 0x8 virtual true final true
 int32_t get_bitCount() ;

static GlobalNamespace::BitMaskArray New_ctor(int32_t bitCount) ;

/// @brief Method .ctor addr 0x12144b8 size 0x7c virtual false final false
 void _ctor(int32_t bitCount) ;

/// @brief Method Equals addr 0x1214534 size 0x64 virtual true final true
 bool Equals(GlobalNamespace::BitMaskArray other) ;

/// @brief Method SetBits addr 0x1214598 size 0xfc virtual true final true
 GlobalNamespace::BitMaskArray SetBits(int32_t offset, uint64_t bits) ;

/// @brief Method GetBits addr 0x1214694 size 0x11c virtual true final true
 uint64_t GetBits(int32_t offset, int32_t count) ;

/// @brief Method ToString addr 0x12147b0 size 0xf8 virtual true final false
 ::StringW ToString() ;

/// @brief Method Serialize addr 0x12148a8 size 0x15c virtual true final true
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0x1214a04 size 0xcc virtual true final true
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BitMaskArray);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BitMaskArray, "", "BitMaskArray");
