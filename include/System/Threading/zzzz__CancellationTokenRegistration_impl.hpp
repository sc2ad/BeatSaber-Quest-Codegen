#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationCallbackInfo_def.hpp"
#include "System/Threading/zzzz__SparselyPopulatedArrayAddInfo_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: System::Threading::CancellationTokenRegistration._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CancellationTokenRegistration::*)(System::Threading::CancellationCallbackInfo, System::Threading::SparselyPopulatedArrayAddInfo_1<System::Threading::CancellationCallbackInfo>)>(&System::Threading::CancellationTokenRegistration::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24a4f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenRegistration>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationCallbackInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::SparselyPopulatedArrayAddInfo_1<System::Threading::CancellationCallbackInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::CancellationTokenRegistration.Unregister
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::CancellationTokenRegistration::*)()>(&System::Threading::CancellationTokenRegistration::Unregister)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x24a4fa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenRegistration>::get(),
                            "Unregister",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::CancellationTokenRegistration.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CancellationTokenRegistration::*)()>(&System::Threading::CancellationTokenRegistration::Dispose)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x24a501c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenRegistration>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::CancellationTokenRegistration.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::CancellationTokenRegistration::*)(::bs_hook::Il2CppWrapperType)>(&System::Threading::CancellationTokenRegistration::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x24a5130;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::CancellationTokenRegistration),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenRegistration>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::CancellationTokenRegistration.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::CancellationTokenRegistration::*)(System::Threading::CancellationTokenRegistration)>(&System::Threading::CancellationTokenRegistration::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x24a51c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenRegistration>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationTokenRegistration>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::CancellationTokenRegistration.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Threading::CancellationTokenRegistration::*)()>(&System::Threading::CancellationTokenRegistration::GetHashCode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x24a5240;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::CancellationTokenRegistration),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenRegistration>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IEquatable_1<System::Threading::CancellationTokenRegistration>
constexpr  System::Threading::CancellationTokenRegistration::operator System::IEquatable_1<System::Threading::CancellationTokenRegistration>() const {
return System::IEquatable_1<System::Threading::CancellationTokenRegistration>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::IDisposable
constexpr  System::Threading::CancellationTokenRegistration::operator System::IDisposable() const {
return System::IDisposable(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_callbackInfo", ty: "System::Threading::CancellationCallbackInfo", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_registrationInfo", ty: "System::Threading::SparselyPopulatedArrayAddInfo_1<System::Threading::CancellationCallbackInfo>", modifiers: "", def_value: Some("{}") }]
constexpr System::Threading::CancellationTokenRegistration::CancellationTokenRegistration(System::Threading::CancellationCallbackInfo m_callbackInfo, System::Threading::SparselyPopulatedArrayAddInfo_1<System::Threading::CancellationCallbackInfo> m_registrationInfo) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_callbackInfo = m_callbackInfo;
this->m_registrationInfo = m_registrationInfo;
}
constexpr void System::Threading::CancellationTokenRegistration::__set_m_callbackInfo(System::Threading::CancellationCallbackInfo value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationCallbackInfo, 0x0>(this->__instance, std::forward<System::Threading::CancellationCallbackInfo>(value));
}
constexpr System::Threading::CancellationCallbackInfo System::Threading::CancellationTokenRegistration::__get_m_callbackInfo() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationCallbackInfo, 0x0>(this->__instance);
}
constexpr void System::Threading::CancellationTokenRegistration::__set_m_registrationInfo(System::Threading::SparselyPopulatedArrayAddInfo_1<System::Threading::CancellationCallbackInfo> value)  {
::cordl_internals::setInstanceField<System::Threading::SparselyPopulatedArrayAddInfo_1<System::Threading::CancellationCallbackInfo>, 0x8>(this->__instance, std::forward<System::Threading::SparselyPopulatedArrayAddInfo_1<System::Threading::CancellationCallbackInfo>>(value));
}
constexpr System::Threading::SparselyPopulatedArrayAddInfo_1<System::Threading::CancellationCallbackInfo> System::Threading::CancellationTokenRegistration::__get_m_registrationInfo() const {
return ::cordl_internals::getInstanceField<System::Threading::SparselyPopulatedArrayAddInfo_1<System::Threading::CancellationCallbackInfo>, 0x8>(this->__instance);
}
 void System::Threading::CancellationTokenRegistration::_ctor(System::Threading::CancellationCallbackInfo callbackInfo, System::Threading::SparselyPopulatedArrayAddInfo_1<System::Threading::CancellationCallbackInfo> registrationInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenRegistration>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationCallbackInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::SparselyPopulatedArrayAddInfo_1<System::Threading::CancellationCallbackInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, callbackInfo, registrationInfo);
}
 bool System::Threading::CancellationTokenRegistration::Unregister()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenRegistration>::get(),
                            "Unregister",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Threading::CancellationTokenRegistration::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenRegistration>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool System::Threading::CancellationTokenRegistration::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenRegistration>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 bool System::Threading::CancellationTokenRegistration::Equals(System::Threading::CancellationTokenRegistration other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenRegistration>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationTokenRegistration>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t System::Threading::CancellationTokenRegistration::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::CancellationTokenRegistration>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
