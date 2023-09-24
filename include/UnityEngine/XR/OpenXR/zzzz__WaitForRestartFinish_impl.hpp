#pragma once
#include "UnityEngine/zzzz__CustomYieldInstruction_impl.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__WaitForRestartFinish_def.hpp"
//  Writing Method size for method: UnityEngine::XR::OpenXR::WaitForRestartFinish._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::WaitForRestartFinish::*)(float_t)>(&UnityEngine::XR::OpenXR::WaitForRestartFinish::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2aeb974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::WaitForRestartFinish>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::WaitForRestartFinish.get_keepWaiting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::OpenXR::WaitForRestartFinish::*)()>(&UnityEngine::XR::OpenXR::WaitForRestartFinish::get_keepWaiting)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2aed5f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::XR::OpenXR::WaitForRestartFinish),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::WaitForRestartFinish>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::XR::OpenXR::WaitForRestartFinish::__set_m_Timeout(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::XR::OpenXR::WaitForRestartFinish::__get_m_Timeout() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
/// @param timeout: float_t (default: 5)
 UnityEngine::XR::OpenXR::WaitForRestartFinish UnityEngine::XR::OpenXR::WaitForRestartFinish::New_ctor(float_t timeout)  {
UnityEngine::XR::OpenXR::WaitForRestartFinish o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::XR::OpenXR::WaitForRestartFinish>(timeout))};
return o;
}
/// @param timeout: float_t (default: 5)
 void UnityEngine::XR::OpenXR::WaitForRestartFinish::_ctor(float_t timeout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::WaitForRestartFinish>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, timeout);
}
 bool UnityEngine::XR::OpenXR::WaitForRestartFinish::get_keepWaiting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::WaitForRestartFinish>::get(),
                            "get_keepWaiting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
