#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace GlobalNamespace {
class BeatmapData;
}
namespace GlobalNamespace {
class BeatmapEventDataBoxGroup;
}
namespace GlobalNamespace {
class IBeatToTimeConvertor;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace GlobalNamespace {
template<typename T,typename TBase>
class SortedList_2;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
namespace GlobalNamespace {
class BeatmapEventDataBoxGroupProcessor;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapEventDataBoxGroupList;
}
// Type: ::BeatmapEventDataBoxGroupList
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4328))
// CS Name: BeatmapEventDataBoxGroupList
class CORDL_TYPE BeatmapEventDataBoxGroupList : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~BeatmapEventDataBoxGroupList() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataBoxGroupList", modifiers: " const&", def_value: None }]
constexpr BeatmapEventDataBoxGroupList(BeatmapEventDataBoxGroupList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataBoxGroupList", modifiers: "&&", def_value: None }]
constexpr BeatmapEventDataBoxGroupList(BeatmapEventDataBoxGroupList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapEventDataBoxGroupList(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapEventDataBoxGroupList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapEventDataBoxGroupList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapEventDataBoxGroupList& operator=(BeatmapEventDataBoxGroupList&& o) noexcept = default;
  constexpr BeatmapEventDataBoxGroupList& operator=(BeatmapEventDataBoxGroupList const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_updateBeatmapDataOnInsert, put=__set_updateBeatmapDataOnInsert))  updateBeatmapDataOnInsert;

constexpr void __set_updateBeatmapDataOnInsert(bool value) ;

constexpr bool __get_updateBeatmapDataOnInsert() const;

 GlobalNamespace::BeatmapEventDataBoxGroupProcessor __declspec(property(get=__get__beatmapEventDataBoxGroupProcessor, put=__set__beatmapEventDataBoxGroupProcessor))  _beatmapEventDataBoxGroupProcessor;

constexpr void __set__beatmapEventDataBoxGroupProcessor(GlobalNamespace::BeatmapEventDataBoxGroupProcessor value) ;

constexpr GlobalNamespace::BeatmapEventDataBoxGroupProcessor __get__beatmapEventDataBoxGroupProcessor() const;

 GlobalNamespace::SortedList_2<GlobalNamespace::BeatmapEventDataBoxGroup,GlobalNamespace::BeatmapEventDataBoxGroup> __declspec(property(get=__get__sortedList, put=__set__sortedList))  _sortedList;

constexpr void __set__sortedList(GlobalNamespace::SortedList_2<GlobalNamespace::BeatmapEventDataBoxGroup,GlobalNamespace::BeatmapEventDataBoxGroup> value) ;

constexpr GlobalNamespace::SortedList_2<GlobalNamespace::BeatmapEventDataBoxGroup,GlobalNamespace::BeatmapEventDataBoxGroup> __get__sortedList() const;

 int32_t __declspec(property(get=__get__groupId, put=__set__groupId))  _groupId;

constexpr void __set__groupId(int32_t value) ;

constexpr int32_t __get__groupId() const;

 GlobalNamespace::BeatmapData __declspec(property(get=__get__beatmapData, put=__set__beatmapData))  _beatmapData;

constexpr void __set__beatmapData(GlobalNamespace::BeatmapData value) ;

constexpr GlobalNamespace::BeatmapData __get__beatmapData() const;

 GlobalNamespace::IBeatToTimeConvertor __declspec(property(get=__get__beatToTimeConvertor, put=__set__beatToTimeConvertor))  _beatToTimeConvertor;

constexpr void __set__beatToTimeConvertor(GlobalNamespace::IBeatToTimeConvertor value) ;

constexpr GlobalNamespace::IBeatToTimeConvertor __get__beatToTimeConvertor() const;

 bool __declspec(property(get=__get__nonSyncedInsertsExist, put=__set__nonSyncedInsertsExist))  _nonSyncedInsertsExist;

constexpr void __set__nonSyncedInsertsExist(bool value) ;

constexpr bool __get__nonSyncedInsertsExist() const;

static System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapEventDataBoxGroup> __declspec(property(get=__get__usedBeatmapEventDataBoxes, put=__set__usedBeatmapEventDataBoxes))  _usedBeatmapEventDataBoxes;

static void __set__usedBeatmapEventDataBoxes(System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapEventDataBoxGroup> value) ;

static System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapEventDataBoxGroup> __get__usedBeatmapEventDataBoxes() ;


// Methods

/// @brief Method NoDomainReloadInit addr 0x21dbe10 size 0x78 virtual false final false
static void NoDomainReloadInit() ;

static GlobalNamespace::BeatmapEventDataBoxGroupList New_ctor(int32_t groupId, GlobalNamespace::BeatmapData beatmapData, GlobalNamespace::IBeatToTimeConvertor beatToTimeConvertor) ;

/// @brief Method .ctor addr 0x21dbe88 size 0xd8 virtual false final false
 void _ctor(int32_t groupId, GlobalNamespace::BeatmapData beatmapData, GlobalNamespace::IBeatToTimeConvertor beatToTimeConvertor) ;

/// @brief Method Insert addr 0x21dbfdc size 0x3c4 virtual false final false
 System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapEventDataBoxGroup> Insert(GlobalNamespace::BeatmapEventDataBoxGroup beatmapEventDataBoxGroup) ;

/// @brief Method Remove addr 0x21dc3f0 size 0x3c8 virtual false final false
 void Remove(System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapEventDataBoxGroup> nodeToDelete) ;

/// @brief Method SyncWithBeatmapData addr 0x21dc7b8 size 0x178 virtual false final false
 void SyncWithBeatmapData() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapEventDataBoxGroupList);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapEventDataBoxGroupList, "", "BeatmapEventDataBoxGroupList");
