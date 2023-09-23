#pragma once
#include "RootMotion/FinalIK/zzzz__Constraint_impl.hpp"
#include "RootMotion/FinalIK/zzzz__ConstraintRotation_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: RootMotion::FinalIK::ConstraintRotation.UpdateConstraint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::ConstraintRotation::*)()>(&RootMotion::FinalIK::ConstraintRotation::UpdateConstraint)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x11b86bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::ConstraintRotation),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::ConstraintRotation>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::ConstraintRotation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::ConstraintRotation::*)()>(&RootMotion::FinalIK::ConstraintRotation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11b8738;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::ConstraintRotation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::ConstraintRotation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::ConstraintRotation::*)(UnityEngine::Transform)>(&RootMotion::FinalIK::ConstraintRotation::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x11b8740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::ConstraintRotation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::ConstraintRotation::__set_rotation(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::ConstraintRotation::__get_rotation() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void RootMotion::FinalIK::ConstraintRotation::UpdateConstraint()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::ConstraintRotation>::get(),
                            "UpdateConstraint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 RootMotion::FinalIK::ConstraintRotation::ConstraintRotation()  : RootMotion::FinalIK::Constraint(THROW_UNLESS(::il2cpp_utils::New<ConstraintRotation>())) {}
 void RootMotion::FinalIK::ConstraintRotation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::ConstraintRotation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "transform", ty: "UnityEngine::Transform", modifiers: "", def_value: None }]
 RootMotion::FinalIK::ConstraintRotation::ConstraintRotation(UnityEngine::Transform transform)  : RootMotion::FinalIK::Constraint(THROW_UNLESS(::il2cpp_utils::New<ConstraintRotation>(transform))) {}
 void RootMotion::FinalIK::ConstraintRotation::_ctor(UnityEngine::Transform transform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::ConstraintRotation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, transform);
}
