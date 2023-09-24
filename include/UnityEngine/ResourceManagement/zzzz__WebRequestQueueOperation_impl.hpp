#pragma once
#include "UnityEngine/ResourceManagement/zzzz__WebRequestQueueOperation_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequestAsyncOperation_def.hpp"
//  Writing Method size for method: UnityEngine::ResourceManagement::WebRequestQueueOperation.get_IsDone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::WebRequestQueueOperation::*)()>(&UnityEngine::ResourceManagement::WebRequestQueueOperation::get_IsDone)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a375b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::WebRequestQueueOperation>::get(),
                            "get_IsDone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::WebRequestQueueOperation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::WebRequestQueueOperation::*)(UnityEngine::Networking::UnityWebRequest)>(&UnityEngine::ResourceManagement::WebRequestQueueOperation::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a375d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::WebRequestQueueOperation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::UnityWebRequest>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::WebRequestQueueOperation.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::WebRequestQueueOperation::*)(UnityEngine::Networking::UnityWebRequestAsyncOperation)>(&UnityEngine::ResourceManagement::WebRequestQueueOperation::Complete)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a375fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::WebRequestQueueOperation>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::UnityWebRequestAsyncOperation>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ResourceManagement::WebRequestQueueOperation::__set_m_Completed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::ResourceManagement::WebRequestQueueOperation::__get_m_Completed() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::WebRequestQueueOperation::__set_Result(UnityEngine::Networking::UnityWebRequestAsyncOperation value)  {
::cordl_internals::setInstanceField<UnityEngine::Networking::UnityWebRequestAsyncOperation, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Networking::UnityWebRequestAsyncOperation>(value));
}
constexpr UnityEngine::Networking::UnityWebRequestAsyncOperation UnityEngine::ResourceManagement::WebRequestQueueOperation::__get_Result() const {
return ::cordl_internals::getInstanceField<UnityEngine::Networking::UnityWebRequestAsyncOperation, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::WebRequestQueueOperation::__set_OnComplete(System::Action_1<UnityEngine::Networking::UnityWebRequestAsyncOperation> value)  {
::cordl_internals::setInstanceField<System::Action_1<UnityEngine::Networking::UnityWebRequestAsyncOperation>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<UnityEngine::Networking::UnityWebRequestAsyncOperation>>(value));
}
constexpr System::Action_1<UnityEngine::Networking::UnityWebRequestAsyncOperation> UnityEngine::ResourceManagement::WebRequestQueueOperation::__get_OnComplete() const {
return ::cordl_internals::getInstanceField<System::Action_1<UnityEngine::Networking::UnityWebRequestAsyncOperation>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::WebRequestQueueOperation::__set_m_WebRequest(UnityEngine::Networking::UnityWebRequest value)  {
::cordl_internals::setInstanceField<UnityEngine::Networking::UnityWebRequest, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Networking::UnityWebRequest>(value));
}
constexpr UnityEngine::Networking::UnityWebRequest UnityEngine::ResourceManagement::WebRequestQueueOperation::__get_m_WebRequest() const {
return ::cordl_internals::getInstanceField<UnityEngine::Networking::UnityWebRequest, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool UnityEngine::ResourceManagement::WebRequestQueueOperation::get_IsDone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::WebRequestQueueOperation>::get(),
                            "get_IsDone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::ResourceManagement::WebRequestQueueOperation UnityEngine::ResourceManagement::WebRequestQueueOperation::New_ctor(UnityEngine::Networking::UnityWebRequest request)  {
UnityEngine::ResourceManagement::WebRequestQueueOperation o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::ResourceManagement::WebRequestQueueOperation>(request))};
return o;
}
 void UnityEngine::ResourceManagement::WebRequestQueueOperation::_ctor(UnityEngine::Networking::UnityWebRequest request)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::WebRequestQueueOperation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::UnityWebRequest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, request);
}
 void UnityEngine::ResourceManagement::WebRequestQueueOperation::Complete(UnityEngine::Networking::UnityWebRequestAsyncOperation asyncOp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::WebRequestQueueOperation>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::UnityWebRequestAsyncOperation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, asyncOp);
}
