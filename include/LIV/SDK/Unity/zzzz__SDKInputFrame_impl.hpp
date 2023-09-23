#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKInputFrame_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKTransform_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKPose_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKClipPlane_def.hpp"
#include "LIV/SDK/Unity/zzzz__FEATURES_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKPriority_def.hpp"
//  Writing Method size for method: LIV::SDK::Unity::SDKInputFrame.get_empty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LIV::SDK::Unity::SDKInputFrame (*)()>(&LIV::SDK::Unity::SDKInputFrame::get_empty)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x209caac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKInputFrame>::get(),
                            "get_empty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKInputFrame.ReleaseControl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::SDKInputFrame::*)()>(&LIV::SDK::Unity::SDKInputFrame::ReleaseControl)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x20a0fd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKInputFrame>::get(),
                            "ReleaseControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKInputFrame.ObtainControl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::SDKInputFrame::*)()>(&LIV::SDK::Unity::SDKInputFrame::ObtainControl)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x20a0fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKInputFrame>::get(),
                            "ObtainControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKInputFrame.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (LIV::SDK::Unity::SDKInputFrame::*)()>(&LIV::SDK::Unity::SDKInputFrame::ToString)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x20a29fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LIV::SDK::Unity::SDKInputFrame),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKInputFrame>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "pose", ty: "LIV::SDK::Unity::SDKPose", modifiers: "", def_value: Some("{}") }, CppParam { name: "clipPlane", ty: "LIV::SDK::Unity::SDKClipPlane", modifiers: "", def_value: Some("{}") }, CppParam { name: "stageTransform", ty: "LIV::SDK::Unity::SDKTransform", modifiers: "", def_value: Some("{}") }, CppParam { name: "features", ty: "LIV::SDK::Unity::FEATURES", modifiers: "", def_value: Some("{}") }, CppParam { name: "groundClipPlane", ty: "LIV::SDK::Unity::SDKClipPlane", modifiers: "", def_value: Some("{}") }, CppParam { name: "frameid", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "referenceframe", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "priority", ty: "LIV::SDK::Unity::SDKPriority", modifiers: "", def_value: Some("{}") }]
constexpr LIV::SDK::Unity::SDKInputFrame::SDKInputFrame(LIV::SDK::Unity::SDKPose pose, LIV::SDK::Unity::SDKClipPlane clipPlane, LIV::SDK::Unity::SDKTransform stageTransform, LIV::SDK::Unity::FEATURES features, LIV::SDK::Unity::SDKClipPlane groundClipPlane, uint64_t frameid, uint64_t referenceframe, LIV::SDK::Unity::SDKPriority priority) noexcept : ::bs_hook::ValueTypeWrapper() {this->pose = pose;
this->clipPlane = clipPlane;
this->stageTransform = stageTransform;
this->features = features;
this->groundClipPlane = groundClipPlane;
this->frameid = frameid;
this->referenceframe = referenceframe;
this->priority = priority;
}
constexpr void LIV::SDK::Unity::SDKInputFrame::__set_pose(LIV::SDK::Unity::SDKPose value)  {
::cordl_internals::setInstanceField<LIV::SDK::Unity::SDKPose, 0x0>(this->__instance, std::forward<LIV::SDK::Unity::SDKPose>(value));
}
constexpr LIV::SDK::Unity::SDKPose LIV::SDK::Unity::SDKInputFrame::__get_pose() const {
return ::cordl_internals::getInstanceField<LIV::SDK::Unity::SDKPose, 0x0>(this->__instance);
}
constexpr void LIV::SDK::Unity::SDKInputFrame::__set_clipPlane(LIV::SDK::Unity::SDKClipPlane value)  {
::cordl_internals::setInstanceField<LIV::SDK::Unity::SDKClipPlane, 0x70>(this->__instance, std::forward<LIV::SDK::Unity::SDKClipPlane>(value));
}
constexpr LIV::SDK::Unity::SDKClipPlane LIV::SDK::Unity::SDKInputFrame::__get_clipPlane() const {
return ::cordl_internals::getInstanceField<LIV::SDK::Unity::SDKClipPlane, 0x70>(this->__instance);
}
constexpr void LIV::SDK::Unity::SDKInputFrame::__set_stageTransform(LIV::SDK::Unity::SDKTransform value)  {
::cordl_internals::setInstanceField<LIV::SDK::Unity::SDKTransform, 0xbc>(this->__instance, std::forward<LIV::SDK::Unity::SDKTransform>(value));
}
constexpr LIV::SDK::Unity::SDKTransform LIV::SDK::Unity::SDKInputFrame::__get_stageTransform() const {
return ::cordl_internals::getInstanceField<LIV::SDK::Unity::SDKTransform, 0xbc>(this->__instance);
}
constexpr void LIV::SDK::Unity::SDKInputFrame::__set_features(LIV::SDK::Unity::FEATURES value)  {
::cordl_internals::setInstanceField<LIV::SDK::Unity::FEATURES, 0xe8>(this->__instance, std::forward<LIV::SDK::Unity::FEATURES>(value));
}
constexpr LIV::SDK::Unity::FEATURES LIV::SDK::Unity::SDKInputFrame::__get_features() const {
return ::cordl_internals::getInstanceField<LIV::SDK::Unity::FEATURES, 0xe8>(this->__instance);
}
constexpr void LIV::SDK::Unity::SDKInputFrame::__set_groundClipPlane(LIV::SDK::Unity::SDKClipPlane value)  {
::cordl_internals::setInstanceField<LIV::SDK::Unity::SDKClipPlane, 0xf0>(this->__instance, std::forward<LIV::SDK::Unity::SDKClipPlane>(value));
}
constexpr LIV::SDK::Unity::SDKClipPlane LIV::SDK::Unity::SDKInputFrame::__get_groundClipPlane() const {
return ::cordl_internals::getInstanceField<LIV::SDK::Unity::SDKClipPlane, 0xf0>(this->__instance);
}
constexpr void LIV::SDK::Unity::SDKInputFrame::__set_frameid(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x140>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t LIV::SDK::Unity::SDKInputFrame::__get_frameid() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x140>(this->__instance);
}
constexpr void LIV::SDK::Unity::SDKInputFrame::__set_referenceframe(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x148>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t LIV::SDK::Unity::SDKInputFrame::__get_referenceframe() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x148>(this->__instance);
}
constexpr void LIV::SDK::Unity::SDKInputFrame::__set_priority(LIV::SDK::Unity::SDKPriority value)  {
::cordl_internals::setInstanceField<LIV::SDK::Unity::SDKPriority, 0x150>(this->__instance, std::forward<LIV::SDK::Unity::SDKPriority>(value));
}
constexpr LIV::SDK::Unity::SDKPriority LIV::SDK::Unity::SDKInputFrame::__get_priority() const {
return ::cordl_internals::getInstanceField<LIV::SDK::Unity::SDKPriority, 0x150>(this->__instance);
}
 LIV::SDK::Unity::SDKInputFrame LIV::SDK::Unity::SDKInputFrame::get_empty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKInputFrame>::get(),
                            "get_empty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<LIV::SDK::Unity::SDKInputFrame, false>(nullptr, ___internal_method);
}
 void LIV::SDK::Unity::SDKInputFrame::ReleaseControl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKInputFrame>::get(),
                            "ReleaseControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void LIV::SDK::Unity::SDKInputFrame::ObtainControl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKInputFrame>::get(),
                            "ObtainControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW LIV::SDK::Unity::SDKInputFrame::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKInputFrame>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
