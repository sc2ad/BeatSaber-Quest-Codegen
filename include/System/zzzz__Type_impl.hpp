#pragma once
#include "System/Reflection/zzzz__MemberInfo_impl.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__Module_def.hpp"
#include "System/zzzz__RuntimeTypeHandle_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/Reflection/zzzz__TypeAttributes_def.hpp"
#include "System/Reflection/zzzz__MemberTypes_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
#include "System/Reflection/zzzz__MemberFilter_def.hpp"
#include "System/Reflection/zzzz__AssemblyName_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Reflection/zzzz__ParameterModifier_def.hpp"
#include "System/Reflection/zzzz__GenericParameterAttributes_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/Reflection/zzzz__Binder_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "System/Reflection/zzzz__EventInfo_def.hpp"
#include "System/Reflection/zzzz__CallingConventions_def.hpp"
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
//  Writing Method size for method: System::Type.IsEnumDefined
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)(::bs_hook::Il2CppWrapperType)>(&System::Type::IsEnumDefined)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x2458fc8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetEnumName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Type::*)(::bs_hook::Il2CppWrapperType)>(&System::Type::GetEnumName)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x2459740;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetEnumNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Type::*)()>(&System::Type::GetEnumNames)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x245993c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetEnumRawConstantValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Array (System::Type::*)()>(&System::Type::GetEnumRawConstantValues)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x24595e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetEnumRawConstantValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetEnumData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Type::*)(ByRef<::ArrayW<::StringW>>, ByRef<System::Array>)>(&System::Type::GetEnumData)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x24599e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetEnumData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::StringW>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Array>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.BinarySearch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(System::Array, ::bs_hook::Il2CppWrapperType)>(&System::Type::BinarySearch)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2459604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "BinarySearch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.IsIntegerType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Type)>(&System::Type::IsIntegerType)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x2459360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "IsIntegerType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_IsSerializable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::get_IsSerializable)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2459f74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_ContainsGenericParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::get_ContainsGenericParameters)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x245a148;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetRootElementType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::Type::*)()>(&System::Type::GetRootElementType)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x245a250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetRootElementType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_IsVisible
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::get_IsVisible)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x245a2a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.IsSubclassOf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)(System::Type)>(&System::Type::IsSubclassOf)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x245a4c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.IsAssignableFrom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)(System::Type)>(&System::Type::IsAssignableFrom)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x245a578;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.ImplementInterface
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)(System::Type)>(&System::Type::ImplementInterface)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x245a7e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "ImplementInterface",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.FilterAttributeImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Reflection::MemberInfo, ::bs_hook::Il2CppWrapperType)>(&System::Type::FilterAttributeImpl)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x245a928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "FilterAttributeImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MemberInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.FilterNameImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Reflection::MemberInfo, ::bs_hook::Il2CppWrapperType)>(&System::Type::FilterNameImpl)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x245ac80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "FilterNameImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MemberInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.FilterNameIgnoreCaseImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Reflection::MemberInfo, ::bs_hook::Il2CppWrapperType)>(&System::Type::FilterNameIgnoreCaseImpl)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x245ae00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "FilterNameIgnoreCaseImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MemberInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Type::*)()>(&System::Type::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x245af94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_MemberType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MemberTypes (System::Type::*)()>(&System::Type::get_MemberType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x245af9c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::Type::*)()>(&System::Type::GetType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x245afa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_Namespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Type::*)()>(&System::Type::get_Namespace)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_AssemblyQualifiedName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Type::*)()>(&System::Type::get_AssemblyQualifiedName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_FullName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Type::*)()>(&System::Type::get_FullName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_Assembly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Assembly (System::Type::*)()>(&System::Type::get_Assembly)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_Module
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Module (System::Type::*)()>(&System::Type::get_Module)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_IsNested
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::get_IsNested)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x245a428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsNested",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_DeclaringType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::Type::*)()>(&System::Type::get_DeclaringType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x245afac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_DeclaringMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodBase (System::Type::*)()>(&System::Type::get_DeclaringMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x245afb4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_ReflectedType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::Type::*)()>(&System::Type::get_ReflectedType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x245afbc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_UnderlyingSystemType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::Type::*)()>(&System::Type::get_UnderlyingSystemType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_IsArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::get_IsArray)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x245afc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.IsArrayImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::IsArrayImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_IsByRef
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::get_IsByRef)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x245afd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsByRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.IsByRefImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::IsByRefImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_IsPointer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::get_IsPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x245afe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsPointer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.IsPointerImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::IsPointerImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_IsConstructedGenericType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::get_IsConstructedGenericType)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x245aff4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  37
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_IsGenericParameter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::get_IsGenericParameter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x245b074;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_IsGenericMethodParameter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::get_IsGenericMethodParameter)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x245b07c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  39
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_IsGenericType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::get_IsGenericType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x245b0c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  40
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_IsGenericTypeDefinition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::get_IsGenericTypeDefinition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x245b0d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  41
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_IsSZArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::get_IsSZArray)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x245b0d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  42
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_IsVariableBoundArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::get_IsVariableBoundArray)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x245b0fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  43
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_HasElementType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::get_HasElementType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x245a240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_HasElementType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.HasElementTypeImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::HasElementTypeImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  45
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetElementType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::Type::*)()>(&System::Type::GetElementType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  46
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetArrayRank
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Type::*)()>(&System::Type::GetArrayRank)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x245b144;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  47
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetGenericTypeDefinition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::Type::*)()>(&System::Type::GetGenericTypeDefinition)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x245b194;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  48
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_GenericTypeArguments
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Type> (System::Type::*)()>(&System::Type::get_GenericTypeArguments)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x245b1e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  49
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetGenericArguments
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Type> (System::Type::*)()>(&System::Type::GetGenericArguments)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x245b2b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  50
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_GenericParameterPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Type::*)()>(&System::Type::get_GenericParameterPosition)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x245b300;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  51
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_GenericParameterAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::GenericParameterAttributes (System::Type::*)()>(&System::Type::get_GenericParameterAttributes)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x245b350;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  52
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetGenericParameterConstraints
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Type> (System::Type::*)()>(&System::Type::GetGenericParameterConstraints)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x245b390;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  53
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_Attributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::TypeAttributes (System::Type::*)()>(&System::Type::get_Attributes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x245b410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_Attributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetAttributeFlagsImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::TypeAttributes (System::Type::*)()>(&System::Type::GetAttributeFlagsImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  55
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_IsAbstract
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::get_IsAbstract)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x245b420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsAbstract",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_IsSealed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::get_IsSealed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x245b440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsSealed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_IsClass
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::get_IsClass)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x245b460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsClass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_IsNestedAssembly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::get_IsNestedAssembly)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x245b4b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsNestedAssembly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_IsNestedPublic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::get_IsNestedPublic)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x245a400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsNestedPublic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_IsNotPublic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::get_IsNotPublic)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x245b4e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsNotPublic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_IsPublic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::get_IsPublic)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x245a498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsPublic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_IsExplicitLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::get_IsExplicitLayout)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x245b504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsExplicitLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_IsCOMObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::get_IsCOMObject)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x245b52c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsCOMObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.IsCOMObjectImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::IsCOMObjectImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  65
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_IsContextful
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::get_IsContextful)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x245b53c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsContextful",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.IsContextfulImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::IsContextfulImpl)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x245b54c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  67
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_IsEnum
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::get_IsEnum)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x245b5dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  68
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_IsMarshalByRef
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::get_IsMarshalByRef)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x245b668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsMarshalByRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.IsMarshalByRefImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::IsMarshalByRefImpl)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x245b678;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  70
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_IsPrimitive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::get_IsPrimitive)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x245b708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsPrimitive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.IsPrimitiveImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::IsPrimitiveImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  72
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_IsValueType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::get_IsValueType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x245b4a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsValueType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.IsValueTypeImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::IsValueTypeImpl)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x245b718;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  74
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_IsSignatureType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::get_IsSignatureType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x245b7a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  75
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetConstructor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::ConstructorInfo (System::Type::*)(::ArrayW<System::Type>)>(&System::Type::GetConstructor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x245b7ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetConstructor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetConstructor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::ConstructorInfo (System::Type::*)(System::Reflection::BindingFlags, System::Reflection::Binder, ::ArrayW<System::Type>, ::ArrayW<System::Reflection::ParameterModifier>)>(&System::Type::GetConstructor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x245b7c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetConstructor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Binder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Reflection::ParameterModifier>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetConstructor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::ConstructorInfo (System::Type::*)(System::Reflection::BindingFlags, System::Reflection::Binder, System::Reflection::CallingConventions, ::ArrayW<System::Type>, ::ArrayW<System::Reflection::ParameterModifier>)>(&System::Type::GetConstructor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x245b7d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetConstructor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Binder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::CallingConventions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Reflection::ParameterModifier>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetConstructorImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::ConstructorInfo (System::Type::*)(System::Reflection::BindingFlags, System::Reflection::Binder, System::Reflection::CallingConventions, ::ArrayW<System::Type>, ::ArrayW<System::Reflection::ParameterModifier>)>(&System::Type::GetConstructorImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  79
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetConstructors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::ConstructorInfo> (System::Type::*)()>(&System::Type::GetConstructors)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x245b904;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetConstructors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetConstructors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::ConstructorInfo> (System::Type::*)(System::Reflection::BindingFlags)>(&System::Type::GetConstructors)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  81
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::EventInfo (System::Type::*)(::StringW)>(&System::Type::GetEvent)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x245b918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::EventInfo (System::Type::*)(::StringW, System::Reflection::BindingFlags)>(&System::Type::GetEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  83
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::EventInfo> (System::Type::*)(System::Reflection::BindingFlags)>(&System::Type::GetEvents)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  84
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetField
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::FieldInfo (System::Type::*)(::StringW)>(&System::Type::GetField)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x245b92c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetField
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::FieldInfo (System::Type::*)(::StringW, System::Reflection::BindingFlags)>(&System::Type::GetField)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  86
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetFields
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::FieldInfo> (System::Type::*)()>(&System::Type::GetFields)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x245b940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetFields",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetFields
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::FieldInfo> (System::Type::*)(System::Reflection::BindingFlags)>(&System::Type::GetFields)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  88
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetMember
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::MemberInfo> (System::Type::*)(::StringW)>(&System::Type::GetMember)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x245b954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetMember",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetMember
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::MemberInfo> (System::Type::*)(::StringW, System::Reflection::BindingFlags)>(&System::Type::GetMember)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x245b968;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  90
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetMember
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::MemberInfo> (System::Type::*)(::StringW, System::Reflection::MemberTypes, System::Reflection::BindingFlags)>(&System::Type::GetMember)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x245b980;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  91
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo (System::Type::*)(::StringW)>(&System::Type::GetMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x245b9d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo (System::Type::*)(::StringW, System::Reflection::BindingFlags)>(&System::Type::GetMethod)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x245b9d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo (System::Type::*)(::StringW, ::ArrayW<System::Type>)>(&System::Type::GetMethod)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x245ba50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo (System::Type::*)(::StringW, ::ArrayW<System::Type>, ::ArrayW<System::Reflection::ParameterModifier>)>(&System::Type::GetMethod)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x245ba68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Reflection::ParameterModifier>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo (System::Type::*)(::StringW, System::Reflection::BindingFlags, System::Reflection::Binder, ::ArrayW<System::Type>, ::ArrayW<System::Reflection::ParameterModifier>)>(&System::Type::GetMethod)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x245ba80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Binder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Reflection::ParameterModifier>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo (System::Type::*)(::StringW, System::Reflection::BindingFlags, System::Reflection::Binder, System::Reflection::CallingConventions, ::ArrayW<System::Type>, ::ArrayW<System::Reflection::ParameterModifier>)>(&System::Type::GetMethod)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x245ba90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Binder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::CallingConventions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Reflection::ParameterModifier>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetMethodImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodInfo (System::Type::*)(::StringW, System::Reflection::BindingFlags, System::Reflection::Binder, System::Reflection::CallingConventions, ::ArrayW<System::Type>, ::ArrayW<System::Reflection::ParameterModifier>)>(&System::Type::GetMethodImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  98
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetMethods
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::MethodInfo> (System::Type::*)()>(&System::Type::GetMethods)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x245bbf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetMethods",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetMethods
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::MethodInfo> (System::Type::*)(System::Reflection::BindingFlags)>(&System::Type::GetMethods)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  100
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetNestedType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::Type::*)(::StringW, System::Reflection::BindingFlags)>(&System::Type::GetNestedType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  101
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::PropertyInfo (System::Type::*)(::StringW)>(&System::Type::GetProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x245bc04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::PropertyInfo (System::Type::*)(::StringW, System::Reflection::BindingFlags)>(&System::Type::GetProperty)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x245bc0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::PropertyInfo (System::Type::*)(::StringW, System::Type)>(&System::Type::GetProperty)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x245bc84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::PropertyInfo (System::Type::*)(::StringW, System::Type, ::ArrayW<System::Type>)>(&System::Type::GetProperty)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x245bd84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::PropertyInfo (System::Type::*)(::StringW, System::Type, ::ArrayW<System::Type>, ::ArrayW<System::Reflection::ParameterModifier>)>(&System::Type::GetProperty)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x245bd9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Reflection::ParameterModifier>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::PropertyInfo (System::Type::*)(::StringW, System::Reflection::BindingFlags, System::Reflection::Binder, System::Type, ::ArrayW<System::Type>, ::ArrayW<System::Reflection::ParameterModifier>)>(&System::Type::GetProperty)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x245bdb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Binder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Reflection::ParameterModifier>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetPropertyImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::PropertyInfo (System::Type::*)(::StringW, System::Reflection::BindingFlags, System::Reflection::Binder, System::Type, ::ArrayW<System::Type>, ::ArrayW<System::Reflection::ParameterModifier>)>(&System::Type::GetPropertyImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  108
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::PropertyInfo> (System::Type::*)(System::Reflection::BindingFlags)>(&System::Type::GetProperties)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  109
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_TypeHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::RuntimeTypeHandle (System::Type::*)()>(&System::Type::get_TypeHandle)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x245be44;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  110
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetTypeHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::RuntimeTypeHandle (*)(::bs_hook::Il2CppWrapperType)>(&System::Type::GetTypeHandle)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x245be84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetTypeHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetTypeCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TypeCode (*)(System::Type)>(&System::Type::GetTypeCode)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x245bf00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetTypeCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetTypeCodeImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TypeCode (System::Type::*)()>(&System::Type::GetTypeCodeImpl)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x245bf78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  111
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_GUID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Guid (System::Type::*)()>(&System::Type::get_GUID)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  112
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetTypeFromCLSID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (*)(System::Guid)>(&System::Type::GetTypeFromCLSID)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x245c060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetTypeFromCLSID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_BaseType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::Type::*)()>(&System::Type::get_BaseType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  113
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.InvokeMember
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Type::*)(::StringW, System::Reflection::BindingFlags, System::Reflection::Binder, ::bs_hook::Il2CppWrapperType, ::ArrayW<::bs_hook::Il2CppWrapperType>, ::ArrayW<System::Reflection::ParameterModifier>, System::Globalization::CultureInfo, ::ArrayW<::StringW>)>(&System::Type::InvokeMember)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  114
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetInterfaces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Type> (System::Type::*)()>(&System::Type::GetInterfaces)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  115
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.IsInstanceOfType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)(::bs_hook::Il2CppWrapperType)>(&System::Type::IsInstanceOfType)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x245c14c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  116
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)(System::Type)>(&System::Type::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x245c188;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  117
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetEnumUnderlyingType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::Type::*)()>(&System::Type::GetEnumUnderlyingType)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x245c1ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  118
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetEnumValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Array (System::Type::*)()>(&System::Type::GetEnumValues)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x245c2dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  119
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.MakeArrayType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::Type::*)()>(&System::Type::MakeArrayType)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x245c364;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  120
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.MakeArrayType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::Type::*)(int32_t)>(&System::Type::MakeArrayType)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x245c3a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  121
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.MakeByRefType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::Type::*)()>(&System::Type::MakeByRefType)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x245c3e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  122
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.MakeGenericType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::Type::*)(::ArrayW<System::Type>)>(&System::Type::MakeGenericType)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x245c424;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  123
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.MakePointerType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::Type::*)()>(&System::Type::MakePointerType)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x245c474;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  124
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.MakeGenericSignatureType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (*)(System::Type, ::ArrayW<System::Type>)>(&System::Type::MakeGenericSignatureType)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x245c4b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "MakeGenericSignatureType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Type::*)()>(&System::Type::ToString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x245c528;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)(::bs_hook::Il2CppWrapperType)>(&System::Type::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x245c588;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Type::*)()>(&System::Type::GetHashCode)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x245c624;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)(System::Type)>(&System::Type::Equals)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x245c66c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  125
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_DefaultBinder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Binder (*)()>(&System::Type::get_DefaultBinder)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x245c70c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_DefaultBinder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetTypeFromHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (*)(System::RuntimeTypeHandle)>(&System::Type::GetTypeFromHandle)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x244f938;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetTypeFromHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeTypeHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.internal_from_handle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (*)(::cordl_internals::intptr_t)>(&System::Type::internal_from_handle)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x245c7e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "internal_from_handle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_IsSzArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::get_IsSzArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x245c7e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  126
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.FormatTypeName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Type::*)()>(&System::Type::FormatTypeName)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x245c7f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "FormatTypeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.FormatTypeName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Type::*)(bool)>(&System::Type::FormatTypeName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x245c804;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  127
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_IsInterface
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::get_IsInterface)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x245a71c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsInterface",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (*)(::StringW, bool, bool)>(&System::Type::GetType)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x245c844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (*)(::StringW, bool)>(&System::Type::GetType)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x245c8d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (*)(::StringW)>(&System::Type::GetType)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x245c950;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (*)(::StringW, System::Func_2<System::Reflection::AssemblyName,System::Reflection::Assembly>, System::Func_4<System::Reflection::Assembly,::StringW,bool,System::Type>, bool)>(&System::Type::GetType)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x245c9cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::Reflection::AssemblyName,System::Reflection::Assembly>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<System::Reflection::Assembly,::StringW,bool,System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.op_Equality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Type, System::Type)>(&System::Type::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2459354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.op_Inequality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Type, System::Type)>(&System::Type::op_Inequality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x245a13c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.GetTypeFromCLSID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (*)(System::Guid, ::StringW, bool)>(&System::Type::GetTypeFromCLSID)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x245c0cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetTypeFromCLSID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_FullNameOrDefault
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Type::*)()>(&System::Type::get_FullNameOrDefault)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x245c9f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_FullNameOrDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.IsRuntimeImplemented
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Type::*)()>(&System::Type::IsRuntimeImplemented)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x245a0b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "IsRuntimeImplemented",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.InternalGetNameIfAvailable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Type::*)(ByRef<System::Type>)>(&System::Type::InternalGetNameIfAvailable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x245cb10;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Type),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                                  129
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_InternalNameIfAvailable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Type::*)()>(&System::Type::get_InternalNameIfAvailable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x245caec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_InternalNameIfAvailable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Type.get_NameOrDefault
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Type::*)()>(&System::Type::get_NameOrDefault)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x245cb1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_NameOrDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::Type::__set_s_defaultBinder(System::Reflection::Binder value)  {
::cordl_internals::setStaticField<System::Reflection::Binder, "s_defaultBinder", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get>(std::forward<System::Reflection::Binder>(value));
}
 System::Reflection::Binder System::Type::__get_s_defaultBinder()  {
return ::cordl_internals::getStaticField<System::Reflection::Binder, "s_defaultBinder", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get>();
}
 void System::Type::__set_Delimiter(char16_t value)  {
::cordl_internals::setStaticField<char16_t, "Delimiter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get>(std::forward<char16_t>(value));
}
 char16_t System::Type::__get_Delimiter()  {
return ::cordl_internals::getStaticField<char16_t, "Delimiter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get>();
}
 void System::Type::__set_EmptyTypes(::ArrayW<System::Type> value)  {
::cordl_internals::setStaticField<::ArrayW<System::Type>, "EmptyTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get>(std::forward<::ArrayW<System::Type>>(value));
}
 ::ArrayW<System::Type> System::Type::__get_EmptyTypes()  {
return ::cordl_internals::getStaticField<::ArrayW<System::Type>, "EmptyTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get>();
}
 void System::Type::__set_Missing(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setStaticField<::bs_hook::Il2CppWrapperType, "Missing", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get>(std::forward<::bs_hook::Il2CppWrapperType>(value));
}
 ::bs_hook::Il2CppWrapperType System::Type::__get_Missing()  {
return ::cordl_internals::getStaticField<::bs_hook::Il2CppWrapperType, "Missing", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get>();
}
 void System::Type::__set_FilterAttribute(System::Reflection::MemberFilter value)  {
::cordl_internals::setStaticField<System::Reflection::MemberFilter, "FilterAttribute", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get>(std::forward<System::Reflection::MemberFilter>(value));
}
 System::Reflection::MemberFilter System::Type::__get_FilterAttribute()  {
return ::cordl_internals::getStaticField<System::Reflection::MemberFilter, "FilterAttribute", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get>();
}
 void System::Type::__set_FilterName(System::Reflection::MemberFilter value)  {
::cordl_internals::setStaticField<System::Reflection::MemberFilter, "FilterName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get>(std::forward<System::Reflection::MemberFilter>(value));
}
 System::Reflection::MemberFilter System::Type::__get_FilterName()  {
return ::cordl_internals::getStaticField<System::Reflection::MemberFilter, "FilterName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get>();
}
 void System::Type::__set_FilterNameIgnoreCase(System::Reflection::MemberFilter value)  {
::cordl_internals::setStaticField<System::Reflection::MemberFilter, "FilterNameIgnoreCase", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get>(std::forward<System::Reflection::MemberFilter>(value));
}
 System::Reflection::MemberFilter System::Type::__get_FilterNameIgnoreCase()  {
return ::cordl_internals::getStaticField<System::Reflection::MemberFilter, "FilterNameIgnoreCase", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get>();
}
constexpr System::Reflection::BindingFlags  System::Type::DefaultLookup{28};
constexpr void System::Type::__set__impl(System::RuntimeTypeHandle value)  {
::cordl_internals::setInstanceField<System::RuntimeTypeHandle, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::RuntimeTypeHandle>(value));
}
constexpr System::RuntimeTypeHandle System::Type::__get__impl() const {
return ::cordl_internals::getInstanceField<System::RuntimeTypeHandle, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool System::Type::IsEnumDefined(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "IsEnumDefined",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW System::Type::GetEnumName(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetEnumName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<::StringW> System::Type::GetEnumNames()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetEnumNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Array System::Type::GetEnumRawConstantValues()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetEnumRawConstantValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Array, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Type::GetEnumData(ByRef<::ArrayW<::StringW>> enumNames, ByRef<System::Array> enumValues)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetEnumData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::StringW>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Array>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, enumNames, enumValues);
}
 int32_t System::Type::BinarySearch(System::Array array, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "BinarySearch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, array, value);
}
 bool System::Type::IsIntegerType(System::Type t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "IsIntegerType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, t);
}
 bool System::Type::get_IsSerializable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsSerializable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::get_ContainsGenericParameters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_ContainsGenericParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type System::Type::GetRootElementType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetRootElementType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::get_IsVisible()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::IsSubclassOf(System::Type c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "IsSubclassOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, c);
}
 bool System::Type::IsAssignableFrom(System::Type c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "IsAssignableFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, c);
}
 bool System::Type::ImplementInterface(System::Type ifaceType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "ImplementInterface",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, ifaceType);
}
 bool System::Type::FilterAttributeImpl(System::Reflection::MemberInfo m, ::bs_hook::Il2CppWrapperType filterCriteria)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "FilterAttributeImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MemberInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, m, filterCriteria);
}
 bool System::Type::FilterNameImpl(System::Reflection::MemberInfo m, ::bs_hook::Il2CppWrapperType filterCriteria)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "FilterNameImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MemberInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, m, filterCriteria);
}
 bool System::Type::FilterNameIgnoreCaseImpl(System::Reflection::MemberInfo m, ::bs_hook::Il2CppWrapperType filterCriteria)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "FilterNameIgnoreCaseImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MemberInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, m, filterCriteria);
}
// Ctor Parameters []
 System::Type::Type()  : System::Reflection::MemberInfo(THROW_UNLESS(::il2cpp_utils::New<Type>())) {}
 void System::Type::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Reflection::MemberTypes System::Type::get_MemberType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_MemberType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MemberTypes, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type System::Type::GetType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Type::get_Namespace()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_Namespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Type::get_AssemblyQualifiedName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_AssemblyQualifiedName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Type::get_FullName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_FullName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Reflection::Assembly System::Type::get_Assembly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_Assembly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::Assembly, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Reflection::Module System::Type::get_Module()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_Module",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::Module, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::get_IsNested()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsNested",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type System::Type::get_DeclaringType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_DeclaringType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Reflection::MethodBase System::Type::get_DeclaringMethod()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_DeclaringMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MethodBase, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type System::Type::get_ReflectedType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_ReflectedType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type System::Type::get_UnderlyingSystemType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_UnderlyingSystemType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::get_IsArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::IsArrayImpl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "IsArrayImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::get_IsByRef()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsByRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::IsByRefImpl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "IsByRefImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::get_IsPointer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsPointer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::IsPointerImpl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "IsPointerImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::get_IsConstructedGenericType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsConstructedGenericType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::get_IsGenericParameter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsGenericParameter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::get_IsGenericMethodParameter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsGenericMethodParameter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::get_IsGenericType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsGenericType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::get_IsGenericTypeDefinition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsGenericTypeDefinition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::get_IsSZArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsSZArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::get_IsVariableBoundArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsVariableBoundArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::get_HasElementType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_HasElementType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::HasElementTypeImpl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "HasElementTypeImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type System::Type::GetElementType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetElementType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Type::GetArrayRank()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetArrayRank",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type System::Type::GetGenericTypeDefinition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetGenericTypeDefinition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<System::Type> System::Type::get_GenericTypeArguments()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_GenericTypeArguments",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Type>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<System::Type> System::Type::GetGenericArguments()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetGenericArguments",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Type>, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Type::get_GenericParameterPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_GenericParameterPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Reflection::GenericParameterAttributes System::Type::get_GenericParameterAttributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_GenericParameterAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::GenericParameterAttributes, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<System::Type> System::Type::GetGenericParameterConstraints()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetGenericParameterConstraints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Type>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Reflection::TypeAttributes System::Type::get_Attributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_Attributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::TypeAttributes, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Reflection::TypeAttributes System::Type::GetAttributeFlagsImpl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetAttributeFlagsImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::TypeAttributes, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::get_IsAbstract()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsAbstract",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::get_IsSealed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsSealed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::get_IsClass()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsClass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::get_IsNestedAssembly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsNestedAssembly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::get_IsNestedPublic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsNestedPublic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::get_IsNotPublic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsNotPublic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::get_IsPublic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsPublic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::get_IsExplicitLayout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsExplicitLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::get_IsCOMObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsCOMObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::IsCOMObjectImpl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "IsCOMObjectImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::get_IsContextful()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsContextful",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::IsContextfulImpl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "IsContextfulImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::get_IsEnum()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsEnum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::get_IsMarshalByRef()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsMarshalByRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::IsMarshalByRefImpl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "IsMarshalByRefImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::get_IsPrimitive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsPrimitive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::IsPrimitiveImpl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "IsPrimitiveImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::get_IsValueType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsValueType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::IsValueTypeImpl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "IsValueTypeImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::get_IsSignatureType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsSignatureType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Reflection::ConstructorInfo System::Type::GetConstructor(::ArrayW<System::Type> types)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetConstructor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::ConstructorInfo, false>(const_cast<void*>(instance), ___internal_method, types);
}
 System::Reflection::ConstructorInfo System::Type::GetConstructor(System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder binder, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetConstructor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Binder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Reflection::ParameterModifier>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::ConstructorInfo, false>(const_cast<void*>(instance), ___internal_method, bindingAttr, binder, types, modifiers);
}
 System::Reflection::ConstructorInfo System::Type::GetConstructor(System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder binder, System::Reflection::CallingConventions callConvention, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetConstructor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Binder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::CallingConventions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Reflection::ParameterModifier>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::ConstructorInfo, false>(const_cast<void*>(instance), ___internal_method, bindingAttr, binder, callConvention, types, modifiers);
}
 System::Reflection::ConstructorInfo System::Type::GetConstructorImpl(System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder binder, System::Reflection::CallingConventions callConvention, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetConstructorImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Binder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::CallingConventions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Reflection::ParameterModifier>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::ConstructorInfo, false>(const_cast<void*>(instance), ___internal_method, bindingAttr, binder, callConvention, types, modifiers);
}
 ::ArrayW<System::Reflection::ConstructorInfo> System::Type::GetConstructors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetConstructors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::ConstructorInfo>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<System::Reflection::ConstructorInfo> System::Type::GetConstructors(System::Reflection::BindingFlags bindingAttr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetConstructors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::ConstructorInfo>, false>(const_cast<void*>(instance), ___internal_method, bindingAttr);
}
 System::Reflection::EventInfo System::Type::GetEvent(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::EventInfo, false>(const_cast<void*>(instance), ___internal_method, name);
}
 System::Reflection::EventInfo System::Type::GetEvent(::StringW name, System::Reflection::BindingFlags bindingAttr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::EventInfo, false>(const_cast<void*>(instance), ___internal_method, name, bindingAttr);
}
 ::ArrayW<System::Reflection::EventInfo> System::Type::GetEvents(System::Reflection::BindingFlags bindingAttr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::EventInfo>, false>(const_cast<void*>(instance), ___internal_method, bindingAttr);
}
 System::Reflection::FieldInfo System::Type::GetField(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::FieldInfo, false>(const_cast<void*>(instance), ___internal_method, name);
}
 System::Reflection::FieldInfo System::Type::GetField(::StringW name, System::Reflection::BindingFlags bindingAttr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::FieldInfo, false>(const_cast<void*>(instance), ___internal_method, name, bindingAttr);
}
 ::ArrayW<System::Reflection::FieldInfo> System::Type::GetFields()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetFields",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::FieldInfo>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<System::Reflection::FieldInfo> System::Type::GetFields(System::Reflection::BindingFlags bindingAttr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetFields",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::FieldInfo>, false>(const_cast<void*>(instance), ___internal_method, bindingAttr);
}
 ::ArrayW<System::Reflection::MemberInfo> System::Type::GetMember(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetMember",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::MemberInfo>, false>(const_cast<void*>(instance), ___internal_method, name);
}
 ::ArrayW<System::Reflection::MemberInfo> System::Type::GetMember(::StringW name, System::Reflection::BindingFlags bindingAttr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetMember",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::MemberInfo>, false>(const_cast<void*>(instance), ___internal_method, name, bindingAttr);
}
 ::ArrayW<System::Reflection::MemberInfo> System::Type::GetMember(::StringW name, System::Reflection::MemberTypes type, System::Reflection::BindingFlags bindingAttr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetMember",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MemberTypes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::MemberInfo>, false>(const_cast<void*>(instance), ___internal_method, name, type, bindingAttr);
}
 System::Reflection::MethodInfo System::Type::GetMethod(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MethodInfo, false>(const_cast<void*>(instance), ___internal_method, name);
}
 System::Reflection::MethodInfo System::Type::GetMethod(::StringW name, System::Reflection::BindingFlags bindingAttr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MethodInfo, false>(const_cast<void*>(instance), ___internal_method, name, bindingAttr);
}
 System::Reflection::MethodInfo System::Type::GetMethod(::StringW name, ::ArrayW<System::Type> types)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MethodInfo, false>(const_cast<void*>(instance), ___internal_method, name, types);
}
 System::Reflection::MethodInfo System::Type::GetMethod(::StringW name, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Reflection::ParameterModifier>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MethodInfo, false>(const_cast<void*>(instance), ___internal_method, name, types, modifiers);
}
 System::Reflection::MethodInfo System::Type::GetMethod(::StringW name, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder binder, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Binder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Reflection::ParameterModifier>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MethodInfo, false>(const_cast<void*>(instance), ___internal_method, name, bindingAttr, binder, types, modifiers);
}
 System::Reflection::MethodInfo System::Type::GetMethod(::StringW name, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder binder, System::Reflection::CallingConventions callConvention, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Binder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::CallingConventions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Reflection::ParameterModifier>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MethodInfo, false>(const_cast<void*>(instance), ___internal_method, name, bindingAttr, binder, callConvention, types, modifiers);
}
 System::Reflection::MethodInfo System::Type::GetMethodImpl(::StringW name, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder binder, System::Reflection::CallingConventions callConvention, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetMethodImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Binder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::CallingConventions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Reflection::ParameterModifier>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::MethodInfo, false>(const_cast<void*>(instance), ___internal_method, name, bindingAttr, binder, callConvention, types, modifiers);
}
 ::ArrayW<System::Reflection::MethodInfo> System::Type::GetMethods()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetMethods",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::MethodInfo>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<System::Reflection::MethodInfo> System::Type::GetMethods(System::Reflection::BindingFlags bindingAttr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetMethods",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::MethodInfo>, false>(const_cast<void*>(instance), ___internal_method, bindingAttr);
}
 System::Type System::Type::GetNestedType(::StringW name, System::Reflection::BindingFlags bindingAttr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetNestedType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method, name, bindingAttr);
}
 System::Reflection::PropertyInfo System::Type::GetProperty(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::PropertyInfo, false>(const_cast<void*>(instance), ___internal_method, name);
}
 System::Reflection::PropertyInfo System::Type::GetProperty(::StringW name, System::Reflection::BindingFlags bindingAttr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::PropertyInfo, false>(const_cast<void*>(instance), ___internal_method, name, bindingAttr);
}
 System::Reflection::PropertyInfo System::Type::GetProperty(::StringW name, System::Type returnType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::PropertyInfo, false>(const_cast<void*>(instance), ___internal_method, name, returnType);
}
 System::Reflection::PropertyInfo System::Type::GetProperty(::StringW name, System::Type returnType, ::ArrayW<System::Type> types)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::PropertyInfo, false>(const_cast<void*>(instance), ___internal_method, name, returnType, types);
}
 System::Reflection::PropertyInfo System::Type::GetProperty(::StringW name, System::Type returnType, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Reflection::ParameterModifier>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::PropertyInfo, false>(const_cast<void*>(instance), ___internal_method, name, returnType, types, modifiers);
}
 System::Reflection::PropertyInfo System::Type::GetProperty(::StringW name, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder binder, System::Type returnType, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Binder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Reflection::ParameterModifier>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::PropertyInfo, false>(const_cast<void*>(instance), ___internal_method, name, bindingAttr, binder, returnType, types, modifiers);
}
 System::Reflection::PropertyInfo System::Type::GetPropertyImpl(::StringW name, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder binder, System::Type returnType, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetPropertyImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Binder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Reflection::ParameterModifier>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::PropertyInfo, false>(const_cast<void*>(instance), ___internal_method, name, bindingAttr, binder, returnType, types, modifiers);
}
 ::ArrayW<System::Reflection::PropertyInfo> System::Type::GetProperties(System::Reflection::BindingFlags bindingAttr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::PropertyInfo>, false>(const_cast<void*>(instance), ___internal_method, bindingAttr);
}
 System::RuntimeTypeHandle System::Type::get_TypeHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_TypeHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::RuntimeTypeHandle, false>(const_cast<void*>(instance), ___internal_method);
}
 System::RuntimeTypeHandle System::Type::GetTypeHandle(::bs_hook::Il2CppWrapperType o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetTypeHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::RuntimeTypeHandle, false>(nullptr, ___internal_method, o);
}
 System::TypeCode System::Type::GetTypeCode(System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetTypeCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::TypeCode, false>(nullptr, ___internal_method, type);
}
 System::TypeCode System::Type::GetTypeCodeImpl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetTypeCodeImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::TypeCode, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Guid System::Type::get_GUID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_GUID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Guid, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type System::Type::GetTypeFromCLSID(System::Guid clsid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetTypeFromCLSID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(nullptr, ___internal_method, clsid);
}
 System::Type System::Type::get_BaseType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_BaseType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Type::InvokeMember(::StringW name, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder binder, ::bs_hook::Il2CppWrapperType target, ::ArrayW<::bs_hook::Il2CppWrapperType> args, ::ArrayW<System::Reflection::ParameterModifier> modifiers, System::Globalization::CultureInfo culture, ::ArrayW<::StringW> namedParameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "InvokeMember",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Binder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Reflection::ParameterModifier>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, name, invokeAttr, binder, target, args, modifiers, culture, namedParameters);
}
 ::ArrayW<System::Type> System::Type::GetInterfaces()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetInterfaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Type>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::IsInstanceOfType(::bs_hook::Il2CppWrapperType o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "IsInstanceOfType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, o);
}
 bool System::Type::IsEquivalentTo(System::Type other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
 System::Type System::Type::GetEnumUnderlyingType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetEnumUnderlyingType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Array System::Type::GetEnumValues()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetEnumValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Array, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type System::Type::MakeArrayType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "MakeArrayType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type System::Type::MakeArrayType(int32_t rank)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "MakeArrayType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method, rank);
}
 System::Type System::Type::MakeByRefType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "MakeByRefType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type System::Type::MakeGenericType(::ArrayW<System::Type> typeArguments)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "MakeGenericType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method, typeArguments);
}
 System::Type System::Type::MakePointerType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "MakePointerType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type System::Type::MakeGenericSignatureType(System::Type genericTypeDefinition, ::ArrayW<System::Type> typeArguments)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "MakeGenericSignatureType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(nullptr, ___internal_method, genericTypeDefinition, typeArguments);
}
 ::StringW System::Type::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::Equals(::bs_hook::Il2CppWrapperType o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, o);
}
 int32_t System::Type::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::Equals(System::Type o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, o);
}
 System::Reflection::Binder System::Type::get_DefaultBinder()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_DefaultBinder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::Binder, false>(nullptr, ___internal_method);
}
 System::Type System::Type::GetTypeFromHandle(System::RuntimeTypeHandle handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetTypeFromHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::RuntimeTypeHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(nullptr, ___internal_method, handle);
}
 System::Type System::Type::internal_from_handle(::cordl_internals::intptr_t handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "internal_from_handle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(nullptr, ___internal_method, handle);
}
 bool System::Type::get_IsSzArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsSzArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Type::FormatTypeName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "FormatTypeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Type::FormatTypeName(bool serialization)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "FormatTypeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, serialization);
}
 bool System::Type::get_IsInterface()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_IsInterface",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type System::Type::GetType(::StringW typeName, bool throwOnError, bool ignoreCase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(nullptr, ___internal_method, typeName, throwOnError, ignoreCase);
}
 System::Type System::Type::GetType(::StringW typeName, bool throwOnError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(nullptr, ___internal_method, typeName, throwOnError);
}
 System::Type System::Type::GetType(::StringW typeName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(nullptr, ___internal_method, typeName);
}
 System::Type System::Type::GetType(::StringW typeName, System::Func_2<System::Reflection::AssemblyName,System::Reflection::Assembly> assemblyResolver, System::Func_4<System::Reflection::Assembly,::StringW,bool,System::Type> typeResolver, bool throwOnError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::Reflection::AssemblyName,System::Reflection::Assembly>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<System::Reflection::Assembly,::StringW,bool,System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(nullptr, ___internal_method, typeName, assemblyResolver, typeResolver, throwOnError);
}
 bool System::Type::op_Equality(System::Type left, System::Type right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
 bool System::Type::op_Inequality(System::Type left, System::Type right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
 System::Type System::Type::GetTypeFromCLSID(System::Guid clsid, ::StringW server, bool throwOnError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "GetTypeFromCLSID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(nullptr, ___internal_method, clsid, server, throwOnError);
}
 ::StringW System::Type::get_FullNameOrDefault()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_FullNameOrDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Type::IsRuntimeImplemented()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "IsRuntimeImplemented",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Type::InternalGetNameIfAvailable(ByRef<System::Type> rootCauseForFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "InternalGetNameIfAvailable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Type>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, rootCauseForFailure);
}
 ::StringW System::Type::get_InternalNameIfAvailable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_InternalNameIfAvailable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Type::get_NameOrDefault()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Type>::get(),
                            "get_NameOrDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
