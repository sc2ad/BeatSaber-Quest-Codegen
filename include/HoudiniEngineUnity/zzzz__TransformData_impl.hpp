#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "HoudiniEngineUnity/zzzz__TransformData_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::TransformData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::TransformData::*)(UnityEngine::Transform)>(&HoudiniEngineUnity::TransformData::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2042aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::TransformData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::TransformData.CopyTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::TransformData::*)(UnityEngine::Transform, bool)>(&HoudiniEngineUnity::TransformData::CopyTo)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2042b84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::TransformData>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::TransformData.CopyToLocal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::TransformData::*)(UnityEngine::Transform, bool)>(&HoudiniEngineUnity::TransformData::CopyToLocal)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2042c04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::TransformData>::get(),
                            "CopyToLocal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "position", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotation", ty: "UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "localPosition", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "localScale", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "localRotation", ty: "UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "parent", ty: "UnityEngine::Transform", modifiers: "", def_value: Some("csnull") }]
constexpr HoudiniEngineUnity::TransformData::TransformData(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Vector3 localPosition, UnityEngine::Vector3 localScale, UnityEngine::Quaternion localRotation, UnityEngine::Transform parent) noexcept : ::bs_hook::ValueTypeWrapper() {this->position = position;
this->rotation = rotation;
this->localPosition = localPosition;
this->localScale = localScale;
this->localRotation = localRotation;
this->parent = parent;
}
constexpr void HoudiniEngineUnity::TransformData::__set_position(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x0>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 HoudiniEngineUnity::TransformData::__get_position() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x0>(this->__instance);
}
constexpr void HoudiniEngineUnity::TransformData::__set_rotation(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0xc>(this->__instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion HoudiniEngineUnity::TransformData::__get_rotation() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0xc>(this->__instance);
}
constexpr void HoudiniEngineUnity::TransformData::__set_localPosition(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x1c>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 HoudiniEngineUnity::TransformData::__get_localPosition() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x1c>(this->__instance);
}
constexpr void HoudiniEngineUnity::TransformData::__set_localScale(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x28>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 HoudiniEngineUnity::TransformData::__get_localScale() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x28>(this->__instance);
}
constexpr void HoudiniEngineUnity::TransformData::__set_localRotation(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x34>(this->__instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion HoudiniEngineUnity::TransformData::__get_localRotation() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x34>(this->__instance);
}
constexpr void HoudiniEngineUnity::TransformData::__set_parent(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x48>(this->__instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform HoudiniEngineUnity::TransformData::__get_parent() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x48>(this->__instance);
}
 void HoudiniEngineUnity::TransformData::_ctor(UnityEngine::Transform other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::TransformData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 void HoudiniEngineUnity::TransformData::CopyTo(UnityEngine::Transform other, bool copyParent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::TransformData>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other, copyParent);
}
 void HoudiniEngineUnity::TransformData::CopyToLocal(UnityEngine::Transform other, bool copyParent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::TransformData>::get(),
                            "CopyToLocal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other, copyParent);
}
