#pragma once
namespace {
#include "System/Runtime/Remoting/Activation/zzzz__IActivator_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionReturnMessage_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionCallMessage_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::IActivator.get_NextActivator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Activation::IActivator (::System::Runtime::Remoting::Activation::IActivator::*)()>(&::System::Runtime::Remoting::Activation::IActivator::get_NextActivator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Runtime::Remoting::Activation::IActivator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::IActivator>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::IActivator.Activate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Activation::IConstructionReturnMessage (::System::Runtime::Remoting::Activation::IActivator::*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage)>(&::System::Runtime::Remoting::Activation::IActivator::Activate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Runtime::Remoting::Activation::IActivator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::IActivator>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 ::System::Runtime::Remoting::Activation::IActivator ::System::Runtime::Remoting::Activation::IActivator::get_NextActivator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::IActivator>::get(),
                            "get_NextActivator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Activation::IActivator, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Runtime::Remoting::Activation::IConstructionReturnMessage ::System::Runtime::Remoting::Activation::IActivator::Activate(::System::Runtime::Remoting::Activation::IConstructionCallMessage msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::IActivator>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Activation::IConstructionCallMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Activation::IConstructionReturnMessage, false>(const_cast<void*>(instance), ___internal_method, msg);
}
} // end anonymous namespace
