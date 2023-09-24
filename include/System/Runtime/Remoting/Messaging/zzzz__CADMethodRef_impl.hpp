#pragma once
#include "System/Runtime/Remoting/Messaging/zzzz__CADMethodRef_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodMessage_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::Messaging::CADMethodRef.GetTypes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Type> (System::Runtime::Remoting::Messaging::CADMethodRef::*)(::ArrayW<::StringW>)>(&System::Runtime::Remoting::Messaging::CADMethodRef::GetTypes)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x233b9ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::CADMethodRef>::get(),
                            "GetTypes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Messaging::CADMethodRef.Resolve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodBase (System::Runtime::Remoting::Messaging::CADMethodRef::*)()>(&System::Runtime::Remoting::Messaging::CADMethodRef::Resolve)> {
  constexpr static std::size_t size = 0x524;
  constexpr static std::size_t addrs = 0x233bb38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::CADMethodRef>::get(),
                            "Resolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Messaging::CADMethodRef._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::CADMethodRef::*)(System::Runtime::Remoting::Messaging::IMethodMessage)>(&System::Runtime::Remoting::Messaging::CADMethodRef::_ctor)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x233c05c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::CADMethodRef>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMethodMessage>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Remoting::Messaging::CADMethodRef::__set_ctor(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Runtime::Remoting::Messaging::CADMethodRef::__get_ctor() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Remoting::Messaging::CADMethodRef::__set_typeName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Runtime::Remoting::Messaging::CADMethodRef::__get_typeName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Remoting::Messaging::CADMethodRef::__set_methodName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Runtime::Remoting::Messaging::CADMethodRef::__get_methodName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Remoting::Messaging::CADMethodRef::__set_param_names(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> System::Runtime::Remoting::Messaging::CADMethodRef::__get_param_names() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Remoting::Messaging::CADMethodRef::__set_generic_arg_names(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> System::Runtime::Remoting::Messaging::CADMethodRef::__get_generic_arg_names() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<System::Type> System::Runtime::Remoting::Messaging::CADMethodRef::GetTypes(::ArrayW<::StringW> typeArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::CADMethodRef>::get(),
                            "GetTypes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Type>, false>(const_cast<void*>(instance), ___internal_method, typeArray);
}
 System::Reflection::MethodBase System::Runtime::Remoting::Messaging::CADMethodRef::Resolve()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::CADMethodRef>::get(),
                            "Resolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MethodBase, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Runtime::Remoting::Messaging::CADMethodRef System::Runtime::Remoting::Messaging::CADMethodRef::New_ctor(System::Runtime::Remoting::Messaging::IMethodMessage msg)  {
System::Runtime::Remoting::Messaging::CADMethodRef o{THROW_UNLESS(::il2cpp_utils::New<System::Runtime::Remoting::Messaging::CADMethodRef>(msg))};
return o;
}
 void System::Runtime::Remoting::Messaging::CADMethodRef::_ctor(System::Runtime::Remoting::Messaging::IMethodMessage msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::CADMethodRef>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMethodMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, msg);
}
