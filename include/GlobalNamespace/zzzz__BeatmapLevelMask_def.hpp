#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace GlobalNamespace {
class BitMaskSparse;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelMask;
}
// Type: ::BeatmapLevelMask
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15080))
// CS Name: BeatmapLevelMask
class CORDL_TYPE BeatmapLevelMask : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::LiteNetLib::Utils::INetSerializable
constexpr operator  ::LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief Convert operator to ::System::IEquatable_1<::GlobalNamespace::BeatmapLevelMask>
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::BeatmapLevelMask>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BeatmapLevelMask() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelMask", modifiers: " const&", def_value: None }]
constexpr BeatmapLevelMask(BeatmapLevelMask const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelMask", modifiers: "&&", def_value: None }]
constexpr BeatmapLevelMask(BeatmapLevelMask&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapLevelMask(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapLevelMask& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapLevelMask& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapLevelMask& operator=(BeatmapLevelMask&& o) noexcept = default;
  constexpr BeatmapLevelMask& operator=(BeatmapLevelMask const& o) noexcept = default;
                


// Fields

/// @brief Field kBitCount offset 0
static constexpr int32_t  kBitCount{16384};

/// @brief Field kHashCount offset 0
static constexpr int32_t  kHashCount{1};

/// @brief Field kHashBits offset 0
static constexpr int32_t  kHashBits{14};

 ::GlobalNamespace::BitMaskSparse __declspec(property(get=__get__bloomFilter, put=__set__bloomFilter))  _bloomFilter;

constexpr void __set__bloomFilter(::GlobalNamespace::BitMaskSparse value) ;

constexpr ::GlobalNamespace::BitMaskSparse __get__bloomFilter() const;

/// @brief Field kToStringPrefix offset 0
static constexpr ::ConstString  kToStringPrefix{u"[BeatmapLevelMask "};

/// @brief Field kToStringSuffix offset 0
static constexpr ::ConstString  kToStringSuffix{u"]"};


// Methods

// Ctor Parameters []
explicit BeatmapLevelMask() ;

/// @brief Method .ctor addr 0x1213184 size 0x68 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "level", ty: "::StringW", modifiers: "", def_value: None }]
explicit BeatmapLevelMask(::StringW level) ;

/// @brief Method .ctor addr 0x121327c size 0xa0 virtual false final false
 void _ctor(::StringW level) ;

// Ctor Parameters [CppParam { name: "levelSet", ty: "::System::Collections::Generic::HashSet_1<::StringW>", modifiers: "", def_value: None }]
explicit BeatmapLevelMask(::System::Collections::Generic::HashSet_1<::StringW> levelSet) ;

/// @brief Method .ctor addr 0x121331c size 0x198 virtual false final false
 void _ctor(::System::Collections::Generic::HashSet_1<::StringW> levelSet) ;

/// @brief Method Contains addr 0x12134b4 size 0x60 virtual false final false
 bool Contains(::StringW state) ;

/// @brief Method AddLevel addr 0x1213514 size 0x60 virtual false final false
 void AddLevel(::StringW state) ;

/// @brief Method Serialize addr 0x1213574 size 0x18 virtual true final true
 void Serialize(::LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0x1213720 size 0x18 virtual true final true
 void Deserialize(::LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method ToString addr 0x12137cc size 0x84 virtual true final false
 ::StringW ToString() ;

/// @brief Method GetHashCode addr 0x1213850 size 0x20 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x1213870 size 0x20 virtual true final true
 bool Equals(::GlobalNamespace::BeatmapLevelMask other) ;

/// @brief Method Equals addr 0x1213890 size 0x8c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelMask);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelMask, "", "BeatmapLevelMask");
