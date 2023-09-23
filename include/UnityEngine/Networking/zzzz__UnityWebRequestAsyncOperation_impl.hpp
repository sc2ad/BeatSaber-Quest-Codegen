#pragma once
#include "UnityEngine/zzzz__AsyncOperation_impl.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequestAsyncOperation_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequestAsyncOperation.get_webRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Networking::UnityWebRequest (UnityEngine::Networking::UnityWebRequestAsyncOperation::*)()>(&UnityEngine::Networking::UnityWebRequestAsyncOperation::get_webRequest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d35494;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequestAsyncOperation>::get(),
                            "get_webRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequestAsyncOperation.set_webRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::UnityWebRequestAsyncOperation::*)(UnityEngine::Networking::UnityWebRequest)>(&UnityEngine::Networking::UnityWebRequestAsyncOperation::set_webRequest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d3549c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequestAsyncOperation>::get(),
                            "set_webRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::UnityWebRequest>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Networking::UnityWebRequestAsyncOperation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::UnityWebRequestAsyncOperation::*)()>(&UnityEngine::Networking::UnityWebRequestAsyncOperation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d354a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequestAsyncOperation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Networking::UnityWebRequestAsyncOperation::__set__webRequest_k__BackingField(UnityEngine::Networking::UnityWebRequest value)  {
::cordl_internals::setInstanceField<UnityEngine::Networking::UnityWebRequest, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Networking::UnityWebRequest>(value));
}
constexpr UnityEngine::Networking::UnityWebRequest UnityEngine::Networking::UnityWebRequestAsyncOperation::__get__webRequest_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::Networking::UnityWebRequest, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::Networking::UnityWebRequest UnityEngine::Networking::UnityWebRequestAsyncOperation::get_webRequest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequestAsyncOperation>::get(),
                            "get_webRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Networking::UnityWebRequest, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Networking::UnityWebRequestAsyncOperation::set_webRequest(UnityEngine::Networking::UnityWebRequest value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequestAsyncOperation>::get(),
                            "set_webRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::UnityWebRequest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 UnityEngine::Networking::UnityWebRequestAsyncOperation::UnityWebRequestAsyncOperation()  : UnityEngine::AsyncOperation(THROW_UNLESS(::il2cpp_utils::New<UnityWebRequestAsyncOperation>())) {}
 void UnityEngine::Networking::UnityWebRequestAsyncOperation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Networking::UnityWebRequestAsyncOperation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
