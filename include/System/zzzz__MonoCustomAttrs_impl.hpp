#pragma once
#include "System/zzzz__MonoCustomAttrs_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Reflection/zzzz__EventInfo_def.hpp"
#include "System/Reflection/zzzz__ICustomAttributeProvider_def.hpp"
#include "System/Reflection/zzzz__CustomAttributeData_def.hpp"
#include "System/Reflection/zzzz__RuntimeEventInfo_def.hpp"
#include "System/zzzz__MonoCustomAttrs_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/zzzz__AttributeUsageAttribute_def.hpp"
#include "System/Reflection/zzzz__RuntimePropertyInfo_def.hpp"
//  Writing Method size for method: System::System__MonoCustomAttrs__AttributeInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::System__MonoCustomAttrs__AttributeInfo::*)(System::AttributeUsageAttribute, int32_t)>(&System::System__MonoCustomAttrs__AttributeInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x248d770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__MonoCustomAttrs__AttributeInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AttributeUsageAttribute>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::System__MonoCustomAttrs__AttributeInfo.get_Usage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::AttributeUsageAttribute (System::System__MonoCustomAttrs__AttributeInfo::*)()>(&System::System__MonoCustomAttrs__AttributeInfo::get_Usage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x248fe94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__MonoCustomAttrs__AttributeInfo>::get(),
                            "get_Usage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::System__MonoCustomAttrs__AttributeInfo.get_InheritanceLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::System__MonoCustomAttrs__AttributeInfo::*)()>(&System::System__MonoCustomAttrs__AttributeInfo::get_InheritanceLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x248fe9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__MonoCustomAttrs__AttributeInfo>::get(),
                            "get_InheritanceLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::System__MonoCustomAttrs__AttributeInfo::__set__usage(System::AttributeUsageAttribute value)  {
