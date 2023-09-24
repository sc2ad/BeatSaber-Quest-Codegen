#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Assets/OVR/Scripts/zzzz__FixMethodDelegate_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
//  Writing Method size for method: Assets::OVR::Scripts::FixMethodDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Assets::OVR::Scripts::FixMethodDelegate::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&Assets::OVR::Scripts::FixMethodDelegate::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x266a998;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Assets::OVR::Scripts::FixMethodDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Assets::OVR::Scripts::FixMethodDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Assets::OVR::Scripts::FixMethodDelegate::*)(UnityEngine::Object, bool, int32_t)>(&Assets::OVR::Scripts::FixMethodDelegate::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x266aac8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Assets::OVR::Scripts::FixMethodDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Assets::OVR::Scripts::FixMethodDelegate>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Assets::OVR::Scripts::FixMethodDelegate.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (Assets::OVR::Scripts::FixMethodDelegate::*)(UnityEngine::Object, bool, int32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&Assets::OVR::Scripts::FixMethodDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x266aae0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Assets::OVR::Scripts::FixMethodDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Assets::OVR::Scripts::FixMethodDelegate>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Assets::OVR::Scripts::FixMethodDelegate.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Assets::OVR::Scripts::FixMethodDelegate::*)(System::IAsyncResult)>(&Assets::OVR::Scripts::FixMethodDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x266aba4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Assets::OVR::Scripts::FixMethodDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Assets::OVR::Scripts::FixMethodDelegate>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
 Assets::OVR::Scripts::FixMethodDelegate Assets::OVR::Scripts::FixMethodDelegate::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
Assets::OVR::Scripts::FixMethodDelegate o{THROW_UNLESS(::il2cpp_utils::New<Assets::OVR::Scripts::FixMethodDelegate>(object, method))};
return o;
}
 void Assets::OVR::Scripts::FixMethodDelegate::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Assets::OVR::Scripts::FixMethodDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void Assets::OVR::Scripts::FixMethodDelegate::Invoke(UnityEngine::Object obj, bool isLastInSet, int32_t selectedIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Assets::OVR::Scripts::FixMethodDelegate>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj, isLastInSet, selectedIndex);
}
 System::IAsyncResult Assets::OVR::Scripts::FixMethodDelegate::BeginInvoke(UnityEngine::Object obj, bool isLastInSet, int32_t selectedIndex, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Assets::OVR::Scripts::FixMethodDelegate>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, obj, isLastInSet, selectedIndex, callback, object);
}
 void Assets::OVR::Scripts::FixMethodDelegate::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Assets::OVR::Scripts::FixMethodDelegate>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
