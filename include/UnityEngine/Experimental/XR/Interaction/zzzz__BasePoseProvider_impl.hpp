#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/Experimental/XR/Interaction/zzzz__BasePoseProvider_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/SpatialTracking/zzzz__PoseDataFlags_def.hpp"
//  Writing Method size for method: UnityEngine::Experimental::XR::Interaction::BasePoseProvider.GetPoseFromProvider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::SpatialTracking::PoseDataFlags (UnityEngine::Experimental::XR::Interaction::BasePoseProvider::*)(ByRef<UnityEngine::Pose>)>(&UnityEngine::Experimental::XR::Interaction::BasePoseProvider::GetPoseFromProvider)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2ba2e98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Experimental::XR::Interaction::BasePoseProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Experimental::XR::Interaction::BasePoseProvider>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Experimental::XR::Interaction::BasePoseProvider.TryGetPoseFromProvider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Experimental::XR::Interaction::BasePoseProvider::*)(ByRef<UnityEngine::Pose>)>(&UnityEngine::Experimental::XR::Interaction::BasePoseProvider::TryGetPoseFromProvider)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2ba2ebc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Experimental::XR::Interaction::BasePoseProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Experimental::XR::Interaction::BasePoseProvider>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Experimental::XR::Interaction::BasePoseProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::XR::Interaction::BasePoseProvider::*)()>(&UnityEngine::Experimental::XR::Interaction::BasePoseProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ba2f44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Experimental::XR::Interaction::BasePoseProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::SpatialTracking::PoseDataFlags UnityEngine::Experimental::XR::Interaction::BasePoseProvider::GetPoseFromProvider(ByRef<UnityEngine::Pose> output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Experimental::XR::Interaction::BasePoseProvider>::get(),
                            "GetPoseFromProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Pose>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::SpatialTracking::PoseDataFlags, false>(const_cast<void*>(instance), ___internal_method, output);
}
 bool UnityEngine::Experimental::XR::Interaction::BasePoseProvider::TryGetPoseFromProvider(ByRef<UnityEngine::Pose> output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Experimental::XR::Interaction::BasePoseProvider>::get(),
                            "TryGetPoseFromProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Pose>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, output);
}
// Ctor Parameters []
 UnityEngine::Experimental::XR::Interaction::BasePoseProvider::BasePoseProvider()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<BasePoseProvider>())) {}
 void UnityEngine::Experimental::XR::Interaction::BasePoseProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Experimental::XR::Interaction::BasePoseProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
