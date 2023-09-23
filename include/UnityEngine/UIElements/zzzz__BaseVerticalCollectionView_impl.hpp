#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindableElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVerticalCollectionView_def.hpp"
#include "UnityEngine/UIElements/zzzz__SelectionType_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerCancelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyboardNavigationManipulator_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__AlternatingRowBackground_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__CollectionVirtualizationMethod_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerMoveEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__CollectionViewController_def.hpp"
#include "UnityEngine/UIElements/zzzz__ListViewDragger_def.hpp"
#include "UnityEngine/UIElements/zzzz__CustomStyleProperty_1_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "UnityEngine/UIElements/zzzz__AttachToPanelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerUpEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerDownEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__DetachFromPanelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__GeometryChangedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__ScrollView_def.hpp"
#include "UnityEngine/UIElements/zzzz__CustomStyleResolvedEvent_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UIElements/zzzz__ReusableCollectionItem_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyboardNavigationOperation_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPointerEvent_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/UIElements/zzzz__CollectionVirtualizationController_def.hpp"
#include "UnityEngine/UIElements/zzzz__ICollectionDragAndDropController_def.hpp"
// Ctor Parameters [CppParam { name: "__4__this", ty: "UnityEngine::UIElements::BaseVerticalCollectionView", modifiers: "", def_value: Some("csnull") }, CppParam { name: "shiftKey", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::UnityEngine__UIElements__BaseVerticalCollectionView____c__DisplayClass164_0::UnityEngine__UIElements__BaseVerticalCollectionView____c__DisplayClass164_0(UnityEngine::UIElements::BaseVerticalCollectionView __4__this, bool shiftKey) noexcept : ::bs_hook::ValueTypeWrapper() {this->__4__this = __4__this;
this->shiftKey = shiftKey;
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__BaseVerticalCollectionView____c__DisplayClass164_0::__set___4__this(UnityEngine::UIElements::BaseVerticalCollectionView value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::BaseVerticalCollectionView, 0x0>(this->__instance, std::forward<UnityEngine::UIElements::BaseVerticalCollectionView>(value));
}
constexpr UnityEngine::UIElements::BaseVerticalCollectionView UnityEngine::UIElements::UnityEngine__UIElements__BaseVerticalCollectionView____c__DisplayClass164_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::BaseVerticalCollectionView, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__BaseVerticalCollectionView____c__DisplayClass164_0::__set_shiftKey(bool value)  {
::cordl_internals::setInstanceField<bool, 0x8>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::UnityEngine__UIElements__BaseVerticalCollectionView____c__DisplayClass164_0::__get_shiftKey() const {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->__instance);
}
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.add_onItemsChosen
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(System::Action_1<System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType>>)>(&UnityEngine::UIElements::BaseVerticalCollectionView::add_onItemsChosen)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2cc8678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "add_onItemsChosen",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.remove_onItemsChosen
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(System::Action_1<System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType>>)>(&UnityEngine::UIElements::BaseVerticalCollectionView::remove_onItemsChosen)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2cc872c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "remove_onItemsChosen",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.add_onSelectionChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(System::Action_1<System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType>>)>(&UnityEngine::UIElements::BaseVerticalCollectionView::add_onSelectionChange)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2cc87e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "add_onSelectionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.remove_onSelectionChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(System::Action_1<System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType>>)>(&UnityEngine::UIElements::BaseVerticalCollectionView::remove_onSelectionChange)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2cc8894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "remove_onSelectionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.get_getItemId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Func_2<int32_t,int32_t> (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::get_getItemId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cc8948;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_getItemId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.set_getItemId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(System::Func_2<int32_t,int32_t>)>(&UnityEngine::UIElements::BaseVerticalCollectionView::set_getItemId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cc8950;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "set_getItemId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<int32_t,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.get_itemsSource
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IList (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::get_itemsSource)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2cc89c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_itemsSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.set_itemsSource
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(System::Collections::IList)>(&UnityEngine::UIElements::BaseVerticalCollectionView::set_itemsSource)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2cc89dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "set_itemsSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.get_sourceIncludesArraySize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::get_sourceIncludesArraySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cc8a58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::BaseVerticalCollectionView),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                                  100
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.get_makeItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Func_1<UnityEngine::UIElements::VisualElement> (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::get_makeItem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cc8a60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_makeItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.set_makeItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(System::Func_1<UnityEngine::UIElements::VisualElement>)>(&UnityEngine::UIElements::BaseVerticalCollectionView::set_makeItem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cc8a68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "set_makeItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<UnityEngine::UIElements::VisualElement>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.get_bindItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Action_2<UnityEngine::UIElements::VisualElement,int32_t> (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::get_bindItem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cc8adc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_bindItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.set_bindItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(System::Action_2<UnityEngine::UIElements::VisualElement,int32_t>)>(&UnityEngine::UIElements::BaseVerticalCollectionView::set_bindItem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cc8ae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "set_bindItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<UnityEngine::UIElements::VisualElement,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.get_unbindItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Action_2<UnityEngine::UIElements::VisualElement,int32_t> (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::get_unbindItem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cc8aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_unbindItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.set_unbindItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(System::Action_2<UnityEngine::UIElements::VisualElement,int32_t>)>(&UnityEngine::UIElements::BaseVerticalCollectionView::set_unbindItem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cc8af4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "set_unbindItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<UnityEngine::UIElements::VisualElement,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.get_destroyItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Action_1<UnityEngine::UIElements::VisualElement> (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::get_destroyItem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cc8afc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_destroyItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.set_destroyItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(System::Action_1<UnityEngine::UIElements::VisualElement>)>(&UnityEngine::UIElements::BaseVerticalCollectionView::set_destroyItem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cc8b04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "set_destroyItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::UIElements::VisualElement>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.get_contentContainer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::VisualElement (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::get_contentContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cc8b0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::BaseVerticalCollectionView),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                                  95
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.get_selectionType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::SelectionType (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::get_selectionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cc8b14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_selectionType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.set_selectionType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(UnityEngine::UIElements::SelectionType)>(&UnityEngine::UIElements::BaseVerticalCollectionView::set_selectionType)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2cc8b1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "set_selectionType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::SelectionType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.get_selectedIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::get_selectedIndex)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2cc8cdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_selectedIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.set_selectedIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(int32_t)>(&UnityEngine::UIElements::BaseVerticalCollectionView::set_selectedIndex)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2cc8d50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "set_selectedIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.get_selectedIndices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<int32_t> (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::get_selectedIndices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cc8d54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_selectedIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.get_activeItems
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::ReusableCollectionItem> (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::get_activeItems)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2cc8d5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_activeItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.get_scrollView
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::ScrollView (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::get_scrollView)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cc8dd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_scrollView",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.get_dragger
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::ListViewDragger (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::get_dragger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cc8ddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_dragger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.get_viewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::CollectionViewController (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::get_viewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cc8de4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_viewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.get_virtualizationController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::CollectionVirtualizationController (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::get_virtualizationController)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2cc8dec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_virtualizationController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.ResolveItemHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::UIElements::BaseVerticalCollectionView::*)(float_t)>(&UnityEngine::UIElements::BaseVerticalCollectionView::ResolveItemHeight)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2cc8e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "ResolveItemHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.set_showBorder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(bool)>(&UnityEngine::UIElements::BaseVerticalCollectionView::set_showBorder)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2cc8f04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "set_showBorder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.get_reorderable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::get_reorderable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2cc8f84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_reorderable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.set_reorderable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(bool)>(&UnityEngine::UIElements::BaseVerticalCollectionView::set_reorderable)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2cc9074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "set_reorderable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.set_horizontalScrollingEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(bool)>(&UnityEngine::UIElements::BaseVerticalCollectionView::set_horizontalScrollingEnabled)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2cc9234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "set_horizontalScrollingEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.get_showAlternatingRowBackgrounds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::AlternatingRowBackground (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::get_showAlternatingRowBackgrounds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cc927c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_showAlternatingRowBackgrounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.set_showAlternatingRowBackgrounds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(UnityEngine::UIElements::AlternatingRowBackground)>(&UnityEngine::UIElements::BaseVerticalCollectionView::set_showAlternatingRowBackgrounds)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2cc9284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "set_showAlternatingRowBackgrounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::AlternatingRowBackground>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.get_virtualizationMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::CollectionVirtualizationMethod (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::get_virtualizationMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cc929c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_virtualizationMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.set_virtualizationMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(UnityEngine::UIElements::CollectionVirtualizationMethod)>(&UnityEngine::UIElements::BaseVerticalCollectionView::set_virtualizationMethod)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cc92a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "set_virtualizationMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::CollectionVirtualizationMethod>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.get_fixedItemHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::get_fixedItemHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cc92e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_fixedItemHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.set_fixedItemHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(float_t)>(&UnityEngine::UIElements::BaseVerticalCollectionView::set_fixedItemHeight)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2cc92e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "set_fixedItemHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.get_lastHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::get_lastHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cc93e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_lastHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.CreateVirtualizationController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::CreateVirtualizationController)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2cc93ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::BaseVerticalCollectionView),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                                  101
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.GetOrCreateVirtualizationController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::CollectionVirtualizationController (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::GetOrCreateVirtualizationController)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2cc8e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "GetOrCreateVirtualizationController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.GetOrCreateViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::CollectionViewController (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::GetOrCreateViewController)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2cc8a28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "GetOrCreateViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.CreateViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::CreateViewController)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2cc9434;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::BaseVerticalCollectionView),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                                  102
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.SetViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(UnityEngine::UIElements::CollectionViewController)>(&UnityEngine::UIElements::BaseVerticalCollectionView::SetViewController)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2cc9498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "SetViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::CollectionViewController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.CreateDragger
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::ListViewDragger (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::CreateDragger)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2cc9528;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::BaseVerticalCollectionView),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                                  103
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.InitializeDragAndDropController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::InitializeDragAndDropController)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2cc91bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "InitializeDragAndDropController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.CreateDragAndDropController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::ICollectionDragAndDropController (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::CreateDragAndDropController)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::BaseVerticalCollectionView),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                                  104
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::_ctor)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x2cc958c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.HasValidDataAndBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::HasValidDataAndBindings)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2cc9b2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "HasValidDataAndBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.OnItemIndexChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(int32_t, int32_t)>(&UnityEngine::UIElements::BaseVerticalCollectionView::OnItemIndexChanged)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2cc9b64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "OnItemIndexChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.OnItemsSourceChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::OnItemsSourceChanged)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2cc9d48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "OnItemsSourceChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.RefreshItems
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::RefreshItems)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2cc8958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "RefreshItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.Rebuild
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::Rebuild)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2cc8a70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "Rebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.RefreshSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::RefreshSelection)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x2cc9dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "RefreshSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.PostRefresh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::PostRefresh)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2cca058;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::BaseVerticalCollectionView),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                                  105
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.ScrollToItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(int32_t)>(&UnityEngine::UIElements::BaseVerticalCollectionView::ScrollToItem)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2cca224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "ScrollToItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.OnScroll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(UnityEngine::Vector2)>(&UnityEngine::UIElements::BaseVerticalCollectionView::OnScroll)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2cca2b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "OnScroll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.Resize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(UnityEngine::Vector2, int32_t)>(&UnityEngine::UIElements::BaseVerticalCollectionView::Resize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2cca184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.OnAttachToPanel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(UnityEngine::UIElements::AttachToPanelEvent)>(&UnityEngine::UIElements::BaseVerticalCollectionView::OnAttachToPanel)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x2cca344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "OnAttachToPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::AttachToPanelEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.OnDetachFromPanel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(UnityEngine::UIElements::DetachFromPanelEvent)>(&UnityEngine::UIElements::BaseVerticalCollectionView::OnDetachFromPanel)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x2cca6a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "OnDetachFromPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::DetachFromPanelEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.Apply
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::BaseVerticalCollectionView::*)(UnityEngine::UIElements::KeyboardNavigationOperation, bool)>(&UnityEngine::UIElements::BaseVerticalCollectionView::Apply)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x2cca968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "Apply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::KeyboardNavigationOperation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.Apply
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(UnityEngine::UIElements::KeyboardNavigationOperation, UnityEngine::UIElements::EventBase)>(&UnityEngine::UIElements::BaseVerticalCollectionView::Apply)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2ccb434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "Apply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::KeyboardNavigationOperation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::EventBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.OnPointerMove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(UnityEngine::UIElements::PointerMoveEvent)>(&UnityEngine::UIElements::BaseVerticalCollectionView::OnPointerMove)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2ccb530;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "OnPointerMove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::PointerMoveEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.OnPointerDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(UnityEngine::UIElements::PointerDownEvent)>(&UnityEngine::UIElements::BaseVerticalCollectionView::OnPointerDown)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2ccbfa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "OnPointerDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::PointerDownEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.OnPointerCancel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(UnityEngine::UIElements::PointerCancelEvent)>(&UnityEngine::UIElements::BaseVerticalCollectionView::OnPointerCancel)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2ccc060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "OnPointerCancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::PointerCancelEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.OnPointerUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(UnityEngine::UIElements::PointerUpEvent)>(&UnityEngine::UIElements::BaseVerticalCollectionView::OnPointerUp)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2ccc0ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "OnPointerUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::PointerUpEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.ProcessPointerDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(UnityEngine::UIElements::IPointerEvent)>(&UnityEngine::UIElements::BaseVerticalCollectionView::ProcessPointerDown)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x2ccbbac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "ProcessPointerDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IPointerEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.ProcessPointerUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(UnityEngine::UIElements::IPointerEvent)>(&UnityEngine::UIElements::BaseVerticalCollectionView::ProcessPointerUp)> {
  constexpr static std::size_t size = 0x5f4;
  constexpr static std::size_t addrs = 0x2ccb5b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "ProcessPointerUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IPointerEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.DoSelect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(UnityEngine::Vector2, int32_t, bool, bool)>(&UnityEngine::UIElements::BaseVerticalCollectionView::DoSelect)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x2ccc1a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "DoSelect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.DoRangeSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(int32_t)>(&UnityEngine::UIElements::BaseVerticalCollectionView::DoRangeSelection)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2ccc520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "DoRangeSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.ProcessSingleClick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(int32_t)>(&UnityEngine::UIElements::BaseVerticalCollectionView::ProcessSingleClick)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ccc444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "ProcessSingleClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.SelectAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::SelectAll)> {
  constexpr static std::size_t size = 0x5e4;
  constexpr static std::size_t addrs = 0x2ccad1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "SelectAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.AddToSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(int32_t)>(&UnityEngine::UIElements::BaseVerticalCollectionView::AddToSelection)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2ccc4a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "AddToSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.AddToSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(System::Collections::Generic::IList_1<int32_t>)>(&UnityEngine::UIElements::BaseVerticalCollectionView::AddToSelection)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x2ccca1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "AddToSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.AddToSelectionWithoutValidation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(int32_t)>(&UnityEngine::UIElements::BaseVerticalCollectionView::AddToSelectionWithoutValidation)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x2ccce28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "AddToSelectionWithoutValidation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.RemoveFromSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(int32_t)>(&UnityEngine::UIElements::BaseVerticalCollectionView::RemoveFromSelection)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2ccc448;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "RemoveFromSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.RemoveFromSelectionWithoutValidation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(int32_t)>(&UnityEngine::UIElements::BaseVerticalCollectionView::RemoveFromSelectionWithoutValidation)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x2ccd308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "RemoveFromSelectionWithoutValidation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.SetSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(int32_t)>(&UnityEngine::UIElements::BaseVerticalCollectionView::SetSelection)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2cc8c54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "SetSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.SetSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(System::Collections::Generic::IEnumerable_1<int32_t>)>(&UnityEngine::UIElements::BaseVerticalCollectionView::SetSelection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ccd714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "SetSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.SetSelectionWithoutNotify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(System::Collections::Generic::IEnumerable_1<int32_t>)>(&UnityEngine::UIElements::BaseVerticalCollectionView::SetSelectionWithoutNotify)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ccda58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "SetSelectionWithoutNotify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.SetSelectionInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(System::Collections::Generic::IEnumerable_1<int32_t>, bool)>(&UnityEngine::UIElements::BaseVerticalCollectionView::SetSelectionInternal)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x2ccd71c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "SetSelectionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.NotifyOfSelectionChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::NotifyOfSelectionChange)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2cccdac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "NotifyOfSelectionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.ClearSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::ClearSelection)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2cc8bc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "ClearSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.ClearSelectionWithoutValidation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::ClearSelectionWithoutValidation)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x2ccc6bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "ClearSelectionWithoutValidation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.OnViewDataReady
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::OnViewDataReady)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2ccda60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::BaseVerticalCollectionView),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                                  92
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.ExecuteDefaultAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(UnityEngine::UIElements::EventBase)>(&UnityEngine::UIElements::BaseVerticalCollectionView::ExecuteDefaultAction)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x2ccda94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::BaseVerticalCollectionView),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.OnSizeChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(UnityEngine::UIElements::GeometryChangedEvent)>(&UnityEngine::UIElements::BaseVerticalCollectionView::OnSizeChanged)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x2ccde0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "OnSizeChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::GeometryChangedEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.OnCustomStyleResolved
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(UnityEngine::UIElements::CustomStyleResolvedEvent)>(&UnityEngine::UIElements::BaseVerticalCollectionView::OnCustomStyleResolved)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2ccdfc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "OnCustomStyleResolved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::CustomStyleResolvedEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2cce1b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)()>(&UnityEngine::UIElements::BaseVerticalCollectionView::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2cce1b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView.__ctor_b__143_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(float_t)>(&UnityEngine::UIElements::BaseVerticalCollectionView::__ctor_b__143_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cce464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "<.ctor>b__143_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::BaseVerticalCollectionView._Apply_g__HandleSelectionAndScroll_164_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseVerticalCollectionView::*)(int32_t, ByRef<UnityEngine::UIElements::UnityEngine__UIElements__BaseVerticalCollectionView____c__DisplayClass164_0>)>(&UnityEngine::UIElements::BaseVerticalCollectionView::_Apply_g__HandleSelectionAndScroll_164_0)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2ccb300;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "<Apply>g__HandleSelectionAndScroll|164_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::UIElements::UnityEngine__UIElements__BaseVerticalCollectionView____c__DisplayClass164_0>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::ISerializationCallbackReceiver
constexpr  UnityEngine::UIElements::BaseVerticalCollectionView::operator UnityEngine::ISerializationCallbackReceiver() const noexcept {
return UnityEngine::ISerializationCallbackReceiver(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_onItemsChosen(System::Action_1<System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType>> value)  {
::cordl_internals::setInstanceField<System::Action_1<System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType>>, 0x3c0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType>>>(value));
}
constexpr System::Action_1<System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType>> UnityEngine::UIElements::BaseVerticalCollectionView::__get_onItemsChosen() const {
return ::cordl_internals::getInstanceField<System::Action_1<System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType>>, 0x3c0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_onSelectionChange(System::Action_1<System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType>> value)  {
::cordl_internals::setInstanceField<System::Action_1<System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType>>, 0x3c8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType>>>(value));
}
constexpr System::Action_1<System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType>> UnityEngine::UIElements::BaseVerticalCollectionView::__get_onSelectionChange() const {
return ::cordl_internals::getInstanceField<System::Action_1<System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType>>, 0x3c8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_onSelectedIndicesChange(System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>> value)  {
::cordl_internals::setInstanceField<System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>>, 0x3d0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>>>(value));
}
constexpr System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>> UnityEngine::UIElements::BaseVerticalCollectionView::__get_onSelectedIndicesChange() const {
return ::cordl_internals::getInstanceField<System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>>, 0x3d0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_itemIndexChanged(System::Action_2<int32_t,int32_t> value)  {
::cordl_internals::setInstanceField<System::Action_2<int32_t,int32_t>, 0x3d8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<int32_t,int32_t>>(value));
}
constexpr System::Action_2<int32_t,int32_t> UnityEngine::UIElements::BaseVerticalCollectionView::__get_itemIndexChanged() const {
return ::cordl_internals::getInstanceField<System::Action_2<int32_t,int32_t>, 0x3d8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_itemsSourceChanged(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x3e0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action UnityEngine::UIElements::BaseVerticalCollectionView::__get_itemsSourceChanged() const {
return ::cordl_internals::getInstanceField<System::Action, 0x3e0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_GetItemId(System::Func_2<int32_t,int32_t> value)  {
::cordl_internals::setInstanceField<System::Func_2<int32_t,int32_t>, 0x3e8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<int32_t,int32_t>>(value));
}
constexpr System::Func_2<int32_t,int32_t> UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_GetItemId() const {
return ::cordl_internals::getInstanceField<System::Func_2<int32_t,int32_t>, 0x3e8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_MakeItem(System::Func_1<UnityEngine::UIElements::VisualElement> value)  {
::cordl_internals::setInstanceField<System::Func_1<UnityEngine::UIElements::VisualElement>, 0x3f0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_1<UnityEngine::UIElements::VisualElement>>(value));
}
constexpr System::Func_1<UnityEngine::UIElements::VisualElement> UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_MakeItem() const {
return ::cordl_internals::getInstanceField<System::Func_1<UnityEngine::UIElements::VisualElement>, 0x3f0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_BindItem(System::Action_2<UnityEngine::UIElements::VisualElement,int32_t> value)  {
::cordl_internals::setInstanceField<System::Action_2<UnityEngine::UIElements::VisualElement,int32_t>, 0x3f8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<UnityEngine::UIElements::VisualElement,int32_t>>(value));
}
constexpr System::Action_2<UnityEngine::UIElements::VisualElement,int32_t> UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_BindItem() const {
return ::cordl_internals::getInstanceField<System::Action_2<UnityEngine::UIElements::VisualElement,int32_t>, 0x3f8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set__unbindItem_k__BackingField(System::Action_2<UnityEngine::UIElements::VisualElement,int32_t> value)  {
::cordl_internals::setInstanceField<System::Action_2<UnityEngine::UIElements::VisualElement,int32_t>, 0x400>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<UnityEngine::UIElements::VisualElement,int32_t>>(value));
}
constexpr System::Action_2<UnityEngine::UIElements::VisualElement,int32_t> UnityEngine::UIElements::BaseVerticalCollectionView::__get__unbindItem_k__BackingField() const {
return ::cordl_internals::getInstanceField<System::Action_2<UnityEngine::UIElements::VisualElement,int32_t>, 0x400>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set__destroyItem_k__BackingField(System::Action_1<UnityEngine::UIElements::VisualElement> value)  {
::cordl_internals::setInstanceField<System::Action_1<UnityEngine::UIElements::VisualElement>, 0x408>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<UnityEngine::UIElements::VisualElement>>(value));
}
constexpr System::Action_1<UnityEngine::UIElements::VisualElement> UnityEngine::UIElements::BaseVerticalCollectionView::__get__destroyItem_k__BackingField() const {
return ::cordl_internals::getInstanceField<System::Action_1<UnityEngine::UIElements::VisualElement>, 0x408>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_SelectionType(UnityEngine::UIElements::SelectionType value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::SelectionType, 0x410>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::SelectionType>(value));
}
constexpr UnityEngine::UIElements::SelectionType UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_SelectionType() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::SelectionType, 0x410>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::__set_k_EmptyItems(System::Collections::Generic::List_1<UnityEngine::UIElements::ReusableCollectionItem> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::List_1<UnityEngine::UIElements::ReusableCollectionItem>, "k_EmptyItems", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get>(std::forward<System::Collections::Generic::List_1<UnityEngine::UIElements::ReusableCollectionItem>>(value));
}
 System::Collections::Generic::List_1<UnityEngine::UIElements::ReusableCollectionItem> UnityEngine::UIElements::BaseVerticalCollectionView::__get_k_EmptyItems()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::List_1<UnityEngine::UIElements::ReusableCollectionItem>, "k_EmptyItems", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get>();
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_HorizontalScrollingEnabled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x414>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_HorizontalScrollingEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x414>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_ShowAlternatingRowBackgrounds(UnityEngine::UIElements::AlternatingRowBackground value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::AlternatingRowBackground, 0x418>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::AlternatingRowBackground>(value));
}
constexpr UnityEngine::UIElements::AlternatingRowBackground UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_ShowAlternatingRowBackgrounds() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::AlternatingRowBackground, 0x418>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::__set_s_DefaultItemHeight(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "s_DefaultItemHeight", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get>(std::forward<int32_t>(value));
}
 int32_t UnityEngine::UIElements::BaseVerticalCollectionView::__get_s_DefaultItemHeight()  {
return ::cordl_internals::getStaticField<int32_t, "s_DefaultItemHeight", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get>();
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_FixedItemHeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x41c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_FixedItemHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x41c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_ItemHeightIsInline(bool value)  {
::cordl_internals::setInstanceField<bool, 0x420>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_ItemHeightIsInline() const {
return ::cordl_internals::getInstanceField<bool, 0x420>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_VirtualizationMethod(UnityEngine::UIElements::CollectionVirtualizationMethod value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::CollectionVirtualizationMethod, 0x424>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::CollectionVirtualizationMethod>(value));
}
constexpr UnityEngine::UIElements::CollectionVirtualizationMethod UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_VirtualizationMethod() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::CollectionVirtualizationMethod, 0x424>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_ScrollView(UnityEngine::UIElements::ScrollView value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::ScrollView, 0x428>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::ScrollView>(value));
}
constexpr UnityEngine::UIElements::ScrollView UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_ScrollView() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::ScrollView, 0x428>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_ViewController(UnityEngine::UIElements::CollectionViewController value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::CollectionViewController, 0x430>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::CollectionViewController>(value));
}
constexpr UnityEngine::UIElements::CollectionViewController UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_ViewController() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::CollectionViewController, 0x430>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_VirtualizationController(UnityEngine::UIElements::CollectionVirtualizationController value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::CollectionVirtualizationController, 0x438>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::CollectionVirtualizationController>(value));
}
constexpr UnityEngine::UIElements::CollectionVirtualizationController UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_VirtualizationController() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::CollectionVirtualizationController, 0x438>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_NavigationManipulator(UnityEngine::UIElements::KeyboardNavigationManipulator value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::KeyboardNavigationManipulator, 0x440>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::KeyboardNavigationManipulator>(value));
}
constexpr UnityEngine::UIElements::KeyboardNavigationManipulator UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_NavigationManipulator() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::KeyboardNavigationManipulator, 0x440>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_ScrollOffset(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x448>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_ScrollOffset() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x448>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_SelectedIds(System::Collections::Generic::List_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<int32_t>, 0x450>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<int32_t>>(value));
}
constexpr System::Collections::Generic::List_1<int32_t> UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_SelectedIds() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<int32_t>, 0x450>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_SelectedIndices(System::Collections::Generic::List_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<int32_t>, 0x458>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<int32_t>>(value));
}
constexpr System::Collections::Generic::List_1<int32_t> UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_SelectedIndices() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<int32_t>, 0x458>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_SelectedItems(System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>, 0x460>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>>(value));
}
constexpr System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_SelectedItems() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>, 0x460>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_LastHeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x468>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_LastHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x468>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_IsRangeSelectionDirectionUp(bool value)  {
::cordl_internals::setInstanceField<bool, 0x46c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_IsRangeSelectionDirectionUp() const {
return ::cordl_internals::getInstanceField<bool, 0x46c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_Dragger(UnityEngine::UIElements::ListViewDragger value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::ListViewDragger, 0x470>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::ListViewDragger>(value));
}
constexpr UnityEngine::UIElements::ListViewDragger UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_Dragger() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::ListViewDragger, 0x470>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::__set_s_ItemHeightProperty(UnityEngine::UIElements::CustomStyleProperty_1<int32_t> value)  {
::cordl_internals::setStaticField<UnityEngine::UIElements::CustomStyleProperty_1<int32_t>, "s_ItemHeightProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get>(std::forward<UnityEngine::UIElements::CustomStyleProperty_1<int32_t>>(value));
}
 UnityEngine::UIElements::CustomStyleProperty_1<int32_t> UnityEngine::UIElements::BaseVerticalCollectionView::__get_s_ItemHeightProperty()  {
return ::cordl_internals::getStaticField<UnityEngine::UIElements::CustomStyleProperty_1<int32_t>, "s_ItemHeightProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get>();
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_ItemIndexChangedCallback(System::Action_2<int32_t,int32_t> value)  {
::cordl_internals::setInstanceField<System::Action_2<int32_t,int32_t>, 0x478>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<int32_t,int32_t>>(value));
}
constexpr System::Action_2<int32_t,int32_t> UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_ItemIndexChangedCallback() const {
return ::cordl_internals::getInstanceField<System::Action_2<int32_t,int32_t>, 0x478>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_ItemsSourceChangedCallback(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x480>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_ItemsSourceChangedCallback() const {
return ::cordl_internals::getInstanceField<System::Action, 0x480>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::__set_ussClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::BaseVerticalCollectionView::__get_ussClassName()  {
return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get>();
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::__set_borderUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "borderUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::BaseVerticalCollectionView::__get_borderUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "borderUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get>();
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::__set_itemUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "itemUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::BaseVerticalCollectionView::__get_itemUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "itemUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get>();
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::__set_dragHoverBarUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "dragHoverBarUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::BaseVerticalCollectionView::__get_dragHoverBarUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "dragHoverBarUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get>();
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::__set_itemDragHoverUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "itemDragHoverUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::BaseVerticalCollectionView::__get_itemDragHoverUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "itemDragHoverUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get>();
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::__set_itemSelectedVariantUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "itemSelectedVariantUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::BaseVerticalCollectionView::__get_itemSelectedVariantUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "itemSelectedVariantUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get>();
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::__set_itemAlternativeBackgroundUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "itemAlternativeBackgroundUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::BaseVerticalCollectionView::__get_itemAlternativeBackgroundUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "itemAlternativeBackgroundUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get>();
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::__set_listScrollViewUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "listScrollViewUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::BaseVerticalCollectionView::__get_listScrollViewUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "listScrollViewUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get>();
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::__set_backgroundFillUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "backgroundFillUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::BaseVerticalCollectionView::__get_backgroundFillUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "backgroundFillUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get>();
}
constexpr void UnityEngine::UIElements::BaseVerticalCollectionView::__set_m_TouchDownPosition(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x488>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::UIElements::BaseVerticalCollectionView::__get_m_TouchDownPosition() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x488>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::add_onItemsChosen(System::Action_1<System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType>> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "add_onItemsChosen",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::remove_onItemsChosen(System::Action_1<System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType>> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "remove_onItemsChosen",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::add_onSelectionChange(System::Action_1<System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType>> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "add_onSelectionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::remove_onSelectionChange(System::Action_1<System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType>> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "remove_onSelectionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Func_2<int32_t,int32_t> UnityEngine::UIElements::BaseVerticalCollectionView::get_getItemId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_getItemId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Func_2<int32_t,int32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::set_getItemId(System::Func_2<int32_t,int32_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "set_getItemId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<int32_t,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Collections::IList UnityEngine::UIElements::BaseVerticalCollectionView::get_itemsSource()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_itemsSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IList, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::set_itemsSource(System::Collections::IList value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "set_itemsSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::UIElements::BaseVerticalCollectionView::get_sourceIncludesArraySize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_sourceIncludesArraySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Func_1<UnityEngine::UIElements::VisualElement> UnityEngine::UIElements::BaseVerticalCollectionView::get_makeItem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_makeItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Func_1<UnityEngine::UIElements::VisualElement>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::set_makeItem(System::Func_1<UnityEngine::UIElements::VisualElement> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "set_makeItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<UnityEngine::UIElements::VisualElement>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Action_2<UnityEngine::UIElements::VisualElement,int32_t> UnityEngine::UIElements::BaseVerticalCollectionView::get_bindItem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_bindItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Action_2<UnityEngine::UIElements::VisualElement,int32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::set_bindItem(System::Action_2<UnityEngine::UIElements::VisualElement,int32_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "set_bindItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<UnityEngine::UIElements::VisualElement,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Action_2<UnityEngine::UIElements::VisualElement,int32_t> UnityEngine::UIElements::BaseVerticalCollectionView::get_unbindItem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_unbindItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Action_2<UnityEngine::UIElements::VisualElement,int32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::set_unbindItem(System::Action_2<UnityEngine::UIElements::VisualElement,int32_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "set_unbindItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<UnityEngine::UIElements::VisualElement,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Action_1<UnityEngine::UIElements::VisualElement> UnityEngine::UIElements::BaseVerticalCollectionView::get_destroyItem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_destroyItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Action_1<UnityEngine::UIElements::VisualElement>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::set_destroyItem(System::Action_1<UnityEngine::UIElements::VisualElement> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "set_destroyItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::UIElements::VisualElement>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UIElements::VisualElement UnityEngine::UIElements::BaseVerticalCollectionView::get_contentContainer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_contentContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::VisualElement, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::UIElements::SelectionType UnityEngine::UIElements::BaseVerticalCollectionView::get_selectionType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_selectionType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::SelectionType, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::set_selectionType(UnityEngine::UIElements::SelectionType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "set_selectionType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::SelectionType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t UnityEngine::UIElements::BaseVerticalCollectionView::get_selectedIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_selectedIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::set_selectedIndex(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "set_selectedIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Collections::Generic::IEnumerable_1<int32_t> UnityEngine::UIElements::BaseVerticalCollectionView::get_selectedIndices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_selectedIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::ReusableCollectionItem> UnityEngine::UIElements::BaseVerticalCollectionView::get_activeItems()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_activeItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::ReusableCollectionItem>, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::UIElements::ScrollView UnityEngine::UIElements::BaseVerticalCollectionView::get_scrollView()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_scrollView",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::ScrollView, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::UIElements::ListViewDragger UnityEngine::UIElements::BaseVerticalCollectionView::get_dragger()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_dragger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::ListViewDragger, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::UIElements::CollectionViewController UnityEngine::UIElements::BaseVerticalCollectionView::get_viewController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_viewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::CollectionViewController, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::UIElements::CollectionVirtualizationController UnityEngine::UIElements::BaseVerticalCollectionView::get_virtualizationController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_virtualizationController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::CollectionVirtualizationController, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param height: float_t (default: -1)
 float_t UnityEngine::UIElements::BaseVerticalCollectionView::ResolveItemHeight(float_t height)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "ResolveItemHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, height);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::set_showBorder(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "set_showBorder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::UIElements::BaseVerticalCollectionView::get_reorderable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_reorderable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::set_reorderable(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "set_reorderable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::set_horizontalScrollingEnabled(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "set_horizontalScrollingEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UIElements::AlternatingRowBackground UnityEngine::UIElements::BaseVerticalCollectionView::get_showAlternatingRowBackgrounds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_showAlternatingRowBackgrounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::AlternatingRowBackground, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::set_showAlternatingRowBackgrounds(UnityEngine::UIElements::AlternatingRowBackground value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "set_showAlternatingRowBackgrounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::AlternatingRowBackground>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UIElements::CollectionVirtualizationMethod UnityEngine::UIElements::BaseVerticalCollectionView::get_virtualizationMethod()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_virtualizationMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::CollectionVirtualizationMethod, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::set_virtualizationMethod(UnityEngine::UIElements::CollectionVirtualizationMethod value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "set_virtualizationMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::CollectionVirtualizationMethod>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t UnityEngine::UIElements::BaseVerticalCollectionView::get_fixedItemHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_fixedItemHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::set_fixedItemHeight(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "set_fixedItemHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t UnityEngine::UIElements::BaseVerticalCollectionView::get_lastHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "get_lastHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::CreateVirtualizationController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "CreateVirtualizationController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::UIElements::CollectionVirtualizationController UnityEngine::UIElements::BaseVerticalCollectionView::GetOrCreateVirtualizationController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "GetOrCreateVirtualizationController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::CollectionVirtualizationController, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename T>
 void UnityEngine::UIElements::BaseVerticalCollectionView::CreateVirtualizationController()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                        "CreateVirtualizationController",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::UIElements::CollectionViewController UnityEngine::UIElements::BaseVerticalCollectionView::GetOrCreateViewController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "GetOrCreateViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::CollectionViewController, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::CreateViewController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "CreateViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::SetViewController(UnityEngine::UIElements::CollectionViewController controller)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "SetViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::CollectionViewController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, controller);
}
 UnityEngine::UIElements::ListViewDragger UnityEngine::UIElements::BaseVerticalCollectionView::CreateDragger()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "CreateDragger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::ListViewDragger, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::InitializeDragAndDropController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "InitializeDragAndDropController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::UIElements::ICollectionDragAndDropController UnityEngine::UIElements::BaseVerticalCollectionView::CreateDragAndDropController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "CreateDragAndDropController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::ICollectionDragAndDropController, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 UnityEngine::UIElements::BaseVerticalCollectionView::BaseVerticalCollectionView()  : UnityEngine::UIElements::BindableElement(THROW_UNLESS(::il2cpp_utils::New<BaseVerticalCollectionView>())) {}
 void UnityEngine::UIElements::BaseVerticalCollectionView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::UIElements::BaseVerticalCollectionView::HasValidDataAndBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "HasValidDataAndBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::OnItemIndexChanged(int32_t srcIndex, int32_t dstIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "OnItemIndexChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, srcIndex, dstIndex);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::OnItemsSourceChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "OnItemsSourceChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::RefreshItems()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "RefreshItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::Rebuild()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "Rebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::RefreshSelection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "RefreshSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::PostRefresh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "PostRefresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::ScrollToItem(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "ScrollToItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, index);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::OnScroll(UnityEngine::Vector2 offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "OnScroll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, offset);
}
/// @param layoutPass: int32_t (default: -1)
 void UnityEngine::UIElements::BaseVerticalCollectionView::Resize(UnityEngine::Vector2 size, int32_t layoutPass)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, size, layoutPass);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::OnAttachToPanel(UnityEngine::UIElements::AttachToPanelEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "OnAttachToPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::AttachToPanelEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::OnDetachFromPanel(UnityEngine::UIElements::DetachFromPanelEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "OnDetachFromPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::DetachFromPanelEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 bool UnityEngine::UIElements::BaseVerticalCollectionView::Apply(UnityEngine::UIElements::KeyboardNavigationOperation op, bool shiftKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "Apply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::KeyboardNavigationOperation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, op, shiftKey);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::Apply(UnityEngine::UIElements::KeyboardNavigationOperation op, UnityEngine::UIElements::EventBase sourceEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "Apply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::KeyboardNavigationOperation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::EventBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, op, sourceEvent);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::OnPointerMove(UnityEngine::UIElements::PointerMoveEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "OnPointerMove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::PointerMoveEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::OnPointerDown(UnityEngine::UIElements::PointerDownEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "OnPointerDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::PointerDownEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::OnPointerCancel(UnityEngine::UIElements::PointerCancelEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "OnPointerCancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::PointerCancelEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::OnPointerUp(UnityEngine::UIElements::PointerUpEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "OnPointerUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::PointerUpEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::ProcessPointerDown(UnityEngine::UIElements::IPointerEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "ProcessPointerDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IPointerEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::ProcessPointerUp(UnityEngine::UIElements::IPointerEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "ProcessPointerUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IPointerEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::DoSelect(UnityEngine::Vector2 localPosition, int32_t clickCount, bool actionKey, bool shiftKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "DoSelect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, localPosition, clickCount, actionKey, shiftKey);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::DoRangeSelection(int32_t rangeSelectionFinalIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "DoRangeSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rangeSelectionFinalIndex);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::ProcessSingleClick(int32_t clickedIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "ProcessSingleClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, clickedIndex);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::SelectAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "SelectAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::AddToSelection(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "AddToSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, index);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::AddToSelection(System::Collections::Generic::IList_1<int32_t> indexes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "AddToSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, indexes);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::AddToSelectionWithoutValidation(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "AddToSelectionWithoutValidation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, index);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::RemoveFromSelection(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "RemoveFromSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, index);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::RemoveFromSelectionWithoutValidation(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "RemoveFromSelectionWithoutValidation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, index);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::SetSelection(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "SetSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, index);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::SetSelection(System::Collections::Generic::IEnumerable_1<int32_t> indices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "SetSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, indices);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::SetSelectionWithoutNotify(System::Collections::Generic::IEnumerable_1<int32_t> indices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "SetSelectionWithoutNotify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, indices);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::SetSelectionInternal(System::Collections::Generic::IEnumerable_1<int32_t> indices, bool sendNotification)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "SetSelectionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, indices, sendNotification);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::NotifyOfSelectionChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "NotifyOfSelectionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::ClearSelection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "ClearSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::ClearSelectionWithoutValidation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "ClearSelectionWithoutValidation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::OnViewDataReady()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "OnViewDataReady",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::ExecuteDefaultAction(UnityEngine::UIElements::EventBase evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "ExecuteDefaultAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::EventBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::OnSizeChanged(UnityEngine::UIElements::GeometryChangedEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "OnSizeChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::GeometryChangedEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::OnCustomStyleResolved(UnityEngine::UIElements::CustomStyleResolvedEvent e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "OnCustomStyleResolved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::CustomStyleResolvedEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::__ctor_b__143_0(float_t v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "<.ctor>b__143_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, v);
}
 void UnityEngine::UIElements::BaseVerticalCollectionView::_Apply_g__HandleSelectionAndScroll_164_0(int32_t index, ByRef<UnityEngine::UIElements::UnityEngine__UIElements__BaseVerticalCollectionView____c__DisplayClass164_0> )  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::BaseVerticalCollectionView>::get(),
                            "<Apply>g__HandleSelectionAndScroll|164_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::UIElements::UnityEngine__UIElements__BaseVerticalCollectionView____c__DisplayClass164_0>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, index, );
}
