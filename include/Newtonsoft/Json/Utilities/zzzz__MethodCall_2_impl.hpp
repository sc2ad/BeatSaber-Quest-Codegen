#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__MethodCall_2_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
//  Writing Method size for method: Newtonsoft::Json::Utilities::MethodCall_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Utilities::MethodCall_2::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&Newtonsoft::Json::Utilities::MethodCall_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::MethodCall_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Utilities::MethodCall_2.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TResult (Newtonsoft::Json::Utilities::MethodCall_2::*)(T, ::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Newtonsoft::Json::Utilities::MethodCall_2::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Newtonsoft::Json::Utilities::MethodCall_2),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::MethodCall_2>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Utilities::MethodCall_2.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (Newtonsoft::Json::Utilities::MethodCall_2::*)(T, ::ArrayW<::bs_hook::Il2CppWrapperType>, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&Newtonsoft::Json::Utilities::MethodCall_2::BeginInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Newtonsoft::Json::Utilities::MethodCall_2),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::MethodCall_2>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Utilities::MethodCall_2.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TResult (Newtonsoft::Json::Utilities::MethodCall_2::*)(System::IAsyncResult)>(&Newtonsoft::Json::Utilities::MethodCall_2::EndInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Newtonsoft::Json::Utilities::MethodCall_2),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::MethodCall_2>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 Newtonsoft::Json::Utilities::MethodCall_2::MethodCall_2(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<MethodCall_2>(object, method))) {}
 void Newtonsoft::Json::Utilities::MethodCall_2::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::MethodCall_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 TResult Newtonsoft::Json::Utilities::MethodCall_2::Invoke(T target, ::ArrayW<::bs_hook::Il2CppWrapperType> args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::MethodCall_2>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TResult, false>(const_cast<void*>(instance), ___internal_method, target, args);
}
 System::IAsyncResult Newtonsoft::Json::Utilities::MethodCall_2::BeginInvoke(T target, ::ArrayW<::bs_hook::Il2CppWrapperType> args, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::MethodCall_2>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, target, args, callback, object);
}
 TResult Newtonsoft::Json::Utilities::MethodCall_2::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::MethodCall_2>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TResult, false>(const_cast<void*>(instance), ___internal_method, result);
}
