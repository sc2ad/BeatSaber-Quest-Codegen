#pragma once
#include "GlobalNamespace/zzzz__PoseObject_def.hpp"
#include "GlobalNamespace/zzzz__PoseObjectIdSO_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: GlobalNamespace::PoseObject.get_objectTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform (GlobalNamespace::PoseObject::*)()>(&GlobalNamespace::PoseObject::get_objectTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a64b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PoseObject>::get(),
                            "get_objectTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PoseObject.get_id
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PoseObject::*)()>(&GlobalNamespace::PoseObject::get_id)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21a64bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PoseObject>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PoseObject._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PoseObject::*)(UnityEngine::Transform, GlobalNamespace::PoseObjectIdSO)>(&GlobalNamespace::PoseObject::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x21a4638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PoseObject>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PoseObjectIdSO>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PoseObject::__set__transform(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform GlobalNamespace::PoseObject::__get__transform() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PoseObject::__set__poseObjectId(GlobalNamespace::PoseObjectIdSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PoseObjectIdSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PoseObjectIdSO>(value));
}
constexpr GlobalNamespace::PoseObjectIdSO GlobalNamespace::PoseObject::__get__poseObjectId() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PoseObjectIdSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::Transform GlobalNamespace::PoseObject::get_objectTransform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PoseObject>::get(),
                            "get_objectTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Transform, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::PoseObject::get_id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PoseObject>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "transform", ty: "UnityEngine::Transform", modifiers: "", def_value: None }, CppParam { name: "poseObjectId", ty: "GlobalNamespace::PoseObjectIdSO", modifiers: "", def_value: None }]
 GlobalNamespace::PoseObject::PoseObject(UnityEngine::Transform transform, GlobalNamespace::PoseObjectIdSO poseObjectId)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PoseObject>(transform, poseObjectId))) {}
 void GlobalNamespace::PoseObject::_ctor(UnityEngine::Transform transform, GlobalNamespace::PoseObjectIdSO poseObjectId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PoseObject>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PoseObjectIdSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, transform, poseObjectId);
}
