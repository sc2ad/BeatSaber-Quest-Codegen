#pragma once
namespace {
#include "HMUI/zzzz__EventSystemHelpers_def.hpp"
//  Writing Method size for method: ::HMUI::EventSystemHelpers.IsInputFieldSelected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::HMUI::EventSystemHelpers::IsInputFieldSelected)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x1fa9468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::EventSystemHelpers>::get(),
                            "IsInputFieldSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 bool ::HMUI::EventSystemHelpers::IsInputFieldSelected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::EventSystemHelpers>::get(),
                            "IsInputFieldSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
} // end anonymous namespace
