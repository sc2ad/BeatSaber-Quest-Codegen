#pragma once
#include "UnityEngine/UIElements/zzzz__BaseVerticalCollectionView_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindableElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ListView_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlChildElementDescription_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__Label_def.hpp"
#include "UnityEngine/UIElements/zzzz__Button_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__ChangeEvent_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextField_def.hpp"
#include "UnityEngine/UIElements/zzzz__ListViewReorderMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__ListViewDragger_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UIElements/zzzz__Foldout_def.hpp"
#include "UnityEngine/UIElements/zzzz__ListViewController_def.hpp"
#include "UnityEngine/UIElements/zzzz__ICollectionDragAndDropController_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlIntAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__SelectionType_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlBoolAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__AlternatingRowBackground_def.hpp"
#include "UnityEngine/UIElements/zzzz__CollectionVirtualizationMethod_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlEnumAttributeDescription_1_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits.get_uxmlChildElementsDescription
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription> (UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits::*)()>(&UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits::get_uxmlChildElementsDescription)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2cb7248;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits::*)(UnityEngine::UIElements::VisualElement, UnityEngine::UIElements::IUxmlAttributes, UnityEngine::UIElements::CreationContext)>(&UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x2cb72f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits::*)()>(&UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x2cb76c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits::__set_m_FixedItemHeight(UnityEngine::UIElements::UxmlIntAttributeDescription value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UxmlIntAttributeDescription, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UxmlIntAttributeDescription>(value));
}
constexpr UnityEngine::UIElements::UxmlIntAttributeDescription UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits::__get_m_FixedItemHeight() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UxmlIntAttributeDescription, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits::__set_m_VirtualizationMethod(UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::CollectionVirtualizationMethod> value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::CollectionVirtualizationMethod>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::CollectionVirtualizationMethod>>(value));
}
constexpr UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::CollectionVirtualizationMethod> UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits::__get_m_VirtualizationMethod() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::CollectionVirtualizationMethod>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits::__set_m_ShowBorder(UnityEngine::UIElements::UxmlBoolAttributeDescription value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UxmlBoolAttributeDescription, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UxmlBoolAttributeDescription>(value));
}
constexpr UnityEngine::UIElements::UxmlBoolAttributeDescription UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits::__get_m_ShowBorder() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UxmlBoolAttributeDescription, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits::__set_m_SelectionType(UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::SelectionType> value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::SelectionType>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::SelectionType>>(value));
}
constexpr UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::SelectionType> UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits::__get_m_SelectionType() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::SelectionType>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits::__set_m_ShowAlternatingRowBackgrounds(UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::AlternatingRowBackground> value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::AlternatingRowBackground>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::AlternatingRowBackground>>(value));
}
constexpr UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::AlternatingRowBackground> UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits::__get_m_ShowAlternatingRowBackgrounds() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::AlternatingRowBackground>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits::__set_m_ShowFoldoutHeader(UnityEngine::UIElements::UxmlBoolAttributeDescription value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UxmlBoolAttributeDescription, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UxmlBoolAttributeDescription>(value));
}
constexpr UnityEngine::UIElements::UxmlBoolAttributeDescription UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits::__get_m_ShowFoldoutHeader() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UxmlBoolAttributeDescription, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits::__set_m_HeaderTitle(UnityEngine::UIElements::UxmlStringAttributeDescription value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UxmlStringAttributeDescription, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UxmlStringAttributeDescription>(value));
}
constexpr UnityEngine::UIElements::UxmlStringAttributeDescription UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits::__get_m_HeaderTitle() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UxmlStringAttributeDescription, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits::__set_m_ShowAddRemoveFooter(UnityEngine::UIElements::UxmlBoolAttributeDescription value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UxmlBoolAttributeDescription, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UxmlBoolAttributeDescription>(value));
}
constexpr UnityEngine::UIElements::UxmlBoolAttributeDescription UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits::__get_m_ShowAddRemoveFooter() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UxmlBoolAttributeDescription, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits::__set_m_Reorderable(UnityEngine::UIElements::UxmlBoolAttributeDescription value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UxmlBoolAttributeDescription, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UxmlBoolAttributeDescription>(value));
}
constexpr UnityEngine::UIElements::UxmlBoolAttributeDescription UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits::__get_m_Reorderable() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UxmlBoolAttributeDescription, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits::__set_m_ReorderMode(UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::ListViewReorderMode> value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::ListViewReorderMode>, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::ListViewReorderMode>>(value));
}
constexpr UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::ListViewReorderMode> UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits::__get_m_ReorderMode() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::ListViewReorderMode>, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits::__set_m_ShowBoundCollectionSize(UnityEngine::UIElements::UxmlBoolAttributeDescription value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UxmlBoolAttributeDescription, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UxmlBoolAttributeDescription>(value));
}
constexpr UnityEngine::UIElements::UxmlBoolAttributeDescription UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits::__get_m_ShowBoundCollectionSize() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UxmlBoolAttributeDescription, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits::__set_m_HorizontalScrollingEnabled(UnityEngine::UIElements::UxmlBoolAttributeDescription value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UxmlBoolAttributeDescription, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UxmlBoolAttributeDescription>(value));
}
constexpr UnityEngine::UIElements::UxmlBoolAttributeDescription UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits::__get_m_HorizontalScrollingEnabled() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UxmlBoolAttributeDescription, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription> UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits::get_uxmlChildElementsDescription()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits>::get(),
                            "get_uxmlChildElementsDescription",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits::Init(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IUxmlAttributes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::CreationContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve, bag, cc);
}
// Ctor Parameters []
 UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits::UnityEngine__UIElements__ListView__UxmlTraits()  : UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlTraits(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__UIElements__ListView__UxmlTraits>())) {}
 void UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::UIElements::ListView.get_showBoundCollectionSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::ListView::*)()>(&UnityEngine::UIElements::ListView::get_showBoundCollectionSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cb547c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "get_showBoundCollectionSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ListView.set_showBoundCollectionSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ListView::*)(bool)>(&UnityEngine::UIElements::ListView::set_showBoundCollectionSize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2cb5484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "set_showBoundCollectionSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ListView.get_sourceIncludesArraySize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::ListView::*)()>(&UnityEngine::UIElements::ListView::get_sourceIncludesArraySize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2cb5674;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::ListView),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                                  100
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ListView.get_showFoldoutHeader
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::ListView::*)()>(&UnityEngine::UIElements::ListView::get_showFoldoutHeader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cb569c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "get_showFoldoutHeader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ListView.set_showFoldoutHeader
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ListView::*)(bool)>(&UnityEngine::UIElements::ListView::set_showFoldoutHeader)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x2cb56a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "set_showFoldoutHeader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ListView.SetupArraySizeField
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ListView::*)()>(&UnityEngine::UIElements::ListView::SetupArraySizeField)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x2cb54a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "SetupArraySizeField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ListView.set_headerTitle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ListView::*)(::StringW)>(&UnityEngine::UIElements::ListView::set_headerTitle)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2cb6204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "set_headerTitle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ListView.get_showAddRemoveFooter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::ListView::*)()>(&UnityEngine::UIElements::ListView::get_showAddRemoveFooter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2cb5e58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "get_showAddRemoveFooter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ListView.set_showAddRemoveFooter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ListView::*)(bool)>(&UnityEngine::UIElements::ListView::set_showAddRemoveFooter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cb621c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "set_showAddRemoveFooter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ListView.EnableFooter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ListView::*)(bool)>(&UnityEngine::UIElements::ListView::EnableFooter)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x2cb5e68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "EnableFooter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ListView.AddItems
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ListView::*)(int32_t)>(&UnityEngine::UIElements::ListView::AddItems)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2cb63ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "AddItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ListView.OnArraySizeFieldChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ListView::*)(UnityEngine::UIElements::ChangeEvent_1<::StringW>)>(&UnityEngine::UIElements::ListView::OnArraySizeFieldChanged)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2cb6410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "OnArraySizeFieldChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::ChangeEvent_1<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ListView.UpdateArraySizeField
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ListView::*)()>(&UnityEngine::UIElements::ListView::UpdateArraySizeField)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2cb6194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "UpdateArraySizeField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ListView.UpdateEmpty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ListView::*)()>(&UnityEngine::UIElements::ListView::UpdateEmpty)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2cb5c9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "UpdateEmpty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ListView.OnAddClicked
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ListView::*)()>(&UnityEngine::UIElements::ListView::OnAddClicked)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x2cb6518;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "OnAddClicked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ListView.OnRemoveClicked
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ListView::*)()>(&UnityEngine::UIElements::ListView::OnRemoveClicked)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2cb6764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "OnRemoveClicked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ListView.get_viewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::ListViewController (UnityEngine::UIElements::ListView::*)()>(&UnityEngine::UIElements::ListView::get_viewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cb6930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "get_viewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ListView.CreateVirtualizationController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ListView::*)()>(&UnityEngine::UIElements::ListView::CreateVirtualizationController)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2cb6938;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::ListView),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                                  101
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ListView.CreateViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ListView::*)()>(&UnityEngine::UIElements::ListView::CreateViewController)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2cb6980;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::ListView),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                                  102
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ListView.SetViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ListView::*)(UnityEngine::UIElements::ListViewController)>(&UnityEngine::UIElements::ListView::SetViewController)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2cb69e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "SetViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::ListViewController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ListView.OnItemAdded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ListView::*)(System::Collections::Generic::IEnumerable_1<int32_t>)>(&UnityEngine::UIElements::ListView::OnItemAdded)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2cb6ba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "OnItemAdded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ListView.OnItemsRemoved
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ListView::*)(System::Collections::Generic::IEnumerable_1<int32_t>)>(&UnityEngine::UIElements::ListView::OnItemsRemoved)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2cb6bbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "OnItemsRemoved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ListView.OnItemsSourceSizeChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ListView::*)()>(&UnityEngine::UIElements::ListView::OnItemsSourceSizeChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cb6bd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "OnItemsSourceSizeChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ListView.get_reorderMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::ListViewReorderMode (UnityEngine::UIElements::ListView::*)()>(&UnityEngine::UIElements::ListView::get_reorderMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cb6be0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "get_reorderMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ListView.set_reorderMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ListView::*)(UnityEngine::UIElements::ListViewReorderMode)>(&UnityEngine::UIElements::ListView::set_reorderMode)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2cb6be8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "set_reorderMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::ListViewReorderMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ListView.CreateDragger
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::ListViewDragger (UnityEngine::UIElements::ListView::*)()>(&UnityEngine::UIElements::ListView::CreateDragger)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2cb6c20;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::ListView),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                                  103
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ListView.CreateDragAndDropController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::ICollectionDragAndDropController (UnityEngine::UIElements::ListView::*)()>(&UnityEngine::UIElements::ListView::CreateDragAndDropController)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2cb6cc0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::ListView),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                                  104
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ListView._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ListView::*)()>(&UnityEngine::UIElements::ListView::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2cb6d24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ListView.PostRefresh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ListView::*)()>(&UnityEngine::UIElements::ListView::PostRefresh)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2cb6dc0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::ListView),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                                  105
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::ListView._OnAddClicked_b__35_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ListView::*)()>(&UnityEngine::UIElements::ListView::_OnAddClicked_b__35_0)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2cb7130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "<OnAddClicked>b__35_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::ListView::__set_m_ShowBoundCollectionSize(bool value)  {
::cordl_internals::setInstanceField<bool, 0x494>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::ListView::__get_m_ShowBoundCollectionSize() const {
return ::cordl_internals::getInstanceField<bool, 0x494>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::ListView::__set_m_ShowFoldoutHeader(bool value)  {
::cordl_internals::setInstanceField<bool, 0x495>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::ListView::__get_m_ShowFoldoutHeader() const {
return ::cordl_internals::getInstanceField<bool, 0x495>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::ListView::__set_m_HeaderTitle(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x498>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::UIElements::ListView::__get_m_HeaderTitle() const {
return ::cordl_internals::getInstanceField<::StringW, 0x498>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::ListView::__set_itemsAdded(System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>> value)  {
::cordl_internals::setInstanceField<System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>>, 0x4a0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>>>(value));
}
constexpr System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>> UnityEngine::UIElements::ListView::__get_itemsAdded() const {
return ::cordl_internals::getInstanceField<System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>>, 0x4a0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::ListView::__set_itemsRemoved(System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>> value)  {
::cordl_internals::setInstanceField<System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>>, 0x4a8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>>>(value));
}
constexpr System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>> UnityEngine::UIElements::ListView::__get_itemsRemoved() const {
return ::cordl_internals::getInstanceField<System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>>, 0x4a8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::ListView::__set_m_EmptyListLabel(UnityEngine::UIElements::Label value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::Label, 0x4b0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::Label>(value));
}
constexpr UnityEngine::UIElements::Label UnityEngine::UIElements::ListView::__get_m_EmptyListLabel() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::Label, 0x4b0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::ListView::__set_m_Foldout(UnityEngine::UIElements::Foldout value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::Foldout, 0x4b8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::Foldout>(value));
}
constexpr UnityEngine::UIElements::Foldout UnityEngine::UIElements::ListView::__get_m_Foldout() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::Foldout, 0x4b8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::ListView::__set_m_ArraySizeField(UnityEngine::UIElements::TextField value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::TextField, 0x4c0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::TextField>(value));
}
constexpr UnityEngine::UIElements::TextField UnityEngine::UIElements::ListView::__get_m_ArraySizeField() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::TextField, 0x4c0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::ListView::__set_m_Footer(UnityEngine::UIElements::VisualElement value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::VisualElement, 0x4c8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::VisualElement>(value));
}
constexpr UnityEngine::UIElements::VisualElement UnityEngine::UIElements::ListView::__get_m_Footer() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::VisualElement, 0x4c8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::ListView::__set_m_AddButton(UnityEngine::UIElements::Button value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::Button, 0x4d0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::Button>(value));
}
constexpr UnityEngine::UIElements::Button UnityEngine::UIElements::ListView::__get_m_AddButton() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::Button, 0x4d0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::ListView::__set_m_RemoveButton(UnityEngine::UIElements::Button value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::Button, 0x4d8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::Button>(value));
}
constexpr UnityEngine::UIElements::Button UnityEngine::UIElements::ListView::__get_m_RemoveButton() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::Button, 0x4d8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::ListView::__set_m_ItemAddedCallback(System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>> value)  {
::cordl_internals::setInstanceField<System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>>, 0x4e0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>>>(value));
}
constexpr System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>> UnityEngine::UIElements::ListView::__get_m_ItemAddedCallback() const {
return ::cordl_internals::getInstanceField<System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>>, 0x4e0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::ListView::__set_m_ItemRemovedCallback(System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>> value)  {
::cordl_internals::setInstanceField<System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>>, 0x4e8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>>>(value));
}
constexpr System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>> UnityEngine::UIElements::ListView::__get_m_ItemRemovedCallback() const {
return ::cordl_internals::getInstanceField<System::Action_1<System::Collections::Generic::IEnumerable_1<int32_t>>, 0x4e8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::ListView::__set_m_ItemsSourceSizeChangedCallback(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x4f0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action UnityEngine::UIElements::ListView::__get_m_ItemsSourceSizeChangedCallback() const {
return ::cordl_internals::getInstanceField<System::Action, 0x4f0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::ListView::__set_m_ListViewController(UnityEngine::UIElements::ListViewController value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::ListViewController, 0x4f8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::ListViewController>(value));
}
constexpr UnityEngine::UIElements::ListViewController UnityEngine::UIElements::ListView::__get_m_ListViewController() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::ListViewController, 0x4f8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::ListView::__set_m_ReorderMode(UnityEngine::UIElements::ListViewReorderMode value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::ListViewReorderMode, 0x500>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::ListViewReorderMode>(value));
}
constexpr UnityEngine::UIElements::ListViewReorderMode UnityEngine::UIElements::ListView::__get_m_ReorderMode() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::ListViewReorderMode, 0x500>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::UIElements::ListView::__set_ussClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::ListView::__get_ussClassName()  {
return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get>();
}
 void UnityEngine::UIElements::ListView::__set_itemUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "itemUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::ListView::__get_itemUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "itemUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get>();
}
 void UnityEngine::UIElements::ListView::__set_emptyLabelUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "emptyLabelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::ListView::__get_emptyLabelUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "emptyLabelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get>();
}
 void UnityEngine::UIElements::ListView::__set_reorderableUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "reorderableUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::ListView::__get_reorderableUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "reorderableUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get>();
}
 void UnityEngine::UIElements::ListView::__set_reorderableItemUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "reorderableItemUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::ListView::__get_reorderableItemUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "reorderableItemUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get>();
}
 void UnityEngine::UIElements::ListView::__set_reorderableItemContainerUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "reorderableItemContainerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::ListView::__get_reorderableItemContainerUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "reorderableItemContainerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get>();
}
 void UnityEngine::UIElements::ListView::__set_reorderableItemHandleUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "reorderableItemHandleUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::ListView::__get_reorderableItemHandleUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "reorderableItemHandleUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get>();
}
 void UnityEngine::UIElements::ListView::__set_reorderableItemHandleBarUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "reorderableItemHandleBarUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::ListView::__get_reorderableItemHandleBarUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "reorderableItemHandleBarUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get>();
}
 void UnityEngine::UIElements::ListView::__set_footerUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "footerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::ListView::__get_footerUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "footerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get>();
}
 void UnityEngine::UIElements::ListView::__set_foldoutHeaderUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "foldoutHeaderUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::ListView::__get_foldoutHeaderUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "foldoutHeaderUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get>();
}
 void UnityEngine::UIElements::ListView::__set_arraySizeFieldUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "arraySizeFieldUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::ListView::__get_arraySizeFieldUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "arraySizeFieldUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get>();
}
 void UnityEngine::UIElements::ListView::__set_listViewWithHeaderUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "listViewWithHeaderUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::ListView::__get_listViewWithHeaderUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "listViewWithHeaderUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get>();
}
 void UnityEngine::UIElements::ListView::__set_listViewWithFooterUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "listViewWithFooterUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::ListView::__get_listViewWithFooterUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "listViewWithFooterUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get>();
}
 void UnityEngine::UIElements::ListView::__set_scrollViewWithFooterUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "scrollViewWithFooterUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::ListView::__get_scrollViewWithFooterUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "scrollViewWithFooterUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get>();
}
 void UnityEngine::UIElements::ListView::__set_footerAddButtonName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "footerAddButtonName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::ListView::__get_footerAddButtonName()  {
