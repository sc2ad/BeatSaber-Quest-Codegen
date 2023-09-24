#pragma once
#include "System/Runtime/Remoting/Activation/zzzz__ContextLevelActivator_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionCallMessage_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionReturnMessage_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IActivator_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::Activation::ContextLevelActivator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Activation::ContextLevelActivator::*)(System::Runtime::Remoting::Activation::IActivator)>(&System::Runtime::Remoting::Activation::ContextLevelActivator::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23382ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Activation::ContextLevelActivator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Activation::IActivator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Activation::ContextLevelActivator.get_NextActivator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Activation::IActivator (System::Runtime::Remoting::Activation::ContextLevelActivator::*)()>(&System::Runtime::Remoting::Activation::ContextLevelActivator::get_NextActivator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2338e40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Activation::ContextLevelActivator>::get(),
                            "get_NextActivator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Activation::ContextLevelActivator.Activate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Activation::IConstructionReturnMessage (System::Runtime::Remoting::Activation::ContextLevelActivator::*)(System::Runtime::Remoting::Activation::IConstructionCallMessage)>(&System::Runtime::Remoting::Activation::ContextLevelActivator::Activate)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x2338e48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Activation::ContextLevelActivator>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Activation::IConstructionCallMessage>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::Remoting::Activation::IActivator
constexpr  System::Runtime::Remoting::Activation::ContextLevelActivator::operator System::Runtime::Remoting::Activation::IActivator() const noexcept {
return System::Runtime::Remoting::Activation::IActivator(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Remoting::Activation::ContextLevelActivator::__set_m_NextActivator(System::Runtime::Remoting::Activation::IActivator value)  {
::cordl_internals::setInstanceField<System::Runtime::Remoting::Activation::IActivator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Remoting::Activation::IActivator>(value));
}
constexpr System::Runtime::Remoting::Activation::IActivator System::Runtime::Remoting::Activation::ContextLevelActivator::__get_m_NextActivator() const {
return ::cordl_internals::getInstanceField<System::Runtime::Remoting::Activation::IActivator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Runtime::Remoting::Activation::ContextLevelActivator System::Runtime::Remoting::Activation::ContextLevelActivator::New_ctor(System::Runtime::Remoting::Activation::IActivator next)  {
System::Runtime::Remoting::Activation::ContextLevelActivator o{THROW_UNLESS(::il2cpp_utils::New<System::Runtime::Remoting::Activation::ContextLevelActivator>(next))};
return o;
}
 void System::Runtime::Remoting::Activation::ContextLevelActivator::_ctor(System::Runtime::Remoting::Activation::IActivator next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Activation::ContextLevelActivator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Activation::IActivator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, next);
}
 System::Runtime::Remoting::Activation::IActivator System::Runtime::Remoting::Activation::ContextLevelActivator::get_NextActivator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Activation::ContextLevelActivator>::get(),
                            "get_NextActivator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Activation::IActivator, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Runtime::Remoting::Activation::IConstructionReturnMessage System::Runtime::Remoting::Activation::ContextLevelActivator::Activate(System::Runtime::Remoting::Activation::IConstructionCallMessage ctorCall)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Activation::ContextLevelActivator>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Activation::IConstructionCallMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Activation::IConstructionReturnMessage, false>(const_cast<void*>(instance), ___internal_method, ctorCall);
}
