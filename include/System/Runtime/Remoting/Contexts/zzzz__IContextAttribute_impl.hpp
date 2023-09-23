#pragma once
#include "System/Runtime/Remoting/Contexts/zzzz__IContextAttribute_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionCallMessage_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__Context_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::Contexts::IContextAttribute.GetPropertiesForNewContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Contexts::IContextAttribute::*)(System::Runtime::Remoting::Activation::IConstructionCallMessage)>(&System::Runtime::Remoting::Contexts::IContextAttribute::GetPropertiesForNewContext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::Contexts::IContextAttribute),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::IContextAttribute>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::IContextAttribute.IsContextOK
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Contexts::IContextAttribute::*)(System::Runtime::Remoting::Contexts::Context, System::Runtime::Remoting::Activation::IConstructionCallMessage)>(&System::Runtime::Remoting::Contexts::IContextAttribute::IsContextOK)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::Contexts::IContextAttribute),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::IContextAttribute>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 void System::Runtime::Remoting::Contexts::IContextAttribute::GetPropertiesForNewContext(System::Runtime::Remoting::Activation::IConstructionCallMessage msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::IContextAttribute>::get(),
                            "GetPropertiesForNewContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Activation::IConstructionCallMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, msg);
}
 bool System::Runtime::Remoting::Contexts::IContextAttribute::IsContextOK(System::Runtime::Remoting::Contexts::Context ctx, System::Runtime::Remoting::Activation::IConstructionCallMessage msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::IContextAttribute>::get(),
                            "IsContextOK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Contexts::Context>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Activation::IConstructionCallMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, ctx, msg);
}
