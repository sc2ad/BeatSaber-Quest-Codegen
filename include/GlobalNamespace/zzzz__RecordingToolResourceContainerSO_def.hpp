#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
class BeatmapLevelPackCollectionSO;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class EnvironmentsListSO;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolResourceContainerSO;
}
// Type: ::RecordingToolResourceContainerSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6042))
// CS Name: RecordingToolResourceContainerSO
class CORDL_TYPE RecordingToolResourceContainerSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~RecordingToolResourceContainerSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolResourceContainerSO", modifiers: " const&", def_value: None }]
constexpr RecordingToolResourceContainerSO(RecordingToolResourceContainerSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolResourceContainerSO", modifiers: "&&", def_value: None }]
constexpr RecordingToolResourceContainerSO(RecordingToolResourceContainerSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RecordingToolResourceContainerSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr RecordingToolResourceContainerSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RecordingToolResourceContainerSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RecordingToolResourceContainerSO& operator=(RecordingToolResourceContainerSO&& o) noexcept = default;
  constexpr RecordingToolResourceContainerSO& operator=(RecordingToolResourceContainerSO const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BeatmapLevelPackCollectionSO __declspec(property(get=__get__dlcLevelPackCollection, put=__set__dlcLevelPackCollection))  _dlcLevelPackCollection;

constexpr void __set__dlcLevelPackCollection(GlobalNamespace::BeatmapLevelPackCollectionSO value) ;

constexpr GlobalNamespace::BeatmapLevelPackCollectionSO __get__dlcLevelPackCollection() const;

 GlobalNamespace::BeatmapLevelPackCollectionSO __declspec(property(get=__get__ostAndExtrasPackCollection, put=__set__ostAndExtrasPackCollection))  _ostAndExtrasPackCollection;

constexpr void __set__ostAndExtrasPackCollection(GlobalNamespace::BeatmapLevelPackCollectionSO value) ;

constexpr GlobalNamespace::BeatmapLevelPackCollectionSO __get__ostAndExtrasPackCollection() const;

 GlobalNamespace::EnvironmentsListSO __declspec(property(get=__get__environmentsList, put=__set__environmentsList))  _environmentsList;

constexpr void __set__environmentsList(GlobalNamespace::EnvironmentsListSO value) ;

constexpr GlobalNamespace::EnvironmentsListSO __get__environmentsList() const;

 System::Collections::Generic::List_1<GlobalNamespace::IBeatmapLevelPack> __declspec(property(get=__get__beatmapLevelPacks, put=__set__beatmapLevelPacks))  _beatmapLevelPacks;

constexpr void __set__beatmapLevelPacks(System::Collections::Generic::List_1<GlobalNamespace::IBeatmapLevelPack> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::IBeatmapLevelPack> __get__beatmapLevelPacks() const;


// Properties

 System::Collections::Generic::List_1<GlobalNamespace::IBeatmapLevelPack> __declspec(property(get=get_beatmapLevelPacks))  beatmapLevelPacks;

 GlobalNamespace::EnvironmentsListSO __declspec(property(get=get_environmentsList))  environmentsList;


// Methods

/// @brief Method get_beatmapLevelPacks addr 0x21abf98 size 0x8 virtual false final false
 System::Collections::Generic::List_1<GlobalNamespace::IBeatmapLevelPack> get_beatmapLevelPacks() ;

/// @brief Method get_environmentsList addr 0x21abfa0 size 0x8 virtual false final false
 GlobalNamespace::EnvironmentsListSO get_environmentsList() ;

/// @brief Method OnEnable addr 0x21abfa8 size 0xcc virtual true final false
 void OnEnable() ;

// Ctor Parameters []
explicit RecordingToolResourceContainerSO() ;

/// @brief Method .ctor addr 0x21ac074 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::RecordingToolResourceContainerSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RecordingToolResourceContainerSO, "", "RecordingToolResourceContainerSO");
