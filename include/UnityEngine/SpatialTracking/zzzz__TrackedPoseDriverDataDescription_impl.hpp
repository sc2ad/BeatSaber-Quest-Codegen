#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/SpatialTracking/zzzz__TrackedPoseDriverDataDescription_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/SpatialTracking/zzzz__TrackedPoseDriver_def.hpp"
// Ctor Parameters [CppParam { name: "PoseNames", ty: "System::Collections::Generic::List_1<::StringW>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Poses", ty: "System::Collections::Generic::List_1<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose>", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriverDataDescription__PoseData::UnityEngine__SpatialTracking__TrackedPoseDriverDataDescription__PoseData(System::Collections::Generic::List_1<::StringW> PoseNames, System::Collections::Generic::List_1<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose> Poses) noexcept : ::bs_hook::ValueTypeWrapper() {this->PoseNames = PoseNames;
this->Poses = Poses;
}
constexpr void UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriverDataDescription__PoseData::__set_PoseNames(System::Collections::Generic::List_1<::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<::StringW>, 0x0>(this->__instance, std::forward<System::Collections::Generic::List_1<::StringW>>(value));
}
constexpr System::Collections::Generic::List_1<::StringW> UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriverDataDescription__PoseData::__get_PoseNames() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<::StringW>, 0x0>(this->__instance);
}
constexpr void UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriverDataDescription__PoseData::__set_Poses(System::Collections::Generic::List_1<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose>, 0x8>(this->__instance, std::forward<System::Collections::Generic::List_1<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose> UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriverDataDescription__PoseData::__get_Poses() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose>, 0x8>(this->__instance);
}
//  Writing Method size for method: UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::*)()>(&UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ba182c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::__set_DeviceData(System::Collections::Generic::List_1<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriverDataDescription__PoseData> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::List_1<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriverDataDescription__PoseData>, "DeviceData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription>::get>(std::forward<System::Collections::Generic::List_1<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriverDataDescription__PoseData>>(value));
}
 System::Collections::Generic::List_1<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriverDataDescription__PoseData> UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::__get_DeviceData()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::List_1<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriverDataDescription__PoseData>, "DeviceData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription>::get>();
}
// Ctor Parameters []
 UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::TrackedPoseDriverDataDescription()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<TrackedPoseDriverDataDescription>())) {}
 void UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
