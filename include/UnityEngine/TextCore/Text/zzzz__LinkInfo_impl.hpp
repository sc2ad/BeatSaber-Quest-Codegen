#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__LinkInfo_def.hpp"
//  Writing Method size for method: UnityEngine::TextCore::Text::LinkInfo.SetLinkId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::Text::LinkInfo::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&UnityEngine::TextCore::Text::LinkInfo::SetLinkId)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2bc95e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::LinkInfo>::get(),
                            "SetLinkId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "linkIdFirstCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "linkIdLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "linkTextfirstCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "linkTextLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "linkId", ty: "::ArrayW<char16_t>", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::TextCore::Text::LinkInfo::LinkInfo(int32_t hashCode, int32_t linkIdFirstCharacterIndex, int32_t linkIdLength, int32_t linkTextfirstCharacterIndex, int32_t linkTextLength, ::ArrayW<char16_t> linkId) noexcept : ::bs_hook::ValueTypeWrapper() {this->hashCode = hashCode;
this->linkIdFirstCharacterIndex = linkIdFirstCharacterIndex;
this->linkIdLength = linkIdLength;
this->linkTextfirstCharacterIndex = linkTextfirstCharacterIndex;
this->linkTextLength = linkTextLength;
this->linkId = linkId;
}
constexpr void UnityEngine::TextCore::Text::LinkInfo::__set_hashCode(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::LinkInfo::__get_hashCode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::LinkInfo::__set_linkIdFirstCharacterIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::LinkInfo::__get_linkIdFirstCharacterIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::LinkInfo::__set_linkIdLength(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::LinkInfo::__get_linkIdLength() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::LinkInfo::__set_linkTextfirstCharacterIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::LinkInfo::__get_linkTextfirstCharacterIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::LinkInfo::__set_linkTextLength(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::LinkInfo::__get_linkTextLength() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::LinkInfo::__set_linkId(::ArrayW<char16_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<char16_t>, 0x18>(this->__instance, std::forward<::ArrayW<char16_t>>(value));
}
constexpr ::ArrayW<char16_t> UnityEngine::TextCore::Text::LinkInfo::__get_linkId() const {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t>, 0x18>(this->__instance);
}
 void UnityEngine::TextCore::Text::LinkInfo::SetLinkId(::ArrayW<char16_t> text, int32_t startIndex, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::LinkInfo>::get(),
                            "SetLinkId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, text, startIndex, length);
}
