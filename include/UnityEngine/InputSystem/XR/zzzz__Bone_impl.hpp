#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__Bone_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::XR::Bone.get_parentBoneIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (UnityEngine::InputSystem::XR::Bone::*)()>(&UnityEngine::InputSystem::XR::Bone::get_parentBoneIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29359c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Bone>::get(),
                            "get_parentBoneIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::XR::Bone.set_parentBoneIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::XR::Bone::*)(uint32_t)>(&UnityEngine::InputSystem::XR::Bone::set_parentBoneIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29359d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Bone>::get(),
                            "set_parentBoneIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::XR::Bone.get_position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (UnityEngine::InputSystem::XR::Bone::*)()>(&UnityEngine::InputSystem::XR::Bone::get_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29359d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Bone>::get(),
                            "get_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::XR::Bone.set_position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::XR::Bone::*)(UnityEngine::Vector3)>(&UnityEngine::InputSystem::XR::Bone::set_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29359e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Bone>::get(),
                            "set_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::XR::Bone.get_rotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (UnityEngine::InputSystem::XR::Bone::*)()>(&UnityEngine::InputSystem::XR::Bone::get_rotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29359f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Bone>::get(),
                            "get_rotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::XR::Bone.set_rotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::XR::Bone::*)(UnityEngine::Quaternion)>(&UnityEngine::InputSystem::XR::Bone::set_rotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29359fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Bone>::get(),
                            "set_rotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "_parentBoneIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_position_k__BackingField", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "_rotation_k__BackingField", ty: "UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::XR::Bone::Bone(uint32_t _parentBoneIndex_k__BackingField, UnityEngine::Vector3 _position_k__BackingField, UnityEngine::Quaternion _rotation_k__BackingField) noexcept : ::bs_hook::ValueTypeWrapper() {this->_parentBoneIndex_k__BackingField = _parentBoneIndex_k__BackingField;
this->_position_k__BackingField = _position_k__BackingField;
this->_rotation_k__BackingField = _rotation_k__BackingField;
}
constexpr void UnityEngine::InputSystem::XR::Bone::__set__parentBoneIndex_k__BackingField(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::InputSystem::XR::Bone::__get__parentBoneIndex_k__BackingField() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::XR::Bone::__set__position_k__BackingField(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x4>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::InputSystem::XR::Bone::__get__position_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x4>(this->__instance);
}
constexpr void UnityEngine::InputSystem::XR::Bone::__set__rotation_k__BackingField(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x10>(this->__instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion UnityEngine::InputSystem::XR::Bone::__get__rotation_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x10>(this->__instance);
}
 uint32_t UnityEngine::InputSystem::XR::Bone::get_parentBoneIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Bone>::get(),
                            "get_parentBoneIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::XR::Bone::set_parentBoneIndex(uint32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Bone>::get(),
                            "set_parentBoneIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 UnityEngine::Vector3 UnityEngine::InputSystem::XR::Bone::get_position()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Bone>::get(),
                            "get_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::XR::Bone::set_position(UnityEngine::Vector3 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Bone>::get(),
                            "set_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 UnityEngine::Quaternion UnityEngine::InputSystem::XR::Bone::get_rotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Bone>::get(),
                            "get_rotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Quaternion, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::XR::Bone::set_rotation(UnityEngine::Quaternion value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Bone>::get(),
                            "set_rotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
