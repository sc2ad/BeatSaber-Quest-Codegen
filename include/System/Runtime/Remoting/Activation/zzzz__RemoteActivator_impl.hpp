#pragma once
#include "System/zzzz__MarshalByRefObject_impl.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__RemoteActivator_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IActivator_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionCallMessage_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionReturnMessage_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::Activation::RemoteActivator.Activate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Activation::IConstructionReturnMessage (System::Runtime::Remoting::Activation::RemoteActivator::*)(System::Runtime::Remoting::Activation::IConstructionCallMessage)>(&System::Runtime::Remoting::Activation::RemoteActivator::Activate)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x2339594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Activation::RemoteActivator>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Activation::IConstructionCallMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Activation::RemoteActivator.get_NextActivator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Activation::IActivator (System::Runtime::Remoting::Activation::RemoteActivator::*)()>(&System::Runtime::Remoting::Activation::RemoteActivator::get_NextActivator)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2339a10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Activation::RemoteActivator>::get(),
                            "get_NextActivator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::Remoting::Activation::IActivator
constexpr  System::Runtime::Remoting::Activation::RemoteActivator::operator System::Runtime::Remoting::Activation::IActivator() const noexcept {
return System::Runtime::Remoting::Activation::IActivator(::bs_hook::Il2CppWrapperType::instance);
}
 System::Runtime::Remoting::Activation::IConstructionReturnMessage System::Runtime::Remoting::Activation::RemoteActivator::Activate(System::Runtime::Remoting::Activation::IConstructionCallMessage msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Activation::RemoteActivator>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Activation::IConstructionCallMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Activation::IConstructionReturnMessage, false>(const_cast<void*>(instance), ___internal_method, msg);
}
 System::Runtime::Remoting::Activation::IActivator System::Runtime::Remoting::Activation::RemoteActivator::get_NextActivator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Activation::RemoteActivator>::get(),
                            "get_NextActivator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Activation::IActivator, false>(const_cast<void*>(instance), ___internal_method);
}
