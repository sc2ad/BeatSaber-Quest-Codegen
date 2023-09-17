#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
namespace {
#include "UnityEngine/zzzz__CullingGroup_def.hpp"
#include "UnityEngine/zzzz__CullingGroupEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::____UnityEngine__CullingGroup__StateChanged._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::____UnityEngine__CullingGroup__StateChanged::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::UnityEngine::____UnityEngine__CullingGroup__StateChanged::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2b4f5c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::____UnityEngine__CullingGroup__StateChanged>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::____UnityEngine__CullingGroup__StateChanged.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::____UnityEngine__CullingGroup__StateChanged::*)(::UnityEngine::CullingGroupEvent)>(&::UnityEngine::____UnityEngine__CullingGroup__StateChanged::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2b4f68c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::____UnityEngine__CullingGroup__StateChanged),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::____UnityEngine__CullingGroup__StateChanged>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::UnityEngine::____UnityEngine__CullingGroup__StateChanged::____UnityEngine__CullingGroup__StateChanged(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__CullingGroup__StateChanged>(object, method))) {}
 void ::UnityEngine::____UnityEngine__CullingGroup__StateChanged::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::____UnityEngine__CullingGroup__StateChanged>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void ::UnityEngine::____UnityEngine__CullingGroup__StateChanged::Invoke(::UnityEngine::CullingGroupEvent sphere)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::____UnityEngine__CullingGroup__StateChanged>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CullingGroupEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sphere);
}
//  Writing Method size for method: ::UnityEngine::CullingGroup.SendEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::CullingGroup, ::cordl_internals::intptr_t, int32_t)>(&::UnityEngine::CullingGroup::SendEvents)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2b4f56c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::CullingGroup>::get(),
                            "SendEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CullingGroup>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::CullingGroup::__set_m_Ptr(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::UnityEngine::CullingGroup::__get_m_Ptr() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::CullingGroup::__set_m_OnStateChanged(::UnityEngine::____UnityEngine__CullingGroup__StateChanged value)  {
::cordl_internals::setInstanceField<::UnityEngine::____UnityEngine__CullingGroup__StateChanged, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::____UnityEngine__CullingGroup__StateChanged>(value));
}
constexpr ::UnityEngine::____UnityEngine__CullingGroup__StateChanged ::UnityEngine::CullingGroup::__get_m_OnStateChanged() const {
return ::cordl_internals::getInstanceField<::UnityEngine::____UnityEngine__CullingGroup__StateChanged, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::UnityEngine::CullingGroup::SendEvents(::UnityEngine::CullingGroup cullingGroup, ::cordl_internals::intptr_t eventsPtr, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::CullingGroup>::get(),
                            "SendEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CullingGroup>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cullingGroup, eventsPtr, count);
}
} // end anonymous namespace
