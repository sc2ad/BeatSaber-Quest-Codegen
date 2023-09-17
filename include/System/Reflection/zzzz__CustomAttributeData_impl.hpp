#pragma once
namespace {
#include "System/Reflection/zzzz__CustomAttributeData_def.hpp"
#include "System/Reflection/zzzz__Module_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/Reflection/zzzz__CustomAttributeTypedArgument_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
#include "System/Reflection/zzzz__CustomAttributeNamedArgument_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
//  Writing Method size for method: ::System::Reflection::____System__Reflection__CustomAttributeData__LazyCAttrData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::____System__Reflection__CustomAttributeData__LazyCAttrData::*)()>(&::System::Reflection::____System__Reflection__CustomAttributeData__LazyCAttrData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x238355c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::____System__Reflection__CustomAttributeData__LazyCAttrData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Reflection::____System__Reflection__CustomAttributeData__LazyCAttrData::__set_assembly(::System::Reflection::Assembly value)  {
::cordl_internals::setInstanceField<::System::Reflection::Assembly, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Reflection::Assembly>(value));
}
constexpr ::System::Reflection::Assembly ::System::Reflection::____System__Reflection__CustomAttributeData__LazyCAttrData::__get_assembly() const {
return ::cordl_internals::getInstanceField<::System::Reflection::Assembly, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Reflection::____System__Reflection__CustomAttributeData__LazyCAttrData::__set_data(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::System::Reflection::____System__Reflection__CustomAttributeData__LazyCAttrData::__get_data() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Reflection::____System__Reflection__CustomAttributeData__LazyCAttrData::__set_data_length(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::System::Reflection::____System__Reflection__CustomAttributeData__LazyCAttrData::__get_data_length() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::Reflection::____System__Reflection__CustomAttributeData__LazyCAttrData::____System__Reflection__CustomAttributeData__LazyCAttrData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__Reflection__CustomAttributeData__LazyCAttrData>())) {}
 void ::System::Reflection::____System__Reflection__CustomAttributeData__LazyCAttrData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::____System__Reflection__CustomAttributeData__LazyCAttrData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::System::Reflection::CustomAttributeData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::CustomAttributeData::*)()>(&::System::Reflection::CustomAttributeData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23834bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::CustomAttributeData::*)(::System::Reflection::ConstructorInfo, ::System::Reflection::Assembly, ::cordl_internals::intptr_t, uint32_t)>(&::System::Reflection::CustomAttributeData::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x23834c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::CustomAttributeData::*)(::System::Reflection::ConstructorInfo)>(&::System::Reflection::CustomAttributeData::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x237a17c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::CustomAttributeData::*)(::System::Reflection::ConstructorInfo, ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>, ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>)>(&::System::Reflection::CustomAttributeData::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x237a528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.ResolveArgumentsInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Reflection::ConstructorInfo, ::System::Reflection::Assembly, ::cordl_internals::intptr_t, uint32_t, ByRef<::ArrayW<::bs_hook::Il2CppWrapperType>>, ByRef<::ArrayW<::bs_hook::Il2CppWrapperType>>)>(&::System::Reflection::CustomAttributeData::ResolveArgumentsInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2383564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData>::get(),
                            "ResolveArgumentsInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::bs_hook::Il2CppWrapperType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::bs_hook::Il2CppWrapperType>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.ResolveArguments
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::CustomAttributeData::*)()>(&::System::Reflection::CustomAttributeData::ResolveArguments)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2383568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData>::get(),
                            "ResolveArguments",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.get_Constructor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::ConstructorInfo (::System::Reflection::CustomAttributeData::*)()>(&::System::Reflection::CustomAttributeData::get_Constructor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23836f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Reflection::CustomAttributeData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.get_ConstructorArguments
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument> (::System::Reflection::CustomAttributeData::*)()>(&::System::Reflection::CustomAttributeData::get_ConstructorArguments)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2383700;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Reflection::CustomAttributeData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.get_NamedArguments
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument> (::System::Reflection::CustomAttributeData::*)()>(&::System::Reflection::CustomAttributeData::get_NamedArguments)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2383718;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Reflection::CustomAttributeData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.GetCustomAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData> (*)(::System::Reflection::Assembly)>(&::System::Reflection::CustomAttributeData::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2383730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData>::get(),
                            "GetCustomAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.GetCustomAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData> (*)(::System::Reflection::MemberInfo)>(&::System::Reflection::CustomAttributeData::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x238378c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData>::get(),
                            "GetCustomAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.GetCustomAttributesInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData> (*)(::System::RuntimeType)>(&::System::Reflection::CustomAttributeData::GetCustomAttributesInternal)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x23837e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData>::get(),
                            "GetCustomAttributesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.GetCustomAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData> (*)(::System::Reflection::Module)>(&::System::Reflection::CustomAttributeData::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2383844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData>::get(),
                            "GetCustomAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Module>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.GetCustomAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData> (*)(::System::Reflection::ParameterInfo)>(&::System::Reflection::CustomAttributeData::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x23838a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData>::get(),
                            "GetCustomAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ParameterInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.get_AttributeType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type (::System::Reflection::CustomAttributeData::*)()>(&::System::Reflection::CustomAttributeData::get_AttributeType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x23838fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData>::get(),
                            "get_AttributeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Reflection::CustomAttributeData::*)()>(&::System::Reflection::CustomAttributeData::ToString)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x238391c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Reflection::CustomAttributeData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::CustomAttributeData::*)(::bs_hook::Il2CppWrapperType)>(&::System::Reflection::CustomAttributeData::Equals)> {
  constexpr static std::size_t size = 0x680;
  constexpr static std::size_t addrs = 0x2383e8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Reflection::CustomAttributeData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeData.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Reflection::CustomAttributeData::*)()>(&::System::Reflection::CustomAttributeData::GetHashCode)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x238450c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Reflection::CustomAttributeData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
constexpr void ::System::Reflection::CustomAttributeData::__set_ctorInfo(::System::Reflection::ConstructorInfo value)  {
::cordl_internals::setInstanceField<::System::Reflection::ConstructorInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Reflection::ConstructorInfo>(value));
}
constexpr ::System::Reflection::ConstructorInfo ::System::Reflection::CustomAttributeData::__get_ctorInfo() const {
return ::cordl_internals::getInstanceField<::System::Reflection::ConstructorInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Reflection::CustomAttributeData::__set_ctorArgs(::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>>(value));
}
constexpr ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument> ::System::Reflection::CustomAttributeData::__get_ctorArgs() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Reflection::CustomAttributeData::__set_namedArgs(::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>>(value));
}
constexpr ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument> ::System::Reflection::CustomAttributeData::__get_namedArgs() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Reflection::CustomAttributeData::__set_lazyData(::System::Reflection::____System__Reflection__CustomAttributeData__LazyCAttrData value)  {
::cordl_internals::setInstanceField<::System::Reflection::____System__Reflection__CustomAttributeData__LazyCAttrData, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Reflection::____System__Reflection__CustomAttributeData__LazyCAttrData>(value));
}
constexpr ::System::Reflection::____System__Reflection__CustomAttributeData__LazyCAttrData ::System::Reflection::CustomAttributeData::__get_lazyData() const {
return ::cordl_internals::getInstanceField<::System::Reflection::____System__Reflection__CustomAttributeData__LazyCAttrData, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::Reflection::CustomAttributeData::CustomAttributeData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CustomAttributeData>())) {}
 void ::System::Reflection::CustomAttributeData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "ctorInfo", ty: "::System::Reflection::ConstructorInfo", modifiers: "", def_value: None }, CppParam { name: "assembly", ty: "::System::Reflection::Assembly", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "data_length", ty: "uint32_t", modifiers: "", def_value: None }]
 ::System::Reflection::CustomAttributeData::CustomAttributeData(::System::Reflection::ConstructorInfo ctorInfo, ::System::Reflection::Assembly assembly, ::cordl_internals::intptr_t data, uint32_t data_length)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CustomAttributeData>(ctorInfo, assembly, data, data_length))) {}
 void ::System::Reflection::CustomAttributeData::_ctor(::System::Reflection::ConstructorInfo ctorInfo, ::System::Reflection::Assembly assembly, ::cordl_internals::intptr_t data, uint32_t data_length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ctorInfo, assembly, data, data_length);
}
// Ctor Parameters [CppParam { name: "ctorInfo", ty: "::System::Reflection::ConstructorInfo", modifiers: "", def_value: None }]
 ::System::Reflection::CustomAttributeData::CustomAttributeData(::System::Reflection::ConstructorInfo ctorInfo)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CustomAttributeData>(ctorInfo))) {}
 void ::System::Reflection::CustomAttributeData::_ctor(::System::Reflection::ConstructorInfo ctorInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ctorInfo);
}
// Ctor Parameters [CppParam { name: "ctorInfo", ty: "::System::Reflection::ConstructorInfo", modifiers: "", def_value: None }, CppParam { name: "ctorArgs", ty: "::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>", modifiers: "", def_value: None }, CppParam { name: "namedArgs", ty: "::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>", modifiers: "", def_value: None }]
 ::System::Reflection::CustomAttributeData::CustomAttributeData(::System::Reflection::ConstructorInfo ctorInfo, ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument> ctorArgs, ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument> namedArgs)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CustomAttributeData>(ctorInfo, ctorArgs, namedArgs))) {}
 void ::System::Reflection::CustomAttributeData::_ctor(::System::Reflection::ConstructorInfo ctorInfo, ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument> ctorArgs, ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument> namedArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ctorInfo, ctorArgs, namedArgs);
}
 void ::System::Reflection::CustomAttributeData::ResolveArgumentsInternal(::System::Reflection::ConstructorInfo ctor, ::System::Reflection::Assembly assembly, ::cordl_internals::intptr_t data, uint32_t data_length, ByRef<::ArrayW<::bs_hook::Il2CppWrapperType>> ctorArgs, ByRef<::ArrayW<::bs_hook::Il2CppWrapperType>> namedArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData>::get(),
                            "ResolveArgumentsInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::bs_hook::Il2CppWrapperType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::bs_hook::Il2CppWrapperType>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ctor, assembly, data, data_length, ctorArgs, namedArgs);
}
 void ::System::Reflection::CustomAttributeData::ResolveArguments()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData>::get(),
                            "ResolveArguments",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Reflection::ConstructorInfo ::System::Reflection::CustomAttributeData::get_Constructor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData>::get(),
                            "get_Constructor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument> ::System::Reflection::CustomAttributeData::get_ConstructorArguments()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData>::get(),
                            "get_ConstructorArguments",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument> ::System::Reflection::CustomAttributeData::get_NamedArguments()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData>::get(),
                            "get_NamedArguments",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData> ::System::Reflection::CustomAttributeData::GetCustomAttributes(::System::Reflection::Assembly target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData>::get(),
                            "GetCustomAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData>, false>(nullptr, ___internal_method, target);
}
 ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData> ::System::Reflection::CustomAttributeData::GetCustomAttributes(::System::Reflection::MemberInfo target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData>::get(),
                            "GetCustomAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData>, false>(nullptr, ___internal_method, target);
}
 ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData> ::System::Reflection::CustomAttributeData::GetCustomAttributesInternal(::System::RuntimeType target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData>::get(),
                            "GetCustomAttributesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData>, false>(nullptr, ___internal_method, target);
}
 ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData> ::System::Reflection::CustomAttributeData::GetCustomAttributes(::System::Reflection::Module target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData>::get(),
                            "GetCustomAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Module>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData>, false>(nullptr, ___internal_method, target);
}
 ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData> ::System::Reflection::CustomAttributeData::GetCustomAttributes(::System::Reflection::ParameterInfo target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData>::get(),
                            "GetCustomAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ParameterInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData>, false>(nullptr, ___internal_method, target);
}
 ::System::Type ::System::Reflection::CustomAttributeData::get_AttributeType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData>::get(),
                            "get_AttributeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::System::Reflection::CustomAttributeData::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename T>
 ::ArrayW<T> ::System::Reflection::CustomAttributeData::UnboxValues(::ArrayW<::bs_hook::Il2CppWrapperType> values)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData>::get(),
                        "UnboxValues",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>, false>(nullptr, ___internal_method, values);
}
 bool ::System::Reflection::CustomAttributeData::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 int32_t ::System::Reflection::CustomAttributeData::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::CustomAttributeData>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
