#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Xml/Xsl/Runtime/zzzz__StringConcat_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: System::Xml::Xsl::Runtime::StringConcat.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Xsl::Runtime::StringConcat::*)()>(&System::Xml::Xsl::Runtime::StringConcat::Clear)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x271862c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Xsl::Runtime::StringConcat>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Xsl::Runtime::StringConcat.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::Xsl::Runtime::StringConcat::*)()>(&System::Xml::Xsl::Runtime::StringConcat::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2718638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Xsl::Runtime::StringConcat>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Xsl::Runtime::StringConcat.GetResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Xsl::Runtime::StringConcat::*)()>(&System::Xml::Xsl::Runtime::StringConcat::GetResult)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2718640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Xsl::Runtime::StringConcat>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Xsl::Runtime::StringConcat.ConcatNoDelimiter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Xsl::Runtime::StringConcat::*)(::StringW)>(&System::Xml::Xsl::Runtime::StringConcat::ConcatNoDelimiter)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x2718734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Xsl::Runtime::StringConcat>::get(),
                            "ConcatNoDelimiter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "s1", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "s2", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "s3", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "s4", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "delimiter", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "strList", ty: "System::Collections::Generic::List_1<::StringW>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "idxStr", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Xml::Xsl::Runtime::StringConcat::StringConcat(::StringW s1, ::StringW s2, ::StringW s3, ::StringW s4, ::StringW delimiter, System::Collections::Generic::List_1<::StringW> strList, int32_t idxStr) noexcept : ::bs_hook::ValueTypeWrapper() {this->s1 = s1;
this->s2 = s2;
this->s3 = s3;
this->s4 = s4;
this->delimiter = delimiter;
this->strList = strList;
this->idxStr = idxStr;
}
constexpr void System::Xml::Xsl::Runtime::StringConcat::__set_s1(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::Xsl::Runtime::StringConcat::__get_s1() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void System::Xml::Xsl::Runtime::StringConcat::__set_s2(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::Xsl::Runtime::StringConcat::__get_s2() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void System::Xml::Xsl::Runtime::StringConcat::__set_s3(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::Xsl::Runtime::StringConcat::__get_s3() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->__instance);
}
constexpr void System::Xml::Xsl::Runtime::StringConcat::__set_s4(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::Xsl::Runtime::StringConcat::__get_s4() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->__instance);
}
constexpr void System::Xml::Xsl::Runtime::StringConcat::__set_delimiter(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::Xsl::Runtime::StringConcat::__get_delimiter() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->__instance);
}
constexpr void System::Xml::Xsl::Runtime::StringConcat::__set_strList(System::Collections::Generic::List_1<::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<::StringW>, 0x28>(this->__instance, std::forward<System::Collections::Generic::List_1<::StringW>>(value));
}
constexpr System::Collections::Generic::List_1<::StringW> System::Xml::Xsl::Runtime::StringConcat::__get_strList() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<::StringW>, 0x28>(this->__instance);
}
constexpr void System::Xml::Xsl::Runtime::StringConcat::__set_idxStr(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::Xsl::Runtime::StringConcat::__get_idxStr() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->__instance);
}
 void System::Xml::Xsl::Runtime::StringConcat::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Xsl::Runtime::StringConcat>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t System::Xml::Xsl::Runtime::StringConcat::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Xsl::Runtime::StringConcat>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW System::Xml::Xsl::Runtime::StringConcat::GetResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Xsl::Runtime::StringConcat>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Xml::Xsl::Runtime::StringConcat::ConcatNoDelimiter(::StringW s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Xsl::Runtime::StringConcat>::get(),
                            "ConcatNoDelimiter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, s);
}
