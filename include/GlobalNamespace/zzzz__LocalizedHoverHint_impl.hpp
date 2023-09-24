#pragma once
#include "Polyglot/zzzz__LocalizedTextComponent_1_impl.hpp"
#include "GlobalNamespace/zzzz__LocalizedHoverHint_def.hpp"
#include "HMUI/zzzz__HoverHint_def.hpp"
#include "Polyglot/zzzz__LanguageDirection_def.hpp"
//  Writing Method size for method: GlobalNamespace::LocalizedHoverHint.SetText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalizedHoverHint::*)(HMUI::HoverHint, ::StringW)>(&GlobalNamespace::LocalizedHoverHint::SetText)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x21470c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::LocalizedHoverHint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalizedHoverHint>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalizedHoverHint.UpdateAlignment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalizedHoverHint::*)(HMUI::HoverHint, Polyglot::LanguageDirection)>(&GlobalNamespace::LocalizedHoverHint::UpdateAlignment)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21470dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::LocalizedHoverHint),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalizedHoverHint>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LocalizedHoverHint._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalizedHoverHint::*)()>(&GlobalNamespace::LocalizedHoverHint::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x21470e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalizedHoverHint>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::LocalizedHoverHint::SetText(HMUI::HoverHint hoverHint, ::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalizedHoverHint>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::HoverHint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, hoverHint, value);
}
 void GlobalNamespace::LocalizedHoverHint::UpdateAlignment(HMUI::HoverHint hoverHint, Polyglot::LanguageDirection direction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalizedHoverHint>::get(),
                            "UpdateAlignment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::HoverHint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Polyglot::LanguageDirection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, hoverHint, direction);
}
 GlobalNamespace::LocalizedHoverHint GlobalNamespace::LocalizedHoverHint::New_ctor()  {
GlobalNamespace::LocalizedHoverHint o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::LocalizedHoverHint>())};
return o;
}
 void GlobalNamespace::LocalizedHoverHint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LocalizedHoverHint>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
