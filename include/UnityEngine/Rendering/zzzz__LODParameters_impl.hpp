#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LODParameters_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: UnityEngine::Rendering::LODParameters.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::LODParameters::*)(UnityEngine::Rendering::LODParameters)>(&UnityEngine::Rendering::LODParameters::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2b75884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::LODParameters>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::LODParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Rendering::LODParameters.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::LODParameters::*)(::bs_hook::Il2CppWrapperType)>(&UnityEngine::Rendering::LODParameters::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2b75920;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Rendering::LODParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::LODParameters>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Rendering::LODParameters.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::Rendering::LODParameters::*)()>(&UnityEngine::Rendering::LODParameters::GetHashCode)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2b759b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Rendering::LODParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::LODParameters>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IEquatable_1<UnityEngine::Rendering::LODParameters>
constexpr  UnityEngine::Rendering::LODParameters::operator System::IEquatable_1<UnityEngine::Rendering::LODParameters>() const {
return System::IEquatable_1<UnityEngine::Rendering::LODParameters>(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_IsOrthographic", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CameraPosition", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FieldOfView", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OrthoSize", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CameraPixelHeight", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Rendering::LODParameters::LODParameters(int32_t m_IsOrthographic, UnityEngine::Vector3 m_CameraPosition, float_t m_FieldOfView, float_t m_OrthoSize, int32_t m_CameraPixelHeight) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_IsOrthographic = m_IsOrthographic;
this->m_CameraPosition = m_CameraPosition;
this->m_FieldOfView = m_FieldOfView;
this->m_OrthoSize = m_OrthoSize;
this->m_CameraPixelHeight = m_CameraPixelHeight;
}
constexpr void UnityEngine::Rendering::LODParameters::__set_m_IsOrthographic(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Rendering::LODParameters::__get_m_IsOrthographic() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::Rendering::LODParameters::__set_m_CameraPosition(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x4>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::Rendering::LODParameters::__get_m_CameraPosition() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x4>(this->__instance);
}
constexpr void UnityEngine::Rendering::LODParameters::__set_m_FieldOfView(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::Rendering::LODParameters::__get_m_FieldOfView() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->__instance);
}
constexpr void UnityEngine::Rendering::LODParameters::__set_m_OrthoSize(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::Rendering::LODParameters::__get_m_OrthoSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->__instance);
}
constexpr void UnityEngine::Rendering::LODParameters::__set_m_CameraPixelHeight(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Rendering::LODParameters::__get_m_CameraPixelHeight() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->__instance);
}
 bool UnityEngine::Rendering::LODParameters::Equals(UnityEngine::Rendering::LODParameters other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::LODParameters>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::LODParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 bool UnityEngine::Rendering::LODParameters::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::LODParameters>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 int32_t UnityEngine::Rendering::LODParameters::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::LODParameters>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
