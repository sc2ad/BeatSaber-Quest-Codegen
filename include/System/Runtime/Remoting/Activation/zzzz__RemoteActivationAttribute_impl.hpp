#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__RemoteActivationAttribute_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionCallMessage_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__IContextAttribute_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__Context_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::Activation::RemoteActivationAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Activation::RemoteActivationAttribute::*)(System::Collections::IList)>(&System::Runtime::Remoting::Activation::RemoteActivationAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x233917c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Activation::RemoteActivationAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Activation::RemoteActivationAttribute.IsContextOK
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Activation::RemoteActivationAttribute::*)(System::Runtime::Remoting::Contexts::Context, System::Runtime::Remoting::Activation::IConstructionCallMessage)>(&System::Runtime::Remoting::Activation::RemoteActivationAttribute::IsContextOK)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23391a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Activation::RemoteActivationAttribute>::get(),
                            "IsContextOK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Contexts::Context>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Activation::IConstructionCallMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Activation::RemoteActivationAttribute.GetPropertiesForNewContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Activation::RemoteActivationAttribute::*)(System::Runtime::Remoting::Activation::IConstructionCallMessage)>(&System::Runtime::Remoting::Activation::RemoteActivationAttribute::GetPropertiesForNewContext)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x23391ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Activation::RemoteActivationAttribute>::get(),
                            "GetPropertiesForNewContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Activation::IConstructionCallMessage>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::Remoting::Contexts::IContextAttribute
constexpr  System::Runtime::Remoting::Activation::RemoteActivationAttribute::operator System::Runtime::Remoting::Contexts::IContextAttribute() const noexcept {
return System::Runtime::Remoting::Contexts::IContextAttribute(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Remoting::Activation::RemoteActivationAttribute::__set__contextProperties(System::Collections::IList value)  {
::cordl_internals::setInstanceField<System::Collections::IList, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::IList>(value));
}
constexpr System::Collections::IList System::Runtime::Remoting::Activation::RemoteActivationAttribute::__get__contextProperties() const {
return ::cordl_internals::getInstanceField<System::Collections::IList, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "contextProperties", ty: "System::Collections::IList", modifiers: "", def_value: None }]
 System::Runtime::Remoting::Activation::RemoteActivationAttribute::RemoteActivationAttribute(System::Collections::IList contextProperties)  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<RemoteActivationAttribute>(contextProperties))) {}
 void System::Runtime::Remoting::Activation::RemoteActivationAttribute::_ctor(System::Collections::IList contextProperties)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Activation::RemoteActivationAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, contextProperties);
}
 bool System::Runtime::Remoting::Activation::RemoteActivationAttribute::IsContextOK(System::Runtime::Remoting::Contexts::Context ctx, System::Runtime::Remoting::Activation::IConstructionCallMessage ctor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Activation::RemoteActivationAttribute>::get(),
                            "IsContextOK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Contexts::Context>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Activation::IConstructionCallMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, ctx, ctor);
}
 void System::Runtime::Remoting::Activation::RemoteActivationAttribute::GetPropertiesForNewContext(System::Runtime::Remoting::Activation::IConstructionCallMessage ctor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Activation::RemoteActivationAttribute>::get(),
                            "GetPropertiesForNewContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Activation::IConstructionCallMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ctor);
}
