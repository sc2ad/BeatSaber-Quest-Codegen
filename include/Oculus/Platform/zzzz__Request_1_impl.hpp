#pragma once
#include "Oculus/Platform/zzzz__Request_impl.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/zzzz__Message_def.hpp"
//  Writing Method size for method: Oculus::Platform::Request_1<bool>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Request_1<bool>::*)(uint64_t)>(&Oculus::Platform::Request_1<bool>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Request_1<bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Request_1<bool>.OnComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<bool> (Oculus::Platform::Request_1<bool>::*)(Oculus::Platform::Oculus__Platform__Message_1__Callback<bool>)>(&Oculus::Platform::Request_1<bool>::OnComplete)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Request_1<bool>>::get(),
                            "OnComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Oculus__Platform__Message_1__Callback<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::Request_1<bool>.HandleMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Request_1<bool>::*)(Oculus::Platform::Message)>(&Oculus::Platform::Request_1<bool>::HandleMessage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::Request_1<bool>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Request_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Request_1<bool>::__set_callback_(Oculus::Platform::Oculus__Platform__Message_1__Callback<bool> value)  {
::cordl_internals::setInstanceField<Oculus::Platform::Oculus__Platform__Message_1__Callback<bool>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Oculus::Platform::Oculus__Platform__Message_1__Callback<bool>>(value));
}
constexpr Oculus::Platform::Oculus__Platform__Message_1__Callback<bool> Oculus::Platform::Request_1<bool>::__get_callback_() const {
return ::cordl_internals::getInstanceField<Oculus::Platform::Oculus__Platform__Message_1__Callback<bool>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Oculus::Platform::Request_1<bool> Oculus::Platform::Request_1<bool>::New_ctor(uint64_t requestID)  {
Oculus::Platform::Request_1<bool> o{THROW_UNLESS(::il2cpp_utils::New<Oculus::Platform::Request_1<bool>>(requestID))};
return o;
}
 void Oculus::Platform::Request_1<bool>::_ctor(uint64_t requestID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Request_1<bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, requestID);
}
 Oculus::Platform::Request_1<bool> Oculus::Platform::Request_1<bool>::OnComplete(Oculus::Platform::Oculus__Platform__Message_1__Callback<bool> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Request_1<bool>>::get(),
                            "OnComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Oculus__Platform__Message_1__Callback<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<bool>, false>(const_cast<void*>(instance), ___internal_method, callback);
}
 void Oculus::Platform::Request_1<bool>::HandleMessage(Oculus::Platform::Message msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Request_1<bool>>::get(),
                            "HandleMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Message>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, msg);
}
constexpr void Oculus::Platform::Request_1<T>::__set_callback_(Oculus::Platform::Oculus__Platform__Message_1__Callback<T> value)  {
::cordl_internals::setInstanceField<Oculus::Platform::Oculus__Platform__Message_1__Callback<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Oculus::Platform::Oculus__Platform__Message_1__Callback<T>>(value));
}
constexpr Oculus::Platform::Oculus__Platform__Message_1__Callback<T> Oculus::Platform::Request_1<T>::__get_callback_() const {
return ::cordl_internals::getInstanceField<Oculus::Platform::Oculus__Platform__Message_1__Callback<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Oculus::Platform::Request_1<T> Oculus::Platform::Request_1<T>::New_ctor(uint64_t requestID)  {
Oculus::Platform::Request_1<T> o{THROW_UNLESS(::il2cpp_utils::New<Oculus::Platform::Request_1<T>>(requestID))};
return o;
}
 void Oculus::Platform::Request_1<T>::_ctor(uint64_t requestID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Request_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, requestID);
}
 Oculus::Platform::Request_1<T> Oculus::Platform::Request_1<T>::OnComplete(Oculus::Platform::Oculus__Platform__Message_1__Callback<T> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Request_1<T>>::get(),
                            "OnComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Oculus__Platform__Message_1__Callback<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<T>, false>(const_cast<void*>(instance), ___internal_method, callback);
}
 void Oculus::Platform::Request_1<T>::HandleMessage(Oculus::Platform::Message msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Request_1<T>>::get(),
                            "HandleMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Message>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, msg);
}
