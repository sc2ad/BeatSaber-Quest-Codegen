#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__IPlatformAchievementsHandler_def.hpp"
#include "GlobalNamespace/zzzz__HMAsyncRequest_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementResult::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementResult(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementResult::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementResult::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementResult  ::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementResult::OK{0};
constexpr ::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementResult  ::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementResult::Failed{1};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsResult::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsResult(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsResult::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsResult::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsResult  ::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsResult::OK{0};
constexpr ::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsResult  ::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsResult::Failed{1};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x20c6e00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler::*)(::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementResult)>(&::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x20c71c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler::*)(::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementResult, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x20c71d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler::*)(::System::IAsyncResult)>(&::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x20c7258;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler>(object, method))) {}
 void ::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void ::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler::Invoke(::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
 ::System::IAsyncResult ::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler::BeginInvoke(::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementResult result, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, result, callback, object);
}
 void ::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x20c6d34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler::*)(::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsResult, ::ArrayW<::StringW>)>(&::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x20c7264;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler::*)(::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsResult, ::ArrayW<::StringW>, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x20c7278;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler::*)(::System::IAsyncResult)>(&::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x20c7308;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler>(object, method))) {}
 void ::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void ::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler::Invoke(::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsResult result, ::ArrayW<::StringW> unlockedAchievementsIds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result, unlockedAchievementsIds);
}
 ::System::IAsyncResult ::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler::BeginInvoke(::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsResult result, ::ArrayW<::StringW> unlockedAchievementsIds, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, result, unlockedAchievementsIds, callback, object);
}
 void ::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::GlobalNamespace::IPlatformAchievementsHandler.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IPlatformAchievementsHandler::*)()>(&::GlobalNamespace::IPlatformAchievementsHandler::Initialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::IPlatformAchievementsHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IPlatformAchievementsHandler.UnlockAchievement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::HMAsyncRequest (::GlobalNamespace::IPlatformAchievementsHandler::*)(::StringW, ::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler)>(&::GlobalNamespace::IPlatformAchievementsHandler::UnlockAchievement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::IPlatformAchievementsHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IPlatformAchievementsHandler.GetUnlockedAchievements
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::HMAsyncRequest (::GlobalNamespace::IPlatformAchievementsHandler::*)(::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler)>(&::GlobalNamespace::IPlatformAchievementsHandler::GetUnlockedAchievements)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::IPlatformAchievementsHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
 void ::GlobalNamespace::IPlatformAchievementsHandler::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::HMAsyncRequest ::GlobalNamespace::IPlatformAchievementsHandler::UnlockAchievement(::StringW achievementId, ::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler completionHandler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler>::get(),
                            "UnlockAchievement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest, false>(const_cast<void*>(instance), ___internal_method, achievementId, completionHandler);
}
 ::GlobalNamespace::HMAsyncRequest ::GlobalNamespace::IPlatformAchievementsHandler::GetUnlockedAchievements(::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler completionHandler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler>::get(),
                            "GetUnlockedAchievements",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest, false>(const_cast<void*>(instance), ___internal_method, completionHandler);
}
} // end anonymous namespace
