#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "GlobalNamespace/zzzz__ISonyOnlineServicesAvailabilityModel_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "GlobalNamespace/zzzz__HMAsyncRequest_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability  GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability::Unknown{0};
constexpr GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability  GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability::Available{1};
constexpr GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability  GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability::Unavailable{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult  GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult::Available{0};
constexpr GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult  GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult::Unavailable{1};
constexpr GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult  GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult::Failed{2};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x221ae60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler::*)(GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult)>(&GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x221af24;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler::*)(GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x221af38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler::*)(System::IAsyncResult)>(&GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x221afbc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler>(object, method))) {}
 void GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler::Invoke(GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
 System::IAsyncResult GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler::BeginInvoke(GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult result, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, result, callback, object);
}
 void GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: GlobalNamespace::ISonyOnlineServicesAvailabilityModel.get_onlineServicesAvailability
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability (GlobalNamespace::ISonyOnlineServicesAvailabilityModel::*)()>(&GlobalNamespace::ISonyOnlineServicesAvailabilityModel::get_onlineServicesAvailability)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::ISonyOnlineServicesAvailabilityModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ISonyOnlineServicesAvailabilityModel>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ISonyOnlineServicesAvailabilityModel.GetOnlineServicesAvailability
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::HMAsyncRequest (GlobalNamespace::ISonyOnlineServicesAvailabilityModel::*)(GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler)>(&GlobalNamespace::ISonyOnlineServicesAvailabilityModel::GetOnlineServicesAvailability)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::ISonyOnlineServicesAvailabilityModel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ISonyOnlineServicesAvailabilityModel>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability GlobalNamespace::ISonyOnlineServicesAvailabilityModel::get_onlineServicesAvailability()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ISonyOnlineServicesAvailabilityModel>::get(),
                            "get_onlineServicesAvailability",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::HMAsyncRequest GlobalNamespace::ISonyOnlineServicesAvailabilityModel::GetOnlineServicesAvailability(GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler completionHandler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ISonyOnlineServicesAvailabilityModel>::get(),
                            "GetOnlineServicesAvailability",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::HMAsyncRequest, false>(const_cast<void*>(instance), ___internal_method, completionHandler);
}
