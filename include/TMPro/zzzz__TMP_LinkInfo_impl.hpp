#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "TMPro/zzzz__TMP_LinkInfo_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_LinkInfo.SetLinkID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_LinkInfo::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::TMPro::TMP_LinkInfo::SetLinkID)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a69400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_LinkInfo>::get(),
                            "SetLinkID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_LinkInfo.GetLinkText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::TMPro::TMP_LinkInfo::*)()>(&::TMPro::TMP_LinkInfo::GetLinkText)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2a694d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_LinkInfo>::get(),
                            "GetLinkText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_LinkInfo.GetLinkID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::TMPro::TMP_LinkInfo::*)()>(&::TMPro::TMP_LinkInfo::GetLinkID)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2a695b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_LinkInfo>::get(),
                            "GetLinkID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "textComponent", ty: "::TMPro::TMP_Text", modifiers: "", def_value: Some("csnull") }, CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "linkIdFirstCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "linkIdLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "linkTextfirstCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "linkTextLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "linkID", ty: "::ArrayW<char16_t>", modifiers: "", def_value: Some("csnull") }]
constexpr ::TMPro::TMP_LinkInfo::TMP_LinkInfo(::TMPro::TMP_Text textComponent, int32_t hashCode, int32_t linkIdFirstCharacterIndex, int32_t linkIdLength, int32_t linkTextfirstCharacterIndex, int32_t linkTextLength, ::ArrayW<char16_t> linkID) noexcept : ::bs_hook::ValueTypeWrapper() {this->textComponent = textComponent;
this->hashCode = hashCode;
this->linkIdFirstCharacterIndex = linkIdFirstCharacterIndex;
this->linkIdLength = linkIdLength;
this->linkTextfirstCharacterIndex = linkTextfirstCharacterIndex;
this->linkTextLength = linkTextLength;
this->linkID = linkID;
}
constexpr void ::TMPro::TMP_LinkInfo::__set_textComponent(::TMPro::TMP_Text value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_Text, 0x0>(this->__instance, std::forward<::TMPro::TMP_Text>(value));
}
constexpr ::TMPro::TMP_Text ::TMPro::TMP_LinkInfo::__get_textComponent() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_Text, 0x0>(this->__instance);
}
constexpr void ::TMPro::TMP_LinkInfo::__set_hashCode(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_LinkInfo::__get_hashCode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void ::TMPro::TMP_LinkInfo::__set_linkIdFirstCharacterIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_LinkInfo::__get_linkIdFirstCharacterIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
constexpr void ::TMPro::TMP_LinkInfo::__set_linkIdLength(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_LinkInfo::__get_linkIdLength() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
constexpr void ::TMPro::TMP_LinkInfo::__set_linkTextfirstCharacterIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_LinkInfo::__get_linkTextfirstCharacterIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->__instance);
}
constexpr void ::TMPro::TMP_LinkInfo::__set_linkTextLength(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_LinkInfo::__get_linkTextLength() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->__instance);
}
constexpr void ::TMPro::TMP_LinkInfo::__set_linkID(::ArrayW<char16_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<char16_t>, 0x20>(this->__instance, std::forward<::ArrayW<char16_t>>(value));
}
constexpr ::ArrayW<char16_t> ::TMPro::TMP_LinkInfo::__get_linkID() const {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t>, 0x20>(this->__instance);
}
 void ::TMPro::TMP_LinkInfo::SetLinkID(::ArrayW<char16_t> text, int32_t startIndex, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_LinkInfo>::get(),
                            "SetLinkID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, text, startIndex, length);
}
 ::StringW ::TMPro::TMP_LinkInfo::GetLinkText()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_LinkInfo>::get(),
                            "GetLinkText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW ::TMPro::TMP_LinkInfo::GetLinkID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_LinkInfo>::get(),
                            "GetLinkID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
} // end anonymous namespace
