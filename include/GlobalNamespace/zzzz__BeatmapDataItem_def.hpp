#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
template<typename T>
class IComparable_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
// Type: ::BeatmapDataItemType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14900))
// CS Name: BeatmapDataItem::BeatmapDataItemType
struct CORDL_TYPE ____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType(____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType const&) = default;
                    constexpr ____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType(____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType&&) = default;
                    constexpr ____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType& operator=(____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType& operator=(____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__BeatmapDataItem__BeatmapDataItemType_Unwrapped : int32_t {
__BeatmapObject = 0,
__BeatmapEvent = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__BeatmapDataItem__BeatmapDataItemType_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__BeatmapDataItem__BeatmapDataItemType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field BeatmapObject offset 0
static ::GlobalNamespace::____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType const BeatmapObject;

/// @brief Field BeatmapEvent offset 0
static ::GlobalNamespace::____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType const BeatmapEvent;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapDataItem
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14901))
// CS Name: BeatmapDataItem
class CORDL_TYPE BeatmapDataItem : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using BeatmapDataItemType = ::GlobalNamespace::____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType;

/// @brief Convert operator to ::System::IComparable_1<::GlobalNamespace::BeatmapDataItem>
constexpr operator  ::System::IComparable_1<::GlobalNamespace::BeatmapDataItem>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BeatmapDataItem() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataItem", modifiers: " const&", def_value: None }]
constexpr BeatmapDataItem(BeatmapDataItem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataItem", modifiers: "&&", def_value: None }]
constexpr BeatmapDataItem(BeatmapDataItem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapDataItem(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapDataItem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapDataItem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapDataItem& operator=(BeatmapDataItem&& o) noexcept = default;
  constexpr BeatmapDataItem& operator=(BeatmapDataItem const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__time_k__BackingField, put=__set__time_k__BackingField))  _time_k__BackingField;

constexpr void __set__time_k__BackingField(float_t value) ;

constexpr float_t __get__time_k__BackingField() const;

 int32_t __declspec(property(get=__get__executionOrder_k__BackingField, put=__set__executionOrder_k__BackingField))  _executionOrder_k__BackingField;

constexpr void __set__executionOrder_k__BackingField(int32_t value) ;

constexpr int32_t __get__executionOrder_k__BackingField() const;

 int32_t __declspec(property(get=__get_subtypeIdentifier, put=__set_subtypeIdentifier))  subtypeIdentifier;

constexpr void __set_subtypeIdentifier(int32_t value) ;

constexpr int32_t __get_subtypeIdentifier() const;

 ::GlobalNamespace::____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(::GlobalNamespace::____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType __get_type() const;


// Properties

 float_t __declspec(property(get=get_time))  time;

 int32_t __declspec(property(get=get_executionOrder))  executionOrder;

 int32_t __declspec(property(get=get_subtypeGroupIdentifier))  subtypeGroupIdentifier;


// Methods

/// @brief Method get_time addr 0xd90ea0 size 0x8 virtual false final false
 float_t get_time() ;

/// @brief Method get_executionOrder addr 0xd90ea8 size 0x8 virtual false final false
 int32_t get_executionOrder() ;

/// @brief Method get_subtypeGroupIdentifier addr 0xd90eb0 size 0x8 virtual true final false
 int32_t get_subtypeGroupIdentifier() ;

// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "executionOrder", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "subtypeIdentifier", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::GlobalNamespace::____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType", modifiers: "", def_value: None }]
explicit BeatmapDataItem(float_t time, int32_t executionOrder, int32_t subtypeIdentifier, ::GlobalNamespace::____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType type) ;

/// @brief Method .ctor addr 0xd90eb8 size 0x4c virtual false final false
 void _ctor(float_t time, int32_t executionOrder, int32_t subtypeIdentifier, ::GlobalNamespace::____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType type) ;

/// @brief Method GetCopy addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::BeatmapDataItem GetCopy() ;

/// @brief Method CompareTo addr 0xd90f04 size 0x4c virtual true final true
 int32_t CompareTo(::GlobalNamespace::BeatmapDataItem b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType, "", "BeatmapDataItem/BeatmapDataItemType");
NEED_NO_BOX(::GlobalNamespace::BeatmapDataItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataItem, "", "BeatmapDataItem");
