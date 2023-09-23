#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__ScrollToTopOnEnable_def.hpp"
#include "HMUI/zzzz__ScrollView_def.hpp"
//  Writing Method size for method: HMUI::ScrollToTopOnEnable.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ScrollToTopOnEnable::*)()>(&HMUI::ScrollToTopOnEnable::OnEnable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1fcf56c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ScrollToTopOnEnable>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ScrollToTopOnEnable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ScrollToTopOnEnable::*)()>(&HMUI::ScrollToTopOnEnable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fcf650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ScrollToTopOnEnable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::ScrollToTopOnEnable::__set__scrollView(HMUI::ScrollView value)  {
::cordl_internals::setInstanceField<HMUI::ScrollView, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::ScrollView>(value));
}
constexpr HMUI::ScrollView HMUI::ScrollToTopOnEnable::__get__scrollView() const {
return ::cordl_internals::getInstanceField<HMUI::ScrollView, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void HMUI::ScrollToTopOnEnable::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ScrollToTopOnEnable>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 HMUI::ScrollToTopOnEnable::ScrollToTopOnEnable()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<ScrollToTopOnEnable>())) {}
 void HMUI::ScrollToTopOnEnable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ScrollToTopOnEnable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
