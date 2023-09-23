#pragma once
#include "System/Net/zzzz__HeaderInfoTable_def.hpp"
#include "System/Net/zzzz__HeaderParser_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Net/zzzz__HeaderInfo_def.hpp"
//  Writing Method size for method: System::Net::HeaderInfoTable.ParseSingleValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(::StringW)>(&System::Net::HeaderInfoTable::ParseSingleValue)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2814890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HeaderInfoTable>::get(),
                            "ParseSingleValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HeaderInfoTable.ParseMultiValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(::StringW)>(&System::Net::HeaderInfoTable::ParseMultiValue)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x2814920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HeaderInfoTable>::get(),
                            "ParseMultiValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HeaderInfoTable.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::HeaderInfo (System::Net::HeaderInfoTable::*)(::StringW)>(&System::Net::HeaderInfoTable::get_Item)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x280e8bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HeaderInfoTable>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HeaderInfoTable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HeaderInfoTable::*)()>(&System::Net::HeaderInfoTable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x281101c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HeaderInfoTable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::Net::HeaderInfoTable::__set_HeaderHashTable(System::Collections::Hashtable value)  {
::cordl_internals::setStaticField<System::Collections::Hashtable, "HeaderHashTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HeaderInfoTable>::get>(std::forward<System::Collections::Hashtable>(value));
}
 System::Collections::Hashtable System::Net::HeaderInfoTable::__get_HeaderHashTable()  {
return ::cordl_internals::getStaticField<System::Collections::Hashtable, "HeaderHashTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HeaderInfoTable>::get>();
}
 void System::Net::HeaderInfoTable::__set_UnknownHeaderInfo(System::Net::HeaderInfo value)  {
::cordl_internals::setStaticField<System::Net::HeaderInfo, "UnknownHeaderInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HeaderInfoTable>::get>(std::forward<System::Net::HeaderInfo>(value));
}
 System::Net::HeaderInfo System::Net::HeaderInfoTable::__get_UnknownHeaderInfo()  {
return ::cordl_internals::getStaticField<System::Net::HeaderInfo, "UnknownHeaderInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HeaderInfoTable>::get>();
}
 void System::Net::HeaderInfoTable::__set_SingleParser(System::Net::HeaderParser value)  {
::cordl_internals::setStaticField<System::Net::HeaderParser, "SingleParser", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HeaderInfoTable>::get>(std::forward<System::Net::HeaderParser>(value));
}
 System::Net::HeaderParser System::Net::HeaderInfoTable::__get_SingleParser()  {
return ::cordl_internals::getStaticField<System::Net::HeaderParser, "SingleParser", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HeaderInfoTable>::get>();
}
 void System::Net::HeaderInfoTable::__set_MultiParser(System::Net::HeaderParser value)  {
::cordl_internals::setStaticField<System::Net::HeaderParser, "MultiParser", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HeaderInfoTable>::get>(std::forward<System::Net::HeaderParser>(value));
}
 System::Net::HeaderParser System::Net::HeaderInfoTable::__get_MultiParser()  {
return ::cordl_internals::getStaticField<System::Net::HeaderParser, "MultiParser", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HeaderInfoTable>::get>();
}
 ::ArrayW<::StringW> System::Net::HeaderInfoTable::ParseSingleValue(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HeaderInfoTable>::get(),
                            "ParseSingleValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(nullptr, ___internal_method, value);
}
 ::ArrayW<::StringW> System::Net::HeaderInfoTable::ParseMultiValue(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HeaderInfoTable>::get(),
                            "ParseMultiValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(nullptr, ___internal_method, value);
}
 System::Net::HeaderInfo System::Net::HeaderInfoTable::get_Item(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HeaderInfoTable>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::HeaderInfo, false>(const_cast<void*>(instance), ___internal_method, name);
}
// Ctor Parameters []
 System::Net::HeaderInfoTable::HeaderInfoTable()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HeaderInfoTable>())) {}
 void System::Net::HeaderInfoTable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HeaderInfoTable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
