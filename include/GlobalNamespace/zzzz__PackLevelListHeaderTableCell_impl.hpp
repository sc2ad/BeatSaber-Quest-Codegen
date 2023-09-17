#pragma once
#include "HMUI/zzzz__TableCell_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__PackLevelListHeaderTableCell_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PackLevelListHeaderTableCell.set_text
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackLevelListHeaderTableCell::*)(::StringW)>(&::GlobalNamespace::PackLevelListHeaderTableCell::set_text)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2126fc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell>::get(),
                            "set_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackLevelListHeaderTableCell.get_text
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PackLevelListHeaderTableCell::*)()>(&::GlobalNamespace::PackLevelListHeaderTableCell::get_text)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2126fe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell>::get(),
                            "get_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackLevelListHeaderTableCell.SelectionDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackLevelListHeaderTableCell::*)(::HMUI::____HMUI__SelectableCell__TransitionType)>(&::GlobalNamespace::PackLevelListHeaderTableCell::SelectionDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2127008;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::PackLevelListHeaderTableCell),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackLevelListHeaderTableCell.HighlightDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackLevelListHeaderTableCell::*)(::HMUI::____HMUI__SelectableCell__TransitionType)>(&::GlobalNamespace::PackLevelListHeaderTableCell::HighlightDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2127094;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::PackLevelListHeaderTableCell),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackLevelListHeaderTableCell.RefreshVisuals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackLevelListHeaderTableCell::*)()>(&::GlobalNamespace::PackLevelListHeaderTableCell::RefreshVisuals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x212700c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell>::get(),
                            "RefreshVisuals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackLevelListHeaderTableCell._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackLevelListHeaderTableCell::*)()>(&::GlobalNamespace::PackLevelListHeaderTableCell::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2127098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::PackLevelListHeaderTableCell::__set__selectedHighlightElementsColor(::UnityEngine::Color value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color ::GlobalNamespace::PackLevelListHeaderTableCell::__get__selectedHighlightElementsColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PackLevelListHeaderTableCell::__set__text(::TMPro::TextMeshProUGUI value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TextMeshProUGUI>(value));
}
constexpr ::TMPro::TextMeshProUGUI ::GlobalNamespace::PackLevelListHeaderTableCell::__get__text() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PackLevelListHeaderTableCell::__set__bgImage(::UnityEngine::UI::Image value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Image, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Image>(value));
}
constexpr ::UnityEngine::UI::Image ::GlobalNamespace::PackLevelListHeaderTableCell::__get__bgImage() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Image, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PackLevelListHeaderTableCell::__set__highlightImage(::UnityEngine::UI::Image value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Image, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Image>(value));
}
constexpr ::UnityEngine::UI::Image ::GlobalNamespace::PackLevelListHeaderTableCell::__get__highlightImage() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Image, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PackLevelListHeaderTableCell::__set__arrowImage(::UnityEngine::UI::Image value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Image, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Image>(value));
}
constexpr ::UnityEngine::UI::Image ::GlobalNamespace::PackLevelListHeaderTableCell::__get__arrowImage() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Image, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PackLevelListHeaderTableCell::__set__cancellationTokenSource(::System::Threading::CancellationTokenSource value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationTokenSource, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::CancellationTokenSource>(value));
}
constexpr ::System::Threading::CancellationTokenSource ::GlobalNamespace::PackLevelListHeaderTableCell::__get__cancellationTokenSource() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenSource, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::PackLevelListHeaderTableCell::set_text(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell>::get(),
                            "set_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW ::GlobalNamespace::PackLevelListHeaderTableCell::get_text()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell>::get(),
                            "get_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::PackLevelListHeaderTableCell::SelectionDidChange(::HMUI::____HMUI__SelectableCell__TransitionType transitionType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell>::get(),
                            "SelectionDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::____HMUI__SelectableCell__TransitionType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, transitionType);
}
 void ::GlobalNamespace::PackLevelListHeaderTableCell::HighlightDidChange(::HMUI::____HMUI__SelectableCell__TransitionType transitionType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell>::get(),
                            "HighlightDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::____HMUI__SelectableCell__TransitionType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, transitionType);
}
 void ::GlobalNamespace::PackLevelListHeaderTableCell::RefreshVisuals()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell>::get(),
                            "RefreshVisuals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::PackLevelListHeaderTableCell::PackLevelListHeaderTableCell()  : ::HMUI::TableCell(THROW_UNLESS(::il2cpp_utils::New<PackLevelListHeaderTableCell>())) {}
 void ::GlobalNamespace::PackLevelListHeaderTableCell::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
