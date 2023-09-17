#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace TMPro {
class TextMeshProUGUI;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace UnityEngine {
struct Color;
}
namespace HMUI {
class ImageView;
}
namespace GlobalNamespace {
class AdditionalContentModel;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class IAnnotatedBeatmapLevelCollection;
}
namespace HMUI {
struct ____HMUI__SelectableCell__TransitionType;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__AdditionalContentModel__EntitlementStatus;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Forward declare root types
namespace GlobalNamespace {
class AnnotatedBeatmapLevelCollectionCell;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22;
}
// Type: ::<RefreshAvailabilityAsync>d__22
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5507))
// CS Name: AnnotatedBeatmapLevelCollectionCell::<RefreshAvailabilityAsync>d__22
struct CORDL_TYPE ____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell", modifiers: "", def_value: None }, CppParam { name: "contentModel", ty: "::GlobalNamespace::AdditionalContentModel", modifiers: "", def_value: None }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_numberOfOwnedLevels_5__3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_error_5__4", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__7__wrap4", ty: "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell __4__this, ::GlobalNamespace::AdditionalContentModel contentModel, ::System::Threading::CancellationToken _cancellationToken_5__2, int32_t _numberOfOwnedLevels_5__3, bool _error_5__4, ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel> __7__wrap4, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> __u__1) noexcept;


                    constexpr ____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22(____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22 const&) = default;
                    constexpr ____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22(____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22&&) = default;
                    constexpr ____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22& operator=(____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22& operator=(____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x58};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder value) ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __get___t__builder() const;

 ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell value) ;

constexpr ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell __get___4__this() const;

 ::GlobalNamespace::AdditionalContentModel __declspec(property(get=__get_contentModel, put=__set_contentModel))  contentModel;

constexpr void __set_contentModel(::GlobalNamespace::AdditionalContentModel value) ;

constexpr ::GlobalNamespace::AdditionalContentModel __get_contentModel() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get__cancellationToken_5__2, put=__set__cancellationToken_5__2))  _cancellationToken_5__2;

constexpr void __set__cancellationToken_5__2(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get__cancellationToken_5__2() const;

 int32_t __declspec(property(get=__get__numberOfOwnedLevels_5__3, put=__set__numberOfOwnedLevels_5__3))  _numberOfOwnedLevels_5__3;

constexpr void __set__numberOfOwnedLevels_5__3(int32_t value) ;

constexpr int32_t __get__numberOfOwnedLevels_5__3() const;

 bool __declspec(property(get=__get__error_5__4, put=__set__error_5__4))  _error_5__4;

constexpr void __set__error_5__4(bool value) ;

constexpr bool __get__error_5__4() const;

 ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel> __declspec(property(get=__get___7__wrap4, put=__set___7__wrap4))  __7__wrap4;

constexpr void __set___7__wrap4(::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel> value) ;

constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel> __get___7__wrap4() const;

 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21219f8 size 0xd04 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21226fc size 0xc virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::AnnotatedBeatmapLevelCollectionCell
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13704))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5508))
// CS Name: AnnotatedBeatmapLevelCollectionCell
class CORDL_TYPE AnnotatedBeatmapLevelCollectionCell : public ::HMUI::SelectableCell {
public:
// Declarations
using _RefreshAvailabilityAsync_d__22 = ::GlobalNamespace::____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd0};

virtual ~AnnotatedBeatmapLevelCollectionCell() = default;

// Ctor Parameters [CppParam { name: "", ty: "AnnotatedBeatmapLevelCollectionCell", modifiers: " const&", def_value: None }]
constexpr AnnotatedBeatmapLevelCollectionCell(AnnotatedBeatmapLevelCollectionCell const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AnnotatedBeatmapLevelCollectionCell", modifiers: "&&", def_value: None }]
constexpr AnnotatedBeatmapLevelCollectionCell(AnnotatedBeatmapLevelCollectionCell&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AnnotatedBeatmapLevelCollectionCell(void* ptr) noexcept : ::HMUI::SelectableCell(ptr) {
}


  constexpr AnnotatedBeatmapLevelCollectionCell& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AnnotatedBeatmapLevelCollectionCell& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AnnotatedBeatmapLevelCollectionCell& operator=(AnnotatedBeatmapLevelCollectionCell&& o) noexcept = default;
  constexpr AnnotatedBeatmapLevelCollectionCell& operator=(AnnotatedBeatmapLevelCollectionCell const& o) noexcept = default;
                


// Fields

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__infoText, put=__set__infoText))  _infoText;

constexpr void __set__infoText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__infoText() const;

 ::HMUI::ImageView __declspec(property(get=__get__coverImage, put=__set__coverImage))  _coverImage;

constexpr void __set__coverImage(::HMUI::ImageView value) ;

constexpr ::HMUI::ImageView __get__coverImage() const;

 ::HMUI::ImageView __declspec(property(get=__get__selectionImage, put=__set__selectionImage))  _selectionImage;

