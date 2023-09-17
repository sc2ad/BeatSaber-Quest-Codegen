#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerExitHandler;
}
namespace UnityEngine::EventSystems {
class IDropHandler;
}
namespace UnityEngine::EventSystems {
class ISelectHandler;
}
namespace UnityEngine::EventSystems {
class IInitializePotentialDragHandler;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace UnityEngine::EventSystems {
class IPointerDownHandler;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine::EventSystems {
class IPointerUpHandler;
}
namespace UnityEngine::EventSystems {
class ISubmitHandler;
}
namespace UnityEngine::EventSystems {
class IUpdateSelectedHandler;
}
namespace UnityEngine::EventSystems {
class IDragHandler;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class IDeselectHandler;
}
namespace UnityEngine::EventSystems {
class IScrollHandler;
}
namespace UnityEngine::EventSystems {
class IPointerMoveHandler;
}
namespace UnityEngine::EventSystems {
class IEndDragHandler;
}
namespace UnityEngine::EventSystems {
class IMoveHandler;
}
namespace UnityEngine::EventSystems {
class ICancelHandler;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace UnityEngine::EventSystems {
class IBeginDragHandler;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
template<typename T1>
class ____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1;
}
namespace UnityEngine::EventSystems {
class ExecuteEvents;
}
namespace UnityEngine::EventSystems {
template<::cordl_internals::il2cpp_reference_type T1>
class ____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<T1>;
}
// Type: ::EventFunction`1
// Type: UnityEngine.EventSystems::ExecuteEvents
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13136))
// CS Name: UnityEngine.EventSystems.ExecuteEvents
class CORDL_TYPE ExecuteEvents : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename T1>
using EventFunction_1 = ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<T1>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ExecuteEvents() = default;

// Ctor Parameters [CppParam { name: "", ty: "ExecuteEvents", modifiers: " const&", def_value: None }]
constexpr ExecuteEvents(ExecuteEvents const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ExecuteEvents", modifiers: "&&", def_value: None }]
constexpr ExecuteEvents(ExecuteEvents&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ExecuteEvents(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ExecuteEvents& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ExecuteEvents& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ExecuteEvents& operator=(ExecuteEvents&& o) noexcept = default;
  constexpr ExecuteEvents& operator=(ExecuteEvents const& o) noexcept = default;
                


// Fields

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerMoveHandler> __declspec(property(get=__get_s_PointerMoveHandler, put=__set_s_PointerMoveHandler))  s_PointerMoveHandler;

static void __set_s_PointerMoveHandler(::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerMoveHandler> value) ;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerMoveHandler> __get_s_PointerMoveHandler() ;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerEnterHandler> __declspec(property(get=__get_s_PointerEnterHandler, put=__set_s_PointerEnterHandler))  s_PointerEnterHandler;

static void __set_s_PointerEnterHandler(::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerEnterHandler> value) ;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerEnterHandler> __get_s_PointerEnterHandler() ;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerExitHandler> __declspec(property(get=__get_s_PointerExitHandler, put=__set_s_PointerExitHandler))  s_PointerExitHandler;

static void __set_s_PointerExitHandler(::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerExitHandler> value) ;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerExitHandler> __get_s_PointerExitHandler() ;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerDownHandler> __declspec(property(get=__get_s_PointerDownHandler, put=__set_s_PointerDownHandler))  s_PointerDownHandler;

static void __set_s_PointerDownHandler(::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerDownHandler> value) ;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerDownHandler> __get_s_PointerDownHandler() ;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerUpHandler> __declspec(property(get=__get_s_PointerUpHandler, put=__set_s_PointerUpHandler))  s_PointerUpHandler;

static void __set_s_PointerUpHandler(::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerUpHandler> value) ;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerUpHandler> __get_s_PointerUpHandler() ;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerClickHandler> __declspec(property(get=__get_s_PointerClickHandler, put=__set_s_PointerClickHandler))  s_PointerClickHandler;

static void __set_s_PointerClickHandler(::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerClickHandler> value) ;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerClickHandler> __get_s_PointerClickHandler() ;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IInitializePotentialDragHandler> __declspec(property(get=__get_s_InitializePotentialDragHandler, put=__set_s_InitializePotentialDragHandler))  s_InitializePotentialDragHandler;

static void __set_s_InitializePotentialDragHandler(::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IInitializePotentialDragHandler> value) ;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IInitializePotentialDragHandler> __get_s_InitializePotentialDragHandler() ;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IBeginDragHandler> __declspec(property(get=__get_s_BeginDragHandler, put=__set_s_BeginDragHandler))  s_BeginDragHandler;

static void __set_s_BeginDragHandler(::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IBeginDragHandler> value) ;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IBeginDragHandler> __get_s_BeginDragHandler() ;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IDragHandler> __declspec(property(get=__get_s_DragHandler, put=__set_s_DragHandler))  s_DragHandler;

static void __set_s_DragHandler(::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IDragHandler> value) ;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IDragHandler> __get_s_DragHandler() ;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IEndDragHandler> __declspec(property(get=__get_s_EndDragHandler, put=__set_s_EndDragHandler))  s_EndDragHandler;

static void __set_s_EndDragHandler(::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IEndDragHandler> value) ;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IEndDragHandler> __get_s_EndDragHandler() ;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IDropHandler> __declspec(property(get=__get_s_DropHandler, put=__set_s_DropHandler))  s_DropHandler;

static void __set_s_DropHandler(::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IDropHandler> value) ;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IDropHandler> __get_s_DropHandler() ;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IScrollHandler> __declspec(property(get=__get_s_ScrollHandler, put=__set_s_ScrollHandler))  s_ScrollHandler;

static void __set_s_ScrollHandler(::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IScrollHandler> value) ;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IScrollHandler> __get_s_ScrollHandler() ;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IUpdateSelectedHandler> __declspec(property(get=__get_s_UpdateSelectedHandler, put=__set_s_UpdateSelectedHandler))  s_UpdateSelectedHandler;

static void __set_s_UpdateSelectedHandler(::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IUpdateSelectedHandler> value) ;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IUpdateSelectedHandler> __get_s_UpdateSelectedHandler() ;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::ISelectHandler> __declspec(property(get=__get_s_SelectHandler, put=__set_s_SelectHandler))  s_SelectHandler;

static void __set_s_SelectHandler(::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::ISelectHandler> value) ;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::ISelectHandler> __get_s_SelectHandler() ;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IDeselectHandler> __declspec(property(get=__get_s_DeselectHandler, put=__set_s_DeselectHandler))  s_DeselectHandler;

static void __set_s_DeselectHandler(::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IDeselectHandler> value) ;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IDeselectHandler> __get_s_DeselectHandler() ;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IMoveHandler> __declspec(property(get=__get_s_MoveHandler, put=__set_s_MoveHandler))  s_MoveHandler;

static void __set_s_MoveHandler(::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IMoveHandler> value) ;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IMoveHandler> __get_s_MoveHandler() ;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::ISubmitHandler> __declspec(property(get=__get_s_SubmitHandler, put=__set_s_SubmitHandler))  s_SubmitHandler;

static void __set_s_SubmitHandler(::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::ISubmitHandler> value) ;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::ISubmitHandler> __get_s_SubmitHandler() ;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::ICancelHandler> __declspec(property(get=__get_s_CancelHandler, put=__set_s_CancelHandler))  s_CancelHandler;

static void __set_s_CancelHandler(::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::ICancelHandler> value) ;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::ICancelHandler> __get_s_CancelHandler() ;

static ::System::Collections::Generic::List_1<::UnityEngine::Transform> __declspec(property(get=__get_s_InternalTransformList, put=__set_s_InternalTransformList))  s_InternalTransformList;

static void __set_s_InternalTransformList(::System::Collections::Generic::List_1<::UnityEngine::Transform> value) ;

static ::System::Collections::Generic::List_1<::UnityEngine::Transform> __get_s_InternalTransformList() ;


// Properties

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerMoveHandler> __declspec(property(get=get_pointerMoveHandler))  pointerMoveHandler;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerEnterHandler> __declspec(property(get=get_pointerEnterHandler))  pointerEnterHandler;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerExitHandler> __declspec(property(get=get_pointerExitHandler))  pointerExitHandler;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerDownHandler> __declspec(property(get=get_pointerDownHandler))  pointerDownHandler;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerUpHandler> __declspec(property(get=get_pointerUpHandler))  pointerUpHandler;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerClickHandler> __declspec(property(get=get_pointerClickHandler))  pointerClickHandler;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IInitializePotentialDragHandler> __declspec(property(get=get_initializePotentialDrag))  initializePotentialDrag;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IBeginDragHandler> __declspec(property(get=get_beginDragHandler))  beginDragHandler;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IDragHandler> __declspec(property(get=get_dragHandler))  dragHandler;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IEndDragHandler> __declspec(property(get=get_endDragHandler))  endDragHandler;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IDropHandler> __declspec(property(get=get_dropHandler))  dropHandler;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IScrollHandler> __declspec(property(get=get_scrollHandler))  scrollHandler;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IUpdateSelectedHandler> __declspec(property(get=get_updateSelectedHandler))  updateSelectedHandler;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::ISelectHandler> __declspec(property(get=get_selectHandler))  selectHandler;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IDeselectHandler> __declspec(property(get=get_deselectHandler))  deselectHandler;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IMoveHandler> __declspec(property(get=get_moveHandler))  moveHandler;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::ISubmitHandler> __declspec(property(get=get_submitHandler))  submitHandler;

static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::ICancelHandler> __declspec(property(get=get_cancelHandler))  cancelHandler;


// Methods

/// @brief Method ValidateEventData addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T ValidateEventData(::UnityEngine::EventSystems::BaseEventData data) ;

/// @brief Method Execute addr 0x2c1f7f8 size 0xf4 virtual false final false
static void Execute(::UnityEngine::EventSystems::IPointerMoveHandler handler, ::UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method Execute addr 0x2c1f8ec size 0xf4 virtual false final false
static void Execute(::UnityEngine::EventSystems::IPointerEnterHandler handler, ::UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method Execute addr 0x2c1f9e0 size 0xf4 virtual false final false
static void Execute(::UnityEngine::EventSystems::IPointerExitHandler handler, ::UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method Execute addr 0x2c1fad4 size 0xf4 virtual false final false
static void Execute(::UnityEngine::EventSystems::IPointerDownHandler handler, ::UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method Execute addr 0x2c1fbc8 size 0xf4 virtual false final false
static void Execute(::UnityEngine::EventSystems::IPointerUpHandler handler, ::UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method Execute addr 0x2c1fcbc size 0xf4 virtual false final false
static void Execute(::UnityEngine::EventSystems::IPointerClickHandler handler, ::UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method Execute addr 0x2c1fdb0 size 0xf4 virtual false final false
static void Execute(::UnityEngine::EventSystems::IInitializePotentialDragHandler handler, ::UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method Execute addr 0x2c1fea4 size 0xf4 virtual false final false
static void Execute(::UnityEngine::EventSystems::IBeginDragHandler handler, ::UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method Execute addr 0x2c1ff98 size 0xf4 virtual false final false
static void Execute(::UnityEngine::EventSystems::IDragHandler handler, ::UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method Execute addr 0x2c2008c size 0xf4 virtual false final false
static void Execute(::UnityEngine::EventSystems::IEndDragHandler handler, ::UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method Execute addr 0x2c20180 size 0xf4 virtual false final false
static void Execute(::UnityEngine::EventSystems::IDropHandler handler, ::UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method Execute addr 0x2c20274 size 0xf4 virtual false final false
static void Execute(::UnityEngine::EventSystems::IScrollHandler handler, ::UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method Execute addr 0x2c20368 size 0xa4 virtual false final false
static void Execute(::UnityEngine::EventSystems::IUpdateSelectedHandler handler, ::UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method Execute addr 0x2c2040c size 0xa4 virtual false final false
static void Execute(::UnityEngine::EventSystems::ISelectHandler handler, ::UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method Execute addr 0x2c204b0 size 0xa4 virtual false final false
static void Execute(::UnityEngine::EventSystems::IDeselectHandler handler, ::UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method Execute addr 0x2c20554 size 0xf4 virtual false final false
static void Execute(::UnityEngine::EventSystems::IMoveHandler handler, ::UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method Execute addr 0x2c20648 size 0xa4 virtual false final false
static void Execute(::UnityEngine::EventSystems::ISubmitHandler handler, ::UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method Execute addr 0x2c206ec size 0xa4 virtual false final false
static void Execute(::UnityEngine::EventSystems::ICancelHandler handler, ::UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method get_pointerMoveHandler addr 0x2c20790 size 0x58 virtual false final false
static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerMoveHandler> get_pointerMoveHandler() ;

/// @brief Method get_pointerEnterHandler addr 0x2c207e8 size 0x58 virtual false final false
static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerEnterHandler> get_pointerEnterHandler() ;

/// @brief Method get_pointerExitHandler addr 0x2c20840 size 0x58 virtual false final false
static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerExitHandler> get_pointerExitHandler() ;

/// @brief Method get_pointerDownHandler addr 0x2c20898 size 0x58 virtual false final false
static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerDownHandler> get_pointerDownHandler() ;

/// @brief Method get_pointerUpHandler addr 0x2c208f0 size 0x58 virtual false final false
static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerUpHandler> get_pointerUpHandler() ;

/// @brief Method get_pointerClickHandler addr 0x2c20948 size 0x58 virtual false final false
static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IPointerClickHandler> get_pointerClickHandler() ;

/// @brief Method get_initializePotentialDrag addr 0x2c209a0 size 0x58 virtual false final false
static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IInitializePotentialDragHandler> get_initializePotentialDrag() ;

/// @brief Method get_beginDragHandler addr 0x2c209f8 size 0x58 virtual false final false
static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IBeginDragHandler> get_beginDragHandler() ;

/// @brief Method get_dragHandler addr 0x2c20a50 size 0x58 virtual false final false
static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IDragHandler> get_dragHandler() ;

/// @brief Method get_endDragHandler addr 0x2c20aa8 size 0x58 virtual false final false
static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IEndDragHandler> get_endDragHandler() ;

/// @brief Method get_dropHandler addr 0x2c20b00 size 0x58 virtual false final false
static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IDropHandler> get_dropHandler() ;

/// @brief Method get_scrollHandler addr 0x2c20b58 size 0x58 virtual false final false
static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IScrollHandler> get_scrollHandler() ;

/// @brief Method get_updateSelectedHandler addr 0x2c20bb0 size 0x58 virtual false final false
static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IUpdateSelectedHandler> get_updateSelectedHandler() ;

/// @brief Method get_selectHandler addr 0x2c20c08 size 0x58 virtual false final false
static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::ISelectHandler> get_selectHandler() ;

/// @brief Method get_deselectHandler addr 0x2c20c60 size 0x58 virtual false final false
static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IDeselectHandler> get_deselectHandler() ;

/// @brief Method get_moveHandler addr 0x2c20cb8 size 0x58 virtual false final false
static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::IMoveHandler> get_moveHandler() ;

/// @brief Method get_submitHandler addr 0x2c20d10 size 0x58 virtual false final false
static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::ISubmitHandler> get_submitHandler() ;

/// @brief Method get_cancelHandler addr 0x2c20d68 size 0x58 virtual false final false
static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<::UnityEngine::EventSystems::ICancelHandler> get_cancelHandler() ;

/// @brief Method GetEventChain addr 0x2c20dc0 size 0x194 virtual false final false
static void GetEventChain(::UnityEngine::GameObject root, ::System::Collections::Generic::IList_1<::UnityEngine::Transform> eventChain) ;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool Execute(::UnityEngine::GameObject target, ::UnityEngine::EventSystems::BaseEventData eventData, ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<T> functor) ;

/// @brief Method ExecuteHierarchy addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::UnityEngine::GameObject ExecuteHierarchy(::UnityEngine::GameObject root, ::UnityEngine::EventSystems::BaseEventData eventData, ::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<T> callbackFunction) ;

/// @brief Method ShouldSendToComponent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool ShouldSendToComponent(::UnityEngine::Component component) ;

/// @brief Method GetEventList addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void GetEventList(::UnityEngine::GameObject go, ::System::Collections::Generic::IList_1<::UnityEngine::EventSystems::IEventSystemHandler> results) ;

/// @brief Method CanHandleEvent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool CanHandleEvent(::UnityEngine::GameObject go) ;

/// @brief Method GetEventHandler addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::UnityEngine::GameObject GetEventHandler(::UnityEngine::GameObject root) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
// Type: ::EventFunction`1
namespace UnityEngine::EventSystems {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(13135))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13135), inst: 2 })
// CS Name: UnityEngine.EventSystems.ExecuteEvents::EventFunction`1
class CORDL_TYPE ____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1<T1> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1(____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1(____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1& operator=(____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1&& o) noexcept = default;
  constexpr ____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1& operator=(____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 handler, ::UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::IAsyncResult BeginInvoke(T1 handler, ::UnityEngine::EventSystems::BaseEventData eventData, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::EventSystems::____UnityEngine__EventSystems__ExecuteEvents__EventFunction_1, "UnityEngine.EventSystems", "ExecuteEvents/EventFunction`1");
NEED_NO_BOX(::UnityEngine::EventSystems::ExecuteEvents);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::ExecuteEvents, "UnityEngine.EventSystems", "ExecuteEvents");
