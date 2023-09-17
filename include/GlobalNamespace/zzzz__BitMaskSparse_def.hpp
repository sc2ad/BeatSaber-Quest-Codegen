#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System {
template<typename T>
class IEquatable_1;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace GlobalNamespace {
template<typename T>
class IBitMask_1;
}
namespace System::Collections::Generic {
template<typename T>
class SortedSet_1;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class BitMaskSparse;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BitMaskSparse____c;
}
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15084))
// CS Name: BitMaskSparse::<>c
class CORDL_TYPE ____GlobalNamespace__BitMaskSparse____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____GlobalNamespace__BitMaskSparse____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BitMaskSparse____c", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BitMaskSparse____c(____GlobalNamespace__BitMaskSparse____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BitMaskSparse____c", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BitMaskSparse____c(____GlobalNamespace__BitMaskSparse____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BitMaskSparse____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__BitMaskSparse____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BitMaskSparse____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BitMaskSparse____c& operator=(____GlobalNamespace__BitMaskSparse____c&& o) noexcept = default;
  constexpr ____GlobalNamespace__BitMaskSparse____c& operator=(____GlobalNamespace__BitMaskSparse____c const& o) noexcept = default;
                


// Fields

static ::GlobalNamespace::____GlobalNamespace__BitMaskSparse____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::GlobalNamespace::____GlobalNamespace__BitMaskSparse____c value) ;

static ::GlobalNamespace::____GlobalNamespace__BitMaskSparse____c __get___9() ;

static ::System::Func_2<uint32_t,::StringW> __declspec(property(get=__get___9__8_0, put=__set___9__8_0))  __9__8_0;

static void __set___9__8_0(::System::Func_2<uint32_t,::StringW> value) ;

static ::System::Func_2<uint32_t,::StringW> __get___9__8_0() ;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__BitMaskSparse____c() ;

/// @brief Method .ctor addr 0x1214df4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ToString>b__8_0 addr 0x1214dfc size 0x1c virtual false final false
 ::StringW _ToString_b__8_0(uint32_t i) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BitMaskSparse
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15085))
// CS Name: BitMaskSparse
class CORDL_TYPE BitMaskSparse : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = ::GlobalNamespace::____GlobalNamespace__BitMaskSparse____c;

/// @brief Convert operator to ::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMaskSparse>
constexpr operator  ::GlobalNamespace::IBitMask_1<::GlobalNamespace::BitMaskSparse>() const noexcept;

/// @brief Convert operator to ::System::IEquatable_1<::GlobalNamespace::BitMaskSparse>
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::BitMaskSparse>() const noexcept;

/// @brief Convert operator to ::LiteNetLib::Utils::INetSerializable
constexpr operator  ::LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BitMaskSparse() = default;

// Ctor Parameters [CppParam { name: "", ty: "BitMaskSparse", modifiers: " const&", def_value: None }]
constexpr BitMaskSparse(BitMaskSparse const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BitMaskSparse", modifiers: "&&", def_value: None }]
constexpr BitMaskSparse(BitMaskSparse&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BitMaskSparse(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BitMaskSparse& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BitMaskSparse& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BitMaskSparse& operator=(BitMaskSparse&& o) noexcept = default;
  constexpr BitMaskSparse& operator=(BitMaskSparse const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__bitCount_k__BackingField, put=__set__bitCount_k__BackingField))  _bitCount_k__BackingField;

constexpr void __set__bitCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__bitCount_k__BackingField() const;

 ::System::Collections::Generic::SortedSet_1<uint32_t> __declspec(property(get=__get__sparseSet, put=__set__sparseSet))  _sparseSet;

constexpr void __set__sparseSet(::System::Collections::Generic::SortedSet_1<uint32_t> value) ;

constexpr ::System::Collections::Generic::SortedSet_1<uint32_t> __get__sparseSet() const;


// Properties

 int32_t __declspec(property(get=get_bitCount))  bitCount;


// Methods

/// @brief Method get_bitCount addr 0x1214ad0 size 0x8 virtual true final true
 int32_t get_bitCount() ;

// Ctor Parameters [CppParam { name: "bitCount", ty: "int32_t", modifiers: "", def_value: None }]
explicit BitMaskSparse(int32_t bitCount) ;

/// @brief Method .ctor addr 0x12131ec size 0x90 virtual false final false
 void _ctor(int32_t bitCount) ;

/// @brief Method Equals addr 0x1214ad8 size 0x6c virtual true final true
 bool Equals(::GlobalNamespace::BitMaskSparse other) ;

/// @brief Method SetBits addr 0x1214b44 size 0x90 virtual true final true
 ::GlobalNamespace::BitMaskSparse SetBits(int32_t offset, uint64_t bits) ;

/// @brief Method GetBits addr 0x1214bd4 size 0x98 virtual true final true
 uint64_t GetBits(int32_t offset, int32_t count) ;

/// @brief Method ToString addr 0x1214c6c size 0x124 virtual true final false
 ::StringW ToString() ;

/// @brief Method Serialize addr 0x121358c size 0x194 virtual true final true
 void Serialize(::LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0x1213738 size 0x94 virtual true final true
 void Deserialize(::LiteNetLib::Utils::NetDataReader reader) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BitMaskSparse);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BitMaskSparse, "", "BitMaskSparse");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BitMaskSparse____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BitMaskSparse____c, "", "BitMaskSparse/<>c");
