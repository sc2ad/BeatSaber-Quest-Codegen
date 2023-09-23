#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/Remoting/Proxies/zzzz__ProxyAttribute_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "System/Runtime/Remoting/zzzz__ObjRef_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__IContextAttribute_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionCallMessage_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__Context_def.hpp"
#include "System/Runtime/Remoting/Proxies/zzzz__RealProxy_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::Proxies::ProxyAttribute.CreateInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::MarshalByRefObject (System::Runtime::Remoting::Proxies::ProxyAttribute::*)(System::Type)>(&System::Runtime::Remoting::Proxies::ProxyAttribute::CreateInstance)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x232a15c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::Proxies::ProxyAttribute),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Proxies::ProxyAttribute>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Proxies::ProxyAttribute.CreateProxy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Proxies::RealProxy (System::Runtime::Remoting::Proxies::ProxyAttribute::*)(System::Runtime::Remoting::ObjRef, System::Type, ::bs_hook::Il2CppWrapperType, System::Runtime::Remoting::Contexts::Context)>(&System::Runtime::Remoting::Proxies::ProxyAttribute::CreateProxy)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x232a2a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::Proxies::ProxyAttribute),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Proxies::ProxyAttribute>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Proxies::ProxyAttribute.GetPropertiesForNewContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Proxies::ProxyAttribute::*)(System::Runtime::Remoting::Activation::IConstructionCallMessage)>(&System::Runtime::Remoting::Proxies::ProxyAttribute::GetPropertiesForNewContext)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x232a318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Proxies::ProxyAttribute>::get(),
                            "GetPropertiesForNewContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Activation::IConstructionCallMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Proxies::ProxyAttribute.IsContextOK
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Proxies::ProxyAttribute::*)(System::Runtime::Remoting::Contexts::Context, System::Runtime::Remoting::Activation::IConstructionCallMessage)>(&System::Runtime::Remoting::Proxies::ProxyAttribute::IsContextOK)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x232a31c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Proxies::ProxyAttribute>::get(),
                            "IsContextOK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Contexts::Context>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Activation::IConstructionCallMessage>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::Remoting::Contexts::IContextAttribute
constexpr  System::Runtime::Remoting::Proxies::ProxyAttribute::operator System::Runtime::Remoting::Contexts::IContextAttribute() const noexcept {
return System::Runtime::Remoting::Contexts::IContextAttribute(::bs_hook::Il2CppWrapperType::instance);
}
 System::MarshalByRefObject System::Runtime::Remoting::Proxies::ProxyAttribute::CreateInstance(System::Type serverType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Proxies::ProxyAttribute>::get(),
                            "CreateInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::MarshalByRefObject, false>(const_cast<void*>(instance), ___internal_method, serverType);
}
 System::Runtime::Remoting::Proxies::RealProxy System::Runtime::Remoting::Proxies::ProxyAttribute::CreateProxy(System::Runtime::Remoting::ObjRef objRef, System::Type serverType, ::bs_hook::Il2CppWrapperType serverObject, System::Runtime::Remoting::Contexts::Context serverContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Proxies::ProxyAttribute>::get(),
                            "CreateProxy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::ObjRef>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Contexts::Context>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Proxies::RealProxy, false>(const_cast<void*>(instance), ___internal_method, objRef, serverType, serverObject, serverContext);
}
 void System::Runtime::Remoting::Proxies::ProxyAttribute::GetPropertiesForNewContext(System::Runtime::Remoting::Activation::IConstructionCallMessage msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Proxies::ProxyAttribute>::get(),
                            "GetPropertiesForNewContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Activation::IConstructionCallMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, msg);
}
 bool System::Runtime::Remoting::Proxies::ProxyAttribute::IsContextOK(System::Runtime::Remoting::Contexts::Context ctx, System::Runtime::Remoting::Activation::IConstructionCallMessage msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Proxies::ProxyAttribute>::get(),
                            "IsContextOK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Contexts::Context>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Activation::IConstructionCallMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, ctx, msg);
}
