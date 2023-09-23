#pragma once
#include "UnityEngine/ResourceManagement/zzzz__WebRequestQueue_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequestAsyncOperation_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__WebRequestQueueOperation_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
//  Writing Method size for method: UnityEngine::ResourceManagement::WebRequestQueue.SetMaxConcurrentRequests
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&UnityEngine::ResourceManagement::WebRequestQueue::SetMaxConcurrentRequests)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2a37624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::WebRequestQueue>::get(),
                            "SetMaxConcurrentRequests",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::WebRequestQueue.QueueRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::WebRequestQueueOperation (*)(UnityEngine::Networking::UnityWebRequest)>(&UnityEngine::ResourceManagement::WebRequestQueue::QueueRequest)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x2a376e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::WebRequestQueue>::get(),
                            "QueueRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::UnityWebRequest>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::WebRequestQueue.WaitForRequestToBeActive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ResourceManagement::WebRequestQueueOperation, int32_t)>(&UnityEngine::ResourceManagement::WebRequestQueue::WaitForRequestToBeActive)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x2a37c8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::WebRequestQueue>::get(),
                            "WaitForRequestToBeActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::WebRequestQueueOperation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::WebRequestQueue.OnWebAsyncOpComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::AsyncOperation)>(&UnityEngine::ResourceManagement::WebRequestQueue::OnWebAsyncOpComplete)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x2a37a2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::WebRequestQueue>::get(),
                            "OnWebAsyncOpComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AsyncOperation>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::ResourceManagement::WebRequestQueue::__set_s_MaxRequest(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "s_MaxRequest", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::WebRequestQueue>::get>(std::forward<int32_t>(value));
}
 int32_t UnityEngine::ResourceManagement::WebRequestQueue::__get_s_MaxRequest()  {
return ::cordl_internals::getStaticField<int32_t, "s_MaxRequest", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::WebRequestQueue>::get>();
}
 void UnityEngine::ResourceManagement::WebRequestQueue::__set_s_QueuedOperations(System::Collections::Generic::Queue_1<UnityEngine::ResourceManagement::WebRequestQueueOperation> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Queue_1<UnityEngine::ResourceManagement::WebRequestQueueOperation>, "s_QueuedOperations", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::WebRequestQueue>::get>(std::forward<System::Collections::Generic::Queue_1<UnityEngine::ResourceManagement::WebRequestQueueOperation>>(value));
}
 System::Collections::Generic::Queue_1<UnityEngine::ResourceManagement::WebRequestQueueOperation> UnityEngine::ResourceManagement::WebRequestQueue::__get_s_QueuedOperations()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Queue_1<UnityEngine::ResourceManagement::WebRequestQueueOperation>, "s_QueuedOperations", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::WebRequestQueue>::get>();
}
 void UnityEngine::ResourceManagement::WebRequestQueue::__set_s_ActiveRequests(System::Collections::Generic::List_1<UnityEngine::Networking::UnityWebRequestAsyncOperation> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::List_1<UnityEngine::Networking::UnityWebRequestAsyncOperation>, "s_ActiveRequests", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::WebRequestQueue>::get>(std::forward<System::Collections::Generic::List_1<UnityEngine::Networking::UnityWebRequestAsyncOperation>>(value));
}
 System::Collections::Generic::List_1<UnityEngine::Networking::UnityWebRequestAsyncOperation> UnityEngine::ResourceManagement::WebRequestQueue::__get_s_ActiveRequests()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::List_1<UnityEngine::Networking::UnityWebRequestAsyncOperation>, "s_ActiveRequests", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::WebRequestQueue>::get>();
}
 void UnityEngine::ResourceManagement::WebRequestQueue::SetMaxConcurrentRequests(int32_t maxRequests)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::WebRequestQueue>::get(),
                            "SetMaxConcurrentRequests",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, maxRequests);
}
 UnityEngine::ResourceManagement::WebRequestQueueOperation UnityEngine::ResourceManagement::WebRequestQueue::QueueRequest(UnityEngine::Networking::UnityWebRequest request)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::WebRequestQueue>::get(),
                            "QueueRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::UnityWebRequest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::WebRequestQueueOperation, false>(nullptr, ___internal_method, request);
}
 void UnityEngine::ResourceManagement::WebRequestQueue::WaitForRequestToBeActive(UnityEngine::ResourceManagement::WebRequestQueueOperation request, int32_t millisecondsTimeout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::WebRequestQueue>::get(),
                            "WaitForRequestToBeActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::WebRequestQueueOperation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, request, millisecondsTimeout);
}
 void UnityEngine::ResourceManagement::WebRequestQueue::OnWebAsyncOpComplete(UnityEngine::AsyncOperation operation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::WebRequestQueue>::get(),
                            "OnWebAsyncOpComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AsyncOperation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, operation);
}
