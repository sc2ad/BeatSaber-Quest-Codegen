#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace System {
template<typename T>
class IComparable_1;
}
// Forward declare root types
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class BeatmapSaveDataItem;
}
// Type: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15017))
// CS Name: BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveDataItem
class CORDL_TYPE BeatmapSaveDataItem : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IComparable_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem>
constexpr operator  System::IComparable_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BeatmapSaveDataItem() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataItem", modifiers: " const&", def_value: None }]
constexpr BeatmapSaveDataItem(BeatmapSaveDataItem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapSaveDataItem", modifiers: "&&", def_value: None }]
constexpr BeatmapSaveDataItem(BeatmapSaveDataItem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapSaveDataItem(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapSaveDataItem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapSaveDataItem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapSaveDataItem& operator=(BeatmapSaveDataItem&& o) noexcept = default;
  constexpr BeatmapSaveDataItem& operator=(BeatmapSaveDataItem const& o) noexcept = default;
                


// Properties

 float_t __declspec(property(get=get_time))  time;


// Methods

/// @brief Method get_time addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_time() ;

/// @brief Method CompareTo addr 0xd9c020 size 0xb0 virtual true final true
 int32_t CompareTo(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem other) ;

// Ctor Parameters []
explicit BeatmapSaveDataItem() ;

/// @brief Method .ctor addr 0xd9bd50 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatmapSaveDataVersion2_6_0AndEarlier
NEED_NO_BOX(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem);
DEFINE_IL2CPP_ARG_TYPE(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem, "BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveDataItem");