return ::cordl_internals::getStaticField<::StringW, "footerAddButtonName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get>();
}
 void UnityEngine::UIElements::ListView::__set_footerRemoveButtonName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "footerRemoveButtonName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::UIElements::ListView::__get_footerRemoveButtonName()  {
return ::cordl_internals::getStaticField<::StringW, "footerRemoveButtonName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get>();
}
 bool UnityEngine::UIElements::ListView::get_showBoundCollectionSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "get_showBoundCollectionSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::ListView::set_showBoundCollectionSize(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "set_showBoundCollectionSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::UIElements::ListView::get_sourceIncludesArraySize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "get_sourceIncludesArraySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::UIElements::ListView::get_showFoldoutHeader()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "get_showFoldoutHeader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::ListView::set_showFoldoutHeader(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "set_showFoldoutHeader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::UIElements::ListView::SetupArraySizeField()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "SetupArraySizeField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::ListView::set_headerTitle(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "set_headerTitle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::UIElements::ListView::get_showAddRemoveFooter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "get_showAddRemoveFooter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::ListView::set_showAddRemoveFooter(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "set_showAddRemoveFooter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::UIElements::ListView::EnableFooter(bool enabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "EnableFooter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, enabled);
}
 void UnityEngine::UIElements::ListView::AddItems(int32_t itemCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "AddItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, itemCount);
}
 void UnityEngine::UIElements::ListView::OnArraySizeFieldChanged(UnityEngine::UIElements::ChangeEvent_1<::StringW> evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "OnArraySizeFieldChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::ChangeEvent_1<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void UnityEngine::UIElements::ListView::UpdateArraySizeField()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "UpdateArraySizeField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::ListView::UpdateEmpty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "UpdateEmpty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::ListView::OnAddClicked()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "OnAddClicked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::ListView::OnRemoveClicked()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "OnRemoveClicked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::UIElements::ListViewController UnityEngine::UIElements::ListView::get_viewController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "get_viewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::ListViewController, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::ListView::CreateVirtualizationController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "CreateVirtualizationController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::ListView::CreateViewController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "CreateViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::ListView::SetViewController(UnityEngine::UIElements::ListViewController controller)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "SetViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::ListViewController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, controller);
}
 void UnityEngine::UIElements::ListView::OnItemAdded(System::Collections::Generic::IEnumerable_1<int32_t> indices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "OnItemAdded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, indices);
}
 void UnityEngine::UIElements::ListView::OnItemsRemoved(System::Collections::Generic::IEnumerable_1<int32_t> indices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "OnItemsRemoved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, indices);
}
 void UnityEngine::UIElements::ListView::OnItemsSourceSizeChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "OnItemsSourceSizeChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::UIElements::ListViewReorderMode UnityEngine::UIElements::ListView::get_reorderMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "get_reorderMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::ListViewReorderMode, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::ListView::set_reorderMode(UnityEngine::UIElements::ListViewReorderMode value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "set_reorderMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::ListViewReorderMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UIElements::ListViewDragger UnityEngine::UIElements::ListView::CreateDragger()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "CreateDragger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::ListViewDragger, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::UIElements::ICollectionDragAndDropController UnityEngine::UIElements::ListView::CreateDragAndDropController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "CreateDragAndDropController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::ICollectionDragAndDropController, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 UnityEngine::UIElements::ListView::ListView()  : UnityEngine::UIElements::BaseVerticalCollectionView(THROW_UNLESS(::il2cpp_utils::New<ListView>())) {}
 void UnityEngine::UIElements::ListView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::ListView::PostRefresh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "PostRefresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::ListView::_OnAddClicked_b__35_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ListView>::get(),
                            "<OnAddClicked>b__35_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlFactory._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlFactory::*)()>(&UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2cb7200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlFactory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlFactory::UnityEngine__UIElements__ListView__UxmlFactory()  : UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::ListView,UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits>(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__UIElements__ListView__UxmlFactory>())) {}
 void UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlFactory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlFactory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13::*)(int32_t)>(&GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cb72ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13::*)()>(&GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2cb7be0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13::*)()>(&GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2cb7be4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13.System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::UxmlChildElementDescription (GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13::*)()>(&GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13::System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cb7bfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13>::get(),
                            "System.Collections.Generic.IEnumerator<UnityEngine.UIElements.UxmlChildElementDescription>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13::*)()>(&GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2cb7c04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13::*)()>(&GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cb7c44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13.System_Collections_Generic_IEnumerable_UnityEngine_UIElements_UxmlChildElementDescription__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UxmlChildElementDescription> (GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13::*)()>(&GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13::System_Collections_Generic_IEnumerable_UnityEngine_UIElements_UxmlChildElementDescription__GetEnumerator)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2cb7c4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13>::get(),
                            "System.Collections.Generic.IEnumerable<UnityEngine.UIElements.UxmlChildElementDescription>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13::*)()>(&GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2cb7cec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription>
constexpr  GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13::operator System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription>() const noexcept {
return System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UxmlChildElementDescription>
constexpr  GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13::operator System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UxmlChildElementDescription>() const noexcept {
return System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UxmlChildElementDescription>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13::__set___2__current(UnityEngine::UIElements::UxmlChildElementDescription value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UxmlChildElementDescription, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UxmlChildElementDescription>(value));
}
constexpr UnityEngine::UIElements::UxmlChildElementDescription GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13::__get___2__current() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UxmlChildElementDescription, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13::__set___4__this(UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits>(value));
}
constexpr UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13::__get___4__this() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UnityEngine__UIElements__ListView__UxmlTraits, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13>(__1__state))) {}
 void GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::UIElements::UxmlChildElementDescription GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13::System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13>::get(),
                            "System.Collections.Generic.IEnumerator<UnityEngine.UIElements.UxmlChildElementDescription>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::UxmlChildElementDescription, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UxmlChildElementDescription> GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13::System_Collections_Generic_IEnumerable_UnityEngine_UIElements_UxmlChildElementDescription__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13>::get(),
                            "System.Collections.Generic.IEnumerable<UnityEngine.UIElements.UxmlChildElementDescription>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UxmlChildElementDescription>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__UIElements__ListView__UxmlTraits___get_uxmlChildElementsDescription_d__13>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
