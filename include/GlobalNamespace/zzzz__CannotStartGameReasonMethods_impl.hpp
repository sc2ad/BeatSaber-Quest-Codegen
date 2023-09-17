#pragma once
namespace {
#include "GlobalNamespace/zzzz__CannotStartGameReasonMethods_def.hpp"
#include "GlobalNamespace/zzzz__CannotStartGameReason_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CannotStartGameReasonMethods.LocalizedKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::CannotStartGameReason)>(&::GlobalNamespace::CannotStartGameReasonMethods::LocalizedKey)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x21f2c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CannotStartGameReasonMethods>::get(),
                            "LocalizedKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CannotStartGameReason>::get()}
                        )));
    return ___internal_method;
  }
};
 ::StringW ::GlobalNamespace::CannotStartGameReasonMethods::LocalizedKey(::GlobalNamespace::CannotStartGameReason cannotStartGameReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CannotStartGameReasonMethods>::get(),
                            "LocalizedKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CannotStartGameReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, cannotStartGameReason);
}
} // end anonymous namespace