constexpr void __set__selectionImage(::HMUI::ImageView value) ;

constexpr ::HMUI::ImageView __get__selectionImage() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__downloadIconObject, put=__set__downloadIconObject))  _downloadIconObject;

constexpr void __set__downloadIconObject(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__downloadIconObject() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__newBadgeObject, put=__set__newBadgeObject))  _newBadgeObject;

constexpr void __set__newBadgeObject(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__newBadgeObject() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__updatedBadgeObject, put=__set__updatedBadgeObject))  _updatedBadgeObject;

constexpr void __set__updatedBadgeObject(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__updatedBadgeObject() const;

 ::UnityEngine::Color __declspec(property(get=__get__selectedColor0, put=__set__selectedColor0))  _selectedColor0;

constexpr void __set__selectedColor0(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__selectedColor0() const;

 ::UnityEngine::Color __declspec(property(get=__get__selectedColor1, put=__set__selectedColor1))  _selectedColor1;

constexpr void __set__selectedColor1(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__selectedColor1() const;

 ::UnityEngine::Color __declspec(property(get=__get__highlightedColor0, put=__set__highlightedColor0))  _highlightedColor0;

constexpr void __set__highlightedColor0(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__highlightedColor0() const;

 ::UnityEngine::Color __declspec(property(get=__get__highlightedColor1, put=__set__highlightedColor1))  _highlightedColor1;

constexpr void __set__highlightedColor1(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__highlightedColor1() const;

 int32_t __declspec(property(get=__get__cellIndex_k__BackingField, put=__set__cellIndex_k__BackingField))  _cellIndex_k__BackingField;

constexpr void __set__cellIndex_k__BackingField(int32_t value) ;

constexpr int32_t __get__cellIndex_k__BackingField() const;

 ::GlobalNamespace::IAnnotatedBeatmapLevelCollection __declspec(property(get=__get__annotatedBeatmapLevelCollection, put=__set__annotatedBeatmapLevelCollection))  _annotatedBeatmapLevelCollection;

constexpr void __set__annotatedBeatmapLevelCollection(::GlobalNamespace::IAnnotatedBeatmapLevelCollection value) ;

constexpr ::GlobalNamespace::IAnnotatedBeatmapLevelCollection __get__annotatedBeatmapLevelCollection() const;

 ::System::Threading::CancellationTokenSource __declspec(property(get=__get__cancellationTokenSource, put=__set__cancellationTokenSource))  _cancellationTokenSource;

constexpr void __set__cancellationTokenSource(::System::Threading::CancellationTokenSource value) ;

constexpr ::System::Threading::CancellationTokenSource __get__cancellationTokenSource() const;


// Properties

 int32_t __declspec(property(get=get_cellIndex, put=set_cellIndex))  cellIndex;


// Methods

/// @brief Method get_cellIndex addr 0x21213d4 size 0x8 virtual false final false
 int32_t get_cellIndex() ;

/// @brief Method set_cellIndex addr 0x21213dc size 0x8 virtual false final false
 void set_cellIndex(int32_t value) ;

/// @brief Method SetData addr 0x21213e4 size 0x2e8 virtual false final false
 void SetData(::GlobalNamespace::IAnnotatedBeatmapLevelCollection annotatedBeatmapLevelCollection, bool isPromoted, bool isUpdated) ;

/// @brief Method InternalToggle addr 0x2121800 size 0x24 virtual true final false
 void InternalToggle() ;

/// @brief Method SelectionDidChange addr 0x2121824 size 0x4 virtual true final false
 void SelectionDidChange(::HMUI::____HMUI__SelectableCell__TransitionType transitionType) ;

/// @brief Method HighlightDidChange addr 0x2121914 size 0x4 virtual true final false
 void HighlightDidChange(::HMUI::____HMUI__SelectableCell__TransitionType transitionType) ;

/// @brief Method RefreshVisuals addr 0x2121828 size 0xec virtual false final false
 void RefreshVisuals() ;

/// @brief Method GetInfoText addr 0x21216cc size 0xf0 virtual false final false
 ::StringW GetInfoText(::StringW name, int32_t songs, int32_t purchased) ;

/// @brief Method RefreshAvailabilityAsync addr 0x2121918 size 0xa4 virtual false final false
 void RefreshAvailabilityAsync(::GlobalNamespace::AdditionalContentModel contentModel) ;

/// @brief Method SetDownloadIconVisible addr 0x21217bc size 0x44 virtual false final false
 void SetDownloadIconVisible(bool visible) ;

/// @brief Method CancelAsyncOperations addr 0x21219bc size 0x14 virtual false final false
 void CancelAsyncOperations() ;

// Ctor Parameters []
explicit AnnotatedBeatmapLevelCollectionCell() ;

/// @brief Method .ctor addr 0x21219d0 size 0x28 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell, "", "AnnotatedBeatmapLevelCollectionCell");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22, "", "AnnotatedBeatmapLevelCollectionCell/<RefreshAvailabilityAsync>d__22");
