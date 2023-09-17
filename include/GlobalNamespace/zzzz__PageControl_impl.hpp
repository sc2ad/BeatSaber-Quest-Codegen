#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__PageControl_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "GlobalNamespace/zzzz__PageControlElement_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PageControl.SetPagesCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PageControl::*)(int32_t)>(&::GlobalNamespace::PageControl::SetPagesCount)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x218e64c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PageControl>::get(),
                            "SetPagesCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PageControl.SetSelectedPageIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PageControl::*)(int32_t)>(&::GlobalNamespace::PageControl::SetSelectedPageIndex)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x218ea80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PageControl>::get(),
                            "SetSelectedPageIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PageControl.SetVisible
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PageControl::*)(bool)>(&::GlobalNamespace::PageControl::SetVisible)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x218eb48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PageControl>::get(),
                            "SetVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PageControl._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PageControl::*)()>(&::GlobalNamespace::PageControl::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x218eb78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PageControl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::PageControl::__set__content(::UnityEngine::RectTransform value)  {
::cordl_internals::setInstanceField<::UnityEngine::RectTransform, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::RectTransform>(value));
}
constexpr ::UnityEngine::RectTransform ::GlobalNamespace::PageControl::__get__content() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PageControl::__set__spacing(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::PageControl::__get__spacing() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PageControl::__set__elementPrefab(::GlobalNamespace::PageControlElement value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PageControlElement, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::PageControlElement>(value));
}
constexpr ::GlobalNamespace::PageControlElement ::GlobalNamespace::PageControl::__get__elementPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PageControlElement, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PageControl::__set__activeElements(::System::Collections::Generic::List_1<::GlobalNamespace::PageControlElement> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::PageControlElement>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::PageControlElement>>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PageControlElement> ::GlobalNamespace::PageControl::__get__activeElements() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::PageControlElement>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PageControl::__set__inactiveElements(::System::Collections::Generic::Queue_1<::GlobalNamespace::PageControlElement> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Queue_1<::GlobalNamespace::PageControlElement>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::Queue_1<::GlobalNamespace::PageControlElement>>(value));
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::PageControlElement> ::GlobalNamespace::PageControl::__get__inactiveElements() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Queue_1<::GlobalNamespace::PageControlElement>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PageControl::__set__selectedPage(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::PageControl::__get__selectedPage() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PageControl::__set__pagesCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::PageControl::__get__pagesCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::PageControl::SetPagesCount(int32_t pagesCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PageControl>::get(),
                            "SetPagesCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pagesCount);
}
 void ::GlobalNamespace::PageControl::SetSelectedPageIndex(int32_t page)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PageControl>::get(),
                            "SetSelectedPageIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, page);
}
 void ::GlobalNamespace::PageControl::SetVisible(bool isVisible)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PageControl>::get(),
                            "SetVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, isVisible);
}
// Ctor Parameters []
 ::GlobalNamespace::PageControl::PageControl()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<PageControl>())) {}
 void ::GlobalNamespace::PageControl::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PageControl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
