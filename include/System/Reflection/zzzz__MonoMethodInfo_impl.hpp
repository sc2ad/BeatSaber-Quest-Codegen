#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Reflection/zzzz__MonoMethodInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/Reflection/zzzz__MethodImplAttributes_def.hpp"
#include "System/Reflection/zzzz__MethodAttributes_def.hpp"
#include "System/Runtime/InteropServices/zzzz__MarshalAsAttribute_def.hpp"
#include "System/Reflection/zzzz__RuntimeMethodInfo_def.hpp"
#include "System/Reflection/zzzz__CallingConventions_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
//  Writing Method size for method: System::Reflection::MonoMethodInfo.get_method_info
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::intptr_t, ByRef<System::Reflection::MonoMethodInfo>)>(&System::Reflection::MonoMethodInfo::get_method_info)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2386724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::MonoMethodInfo>::get(),
                            "get_method_info",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Reflection::MonoMethodInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::MonoMethodInfo.get_method_attributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::cordl_internals::intptr_t)>(&System::Reflection::MonoMethodInfo::get_method_attributes)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2386728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::MonoMethodInfo>::get(),
                            "get_method_attributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::MonoMethodInfo.GetMethodInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MonoMethodInfo (*)(::cordl_internals::intptr_t)>(&System::Reflection::MonoMethodInfo::GetMethodInfo)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x238672c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::MonoMethodInfo>::get(),
                            "GetMethodInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::MonoMethodInfo.GetDeclaringType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (*)(::cordl_internals::intptr_t)>(&System::Reflection::MonoMethodInfo::GetDeclaringType)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x238675c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::MonoMethodInfo>::get(),
                            "GetDeclaringType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::MonoMethodInfo.GetReturnType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (*)(::cordl_internals::intptr_t)>(&System::Reflection::MonoMethodInfo::GetReturnType)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2386784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::MonoMethodInfo>::get(),
                            "GetReturnType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::MonoMethodInfo.GetAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodAttributes (*)(::cordl_internals::intptr_t)>(&System::Reflection::MonoMethodInfo::GetAttributes)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23867ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::MonoMethodInfo>::get(),
                            "GetAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::MonoMethodInfo.GetCallingConvention
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::CallingConventions (*)(::cordl_internals::intptr_t)>(&System::Reflection::MonoMethodInfo::GetCallingConvention)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23867b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::MonoMethodInfo>::get(),
                            "GetCallingConvention",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::MonoMethodInfo.GetMethodImplementationFlags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodImplAttributes (*)(::cordl_internals::intptr_t)>(&System::Reflection::MonoMethodInfo::GetMethodImplementationFlags)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23867d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::MonoMethodInfo>::get(),
                            "GetMethodImplementationFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::MonoMethodInfo.get_parameter_info
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::ParameterInfo> (*)(::cordl_internals::intptr_t, System::Reflection::MemberInfo)>(&System::Reflection::MonoMethodInfo::get_parameter_info)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2386800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::MonoMethodInfo>::get(),
                            "get_parameter_info",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MemberInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::MonoMethodInfo.GetParametersInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::ParameterInfo> (*)(::cordl_internals::intptr_t, System::Reflection::MemberInfo)>(&System::Reflection::MonoMethodInfo::GetParametersInfo)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2386804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::MonoMethodInfo>::get(),
                            "GetParametersInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MemberInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::MonoMethodInfo.get_retval_marshal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::InteropServices::MarshalAsAttribute (*)(::cordl_internals::intptr_t)>(&System::Reflection::MonoMethodInfo::get_retval_marshal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2386808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::MonoMethodInfo>::get(),
                            "get_retval_marshal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::MonoMethodInfo.GetReturnParameterInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::ParameterInfo (*)(System::Reflection::RuntimeMethodInfo)>(&System::Reflection::MonoMethodInfo::GetReturnParameterInfo)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x238680c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::MonoMethodInfo>::get(),
                            "GetReturnParameterInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::RuntimeMethodInfo>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "parent", ty: "System::Type", modifiers: "", def_value: Some("csnull") }, CppParam { name: "ret", ty: "System::Type", modifiers: "", def_value: Some("csnull") }, CppParam { name: "attrs", ty: "System::Reflection::MethodAttributes", modifiers: "", def_value: Some("{}") }, CppParam { name: "iattrs", ty: "System::Reflection::MethodImplAttributes", modifiers: "", def_value: Some("{}") }, CppParam { name: "callconv", ty: "System::Reflection::CallingConventions", modifiers: "", def_value: Some("{}") }]
