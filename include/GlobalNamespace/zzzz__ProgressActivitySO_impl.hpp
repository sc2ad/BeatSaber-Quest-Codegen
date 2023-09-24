#pragma once
#include "GlobalNamespace/zzzz__PS5ActivityDataSO_impl.hpp"
#include "GlobalNamespace/zzzz__ProgressActivitySO_def.hpp"
#include "GlobalNamespace/zzzz__ProgressActivitySubtaskSO_def.hpp"
//  Writing Method size for method: GlobalNamespace::ProgressActivitySO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ProgressActivitySO::*)()>(&GlobalNamespace::ProgressActivitySO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221a7ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ProgressActivitySO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ProgressActivitySO::__set_subtasks(::ArrayW<GlobalNamespace::ProgressActivitySubtaskSO> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::ProgressActivitySubtaskSO>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::ProgressActivitySubtaskSO>>(value));
}
constexpr ::ArrayW<GlobalNamespace::ProgressActivitySubtaskSO> GlobalNamespace::ProgressActivitySO::__get_subtasks() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::ProgressActivitySubtaskSO>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::ProgressActivitySO GlobalNamespace::ProgressActivitySO::New_ctor()  {
GlobalNamespace::ProgressActivitySO o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::ProgressActivitySO>())};
return o;
}
 void GlobalNamespace::ProgressActivitySO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ProgressActivitySO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
