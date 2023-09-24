#pragma once
#include "ENet/zzzz__Callbacks_def.hpp"
#include "ENet/zzzz__NoMemoryCallback_def.hpp"
#include "ENet/zzzz__AllocCallback_def.hpp"
#include "ENet/zzzz__FreeCallback_def.hpp"
#include "ENet/zzzz__ENetCallbacks_def.hpp"
//  Writing Method size for method: ENet::Callbacks.get_NativeData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<ENet::ENetCallbacks (ENet::Callbacks::*)()>(&ENet::Callbacks::get_NativeData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x207d5c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ENet::Callbacks>::get(),
                            "get_NativeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ENet::Callbacks.set_NativeData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ENet::Callbacks::*)(ENet::ENetCallbacks)>(&ENet::Callbacks::set_NativeData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x207d5dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ENet::Callbacks>::get(),
                            "set_NativeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ENet::ENetCallbacks>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ENet::Callbacks._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ENet::Callbacks::*)(ENet::AllocCallback, ENet::FreeCallback, ENet::NoMemoryCallback)>(&ENet::Callbacks::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x207d5f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ENet::Callbacks>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ENet::AllocCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ENet::FreeCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ENet::NoMemoryCallback>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ENet::Callbacks::__set_nativeCallbacks(ENet::ENetCallbacks value)  {
::cordl_internals::setInstanceField<ENet::ENetCallbacks, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<ENet::ENetCallbacks>(value));
}
constexpr ENet::ENetCallbacks ENet::Callbacks::__get_nativeCallbacks() const {
return ::cordl_internals::getInstanceField<ENet::ENetCallbacks, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ENet::ENetCallbacks ENet::Callbacks::get_NativeData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ENet::Callbacks>::get(),
                            "get_NativeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<ENet::ENetCallbacks, false>(const_cast<void*>(instance), ___internal_method);
}
 void ENet::Callbacks::set_NativeData(ENet::ENetCallbacks value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ENet::Callbacks>::get(),
                            "set_NativeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ENet::ENetCallbacks>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ENet::Callbacks ENet::Callbacks::New_ctor(ENet::AllocCallback allocCallback, ENet::FreeCallback freeCallback, ENet::NoMemoryCallback noMemoryCallback)  {
ENet::Callbacks o{THROW_UNLESS(::il2cpp_utils::New<ENet::Callbacks>(allocCallback, freeCallback, noMemoryCallback))};
return o;
}
 void ENet::Callbacks::_ctor(ENet::AllocCallback allocCallback, ENet::FreeCallback freeCallback, ENet::NoMemoryCallback noMemoryCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ENet::Callbacks>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ENet::AllocCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ENet::FreeCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ENet::NoMemoryCallback>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, allocCallback, freeCallback, noMemoryCallback);
}