::cordl_internals::setInstanceField<System::AttributeUsageAttribute, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::AttributeUsageAttribute>(value));
}
constexpr System::AttributeUsageAttribute System::System__MonoCustomAttrs__AttributeInfo::__get__usage() const {
return ::cordl_internals::getInstanceField<System::AttributeUsageAttribute, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::System__MonoCustomAttrs__AttributeInfo::__set__inheritanceLevel(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::System__MonoCustomAttrs__AttributeInfo::__get__inheritanceLevel() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::System__MonoCustomAttrs__AttributeInfo System::System__MonoCustomAttrs__AttributeInfo::New_ctor(System::AttributeUsageAttribute usage, int32_t inheritanceLevel)  {
System::System__MonoCustomAttrs__AttributeInfo o{THROW_UNLESS(::il2cpp_utils::New<System::System__MonoCustomAttrs__AttributeInfo>(usage, inheritanceLevel))};
return o;
}
 void System::System__MonoCustomAttrs__AttributeInfo::_ctor(System::AttributeUsageAttribute usage, int32_t inheritanceLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__MonoCustomAttrs__AttributeInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AttributeUsageAttribute>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, usage, inheritanceLevel);
}
 System::AttributeUsageAttribute System::System__MonoCustomAttrs__AttributeInfo::get_Usage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__MonoCustomAttrs__AttributeInfo>::get(),
                            "get_Usage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::AttributeUsageAttribute, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::System__MonoCustomAttrs__AttributeInfo::get_InheritanceLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__MonoCustomAttrs__AttributeInfo>::get(),
                            "get_InheritanceLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::MonoCustomAttrs.IsUserCattrProvider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::bs_hook::Il2CppWrapperType)>(&System::MonoCustomAttrs::IsUserCattrProvider)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x248c0f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "IsUserCattrProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::MonoCustomAttrs.GetCustomAttributesInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Attribute> (*)(System::Reflection::ICustomAttributeProvider, System::Type, bool)>(&System::MonoCustomAttrs::GetCustomAttributesInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x248c2c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "GetCustomAttributesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::ICustomAttributeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::MonoCustomAttrs.GetPseudoCustomAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::bs_hook::Il2CppWrapperType> (*)(System::Reflection::ICustomAttributeProvider, System::Type)>(&System::MonoCustomAttrs::GetPseudoCustomAttributes)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x248c2cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "GetPseudoCustomAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::ICustomAttributeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::MonoCustomAttrs.GetPseudoCustomAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::bs_hook::Il2CppWrapperType> (*)(System::Type)>(&System::MonoCustomAttrs::GetPseudoCustomAttributes)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x248c5b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "GetPseudoCustomAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::MonoCustomAttrs.GetCustomAttributesBase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::bs_hook::Il2CppWrapperType> (*)(System::Reflection::ICustomAttributeProvider, System::Type, bool)>(&System::MonoCustomAttrs::GetCustomAttributesBase)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x248c71c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "GetCustomAttributesBase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::ICustomAttributeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::MonoCustomAttrs.GetCustomAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::bs_hook::Il2CppWrapperType> (*)(System::Reflection::ICustomAttributeProvider, System::Type, bool)>(&System::MonoCustomAttrs::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x988;
  constexpr static std::size_t addrs = 0x248c8c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "GetCustomAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::ICustomAttributeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::MonoCustomAttrs.GetCustomAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::bs_hook::Il2CppWrapperType> (*)(System::Reflection::ICustomAttributeProvider, bool)>(&System::MonoCustomAttrs::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x248d77c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "GetCustomAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::ICustomAttributeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::MonoCustomAttrs.GetCustomAttributesDataInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::CustomAttributeData> (*)(System::Reflection::ICustomAttributeProvider)>(&System::MonoCustomAttrs::GetCustomAttributesDataInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x248d8f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "GetCustomAttributesDataInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::ICustomAttributeProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::MonoCustomAttrs.GetCustomAttributesData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData> (*)(System::Reflection::ICustomAttributeProvider, bool)>(&System::MonoCustomAttrs::GetCustomAttributesData)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x248d8f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "GetCustomAttributesData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::ICustomAttributeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::MonoCustomAttrs.GetCustomAttributesData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData> (*)(System::Reflection::ICustomAttributeProvider, System::Type, bool)>(&System::MonoCustomAttrs::GetCustomAttributesData)> {
  constexpr static std::size_t size = 0x1360;
  constexpr static std::size_t addrs = 0x248dbd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "GetCustomAttributesData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::ICustomAttributeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::MonoCustomAttrs.GetCustomAttributesDataBase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData> (*)(System::Reflection::ICustomAttributeProvider, System::Type, bool)>(&System::MonoCustomAttrs::GetCustomAttributesDataBase)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x248da24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "GetCustomAttributesDataBase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::ICustomAttributeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::MonoCustomAttrs.GetPseudoCustomAttributesData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::CustomAttributeData> (*)(System::Reflection::ICustomAttributeProvider, System::Type)>(&System::MonoCustomAttrs::GetPseudoCustomAttributesData)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x248ef30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "GetPseudoCustomAttributesData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::ICustomAttributeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::MonoCustomAttrs.GetPseudoCustomAttributesData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Reflection::CustomAttributeData> (*)(System::Type)>(&System::MonoCustomAttrs::GetPseudoCustomAttributesData)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x248f220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "GetPseudoCustomAttributesData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::MonoCustomAttrs.IsDefined
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Reflection::ICustomAttributeProvider, System::Type, bool)>(&System::MonoCustomAttrs::IsDefined)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x248f438;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "IsDefined",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::ICustomAttributeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::MonoCustomAttrs.IsDefinedInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Reflection::ICustomAttributeProvider, System::Type)>(&System::MonoCustomAttrs::IsDefinedInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x248f6d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "IsDefinedInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::ICustomAttributeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::MonoCustomAttrs.GetBasePropertyDefinition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::PropertyInfo (*)(System::Reflection::RuntimePropertyInfo)>(&System::MonoCustomAttrs::GetBasePropertyDefinition)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x248f6d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "GetBasePropertyDefinition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::RuntimePropertyInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::MonoCustomAttrs.GetBaseEventDefinition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::EventInfo (*)(System::Reflection::RuntimeEventInfo)>(&System::MonoCustomAttrs::GetBaseEventDefinition)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x248f9bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "GetBaseEventDefinition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::RuntimeEventInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::MonoCustomAttrs.GetBase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::ICustomAttributeProvider (*)(System::Reflection::ICustomAttributeProvider)>(&System::MonoCustomAttrs::GetBase)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x248d248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "GetBase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::ICustomAttributeProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::MonoCustomAttrs.RetrieveAttributeUsageNoCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::AttributeUsageAttribute (*)(System::Type)>(&System::MonoCustomAttrs::RetrieveAttributeUsageNoCache)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x248fbcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "RetrieveAttributeUsageNoCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::MonoCustomAttrs.RetrieveAttributeUsage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::AttributeUsageAttribute (*)(System::Type)>(&System::MonoCustomAttrs::RetrieveAttributeUsage)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x248d5fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "RetrieveAttributeUsage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::MonoCustomAttrs::__set_corlib(System::Reflection::Assembly value)  {
::cordl_internals::setStaticField<System::Reflection::Assembly, "corlib", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get>(std::forward<System::Reflection::Assembly>(value));
}
 System::Reflection::Assembly System::MonoCustomAttrs::__get_corlib()  {
return ::cordl_internals::getStaticField<System::Reflection::Assembly, "corlib", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get>();
}
 void System::MonoCustomAttrs::__set_usage_cache(System::Collections::Generic::Dictionary_2<System::Type,System::AttributeUsageAttribute> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<System::Type,System::AttributeUsageAttribute>, "usage_cache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get>(std::forward<System::Collections::Generic::Dictionary_2<System::Type,System::AttributeUsageAttribute>>(value));
}
 System::Collections::Generic::Dictionary_2<System::Type,System::AttributeUsageAttribute> System::MonoCustomAttrs::__get_usage_cache()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<System::Type,System::AttributeUsageAttribute>, "usage_cache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get>();
}
 void System::MonoCustomAttrs::__set_DefaultAttributeUsage(System::AttributeUsageAttribute value)  {
::cordl_internals::setStaticField<System::AttributeUsageAttribute, "DefaultAttributeUsage", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get>(std::forward<System::AttributeUsageAttribute>(value));
}
 System::AttributeUsageAttribute System::MonoCustomAttrs::__get_DefaultAttributeUsage()  {
return ::cordl_internals::getStaticField<System::AttributeUsageAttribute, "DefaultAttributeUsage", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get>();
}
 bool System::MonoCustomAttrs::IsUserCattrProvider(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "IsUserCattrProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, obj);
}
 ::ArrayW<System::Attribute> System::MonoCustomAttrs::GetCustomAttributesInternal(System::Reflection::ICustomAttributeProvider obj, System::Type attributeType, bool pseudoAttrs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "GetCustomAttributesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::ICustomAttributeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Attribute>, false>(nullptr, ___internal_method, obj, attributeType, pseudoAttrs);
}
 ::ArrayW<::bs_hook::Il2CppWrapperType> System::MonoCustomAttrs::GetPseudoCustomAttributes(System::Reflection::ICustomAttributeProvider obj, System::Type attributeType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "GetPseudoCustomAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::ICustomAttributeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::bs_hook::Il2CppWrapperType>, false>(nullptr, ___internal_method, obj, attributeType);
}
 ::ArrayW<::bs_hook::Il2CppWrapperType> System::MonoCustomAttrs::GetPseudoCustomAttributes(System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "GetPseudoCustomAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::bs_hook::Il2CppWrapperType>, false>(nullptr, ___internal_method, type);
}
 ::ArrayW<::bs_hook::Il2CppWrapperType> System::MonoCustomAttrs::GetCustomAttributesBase(System::Reflection::ICustomAttributeProvider obj, System::Type attributeType, bool inheritedOnly)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "GetCustomAttributesBase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::ICustomAttributeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::bs_hook::Il2CppWrapperType>, false>(nullptr, ___internal_method, obj, attributeType, inheritedOnly);
}
 ::ArrayW<::bs_hook::Il2CppWrapperType> System::MonoCustomAttrs::GetCustomAttributes(System::Reflection::ICustomAttributeProvider obj, System::Type attributeType, bool inherit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "GetCustomAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::ICustomAttributeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::bs_hook::Il2CppWrapperType>, false>(nullptr, ___internal_method, obj, attributeType, inherit);
}
 ::ArrayW<::bs_hook::Il2CppWrapperType> System::MonoCustomAttrs::GetCustomAttributes(System::Reflection::ICustomAttributeProvider obj, bool inherit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "GetCustomAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::ICustomAttributeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::bs_hook::Il2CppWrapperType>, false>(nullptr, ___internal_method, obj, inherit);
}
 ::ArrayW<System::Reflection::CustomAttributeData> System::MonoCustomAttrs::GetCustomAttributesDataInternal(System::Reflection::ICustomAttributeProvider obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "GetCustomAttributesDataInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::ICustomAttributeProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::CustomAttributeData>, false>(nullptr, ___internal_method, obj);
}
/// @param inherit: bool (default: false)
 System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData> System::MonoCustomAttrs::GetCustomAttributesData(System::Reflection::ICustomAttributeProvider obj, bool inherit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "GetCustomAttributesData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::ICustomAttributeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData>, false>(nullptr, ___internal_method, obj, inherit);
}
 System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData> System::MonoCustomAttrs::GetCustomAttributesData(System::Reflection::ICustomAttributeProvider obj, System::Type attributeType, bool inherit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "GetCustomAttributesData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::ICustomAttributeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData>, false>(nullptr, ___internal_method, obj, attributeType, inherit);
}
 System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData> System::MonoCustomAttrs::GetCustomAttributesDataBase(System::Reflection::ICustomAttributeProvider obj, System::Type attributeType, bool inheritedOnly)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "GetCustomAttributesDataBase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::ICustomAttributeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData>, false>(nullptr, ___internal_method, obj, attributeType, inheritedOnly);
}
 ::ArrayW<System::Reflection::CustomAttributeData> System::MonoCustomAttrs::GetPseudoCustomAttributesData(System::Reflection::ICustomAttributeProvider obj, System::Type attributeType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "GetPseudoCustomAttributesData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::ICustomAttributeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::CustomAttributeData>, false>(nullptr, ___internal_method, obj, attributeType);
}
 ::ArrayW<System::Reflection::CustomAttributeData> System::MonoCustomAttrs::GetPseudoCustomAttributesData(System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "GetPseudoCustomAttributesData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Reflection::CustomAttributeData>, false>(nullptr, ___internal_method, type);
}
 bool System::MonoCustomAttrs::IsDefined(System::Reflection::ICustomAttributeProvider obj, System::Type attributeType, bool inherit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "IsDefined",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::ICustomAttributeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, obj, attributeType, inherit);
}
 bool System::MonoCustomAttrs::IsDefinedInternal(System::Reflection::ICustomAttributeProvider obj, System::Type AttributeType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "IsDefinedInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::ICustomAttributeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, obj, AttributeType);
}
 System::Reflection::PropertyInfo System::MonoCustomAttrs::GetBasePropertyDefinition(System::Reflection::RuntimePropertyInfo property)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "GetBasePropertyDefinition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::RuntimePropertyInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::PropertyInfo, false>(nullptr, ___internal_method, property);
}
 System::Reflection::EventInfo System::MonoCustomAttrs::GetBaseEventDefinition(System::Reflection::RuntimeEventInfo evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "GetBaseEventDefinition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::RuntimeEventInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::EventInfo, false>(nullptr, ___internal_method, evt);
}
 System::Reflection::ICustomAttributeProvider System::MonoCustomAttrs::GetBase(System::Reflection::ICustomAttributeProvider obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "GetBase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::ICustomAttributeProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::ICustomAttributeProvider, false>(nullptr, ___internal_method, obj);
}
 System::AttributeUsageAttribute System::MonoCustomAttrs::RetrieveAttributeUsageNoCache(System::Type attributeType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "RetrieveAttributeUsageNoCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::AttributeUsageAttribute, false>(nullptr, ___internal_method, attributeType);
}
 System::AttributeUsageAttribute System::MonoCustomAttrs::RetrieveAttributeUsage(System::Type attributeType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoCustomAttrs>::get(),
                            "RetrieveAttributeUsage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::AttributeUsageAttribute, false>(nullptr, ___internal_method, attributeType);
}
