#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "RootMotion/zzzz__BipedNaming_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::RootMotion::____RootMotion__BipedNaming__BoneType::____RootMotion__BipedNaming__BoneType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::RootMotion::____RootMotion__BipedNaming__BoneType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::RootMotion::____RootMotion__BipedNaming__BoneType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::RootMotion::____RootMotion__BipedNaming__BoneType  ::RootMotion::____RootMotion__BipedNaming__BoneType::Unassigned{0};
constexpr ::RootMotion::____RootMotion__BipedNaming__BoneType  ::RootMotion::____RootMotion__BipedNaming__BoneType::Spine{1};
constexpr ::RootMotion::____RootMotion__BipedNaming__BoneType  ::RootMotion::____RootMotion__BipedNaming__BoneType::Head{2};
constexpr ::RootMotion::____RootMotion__BipedNaming__BoneType  ::RootMotion::____RootMotion__BipedNaming__BoneType::Arm{3};
constexpr ::RootMotion::____RootMotion__BipedNaming__BoneType  ::RootMotion::____RootMotion__BipedNaming__BoneType::Leg{4};
constexpr ::RootMotion::____RootMotion__BipedNaming__BoneType  ::RootMotion::____RootMotion__BipedNaming__BoneType::Tail{5};
constexpr ::RootMotion::____RootMotion__BipedNaming__BoneType  ::RootMotion::____RootMotion__BipedNaming__BoneType::Eye{6};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::RootMotion::____RootMotion__BipedNaming__BoneSide::____RootMotion__BipedNaming__BoneSide(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::RootMotion::____RootMotion__BipedNaming__BoneSide::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::RootMotion::____RootMotion__BipedNaming__BoneSide::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::RootMotion::____RootMotion__BipedNaming__BoneSide  ::RootMotion::____RootMotion__BipedNaming__BoneSide::Center{0};
constexpr ::RootMotion::____RootMotion__BipedNaming__BoneSide  ::RootMotion::____RootMotion__BipedNaming__BoneSide::Left{1};
constexpr ::RootMotion::____RootMotion__BipedNaming__BoneSide  ::RootMotion::____RootMotion__BipedNaming__BoneSide::Right{2};
//  Writing Method size for method: ::RootMotion::BipedNaming.GetBonesOfType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Transform> (*)(::RootMotion::____RootMotion__BipedNaming__BoneType, ::ArrayW<::UnityEngine::Transform>)>(&::RootMotion::BipedNaming::GetBonesOfType)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x11ac0ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "GetBonesOfType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::____RootMotion__BipedNaming__BoneType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.GetBonesOfSide
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Transform> (*)(::RootMotion::____RootMotion__BipedNaming__BoneSide, ::ArrayW<::UnityEngine::Transform>)>(&::RootMotion::BipedNaming::GetBonesOfSide)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x11ac3b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "GetBonesOfSide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::____RootMotion__BipedNaming__BoneSide>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.GetBonesOfTypeAndSide
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Transform> (*)(::RootMotion::____RootMotion__BipedNaming__BoneType, ::RootMotion::____RootMotion__BipedNaming__BoneSide, ::ArrayW<::UnityEngine::Transform>)>(&::RootMotion::BipedNaming::GetBonesOfTypeAndSide)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x11ac5e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "GetBonesOfTypeAndSide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::____RootMotion__BipedNaming__BoneType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::____RootMotion__BipedNaming__BoneSide>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.GetFirstBoneOfTypeAndSide
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform (*)(::RootMotion::____RootMotion__BipedNaming__BoneType, ::RootMotion::____RootMotion__BipedNaming__BoneSide, ::ArrayW<::UnityEngine::Transform>)>(&::RootMotion::BipedNaming::GetFirstBoneOfTypeAndSide)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x11ac658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "GetFirstBoneOfTypeAndSide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::____RootMotion__BipedNaming__BoneType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::____RootMotion__BipedNaming__BoneSide>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.GetNamingMatch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform (*)(::ArrayW<::UnityEngine::Transform>, ::ArrayW<::ArrayW<::StringW>>)>(&::RootMotion::BipedNaming::GetNamingMatch)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x11ac6ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "GetNamingMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<::StringW>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.GetBoneType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::____RootMotion__BipedNaming__BoneType (*)(::StringW)>(&::RootMotion::BipedNaming::GetBoneType)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x11ac298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "GetBoneType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.GetBoneSide
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::____RootMotion__BipedNaming__BoneSide (*)(::StringW)>(&::RootMotion::BipedNaming::GetBoneSide)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x11ac55c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "GetBoneSide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.GetBone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform (*)(::ArrayW<::UnityEngine::Transform>, ::RootMotion::____RootMotion__BipedNaming__BoneType, ::RootMotion::____RootMotion__BipedNaming__BoneSide, ::ArrayW<::ArrayW<::StringW>>)>(&::RootMotion::BipedNaming::GetBone)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x11ace24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "GetBone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::____RootMotion__BipedNaming__BoneType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::____RootMotion__BipedNaming__BoneSide>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<::StringW>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.isLeft
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::RootMotion::BipedNaming::isLeft)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x11acc7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "isLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.isRight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::RootMotion::BipedNaming::isRight)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x11acd50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "isRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.isSpine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::RootMotion::BipedNaming::isSpine)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x11ac8d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "isSpine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.isHead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::RootMotion::BipedNaming::isHead)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x11ac970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "isHead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.isArm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::RootMotion::BipedNaming::isArm)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x11aca0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "isArm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.isLeg
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::RootMotion::BipedNaming::isLeg)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x11acaa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "isLeg",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.isTail
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::RootMotion::BipedNaming::isTail)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x11acb44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "isTail",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.isEye
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::RootMotion::BipedNaming::isEye)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x11acbe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "isEye",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.isTypeExclude
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::RootMotion::BipedNaming::isTypeExclude)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x11ad00c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "isTypeExclude",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.matchesNaming
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::ArrayW<::StringW>)>(&::RootMotion::BipedNaming::matchesNaming)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x11ac800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "matchesNaming",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.excludesNaming
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::ArrayW<::StringW>)>(&::RootMotion::BipedNaming::excludesNaming)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x11acf88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "excludesNaming",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.matchesLastLetter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::ArrayW<::StringW>)>(&::RootMotion::BipedNaming::matchesLastLetter)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x11ad06c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "matchesLastLetter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.LastLetterIs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW)>(&::RootMotion::BipedNaming::LastLetterIs)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x11ad12c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "LastLetterIs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.firstLetter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::RootMotion::BipedNaming::firstLetter)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x11acf14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "firstLetter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.lastLetter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::RootMotion::BipedNaming::lastLetter)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x11acea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "lastLetter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::RootMotion::BipedNaming::__set_typeLeft(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "typeLeft", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> ::RootMotion::BipedNaming::__get_typeLeft()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "typeLeft", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get>();
}
 void ::RootMotion::BipedNaming::__set_typeRight(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "typeRight", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> ::RootMotion::BipedNaming::__get_typeRight()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "typeRight", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get>();
}
 void ::RootMotion::BipedNaming::__set_typeSpine(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "typeSpine", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> ::RootMotion::BipedNaming::__get_typeSpine()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "typeSpine", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get>();
}
 void ::RootMotion::BipedNaming::__set_typeHead(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "typeHead", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> ::RootMotion::BipedNaming::__get_typeHead()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "typeHead", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get>();
}
 void ::RootMotion::BipedNaming::__set_typeArm(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "typeArm", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> ::RootMotion::BipedNaming::__get_typeArm()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "typeArm", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get>();
}
 void ::RootMotion::BipedNaming::__set_typeLeg(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "typeLeg", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> ::RootMotion::BipedNaming::__get_typeLeg()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "typeLeg", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get>();
}
 void ::RootMotion::BipedNaming::__set_typeTail(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "typeTail", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> ::RootMotion::BipedNaming::__get_typeTail()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "typeTail", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get>();
}
 void ::RootMotion::BipedNaming::__set_typeEye(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "typeEye", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> ::RootMotion::BipedNaming::__get_typeEye()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "typeEye", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get>();
}
 void ::RootMotion::BipedNaming::__set_typeExclude(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "typeExclude", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> ::RootMotion::BipedNaming::__get_typeExclude()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "typeExclude", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get>();
}
 void ::RootMotion::BipedNaming::__set_typeExcludeSpine(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "typeExcludeSpine", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> ::RootMotion::BipedNaming::__get_typeExcludeSpine()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "typeExcludeSpine", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get>();
}
 void ::RootMotion::BipedNaming::__set_typeExcludeHead(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "typeExcludeHead", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> ::RootMotion::BipedNaming::__get_typeExcludeHead()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "typeExcludeHead", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get>();
}
 void ::RootMotion::BipedNaming::__set_typeExcludeArm(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "typeExcludeArm", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> ::RootMotion::BipedNaming::__get_typeExcludeArm()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "typeExcludeArm", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get>();
}
 void ::RootMotion::BipedNaming::__set_typeExcludeLeg(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "typeExcludeLeg", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> ::RootMotion::BipedNaming::__get_typeExcludeLeg()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "typeExcludeLeg", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get>();
}
 void ::RootMotion::BipedNaming::__set_typeExcludeTail(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "typeExcludeTail", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> ::RootMotion::BipedNaming::__get_typeExcludeTail()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "typeExcludeTail", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get>();
}
 void ::RootMotion::BipedNaming::__set_typeExcludeEye(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "typeExcludeEye", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> ::RootMotion::BipedNaming::__get_typeExcludeEye()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "typeExcludeEye", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get>();
}
 void ::RootMotion::BipedNaming::__set_pelvis(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "pelvis", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> ::RootMotion::BipedNaming::__get_pelvis()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "pelvis", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get>();
}
 void ::RootMotion::BipedNaming::__set_hand(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "hand", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> ::RootMotion::BipedNaming::__get_hand()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "hand", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get>();
}
 void ::RootMotion::BipedNaming::__set_foot(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "foot", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> ::RootMotion::BipedNaming::__get_foot()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "foot", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get>();
}
 ::ArrayW<::UnityEngine::Transform> ::RootMotion::BipedNaming::GetBonesOfType(::RootMotion::____RootMotion__BipedNaming__BoneType boneType, ::ArrayW<::UnityEngine::Transform> bones)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "GetBonesOfType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::____RootMotion__BipedNaming__BoneType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Transform>, false>(nullptr, ___internal_method, boneType, bones);
}
 ::ArrayW<::UnityEngine::Transform> ::RootMotion::BipedNaming::GetBonesOfSide(::RootMotion::____RootMotion__BipedNaming__BoneSide boneSide, ::ArrayW<::UnityEngine::Transform> bones)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "GetBonesOfSide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::____RootMotion__BipedNaming__BoneSide>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Transform>, false>(nullptr, ___internal_method, boneSide, bones);
}
 ::ArrayW<::UnityEngine::Transform> ::RootMotion::BipedNaming::GetBonesOfTypeAndSide(::RootMotion::____RootMotion__BipedNaming__BoneType boneType, ::RootMotion::____RootMotion__BipedNaming__BoneSide boneSide, ::ArrayW<::UnityEngine::Transform> bones)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "GetBonesOfTypeAndSide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::____RootMotion__BipedNaming__BoneType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::____RootMotion__BipedNaming__BoneSide>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Transform>, false>(nullptr, ___internal_method, boneType, boneSide, bones);
}
 ::UnityEngine::Transform ::RootMotion::BipedNaming::GetFirstBoneOfTypeAndSide(::RootMotion::____RootMotion__BipedNaming__BoneType boneType, ::RootMotion::____RootMotion__BipedNaming__BoneSide boneSide, ::ArrayW<::UnityEngine::Transform> bones)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "GetFirstBoneOfTypeAndSide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::____RootMotion__BipedNaming__BoneType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::____RootMotion__BipedNaming__BoneSide>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform, false>(nullptr, ___internal_method, boneType, boneSide, bones);
}
 ::UnityEngine::Transform ::RootMotion::BipedNaming::GetNamingMatch(::ArrayW<::UnityEngine::Transform> transforms, ::ArrayW<::ArrayW<::StringW>> namings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "GetNamingMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<::StringW>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform, false>(nullptr, ___internal_method, transforms, namings);
}
 ::RootMotion::____RootMotion__BipedNaming__BoneType ::RootMotion::BipedNaming::GetBoneType(::StringW boneName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "GetBoneType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::RootMotion::____RootMotion__BipedNaming__BoneType, false>(nullptr, ___internal_method, boneName);
}
 ::RootMotion::____RootMotion__BipedNaming__BoneSide ::RootMotion::BipedNaming::GetBoneSide(::StringW boneName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "GetBoneSide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::RootMotion::____RootMotion__BipedNaming__BoneSide, false>(nullptr, ___internal_method, boneName);
}
/// @param boneSide: ::RootMotion::____RootMotion__BipedNaming__BoneSide (default: 0)
 ::UnityEngine::Transform ::RootMotion::BipedNaming::GetBone(::ArrayW<::UnityEngine::Transform> transforms, ::RootMotion::____RootMotion__BipedNaming__BoneType boneType, ::RootMotion::____RootMotion__BipedNaming__BoneSide boneSide, ::ArrayW<::ArrayW<::StringW>> namings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "GetBone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::____RootMotion__BipedNaming__BoneType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::____RootMotion__BipedNaming__BoneSide>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<::StringW>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform, false>(nullptr, ___internal_method, transforms, boneType, boneSide, namings);
}
 bool ::RootMotion::BipedNaming::isLeft(::StringW boneName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "isLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, boneName);
}
 bool ::RootMotion::BipedNaming::isRight(::StringW boneName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "isRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, boneName);
}
 bool ::RootMotion::BipedNaming::isSpine(::StringW boneName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "isSpine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, boneName);
}
 bool ::RootMotion::BipedNaming::isHead(::StringW boneName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "isHead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, boneName);
}
 bool ::RootMotion::BipedNaming::isArm(::StringW boneName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "isArm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, boneName);
}
 bool ::RootMotion::BipedNaming::isLeg(::StringW boneName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "isLeg",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, boneName);
}
 bool ::RootMotion::BipedNaming::isTail(::StringW boneName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "isTail",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, boneName);
}
 bool ::RootMotion::BipedNaming::isEye(::StringW boneName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "isEye",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, boneName);
}
 bool ::RootMotion::BipedNaming::isTypeExclude(::StringW boneName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "isTypeExclude",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, boneName);
}
 bool ::RootMotion::BipedNaming::matchesNaming(::StringW boneName, ::ArrayW<::StringW> namingConvention)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "matchesNaming",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, boneName, namingConvention);
}
 bool ::RootMotion::BipedNaming::excludesNaming(::StringW boneName, ::ArrayW<::StringW> namingConvention)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "excludesNaming",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, boneName, namingConvention);
}
 bool ::RootMotion::BipedNaming::matchesLastLetter(::StringW boneName, ::ArrayW<::StringW> namingConvention)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "matchesLastLetter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, boneName, namingConvention);
}
 bool ::RootMotion::BipedNaming::LastLetterIs(::StringW boneName, ::StringW letter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "LastLetterIs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, boneName, letter);
}
 ::StringW ::RootMotion::BipedNaming::firstLetter(::StringW boneName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "firstLetter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, boneName);
}
 ::StringW ::RootMotion::BipedNaming::lastLetter(::StringW boneName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming>::get(),
                            "lastLetter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, boneName);
}
} // end anonymous namespace