constexpr System::Reflection::MonoMethodInfo::MonoMethodInfo(System::Type parent, System::Type ret, System::Reflection::MethodAttributes attrs, System::Reflection::MethodImplAttributes iattrs, System::Reflection::CallingConventions callconv) noexcept : ::bs_hook::ValueTypeWrapper() {this->parent = parent;
this->ret = ret;
this->attrs = attrs;
this->iattrs = iattrs;
this->callconv = callconv;
}
constexpr void System::Reflection::MonoMethodInfo::__set_parent(System::Type value)  {
::cordl_internals::setInstanceField<System::Type, 0x0>(this->__instance, std::forward<System::Type>(value));
}
constexpr System::Type System::Reflection::MonoMethodInfo::__get_parent() const {
return ::cordl_internals::getInstanceField<System::Type, 0x0>(this->__instance);
}
constexpr void System::Reflection::MonoMethodInfo::__set_ret(System::Type value)  {
::cordl_internals::setInstanceField<System::Type, 0x8>(this->__instance, std::forward<System::Type>(value));
}
constexpr System::Type System::Reflection::MonoMethodInfo::__get_ret() const {
return ::cordl_internals::getInstanceField<System::Type, 0x8>(this->__instance);
}
constexpr void System::Reflection::MonoMethodInfo::__set_attrs(System::Reflection::MethodAttributes value)  {
::cordl_internals::setInstanceField<System::Reflection::MethodAttributes, 0x10>(this->__instance, std::forward<System::Reflection::MethodAttributes>(value));
}
constexpr System::Reflection::MethodAttributes System::Reflection::MonoMethodInfo::__get_attrs() const {
return ::cordl_internals::getInstanceField<System::Reflection::MethodAttributes, 0x10>(this->__instance);
}
constexpr void System::Reflection::MonoMethodInfo::__set_iattrs(System::Reflection::MethodImplAttributes value)  {
::cordl_internals::setInstanceField<System::Reflection::MethodImplAttributes, 0x14>(this->__instance, std::forward<System::Reflection::MethodImplAttributes>(value));
}
constexpr System::Reflection::MethodImplAttributes System::Reflection::MonoMethodInfo::__get_iattrs() const {
return ::cordl_internals::getInstanceField<System::Reflection::MethodImplAttributes, 0x14>(this->__instance);
}
constexpr void System::Reflection::MonoMethodInfo::__set_callconv(System::Reflection::CallingConventions value)  {
::cordl_internals::setInstanceField<System::Reflection::CallingConventions, 0x18>(this->__instance, std::forward<System::Reflection::CallingConventions>(value));
}
constexpr System::Reflection::CallingConventions System::Reflection::MonoMethodInfo::__get_callconv() const {
return ::cordl_internals::getInstanceField<System::Reflection::CallingConventions, 0x18>(this->__instance);
}
 void System::Reflection::MonoMethodInfo::get_method_info(::cordl_internals::intptr_t handle, ByRef<System::Reflection::MonoMethodInfo> info)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::MonoMethodInfo>::get(),
                            "get_method_info",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Reflection::MonoMethodInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handle, info);
}
 int32_t System::Reflection::MonoMethodInfo::get_method_attributes(::cordl_internals::intptr_t handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::MonoMethodInfo>::get(),
                            "get_method_attributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, handle);
}
 System::Reflection::MonoMethodInfo System::Reflection::MonoMethodInfo::GetMethodInfo(::cordl_internals::intptr_t handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::MonoMethodInfo>::get(),
                            "GetMethodInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MonoMethodInfo, false>(nullptr, ___internal_method, handle);
}
 System::Type System::Reflection::MonoMethodInfo::GetDeclaringType(::cordl_internals::intptr_t handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::MonoMethodInfo>::get(),
                            "GetDeclaringType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(nullptr, ___internal_method, handle);
}
 System::Type System::Reflection::MonoMethodInfo::GetReturnType(::cordl_internals::intptr_t handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::MonoMethodInfo>::get(),
                            "GetReturnType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(nullptr, ___internal_method, handle);
}
 System::Reflection::MethodAttributes System::Reflection::MonoMethodInfo::GetAttributes(::cordl_internals::intptr_t handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::MonoMethodInfo>::get(),
                            "GetAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MethodAttributes, false>(nullptr, ___internal_method, handle);
}
 System::Reflection::CallingConventions System::Reflection::MonoMethodInfo::GetCallingConvention(::cordl_internals::intptr_t handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::MonoMethodInfo>::get(),
                            "GetCallingConvention",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::CallingConventions, false>(nullptr, ___internal_method, handle);
}
 System::Reflection::MethodImplAttributes System::Reflection::MonoMethodInfo::GetMethodImplementationFlags(::cordl_internals::intptr_t handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::MonoMethodInfo>::get(),
                            "GetMethodImplementationFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MethodImplAttributes, false>(nullptr, ___internal_method, handle);
}
 ::ArrayW<System::Reflection::ParameterInfo> System::Reflection::MonoMethodInfo::get_parameter_info(::cordl_internals::intptr_t handle, System::Reflection::MemberInfo member)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::MonoMethodInfo>::get(),
                            "get_parameter_info",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MemberInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::ParameterInfo>, false>(nullptr, ___internal_method, handle, member);
}
 ::ArrayW<System::Reflection::ParameterInfo> System::Reflection::MonoMethodInfo::GetParametersInfo(::cordl_internals::intptr_t handle, System::Reflection::MemberInfo member)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::MonoMethodInfo>::get(),
                            "GetParametersInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MemberInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::ParameterInfo>, false>(nullptr, ___internal_method, handle, member);
}
 System::Runtime::InteropServices::MarshalAsAttribute System::Reflection::MonoMethodInfo::get_retval_marshal(::cordl_internals::intptr_t handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::MonoMethodInfo>::get(),
                            "get_retval_marshal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::InteropServices::MarshalAsAttribute, false>(nullptr, ___internal_method, handle);
}
 System::Reflection::ParameterInfo System::Reflection::MonoMethodInfo::GetReturnParameterInfo(System::Reflection::RuntimeMethodInfo method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::MonoMethodInfo>::get(),
                            "GetReturnParameterInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::RuntimeMethodInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::ParameterInfo, false>(nullptr, ___internal_method, method);
}
