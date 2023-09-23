#pragma once
#include "System/Runtime/Remoting/Messaging/zzzz__MessageDictionary_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__ConstructionCallDictionary_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionCallMessage_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::Messaging::ConstructionCallDictionary._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::ConstructionCallDictionary::*)(System::Runtime::Remoting::Activation::IConstructionCallMessage)>(&System::Runtime::Remoting::Messaging::ConstructionCallDictionary::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x233ef78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::ConstructionCallDictionary>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Activation::IConstructionCallMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Messaging::ConstructionCallDictionary.GetMethodProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Runtime::Remoting::Messaging::ConstructionCallDictionary::*)(::StringW)>(&System::Runtime::Remoting::Messaging::ConstructionCallDictionary::GetMethodProperty)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x233ff20;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::Messaging::ConstructionCallDictionary),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::ConstructionCallDictionary>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Messaging::ConstructionCallDictionary.SetMethodProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::ConstructionCallDictionary::*)(::StringW, ::bs_hook::Il2CppWrapperType)>(&System::Runtime::Remoting::Messaging::ConstructionCallDictionary::SetMethodProperty)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x234080c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::Messaging::ConstructionCallDictionary),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::ConstructionCallDictionary>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
 void System::Runtime::Remoting::Messaging::ConstructionCallDictionary::__set_InternalKeys(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "InternalKeys", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::ConstructionCallDictionary>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> System::Runtime::Remoting::Messaging::ConstructionCallDictionary::__get_InternalKeys()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "InternalKeys", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::ConstructionCallDictionary>::get>();
}
// Ctor Parameters [CppParam { name: "message", ty: "System::Runtime::Remoting::Activation::IConstructionCallMessage", modifiers: "", def_value: None }]
 System::Runtime::Remoting::Messaging::ConstructionCallDictionary::ConstructionCallDictionary(System::Runtime::Remoting::Activation::IConstructionCallMessage message)  : System::Runtime::Remoting::Messaging::MessageDictionary(THROW_UNLESS(::il2cpp_utils::New<ConstructionCallDictionary>(message))) {}
 void System::Runtime::Remoting::Messaging::ConstructionCallDictionary::_ctor(System::Runtime::Remoting::Activation::IConstructionCallMessage message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::ConstructionCallDictionary>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Activation::IConstructionCallMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message);
}
 ::bs_hook::Il2CppWrapperType System::Runtime::Remoting::Messaging::ConstructionCallDictionary::GetMethodProperty(::StringW key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::ConstructionCallDictionary>::get(),
                            "GetMethodProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, key);
}
 void System::Runtime::Remoting::Messaging::ConstructionCallDictionary::SetMethodProperty(::StringW key, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::ConstructionCallDictionary>::get(),
                            "SetMethodProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key, value);
}
