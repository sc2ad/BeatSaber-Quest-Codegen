#pragma once
namespace {
#include "System/Runtime/Remoting/Messaging/zzzz__ArgInfo_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__ArgInfoType_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ArgInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::ArgInfo::*)(::System::Reflection::MethodBase, ::System::Runtime::Remoting::Messaging::ArgInfoType)>(&::System::Runtime::Remoting::Messaging::ArgInfo::_ctor)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x233b358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ArgInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::ArgInfoType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ArgInfo.GetInOutArgs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::bs_hook::Il2CppWrapperType> (::System::Runtime::Remoting::Messaging::ArgInfo::*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&::System::Runtime::Remoting::Messaging::ArgInfo::GetInOutArgs)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x233b50c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ArgInfo>::get(),
                            "GetInOutArgs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Runtime::Remoting::Messaging::ArgInfo::__set__paramMap(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> ::System::Runtime::Remoting::Messaging::ArgInfo::__get__paramMap() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Messaging::ArgInfo::__set__inoutArgCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Runtime::Remoting::Messaging::ArgInfo::__get__inoutArgCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Messaging::ArgInfo::__set__method(::System::Reflection::MethodBase value)  {
::cordl_internals::setInstanceField<::System::Reflection::MethodBase, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Reflection::MethodBase>(value));
}
constexpr ::System::Reflection::MethodBase ::System::Runtime::Remoting::Messaging::ArgInfo::__get__method() const {
return ::cordl_internals::getInstanceField<::System::Reflection::MethodBase, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "method", ty: "::System::Reflection::MethodBase", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::System::Runtime::Remoting::Messaging::ArgInfoType", modifiers: "", def_value: None }]
 ::System::Runtime::Remoting::Messaging::ArgInfo::ArgInfo(::System::Reflection::MethodBase method, ::System::Runtime::Remoting::Messaging::ArgInfoType type)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ArgInfo>(method, type))) {}
 void ::System::Runtime::Remoting::Messaging::ArgInfo::_ctor(::System::Reflection::MethodBase method, ::System::Runtime::Remoting::Messaging::ArgInfoType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ArgInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::ArgInfoType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, method, type);
}
 ::ArrayW<::bs_hook::Il2CppWrapperType> ::System::Runtime::Remoting::Messaging::ArgInfo::GetInOutArgs(::ArrayW<::bs_hook::Il2CppWrapperType> args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ArgInfo>::get(),
                            "GetInOutArgs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(instance), ___internal_method, args);
}
} // end anonymous namespace
