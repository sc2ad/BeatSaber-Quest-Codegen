#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
namespace GlobalNamespace {
template<typename T>
class ISortedListItemProcessor_1;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class BeatmapEventDataProcessor_1;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class BeatmapEventDataProcessor_1<T>;
}
// Type: ::BeatmapEventDataProcessor`1
// Type: ::BeatmapEventDataProcessor`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14924))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14924), inst: 2 })
// CS Name: BeatmapEventDataProcessor`1
class CORDL_TYPE BeatmapEventDataProcessor_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::ISortedListItemProcessor_1<::GlobalNamespace::BeatmapDataItem>
constexpr operator  ::GlobalNamespace::ISortedListItemProcessor_1<::GlobalNamespace::BeatmapDataItem>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BeatmapEventDataProcessor_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataProcessor_1", modifiers: " const&", def_value: None }]
constexpr BeatmapEventDataProcessor_1(BeatmapEventDataProcessor_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataProcessor_1", modifiers: "&&", def_value: None }]
constexpr BeatmapEventDataProcessor_1(BeatmapEventDataProcessor_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapEventDataProcessor_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapEventDataProcessor_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapEventDataProcessor_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapEventDataProcessor_1& operator=(BeatmapEventDataProcessor_1&& o) noexcept = default;
  constexpr BeatmapEventDataProcessor_1& operator=(BeatmapEventDataProcessor_1 const& o) noexcept = default;
                


// Methods

/// @brief Method ProcessInsertedData addr 0x0 size 0xffffffffffffffff virtual true final true
 void ProcessInsertedData(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem> insertedNode) ;

/// @brief Method ProcessBeforeDeleteData addr 0x0 size 0xffffffffffffffff virtual true final true
 void ProcessBeforeDeleteData(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem> nodeToDelete) ;

/// @brief Method ProcessBeforeDeleteEventDataCommon addr 0x0 size 0xffffffffffffffff virtual false final false
static void ProcessBeforeDeleteEventDataCommon(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem> nodeToDelete) ;

/// @brief Method ProcessInsertedEventDataCommon addr 0x0 size 0xffffffffffffffff virtual false final false
static void ProcessInsertedEventDataCommon(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem> insertedNode) ;

/// @brief Method ProcessInsertedEventDataInternal addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessInsertedEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem> insertedNode) ;

/// @brief Method ProcessBeforeDeleteEventDataInternal addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessBeforeDeleteEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem> nodeToDelete) ;

// Ctor Parameters []
explicit BeatmapEventDataProcessor_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::BeatmapEventDataProcessor_1, "", "BeatmapEventDataProcessor`1");
