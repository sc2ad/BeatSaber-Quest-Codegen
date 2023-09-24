#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class AdditionalContentModel;
}
namespace GlobalNamespace {
class PageControl;
}
namespace HMUI {
class SelectableCell;
}
namespace GlobalNamespace {
class IAnnotatedBeatmapLevelCollection;
}
namespace GlobalNamespace {
class GlobalNamespace__GridView__IDataSource;
}
namespace GlobalNamespace {
class AnnotatedBeatmapLevelCollectionsGridViewAnimator;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace GlobalNamespace {
class BeatmapLevelsPromoDataSO;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace GlobalNamespace {
class GridView;
}
namespace System {
template<typename T>
class Action_1;
}
namespace HMUI {
struct HMUI__SelectableCell__TransitionType;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace UnityEngine::EventSystems {
class IPointerExitHandler;
}
namespace GlobalNamespace {
class AnnotatedBeatmapLevelCollectionCell;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
// Forward declare root types
namespace GlobalNamespace {
class AnnotatedBeatmapLevelCollectionsGridView;
}
// Type: ::AnnotatedBeatmapLevelCollectionsGridView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5855))
// CS Name: AnnotatedBeatmapLevelCollectionsGridView
class CORDL_TYPE AnnotatedBeatmapLevelCollectionsGridView : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to UnityEngine::EventSystems::IPointerEnterHandler
constexpr operator  UnityEngine::EventSystems::IPointerEnterHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IPointerExitHandler
constexpr operator  UnityEngine::EventSystems::IPointerExitHandler() const noexcept;

/// @brief Convert operator to GlobalNamespace::GlobalNamespace__GridView__IDataSource
constexpr operator  GlobalNamespace::GlobalNamespace__GridView__IDataSource() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~AnnotatedBeatmapLevelCollectionsGridView() = default;

// Ctor Parameters [CppParam { name: "", ty: "AnnotatedBeatmapLevelCollectionsGridView", modifiers: " const&", def_value: None }]
constexpr AnnotatedBeatmapLevelCollectionsGridView(AnnotatedBeatmapLevelCollectionsGridView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AnnotatedBeatmapLevelCollectionsGridView", modifiers: "&&", def_value: None }]
constexpr AnnotatedBeatmapLevelCollectionsGridView(AnnotatedBeatmapLevelCollectionsGridView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AnnotatedBeatmapLevelCollectionsGridView(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr AnnotatedBeatmapLevelCollectionsGridView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AnnotatedBeatmapLevelCollectionsGridView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AnnotatedBeatmapLevelCollectionsGridView& operator=(AnnotatedBeatmapLevelCollectionsGridView&& o) noexcept = default;
  constexpr AnnotatedBeatmapLevelCollectionsGridView& operator=(AnnotatedBeatmapLevelCollectionsGridView const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GridView __declspec(property(get=__get__gridView, put=__set__gridView))  _gridView;

constexpr void __set__gridView(GlobalNamespace::GridView value) ;

constexpr GlobalNamespace::GridView __get__gridView() const;

 GlobalNamespace::PageControl __declspec(property(get=__get__pageControl, put=__set__pageControl))  _pageControl;

constexpr void __set__pageControl(GlobalNamespace::PageControl value) ;

constexpr GlobalNamespace::PageControl __get__pageControl() const;

 GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator __declspec(property(get=__get__animator, put=__set__animator))  _animator;

constexpr void __set__animator(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator value) ;

constexpr GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridViewAnimator __get__animator() const;

 GlobalNamespace::AnnotatedBeatmapLevelCollectionCell __declspec(property(get=__get__cellPrefab, put=__set__cellPrefab))  _cellPrefab;

constexpr void __set__cellPrefab(GlobalNamespace::AnnotatedBeatmapLevelCollectionCell value) ;

constexpr GlobalNamespace::AnnotatedBeatmapLevelCollectionCell __get__cellPrefab() const;

 float_t __declspec(property(get=__get__cellWidth, put=__set__cellWidth))  _cellWidth;

constexpr void __set__cellWidth(float_t value) ;

constexpr float_t __get__cellWidth() const;

 float_t __declspec(property(get=__get__cellHeight, put=__set__cellHeight))  _cellHeight;

constexpr void __set__cellHeight(float_t value) ;

constexpr float_t __get__cellHeight() const;

 GlobalNamespace::AdditionalContentModel __declspec(property(get=__get__additionalContentModel, put=__set__additionalContentModel))  _additionalContentModel;

constexpr void __set__additionalContentModel(GlobalNamespace::AdditionalContentModel value) ;

constexpr GlobalNamespace::AdditionalContentModel __get__additionalContentModel() const;

 GlobalNamespace::BeatmapLevelsPromoDataSO __declspec(property(get=__get__beatmapLevelsPromoData, put=__set__beatmapLevelsPromoData))  _beatmapLevelsPromoData;

constexpr void __set__beatmapLevelsPromoData(GlobalNamespace::BeatmapLevelsPromoDataSO value) ;

constexpr GlobalNamespace::BeatmapLevelsPromoDataSO __get__beatmapLevelsPromoData() const;

 GlobalNamespace::IVRPlatformHelper __declspec(property(get=__get__vrPlatformHelper, put=__set__vrPlatformHelper))  _vrPlatformHelper;

constexpr void __set__vrPlatformHelper(GlobalNamespace::IVRPlatformHelper value) ;

constexpr GlobalNamespace::IVRPlatformHelper __get__vrPlatformHelper() const;

 System::Action __declspec(property(get=__get_didOpenAnnotatedBeatmapLevelCollectionEvent, put=__set_didOpenAnnotatedBeatmapLevelCollectionEvent))  didOpenAnnotatedBeatmapLevelCollectionEvent;

constexpr void __set_didOpenAnnotatedBeatmapLevelCollectionEvent(System::Action value) ;

constexpr System::Action __get_didOpenAnnotatedBeatmapLevelCollectionEvent() const;

 System::Action __declspec(property(get=__get_didCloseAnnotatedBeatmapLevelCollectionEvent, put=__set_didCloseAnnotatedBeatmapLevelCollectionEvent))  didCloseAnnotatedBeatmapLevelCollectionEvent;

constexpr void __set_didCloseAnnotatedBeatmapLevelCollectionEvent(System::Action value) ;

constexpr System::Action __get_didCloseAnnotatedBeatmapLevelCollectionEvent() const;

 System::Action_1<GlobalNamespace::IAnnotatedBeatmapLevelCollection> __declspec(property(get=__get_didSelectAnnotatedBeatmapLevelCollectionEvent, put=__set_didSelectAnnotatedBeatmapLevelCollectionEvent))  didSelectAnnotatedBeatmapLevelCollectionEvent;

constexpr void __set_didSelectAnnotatedBeatmapLevelCollectionEvent(System::Action_1<GlobalNamespace::IAnnotatedBeatmapLevelCollection> value) ;

constexpr System::Action_1<GlobalNamespace::IAnnotatedBeatmapLevelCollection> __get_didSelectAnnotatedBeatmapLevelCollectionEvent() const;

 bool __declspec(property(get=__get__isInitialized, put=__set__isInitialized))  _isInitialized;

constexpr void __set__isInitialized(bool value) ;

constexpr bool __get__isInitialized() const;

 bool __declspec(property(get=__get__isHovering, put=__set__isHovering))  _isHovering;

constexpr void __set__isHovering(bool value) ;

constexpr bool __get__isHovering() const;

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IAnnotatedBeatmapLevelCollection> __declspec(property(get=__get__annotatedBeatmapLevelCollections, put=__set__annotatedBeatmapLevelCollections))  _annotatedBeatmapLevelCollections;

constexpr void __set__annotatedBeatmapLevelCollections(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IAnnotatedBeatmapLevelCollection> value) ;

constexpr System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IAnnotatedBeatmapLevelCollection> __get__annotatedBeatmapLevelCollections() const;

 int32_t __declspec(property(get=__get__selectedCellIndex, put=__set__selectedCellIndex))  _selectedCellIndex;

constexpr void __set__selectedCellIndex(int32_t value) ;

constexpr int32_t __get__selectedCellIndex() const;


// Methods

/// @brief Method add_didOpenAnnotatedBeatmapLevelCollectionEvent addr 0x218265c size 0x9c virtual false final false
 void add_didOpenAnnotatedBeatmapLevelCollectionEvent(System::Action value) ;

/// @brief Method remove_didOpenAnnotatedBeatmapLevelCollectionEvent addr 0x21826f8 size 0x9c virtual false final false
 void remove_didOpenAnnotatedBeatmapLevelCollectionEvent(System::Action value) ;

/// @brief Method add_didCloseAnnotatedBeatmapLevelCollectionEvent addr 0x2182794 size 0x9c virtual false final false
 void add_didCloseAnnotatedBeatmapLevelCollectionEvent(System::Action value) ;

/// @brief Method remove_didCloseAnnotatedBeatmapLevelCollectionEvent addr 0x2182830 size 0x9c virtual false final false
 void remove_didCloseAnnotatedBeatmapLevelCollectionEvent(System::Action value) ;

/// @brief Method add_didSelectAnnotatedBeatmapLevelCollectionEvent addr 0x21828cc size 0xb0 virtual false final false
 void add_didSelectAnnotatedBeatmapLevelCollectionEvent(System::Action_1<GlobalNamespace::IAnnotatedBeatmapLevelCollection> value) ;

/// @brief Method remove_didSelectAnnotatedBeatmapLevelCollectionEvent addr 0x218297c size 0xb0 virtual false final false
 void remove_didSelectAnnotatedBeatmapLevelCollectionEvent(System::Action_1<GlobalNamespace::IAnnotatedBeatmapLevelCollection> value) ;

/// @brief Method SetData addr 0x2182a2c size 0x8c virtual false final false
 void SetData(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IAnnotatedBeatmapLevelCollection> annotatedBeatmapLevelCollections) ;

/// @brief Method OnEnable addr 0x2182b68 size 0x140 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2182ca8 size 0x144 virtual false final false
 void OnDisable() ;

/// @brief Method Show addr 0x2182dec size 0x24 virtual false final false
 void Show() ;

/// @brief Method Hide addr 0x2182e10 size 0x24 virtual false final false
 void Hide() ;

/// @brief Method CancelAsyncOperations addr 0x2182e34 size 0x188 virtual false final false
 void CancelAsyncOperations() ;

/// @brief Method RefreshAvailability addr 0x2182fbc size 0x2cc virtual false final false
 void RefreshAvailability() ;

/// @brief Method SelectAndScrollToCellWithIdx addr 0x2183288 size 0x324 virtual false final false
 void SelectAndScrollToCellWithIdx(int32_t idx) ;

/// @brief Method OnPointerEnter addr 0x2183608 size 0x54 virtual true final true
 void OnPointerEnter(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnPointerExit addr 0x2183990 size 0x68 virtual true final true
 void OnPointerExit(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method HandleAdditionalContentModelDidInvalidateData addr 0x2183d00 size 0x60 virtual false final false
 void HandleAdditionalContentModelDidInvalidateData() ;

/// @brief Method HandleVRPlatformHelperInputFocusCaptured addr 0x2183e0c size 0x4c virtual false final false
 void HandleVRPlatformHelperInputFocusCaptured() ;

/// @brief Method HandleCellSelectionDidChange addr 0x2183e58 size 0x4c4 virtual false final false
 void HandleCellSelectionDidChange(HMUI::SelectableCell selectableCell, HMUI::HMUI__SelectableCell__TransitionType transition, ::bs_hook::Il2CppWrapperType changeOwner) ;

/// @brief Method GetNumberOfCells addr 0x2183d60 size 0xac virtual true final true
 int32_t GetNumberOfCells() ;

/// @brief Method GetCellWidth addr 0x218431c size 0x8 virtual true final true
 float_t GetCellWidth() ;

/// @brief Method GetCellHeight addr 0x2184324 size 0x8 virtual true final true
 float_t GetCellHeight() ;

/// @brief Method CellForIdx addr 0x218432c size 0x294 virtual true final true
 UnityEngine::MonoBehaviour CellForIdx(GlobalNamespace::GridView gridView, int32_t idx) ;

static GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView New_ctor() ;

/// @brief Method .ctor addr 0x21845c0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AnnotatedBeatmapLevelCollectionsGridView, "", "AnnotatedBeatmapLevelCollectionsGridView");
