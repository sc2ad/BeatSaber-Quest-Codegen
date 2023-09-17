#pragma once
#include "RootMotion/FinalIK/zzzz__OffsetModifier_impl.hpp"
namespace {
#include "RootMotion/FinalIK/zzzz__BodyTilt_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "RootMotion/FinalIK/zzzz__OffsetPose_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::BodyTilt.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::BodyTilt::*)()>(&::RootMotion::FinalIK::BodyTilt::Start)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x120779c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::RootMotion::FinalIK::BodyTilt),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::BodyTilt>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::BodyTilt.OnModifyOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::BodyTilt::*)()>(&::RootMotion::FinalIK::BodyTilt::OnModifyOffset)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x1207804;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::RootMotion::FinalIK::BodyTilt),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::BodyTilt>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::BodyTilt._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::BodyTilt::*)()>(&::RootMotion::FinalIK::BodyTilt::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1207aa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::BodyTilt>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::RootMotion::FinalIK::BodyTilt::__set_tiltSpeed(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::BodyTilt::__get_tiltSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::BodyTilt::__set_tiltSensitivity(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::BodyTilt::__get_tiltSensitivity() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::BodyTilt::__set_poseLeft(::RootMotion::FinalIK::OffsetPose value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::OffsetPose, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::RootMotion::FinalIK::OffsetPose>(value));
}
constexpr ::RootMotion::FinalIK::OffsetPose ::RootMotion::FinalIK::BodyTilt::__get_poseLeft() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::OffsetPose, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::BodyTilt::__set_poseRight(::RootMotion::FinalIK::OffsetPose value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::OffsetPose, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::RootMotion::FinalIK::OffsetPose>(value));
}
constexpr ::RootMotion::FinalIK::OffsetPose ::RootMotion::FinalIK::BodyTilt::__get_poseRight() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::OffsetPose, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::BodyTilt::__set_tiltAngle(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::BodyTilt::__get_tiltAngle() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::BodyTilt::__set_lastForward(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::RootMotion::FinalIK::BodyTilt::__get_lastForward() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::RootMotion::FinalIK::BodyTilt::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::BodyTilt>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::BodyTilt::OnModifyOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::BodyTilt>::get(),
                            "OnModifyOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::RootMotion::FinalIK::BodyTilt::BodyTilt()  : ::RootMotion::FinalIK::OffsetModifier(THROW_UNLESS(::il2cpp_utils::New<BodyTilt>())) {}
 void ::RootMotion::FinalIK::BodyTilt::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::BodyTilt>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
