#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BMPAlloc_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__OwnedState_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::UIR::BMPAlloc.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::UIR::BMPAlloc::*)(UnityEngine::UIElements::UIR::BMPAlloc)>(&UnityEngine::UIElements::UIR::BMPAlloc::Equals)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2d11c84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::BMPAlloc>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::BMPAlloc>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::BMPAlloc.IsValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::UIR::BMPAlloc::*)()>(&UnityEngine::UIElements::UIR::BMPAlloc::IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2d11cbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::BMPAlloc>::get(),
                            "IsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::BMPAlloc.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UIElements::UIR::BMPAlloc::*)()>(&UnityEngine::UIElements::UIR::BMPAlloc::ToString)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2d11ccc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::UIR::BMPAlloc),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::BMPAlloc>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "page", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pageLine", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bitIndex", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ownedState", ty: "UnityEngine::UIElements::UIR::OwnedState", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::UIR::BMPAlloc::BMPAlloc(int32_t page, uint16_t pageLine, uint8_t bitIndex, UnityEngine::UIElements::UIR::OwnedState ownedState) noexcept : ::bs_hook::ValueTypeWrapper() {this->page = page;
this->pageLine = pageLine;
this->bitIndex = bitIndex;
this->ownedState = ownedState;
}
 void UnityEngine::UIElements::UIR::BMPAlloc::__set_Invalid(UnityEngine::UIElements::UIR::BMPAlloc value)  {
::cordl_internals::setStaticField<UnityEngine::UIElements::UIR::BMPAlloc, "Invalid", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::BMPAlloc>::get>(std::forward<UnityEngine::UIElements::UIR::BMPAlloc>(value));
}
 UnityEngine::UIElements::UIR::BMPAlloc UnityEngine::UIElements::UIR::BMPAlloc::__get_Invalid()  {
return ::cordl_internals::getStaticField<UnityEngine::UIElements::UIR::BMPAlloc, "Invalid", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::BMPAlloc>::get>();
}
constexpr void UnityEngine::UIElements::UIR::BMPAlloc::__set_page(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UIR::BMPAlloc::__get_page() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::BMPAlloc::__set_pageLine(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x4>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t UnityEngine::UIElements::UIR::BMPAlloc::__get_pageLine() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x4>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::BMPAlloc::__set_bitIndex(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x6>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t UnityEngine::UIElements::UIR::BMPAlloc::__get_bitIndex() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x6>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::BMPAlloc::__set_ownedState(UnityEngine::UIElements::UIR::OwnedState value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::OwnedState, 0x7>(this->__instance, std::forward<UnityEngine::UIElements::UIR::OwnedState>(value));
}
constexpr UnityEngine::UIElements::UIR::OwnedState UnityEngine::UIElements::UIR::BMPAlloc::__get_ownedState() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::OwnedState, 0x7>(this->__instance);
}
 bool UnityEngine::UIElements::UIR::BMPAlloc::Equals(UnityEngine::UIElements::UIR::BMPAlloc other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::BMPAlloc>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::BMPAlloc>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 bool UnityEngine::UIElements::UIR::BMPAlloc::IsValid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::BMPAlloc>::get(),
                            "IsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW UnityEngine::UIElements::UIR::BMPAlloc::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::BMPAlloc>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
