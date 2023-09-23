#pragma once
#include "UnityEngine/UIElements/zzzz__DisposeHelper_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::DisposeHelper.NotifyDisposedUsed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IDisposable)>(&UnityEngine::UIElements::DisposeHelper::NotifyDisposedUsed)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2c80e3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DisposeHelper>::get(),
                            "NotifyDisposedUsed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IDisposable>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::UIElements::DisposeHelper::NotifyDisposedUsed(System::IDisposable disposable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DisposeHelper>::get(),
                            "NotifyDisposedUsed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IDisposable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, disposable);
}
