#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "RootMotion/zzzz__BipedReferences_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "RootMotion/zzzz__BipedNaming_def.hpp"
#include "RootMotion/zzzz__BipedNaming_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: RootMotion::RootMotion__BipedReferences__AutoDetectParams._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::RootMotion__BipedReferences__AutoDetectParams::*)(bool, bool)>(&RootMotion::RootMotion__BipedReferences__AutoDetectParams::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x11b2a2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::RootMotion__BipedReferences__AutoDetectParams>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::RootMotion__BipedReferences__AutoDetectParams.get_Default
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::RootMotion__BipedReferences__AutoDetectParams (*)()>(&RootMotion::RootMotion__BipedReferences__AutoDetectParams::get_Default)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11b2a40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::RootMotion__BipedReferences__AutoDetectParams>::get(),
                            "get_Default",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "legsParentInSpine", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "includeEyes", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr RootMotion::RootMotion__BipedReferences__AutoDetectParams::RootMotion__BipedReferences__AutoDetectParams(bool legsParentInSpine, bool includeEyes) noexcept : ::bs_hook::ValueTypeWrapper() {this->legsParentInSpine = legsParentInSpine;
this->includeEyes = includeEyes;
}
constexpr void RootMotion::RootMotion__BipedReferences__AutoDetectParams::__set_legsParentInSpine(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool RootMotion::RootMotion__BipedReferences__AutoDetectParams::__get_legsParentInSpine() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
constexpr void RootMotion::RootMotion__BipedReferences__AutoDetectParams::__set_includeEyes(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1>(this->__instance, std::forward<bool>(value));
}
constexpr bool RootMotion::RootMotion__BipedReferences__AutoDetectParams::__get_includeEyes() const {
return ::cordl_internals::getInstanceField<bool, 0x1>(this->__instance);
}
 void RootMotion::RootMotion__BipedReferences__AutoDetectParams::_ctor(bool legsParentInSpine, bool includeEyes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::RootMotion__BipedReferences__AutoDetectParams>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, legsParentInSpine, includeEyes);
}
 RootMotion::RootMotion__BipedReferences__AutoDetectParams RootMotion::RootMotion__BipedReferences__AutoDetectParams::get_Default()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::RootMotion__BipedReferences__AutoDetectParams>::get(),
                            "get_Default",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<RootMotion::RootMotion__BipedReferences__AutoDetectParams, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: RootMotion::BipedReferences.get_isFilled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::BipedReferences::*)()>(&RootMotion::BipedReferences::get_isFilled)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x11af124;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::BipedReferences),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::BipedReferences.get_isEmpty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::BipedReferences::*)()>(&RootMotion::BipedReferences::get_isEmpty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x11af480;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "get_isEmpty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::BipedReferences.IsEmpty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::BipedReferences::*)(bool)>(&RootMotion::BipedReferences::IsEmpty)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x11af490;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::BipedReferences),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::BipedReferences.Contains
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::BipedReferences::*)(UnityEngine::Transform, bool)>(&RootMotion::BipedReferences::Contains)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x11af81c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::BipedReferences),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::BipedReferences.AutoDetectReferences
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<RootMotion::BipedReferences>, UnityEngine::Transform, RootMotion::RootMotion__BipedReferences__AutoDetectParams)>(&RootMotion::BipedReferences::AutoDetectReferences)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x11afbac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "AutoDetectReferences",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<RootMotion::BipedReferences>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::RootMotion__BipedReferences__AutoDetectParams>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::BipedReferences.DetectReferencesByNaming
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<RootMotion::BipedReferences>, UnityEngine::Transform, RootMotion::RootMotion__BipedReferences__AutoDetectParams)>(&RootMotion::BipedReferences::DetectReferencesByNaming)> {
  constexpr static std::size_t size = 0x748;
  constexpr static std::size_t addrs = 0x11b01d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "DetectReferencesByNaming",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<RootMotion::BipedReferences>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::RootMotion__BipedReferences__AutoDetectParams>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::BipedReferences.AssignHumanoidReferences
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<RootMotion::BipedReferences>, UnityEngine::Animator, RootMotion::RootMotion__BipedReferences__AutoDetectParams)>(&RootMotion::BipedReferences::AssignHumanoidReferences)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x11afe0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "AssignHumanoidReferences",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<RootMotion::BipedReferences>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Animator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::RootMotion__BipedReferences__AutoDetectParams>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::BipedReferences.SetupError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(RootMotion::BipedReferences, ByRef<::StringW>)>(&RootMotion::BipedReferences::SetupError)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x11b09cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "SetupError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::BipedReferences>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::BipedReferences.SetupWarning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(RootMotion::BipedReferences, ByRef<::StringW>)>(&RootMotion::BipedReferences::SetupWarning)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x11b0aac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "SetupWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::BipedReferences>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::BipedReferences.IsNeckBone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Transform, UnityEngine::Transform)>(&RootMotion::BipedReferences::IsNeckBone)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x11b1524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "IsNeckBone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::BipedReferences.AddBoneToEyes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Transform, ByRef<RootMotion::BipedReferences>, RootMotion::RootMotion__BipedReferences__AutoDetectParams)>(&RootMotion::BipedReferences::AddBoneToEyes)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x11b1344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "AddBoneToEyes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<RootMotion::BipedReferences>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::RootMotion__BipedReferences__AutoDetectParams>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::BipedReferences.AddBoneToSpine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Transform, ByRef<RootMotion::BipedReferences>, RootMotion::RootMotion__BipedReferences__AutoDetectParams)>(&RootMotion::BipedReferences::AddBoneToSpine)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x11b10e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "AddBoneToSpine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<RootMotion::BipedReferences>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::RootMotion__BipedReferences__AutoDetectParams>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::BipedReferences.DetectLimb
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(RootMotion::RootMotion__BipedNaming__BoneType, RootMotion::RootMotion__BipedNaming__BoneSide, ByRef<UnityEngine::Transform>, ByRef<UnityEngine::Transform>, ByRef<UnityEngine::Transform>, ::ArrayW<UnityEngine::Transform>)>(&RootMotion::BipedReferences::DetectLimb)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x11b0b48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "DetectLimb",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::RootMotion__BipedNaming__BoneType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::RootMotion__BipedNaming__BoneSide>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Transform>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Transform>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Transform>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Transform>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::BipedReferences.AddBoneToHierarchy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::ArrayW<UnityEngine::Transform>>, UnityEngine::Transform)>(&RootMotion::BipedReferences::AddBoneToHierarchy)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x11b1438;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "AddBoneToHierarchy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::Transform>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::BipedReferences.LimbError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Transform, UnityEngine::Transform, UnityEngine::Transform, ByRef<::StringW>)>(&RootMotion::BipedReferences::LimbError)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x11b1604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "LimbError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::BipedReferences.LimbWarning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Transform, UnityEngine::Transform, UnityEngine::Transform, ByRef<::StringW>)>(&RootMotion::BipedReferences::LimbWarning)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x11b20c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "LimbWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::BipedReferences.SpineError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(RootMotion::BipedReferences, ByRef<::StringW>)>(&RootMotion::BipedReferences::SpineError)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x11b1b84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "SpineError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::BipedReferences>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::BipedReferences.SpineWarning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(RootMotion::BipedReferences, ByRef<::StringW>)>(&RootMotion::BipedReferences::SpineWarning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11b2398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "SpineWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::BipedReferences>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::BipedReferences.EyesError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(RootMotion::BipedReferences, ByRef<::StringW>)>(&RootMotion::BipedReferences::EyesError)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x11b1ed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "EyesError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::BipedReferences>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::BipedReferences.EyesWarning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(RootMotion::BipedReferences, ByRef<::StringW>)>(&RootMotion::BipedReferences::EyesWarning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11b23a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "EyesWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::BipedReferences>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::BipedReferences.RootHeightWarning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(RootMotion::BipedReferences, ByRef<::StringW>)>(&RootMotion::BipedReferences::RootHeightWarning)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x11b23a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "RootHeightWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::BipedReferences>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::BipedReferences.FacingAxisWarning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(RootMotion::BipedReferences, ByRef<::StringW>)>(&RootMotion::BipedReferences::FacingAxisWarning)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x11b255c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "FacingAxisWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::BipedReferences>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::BipedReferences.GetVerticalOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Quaternion)>(&RootMotion::BipedReferences::GetVerticalOffset)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x11b29c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "GetVerticalOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::BipedReferences._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::BipedReferences::*)()>(&RootMotion::BipedReferences::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x11afda4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::BipedReferences::__set_root(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform RootMotion::BipedReferences::__get_root() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::BipedReferences::__set_pelvis(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform RootMotion::BipedReferences::__get_pelvis() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::BipedReferences::__set_leftThigh(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform RootMotion::BipedReferences::__get_leftThigh() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::BipedReferences::__set_leftCalf(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform RootMotion::BipedReferences::__get_leftCalf() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::BipedReferences::__set_leftFoot(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform RootMotion::BipedReferences::__get_leftFoot() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::BipedReferences::__set_rightThigh(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform RootMotion::BipedReferences::__get_rightThigh() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::BipedReferences::__set_rightCalf(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform RootMotion::BipedReferences::__get_rightCalf() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::BipedReferences::__set_rightFoot(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform RootMotion::BipedReferences::__get_rightFoot() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::BipedReferences::__set_leftUpperArm(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform RootMotion::BipedReferences::__get_leftUpperArm() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::BipedReferences::__set_leftForearm(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform RootMotion::BipedReferences::__get_leftForearm() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::BipedReferences::__set_leftHand(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform RootMotion::BipedReferences::__get_leftHand() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::BipedReferences::__set_rightUpperArm(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform RootMotion::BipedReferences::__get_rightUpperArm() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::BipedReferences::__set_rightForearm(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform RootMotion::BipedReferences::__get_rightForearm() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::BipedReferences::__set_rightHand(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform RootMotion::BipedReferences::__get_rightHand() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::BipedReferences::__set_head(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform RootMotion::BipedReferences::__get_head() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::BipedReferences::__set_spine(::ArrayW<UnityEngine::Transform> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::Transform>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::Transform>>(value));
}
constexpr ::ArrayW<UnityEngine::Transform> RootMotion::BipedReferences::__get_spine() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::Transform>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::BipedReferences::__set_eyes(::ArrayW<UnityEngine::Transform> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::Transform>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::Transform>>(value));
}
constexpr ::ArrayW<UnityEngine::Transform> RootMotion::BipedReferences::__get_eyes() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::Transform>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool RootMotion::BipedReferences::get_isFilled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "get_isFilled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool RootMotion::BipedReferences::get_isEmpty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "get_isEmpty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool RootMotion::BipedReferences::IsEmpty(bool includeRoot)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "IsEmpty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, includeRoot);
}
/// @param ignoreRoot: bool (default: false)
 bool RootMotion::BipedReferences::Contains(UnityEngine::Transform t, bool ignoreRoot)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, t, ignoreRoot);
}
 bool RootMotion::BipedReferences::AutoDetectReferences(ByRef<RootMotion::BipedReferences> references, UnityEngine::Transform root, RootMotion::RootMotion__BipedReferences__AutoDetectParams autoDetectParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "AutoDetectReferences",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<RootMotion::BipedReferences>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::RootMotion__BipedReferences__AutoDetectParams>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, references, root, autoDetectParams);
}
 void RootMotion::BipedReferences::DetectReferencesByNaming(ByRef<RootMotion::BipedReferences> references, UnityEngine::Transform root, RootMotion::RootMotion__BipedReferences__AutoDetectParams autoDetectParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "DetectReferencesByNaming",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<RootMotion::BipedReferences>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::RootMotion__BipedReferences__AutoDetectParams>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, references, root, autoDetectParams);
}
 void RootMotion::BipedReferences::AssignHumanoidReferences(ByRef<RootMotion::BipedReferences> references, UnityEngine::Animator animator, RootMotion::RootMotion__BipedReferences__AutoDetectParams autoDetectParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "AssignHumanoidReferences",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<RootMotion::BipedReferences>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Animator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::RootMotion__BipedReferences__AutoDetectParams>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, references, animator, autoDetectParams);
}
 bool RootMotion::BipedReferences::SetupError(RootMotion::BipedReferences references, ByRef<::StringW> errorMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "SetupError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::BipedReferences>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, references, errorMessage);
}
 bool RootMotion::BipedReferences::SetupWarning(RootMotion::BipedReferences references, ByRef<::StringW> warningMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "SetupWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::BipedReferences>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, references, warningMessage);
}
 bool RootMotion::BipedReferences::IsNeckBone(UnityEngine::Transform bone, UnityEngine::Transform leftUpperArm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "IsNeckBone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bone, leftUpperArm);
}
 bool RootMotion::BipedReferences::AddBoneToEyes(UnityEngine::Transform bone, ByRef<RootMotion::BipedReferences> references, RootMotion::RootMotion__BipedReferences__AutoDetectParams autoDetectParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "AddBoneToEyes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<RootMotion::BipedReferences>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::RootMotion__BipedReferences__AutoDetectParams>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bone, references, autoDetectParams);
}
 bool RootMotion::BipedReferences::AddBoneToSpine(UnityEngine::Transform bone, ByRef<RootMotion::BipedReferences> references, RootMotion::RootMotion__BipedReferences__AutoDetectParams autoDetectParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "AddBoneToSpine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<RootMotion::BipedReferences>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::RootMotion__BipedReferences__AutoDetectParams>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bone, references, autoDetectParams);
}
 void RootMotion::BipedReferences::DetectLimb(RootMotion::RootMotion__BipedNaming__BoneType boneType, RootMotion::RootMotion__BipedNaming__BoneSide boneSide, ByRef<UnityEngine::Transform> firstBone, ByRef<UnityEngine::Transform> secondBone, ByRef<UnityEngine::Transform> lastBone, ::ArrayW<UnityEngine::Transform> transforms)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "DetectLimb",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::RootMotion__BipedNaming__BoneType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::RootMotion__BipedNaming__BoneSide>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Transform>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Transform>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Transform>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Transform>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, boneType, boneSide, firstBone, secondBone, lastBone, transforms);
}
 void RootMotion::BipedReferences::AddBoneToHierarchy(ByRef<::ArrayW<UnityEngine::Transform>> bones, UnityEngine::Transform transform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "AddBoneToHierarchy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::Transform>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bones, transform);
}
 bool RootMotion::BipedReferences::LimbError(UnityEngine::Transform bone1, UnityEngine::Transform bone2, UnityEngine::Transform bone3, ByRef<::StringW> errorMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "LimbError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bone1, bone2, bone3, errorMessage);
}
 bool RootMotion::BipedReferences::LimbWarning(UnityEngine::Transform bone1, UnityEngine::Transform bone2, UnityEngine::Transform bone3, ByRef<::StringW> warningMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "LimbWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bone1, bone2, bone3, warningMessage);
}
 bool RootMotion::BipedReferences::SpineError(RootMotion::BipedReferences references, ByRef<::StringW> errorMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "SpineError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::BipedReferences>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, references, errorMessage);
}
 bool RootMotion::BipedReferences::SpineWarning(RootMotion::BipedReferences references, ByRef<::StringW> warningMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "SpineWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::BipedReferences>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, references, warningMessage);
}
 bool RootMotion::BipedReferences::EyesError(RootMotion::BipedReferences references, ByRef<::StringW> errorMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "EyesError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::BipedReferences>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, references, errorMessage);
}
 bool RootMotion::BipedReferences::EyesWarning(RootMotion::BipedReferences references, ByRef<::StringW> warningMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "EyesWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::BipedReferences>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, references, warningMessage);
}
 bool RootMotion::BipedReferences::RootHeightWarning(RootMotion::BipedReferences references, ByRef<::StringW> warningMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "RootHeightWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::BipedReferences>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, references, warningMessage);
}
 bool RootMotion::BipedReferences::FacingAxisWarning(RootMotion::BipedReferences references, ByRef<::StringW> warningMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "FacingAxisWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::BipedReferences>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, references, warningMessage);
}
 float_t RootMotion::BipedReferences::GetVerticalOffset(UnityEngine::Vector3 p1, UnityEngine::Vector3 p2, UnityEngine::Quaternion rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            "GetVerticalOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, p1, p2, rotation);
}
// Ctor Parameters []
 RootMotion::BipedReferences::BipedReferences()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BipedReferences>())) {}
 void RootMotion::BipedReferences::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::BipedReferences>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
