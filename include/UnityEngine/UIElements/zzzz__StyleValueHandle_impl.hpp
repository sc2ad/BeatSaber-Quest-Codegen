#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueHandle_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueType_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::StyleValueHandle.get_valueType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::StyleValueType (UnityEngine::UIElements::StyleValueHandle::*)()>(&UnityEngine::UIElements::StyleValueHandle::get_valueType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf34a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleValueHandle>::get(),
                            "get_valueType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleValueHandle.set_valueType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::StyleValueHandle::*)(UnityEngine::UIElements::StyleValueType)>(&UnityEngine::UIElements::StyleValueHandle::set_valueType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf4068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleValueHandle>::get(),
                            "set_valueType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleValueType>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "m_ValueType", ty: "UnityEngine::UIElements::StyleValueType", modifiers: "", def_value: Some("{}") }, CppParam { name: "valueIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::StyleValueHandle::StyleValueHandle(UnityEngine::UIElements::StyleValueType m_ValueType, int32_t valueIndex) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_ValueType = m_ValueType;
this->valueIndex = valueIndex;
}
constexpr void UnityEngine::UIElements::StyleValueHandle::__set_m_ValueType(UnityEngine::UIElements::StyleValueType value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::StyleValueType, 0x0>(this->__instance, std::forward<UnityEngine::UIElements::StyleValueType>(value));
}
constexpr UnityEngine::UIElements::StyleValueType UnityEngine::UIElements::StyleValueHandle::__get_m_ValueType() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::StyleValueType, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIElements::StyleValueHandle::__set_valueIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::StyleValueHandle::__get_valueIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
 UnityEngine::UIElements::StyleValueType UnityEngine::UIElements::StyleValueHandle::get_valueType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleValueHandle>::get(),
                            "get_valueType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::StyleValueType, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::UIElements::StyleValueHandle::set_valueType(UnityEngine::UIElements::StyleValueType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleValueHandle>::get(),
                            "set_valueType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleValueType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
