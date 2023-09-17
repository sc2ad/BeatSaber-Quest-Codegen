#pragma once
#include "HMUI/zzzz__TableCell_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__TextOnlyTableCell_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "HMUI/zzzz__ImageView_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TextOnlyTableCell.get_text
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::TextOnlyTableCell::*)()>(&::GlobalNamespace::TextOnlyTableCell::get_text)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2127a38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextOnlyTableCell>::get(),
                            "get_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextOnlyTableCell.set_text
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextOnlyTableCell::*)(::StringW)>(&::GlobalNamespace::TextOnlyTableCell::set_text)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2127a5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextOnlyTableCell>::get(),
                            "set_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextOnlyTableCell.SelectionDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextOnlyTableCell::*)(::HMUI::____HMUI__SelectableCell__TransitionType)>(&::GlobalNamespace::TextOnlyTableCell::SelectionDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2127a80;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::TextOnlyTableCell),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextOnlyTableCell>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextOnlyTableCell.HighlightDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextOnlyTableCell::*)(::HMUI::____HMUI__SelectableCell__TransitionType)>(&::GlobalNamespace::TextOnlyTableCell::HighlightDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2127b50;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::TextOnlyTableCell),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextOnlyTableCell>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextOnlyTableCell.RefreshVisuals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextOnlyTableCell::*)()>(&::GlobalNamespace::TextOnlyTableCell::RefreshVisuals)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2127a84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextOnlyTableCell>::get(),
                            "RefreshVisuals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextOnlyTableCell._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextOnlyTableCell::*)()>(&::GlobalNamespace::TextOnlyTableCell::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2127b54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextOnlyTableCell>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::TextOnlyTableCell::__set__selectedHighlightColor(::UnityEngine::Color value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color ::GlobalNamespace::TextOnlyTableCell::__get__selectedHighlightColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::TextOnlyTableCell::__set__text(::TMPro::TextMeshProUGUI value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TextMeshProUGUI>(value));
}
constexpr ::TMPro::TextMeshProUGUI ::GlobalNamespace::TextOnlyTableCell::__get__text() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::TextOnlyTableCell::__set__bgImage(::HMUI::ImageView value)  {
::cordl_internals::setInstanceField<::HMUI::ImageView, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::ImageView>(value));
}
constexpr ::HMUI::ImageView ::GlobalNamespace::TextOnlyTableCell::__get__bgImage() const {
return ::cordl_internals::getInstanceField<::HMUI::ImageView, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::TextOnlyTableCell::__set__highlightImage(::HMUI::ImageView value)  {
::cordl_internals::setInstanceField<::HMUI::ImageView, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::ImageView>(value));
}
constexpr ::HMUI::ImageView ::GlobalNamespace::TextOnlyTableCell::__get__highlightImage() const {
return ::cordl_internals::getInstanceField<::HMUI::ImageView, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW ::GlobalNamespace::TextOnlyTableCell::get_text()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextOnlyTableCell>::get(),
                            "get_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::TextOnlyTableCell::set_text(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextOnlyTableCell>::get(),
                            "set_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::TextOnlyTableCell::SelectionDidChange(::HMUI::____HMUI__SelectableCell__TransitionType transitionType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextOnlyTableCell>::get(),
                            "SelectionDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::____HMUI__SelectableCell__TransitionType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, transitionType);
}
 void ::GlobalNamespace::TextOnlyTableCell::HighlightDidChange(::HMUI::____HMUI__SelectableCell__TransitionType transitionType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextOnlyTableCell>::get(),
                            "HighlightDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::____HMUI__SelectableCell__TransitionType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, transitionType);
}
 void ::GlobalNamespace::TextOnlyTableCell::RefreshVisuals()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextOnlyTableCell>::get(),
                            "RefreshVisuals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::TextOnlyTableCell::TextOnlyTableCell()  : ::HMUI::TableCell(THROW_UNLESS(::il2cpp_utils::New<TextOnlyTableCell>())) {}
 void ::GlobalNamespace::TextOnlyTableCell::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextOnlyTableCell>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
