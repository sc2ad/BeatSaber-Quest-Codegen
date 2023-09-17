#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "HMUI/zzzz__ItemForFocussedScrolling_def.hpp"
//  Writing Method size for method: ::HMUI::ItemForFocussedScrolling._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ItemForFocussedScrolling::*)()>(&::HMUI::ItemForFocussedScrolling::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fcf564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ItemForFocussedScrolling>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::HMUI::ItemForFocussedScrolling::ItemForFocussedScrolling()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<ItemForFocussedScrolling>())) {}
 void ::HMUI::ItemForFocussedScrolling::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ItemForFocussedScrolling>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
