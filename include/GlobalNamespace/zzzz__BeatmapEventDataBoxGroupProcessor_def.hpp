#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
namespace GlobalNamespace {
template<typename T>
class ISortedListItemProcessor_1;
}
namespace GlobalNamespace {
class BeatmapEventDataBoxGroup;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapEventDataBoxGroupProcessor;
}
// Type: ::BeatmapEventDataBoxGroupProcessor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4330))
// CS Name: BeatmapEventDataBoxGroupProcessor
class CORDL_TYPE BeatmapEventDataBoxGroupProcessor : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::ISortedListItemProcessor_1<GlobalNamespace::BeatmapEventDataBoxGroup>
constexpr operator  GlobalNamespace::ISortedListItemProcessor_1<GlobalNamespace::BeatmapEventDataBoxGroup>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BeatmapEventDataBoxGroupProcessor() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataBoxGroupProcessor", modifiers: " const&", def_value: None }]
constexpr BeatmapEventDataBoxGroupProcessor(BeatmapEventDataBoxGroupProcessor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataBoxGroupProcessor", modifiers: "&&", def_value: None }]
constexpr BeatmapEventDataBoxGroupProcessor(BeatmapEventDataBoxGroupProcessor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapEventDataBoxGroupProcessor(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapEventDataBoxGroupProcessor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapEventDataBoxGroupProcessor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapEventDataBoxGroupProcessor& operator=(BeatmapEventDataBoxGroupProcessor&& o) noexcept = default;
  constexpr BeatmapEventDataBoxGroupProcessor& operator=(BeatmapEventDataBoxGroupProcessor const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapEventDataBoxGroup> __declspec(property(get=__get__dirtyBoxGroups, put=__set__dirtyBoxGroups))  _dirtyBoxGroups;

constexpr void __set__dirtyBoxGroups(System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapEventDataBoxGroup> value) ;

constexpr System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapEventDataBoxGroup> __get__dirtyBoxGroups() const;


// Properties

 System::Collections::Generic::IReadOnlyCollection_1<GlobalNamespace::BeatmapEventDataBoxGroup> __declspec(property(get=get_dirtyBoxGroups))  dirtyBoxGroups;


// Methods

/// @brief Method get_dirtyBoxGroups addr 0x21dcdd8 size 0x8 virtual false final false
 System::Collections::Generic::IReadOnlyCollection_1<GlobalNamespace::BeatmapEventDataBoxGroup> get_dirtyBoxGroups() ;

/// @brief Method ProcessInsertedData addr 0x21dcde0 size 0x5fc virtual true final true
 void ProcessInsertedData(System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapEventDataBoxGroup> insertedNode) ;

/// @brief Method ProcessBeforeDeleteData addr 0x21dd3dc size 0x374 virtual true final true
 void ProcessBeforeDeleteData(System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapEventDataBoxGroup> nodeToDelete) ;

/// @brief Method ClearDirtyData addr 0x21dc3a0 size 0x50 virtual false final false
 void ClearDirtyData() ;

static GlobalNamespace::BeatmapEventDataBoxGroupProcessor New_ctor() ;

/// @brief Method .ctor addr 0x21dbf60 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapEventDataBoxGroupProcessor);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapEventDataBoxGroupProcessor, "", "BeatmapEventDataBoxGroupProcessor");
