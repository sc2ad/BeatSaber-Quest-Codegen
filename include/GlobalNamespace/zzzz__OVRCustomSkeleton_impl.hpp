#pragma once
#include "GlobalNamespace/zzzz__OVRSkeleton_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__OVRCustomSkeleton_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRCustomSkeleton__RetargetingType::GlobalNamespace__OVRCustomSkeleton__RetargetingType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRCustomSkeleton__RetargetingType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRCustomSkeleton__RetargetingType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__OVRCustomSkeleton__RetargetingType  GlobalNamespace::GlobalNamespace__OVRCustomSkeleton__RetargetingType::OculusSkeleton{0};
//  Writing Method size for method: GlobalNamespace::OVRCustomSkeleton.get_CustomBones
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::Transform> (GlobalNamespace::OVRCustomSkeleton::*)()>(&GlobalNamespace::OVRCustomSkeleton::get_CustomBones)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x261ed2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRCustomSkeleton>::get(),
                            "get_CustomBones",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRCustomSkeleton.GetBoneTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform (GlobalNamespace::OVRCustomSkeleton::*)(GlobalNamespace::GlobalNamespace__OVRSkeleton__BoneId)>(&GlobalNamespace::OVRCustomSkeleton::GetBoneTransform)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x261ed34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::OVRCustomSkeleton),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRCustomSkeleton>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRCustomSkeleton.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRCustomSkeleton::*)()>(&GlobalNamespace::OVRCustomSkeleton::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x261ed8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRCustomSkeleton>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRCustomSkeleton.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRCustomSkeleton::*)()>(&GlobalNamespace::OVRCustomSkeleton::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x261ed90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRCustomSkeleton>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRCustomSkeleton.AllocateBones
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRCustomSkeleton::*)()>(&GlobalNamespace::OVRCustomSkeleton::AllocateBones)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x261ed94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRCustomSkeleton>::get(),
                            "AllocateBones",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRCustomSkeleton.SetSkeletonType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRCustomSkeleton::*)(GlobalNamespace::GlobalNamespace__OVRSkeleton__SkeletonType)>(&GlobalNamespace::OVRCustomSkeleton::SetSkeletonType)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x261ee5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRCustomSkeleton>::get(),
                            "SetSkeletonType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRSkeleton__SkeletonType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRCustomSkeleton._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRCustomSkeleton::*)()>(&GlobalNamespace::OVRCustomSkeleton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x261eee4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRCustomSkeleton>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::ISerializationCallbackReceiver
constexpr  GlobalNamespace::OVRCustomSkeleton::operator UnityEngine::ISerializationCallbackReceiver() const noexcept {
return UnityEngine::ISerializationCallbackReceiver(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRCustomSkeleton::__set__customBones_V2(System::Collections::Generic::List_1<UnityEngine::Transform> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::Transform>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::Transform>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::Transform> GlobalNamespace::OVRCustomSkeleton::__get__customBones_V2() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::Transform>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRCustomSkeleton::__set_retargetingType(GlobalNamespace::GlobalNamespace__OVRCustomSkeleton__RetargetingType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRCustomSkeleton__RetargetingType, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRCustomSkeleton__RetargetingType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRCustomSkeleton__RetargetingType GlobalNamespace::OVRCustomSkeleton::__get_retargetingType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRCustomSkeleton__RetargetingType, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Generic::List_1<UnityEngine::Transform> GlobalNamespace::OVRCustomSkeleton::get_CustomBones()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRCustomSkeleton>::get(),
                            "get_CustomBones",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<UnityEngine::Transform>, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Transform GlobalNamespace::OVRCustomSkeleton::GetBoneTransform(GlobalNamespace::GlobalNamespace__OVRSkeleton__BoneId boneId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRCustomSkeleton>::get(),
                            "GetBoneTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRSkeleton__BoneId>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Transform, false>(const_cast<void*>(instance), ___internal_method, boneId);
}
 void GlobalNamespace::OVRCustomSkeleton::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRCustomSkeleton>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRCustomSkeleton::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRCustomSkeleton>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRCustomSkeleton::AllocateBones()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRCustomSkeleton>::get(),
                            "AllocateBones",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRCustomSkeleton::SetSkeletonType(GlobalNamespace::GlobalNamespace__OVRSkeleton__SkeletonType skeletonType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRCustomSkeleton>::get(),
                            "SetSkeletonType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRSkeleton__SkeletonType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, skeletonType);
}
// Ctor Parameters []
 GlobalNamespace::OVRCustomSkeleton::OVRCustomSkeleton()  : GlobalNamespace::OVRSkeleton(THROW_UNLESS(::il2cpp_utils::New<OVRCustomSkeleton>())) {}
 void GlobalNamespace::OVRCustomSkeleton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRCustomSkeleton>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
