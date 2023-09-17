#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class LoadingControl;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class IAnnotatedBeatmapLevelCollection;
}
namespace GlobalNamespace {
class AdditionalContentModel;
}
namespace GlobalNamespace {
class AnnotatedBeatmapLevelCollectionsGridView;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class AnnotatedBeatmapLevelCollectionsViewController;
}
// Type: ::AnnotatedBeatmapLevelCollectionsViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5746))
// CS Name: AnnotatedBeatmapLevelCollectionsViewController
class CORDL_TYPE AnnotatedBeatmapLevelCollectionsViewController : public ::HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~AnnotatedBeatmapLevelCollectionsViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "AnnotatedBeatmapLevelCollectionsViewController", modifiers: " const&", def_value: None }]
constexpr AnnotatedBeatmapLevelCollectionsViewController(AnnotatedBeatmapLevelCollectionsViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AnnotatedBeatmapLevelCollectionsViewController", modifiers: "&&", def_value: None }]
constexpr AnnotatedBeatmapLevelCollectionsViewController(AnnotatedBeatmapLevelCollectionsViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AnnotatedBeatmapLevelCollectionsViewController(void* ptr) noexcept : ::HMUI::ViewController(ptr) {
}


  constexpr AnnotatedBeatmapLevelCollectionsViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AnnotatedBeatmapLevelCollectionsViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AnnotatedBeatmapLevelCollectionsViewController& operator=(AnnotatedBeatmapLevelCollectionsViewController&& o) noexcept = default;
  constexpr AnnotatedBeatmapLevelCollectionsViewController& operator=(AnnotatedBeatmapLevelCollectionsViewController const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView __declspec(property(get=__get__annotatedBeatmapLevelCollectionsGridView, put=__set__annotatedBeatmapLevelCollectionsGridView))  _annotatedBeatmapLevelCollectionsGridView;

constexpr void __set__annotatedBeatmapLevelCollectionsGridView(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView value) ;

constexpr ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView __get__annotatedBeatmapLevelCollectionsGridView() const;

 ::GlobalNamespace::LoadingControl __declspec(property(get=__get__loadingControl, put=__set__loadingControl))  _loadingControl;

constexpr void __set__loadingControl(::GlobalNamespace::LoadingControl value) ;

constexpr ::GlobalNamespace::LoadingControl __get__loadingControl() const;

 ::GlobalNamespace::AdditionalContentModel __declspec(property(get=__get__additionalContentModel, put=__set__additionalContentModel))  _additionalContentModel;

constexpr void __set__additionalContentModel(::GlobalNamespace::AdditionalContentModel value) ;

constexpr ::GlobalNamespace::AdditionalContentModel __get__additionalContentModel() const;

 ::System::Action __declspec(property(get=__get_didOpenBeatmapLevelCollectionsEvent, put=__set_didOpenBeatmapLevelCollectionsEvent))  didOpenBeatmapLevelCollectionsEvent;

constexpr void __set_didOpenBeatmapLevelCollectionsEvent(::System::Action value) ;

constexpr ::System::Action __get_didOpenBeatmapLevelCollectionsEvent() const;

 ::System::Action __declspec(property(get=__get_didCloseBeatmapLevelCollectionsEvent, put=__set_didCloseBeatmapLevelCollectionsEvent))  didCloseBeatmapLevelCollectionsEvent;

constexpr void __set_didCloseBeatmapLevelCollectionsEvent(::System::Action value) ;

constexpr ::System::Action __get_didCloseBeatmapLevelCollectionsEvent() const;

 ::System::Action_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection> __declspec(property(get=__get_didSelectAnnotatedBeatmapLevelCollectionEvent, put=__set_didSelectAnnotatedBeatmapLevelCollectionEvent))  didSelectAnnotatedBeatmapLevelCollectionEvent;

constexpr void __set_didSelectAnnotatedBeatmapLevelCollectionEvent(::System::Action_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection> value) ;

constexpr ::System::Action_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection> __get_didSelectAnnotatedBeatmapLevelCollectionEvent() const;

 int32_t __declspec(property(get=__get__selectedItemIndex, put=__set__selectedItemIndex))  _selectedItemIndex;

constexpr void __set__selectedItemIndex(int32_t value) ;

constexpr int32_t __get__selectedItemIndex() const;

 ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection> __declspec(property(get=__get__annotatedBeatmapLevelCollections, put=__set__annotatedBeatmapLevelCollections))  _annotatedBeatmapLevelCollections;

constexpr void __set__annotatedBeatmapLevelCollections(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection> value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection> __get__annotatedBeatmapLevelCollections() const;


// Properties

 ::GlobalNamespace::IAnnotatedBeatmapLevelCollection __declspec(property(get=get_selectedAnnotatedBeatmapLevelCollection))  selectedAnnotatedBeatmapLevelCollection;

 int32_t __declspec(property(get=get_selectedItemIndex))  selectedItemIndex;


// Methods

/// @brief Method add_didOpenBeatmapLevelCollectionsEvent addr 0x216002c size 0x9c virtual false final false
 void add_didOpenBeatmapLevelCollectionsEvent(::System::Action value) ;

/// @brief Method remove_didOpenBeatmapLevelCollectionsEvent addr 0x21600c8 size 0x9c virtual false final false
 void remove_didOpenBeatmapLevelCollectionsEvent(::System::Action value) ;

/// @brief Method add_didCloseBeatmapLevelCollectionsEvent addr 0x2160164 size 0x9c virtual false final false
 void add_didCloseBeatmapLevelCollectionsEvent(::System::Action value) ;

/// @brief Method remove_didCloseBeatmapLevelCollectionsEvent addr 0x2160200 size 0x9c virtual false final false
 void remove_didCloseBeatmapLevelCollectionsEvent(::System::Action value) ;

/// @brief Method add_didSelectAnnotatedBeatmapLevelCollectionEvent addr 0x216029c size 0xb0 virtual false final false
 void add_didSelectAnnotatedBeatmapLevelCollectionEvent(::System::Action_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection> value) ;

/// @brief Method remove_didSelectAnnotatedBeatmapLevelCollectionEvent addr 0x216034c size 0xb0 virtual false final false
 void remove_didSelectAnnotatedBeatmapLevelCollectionEvent(::System::Action_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection> value) ;

/// @brief Method get_selectedAnnotatedBeatmapLevelCollection addr 0x21603fc size 0x134 virtual false final false
 ::GlobalNamespace::IAnnotatedBeatmapLevelCollection get_selectedAnnotatedBeatmapLevelCollection() ;

/// @brief Method get_selectedItemIndex addr 0x2160530 size 0x8 virtual false final false
 int32_t get_selectedItemIndex() ;

/// @brief Method DidActivate addr 0x2160538 size 0x1a4 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method RefreshAvailability addr 0x21606dc size 0x1c virtual false final false
 void RefreshAvailability() ;

/// @brief Method DidDeactivate addr 0x21606f8 size 0x1a4 virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method SetData addr 0x216089c size 0x130 virtual false final false
 void SetData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IAnnotatedBeatmapLevelCollection> annotatedBeatmapLevelCollections, int32_t selectedItemIndex, bool hideIfOneOrNoPacks) ;

/// @brief Method ShowLoading addr 0x21609cc size 0x64 virtual false final false
 void ShowLoading() ;

/// @brief Method HandleAdditionalContentModelDidInvalidateData addr 0x2160a30 size 0x1c virtual false final false
 void HandleAdditionalContentModelDidInvalidateData() ;

/// @brief Method HandleAnnotatedBeatmapLevelCollectionsGridViewOpen addr 0x2160a4c size 0x1c virtual false final false
 void HandleAnnotatedBeatmapLevelCollectionsGridViewOpen() ;

/// @brief Method HandleAnnotatedBeatmapLevelCollectionsGridViewClose addr 0x2160a68 size 0x1c virtual false final false
 void HandleAnnotatedBeatmapLevelCollectionsGridViewClose() ;

/// @brief Method HandleDidSelectAnnotatedBeatmapLevelCollection addr 0x2160a84 size 0x180 virtual false final false
 void HandleDidSelectAnnotatedBeatmapLevelCollection(::GlobalNamespace::IAnnotatedBeatmapLevelCollection beatmapLevelCollection) ;

// Ctor Parameters []
explicit AnnotatedBeatmapLevelCollectionsViewController() ;

/// @brief Method .ctor addr 0x2160c04 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController, "", "AnnotatedBeatmapLevelCollectionsViewController");
