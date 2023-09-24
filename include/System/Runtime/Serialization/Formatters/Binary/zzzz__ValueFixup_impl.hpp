#pragma once
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ValueFixup_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ValueFixupEnum_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ReadObjectInfo_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ParseRecord_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::ValueFixup._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ValueFixup::*)(System::Array, ::ArrayW<int32_t>)>(&System::Runtime::Serialization::Formatters::Binary::ValueFixup::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x23622d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ValueFixup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::ValueFixup._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ValueFixup::*)(::bs_hook::Il2CppWrapperType, ::StringW, System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo)>(&System::Runtime::Serialization::Formatters::Binary::ValueFixup::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x236272c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ValueFixup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::ValueFixup.Fixup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ValueFixup::*)(System::Runtime::Serialization::Formatters::Binary::ParseRecord, System::Runtime::Serialization::Formatters::Binary::ParseRecord)>(&System::Runtime::Serialization::Formatters::Binary::ValueFixup::Fixup)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x236172c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ValueFixup>::get(),
                            "Fixup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Serialization::Formatters::Binary::ValueFixup::__set_valueFixupEnum(System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum>(value));
}
constexpr System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum System::Runtime::Serialization::Formatters::Binary::ValueFixup::__get_valueFixupEnum() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ValueFixup::__set_arrayObj(System::Array value)  {
::cordl_internals::setInstanceField<System::Array, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Array>(value));
}
constexpr System::Array System::Runtime::Serialization::Formatters::Binary::ValueFixup::__get_arrayObj() const {
return ::cordl_internals::getInstanceField<System::Array, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ValueFixup::__set_indexMap(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> System::Runtime::Serialization::Formatters::Binary::ValueFixup::__get_indexMap() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ValueFixup::__set_header(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Runtime::Serialization::Formatters::Binary::ValueFixup::__get_header() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ValueFixup::__set_memberObject(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Runtime::Serialization::Formatters::Binary::ValueFixup::__get_memberObject() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Runtime::Serialization::Formatters::Binary::ValueFixup::__set_valueInfo(System::Reflection::MemberInfo value)  {
::cordl_internals::setStaticField<System::Reflection::MemberInfo, "valueInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ValueFixup>::get>(std::forward<System::Reflection::MemberInfo>(value));
}
 System::Reflection::MemberInfo System::Runtime::Serialization::Formatters::Binary::ValueFixup::__get_valueInfo()  {
return ::cordl_internals::getStaticField<System::Reflection::MemberInfo, "valueInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ValueFixup>::get>();
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ValueFixup::__set_objectInfo(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo>(value));
}
constexpr System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo System::Runtime::Serialization::Formatters::Binary::ValueFixup::__get_objectInfo() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ValueFixup::__set_memberName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Runtime::Serialization::Formatters::Binary::ValueFixup::__get_memberName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Runtime::Serialization::Formatters::Binary::ValueFixup System::Runtime::Serialization::Formatters::Binary::ValueFixup::New_ctor(System::Array arrayObj, ::ArrayW<int32_t> indexMap)  {
System::Runtime::Serialization::Formatters::Binary::ValueFixup o{THROW_UNLESS(::il2cpp_utils::New<System::Runtime::Serialization::Formatters::Binary::ValueFixup>(arrayObj, indexMap))};
return o;
}
 void System::Runtime::Serialization::Formatters::Binary::ValueFixup::_ctor(System::Array arrayObj, ::ArrayW<int32_t> indexMap)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ValueFixup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, arrayObj, indexMap);
}
 System::Runtime::Serialization::Formatters::Binary::ValueFixup System::Runtime::Serialization::Formatters::Binary::ValueFixup::New_ctor(::bs_hook::Il2CppWrapperType memberObject, ::StringW memberName, System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo objectInfo)  {
System::Runtime::Serialization::Formatters::Binary::ValueFixup o{THROW_UNLESS(::il2cpp_utils::New<System::Runtime::Serialization::Formatters::Binary::ValueFixup>(memberObject, memberName, objectInfo))};
return o;
}
 void System::Runtime::Serialization::Formatters::Binary::ValueFixup::_ctor(::bs_hook::Il2CppWrapperType memberObject, ::StringW memberName, System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo objectInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ValueFixup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, memberObject, memberName, objectInfo);
}
 void System::Runtime::Serialization::Formatters::Binary::ValueFixup::Fixup(System::Runtime::Serialization::Formatters::Binary::ParseRecord record, System::Runtime::Serialization::Formatters::Binary::ParseRecord parent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ValueFixup>::get(),
                            "Fixup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, record, parent);
}
