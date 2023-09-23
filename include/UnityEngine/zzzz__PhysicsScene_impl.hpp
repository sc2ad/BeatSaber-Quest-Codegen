#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: UnityEngine::PhysicsScene.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::PhysicsScene::*)()>(&UnityEngine::PhysicsScene::ToString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2ba0380;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::PhysicsScene),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::PhysicsScene.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::PhysicsScene::*)()>(&UnityEngine::PhysicsScene::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ba0464;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::PhysicsScene),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::PhysicsScene.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::PhysicsScene::*)(::bs_hook::Il2CppWrapperType)>(&UnityEngine::PhysicsScene::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2ba046c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::PhysicsScene),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::PhysicsScene.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::PhysicsScene::*)(UnityEngine::PhysicsScene)>(&UnityEngine::PhysicsScene::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2ba04e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::PhysicsScene>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::PhysicsScene.Raycast
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::PhysicsScene::*)(UnityEngine::Vector3, UnityEngine::Vector3, float_t, int32_t, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::Raycast)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2b9c734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "Raycast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::PhysicsScene.Internal_RaycastTest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::PhysicsScene, UnityEngine::Ray, float_t, int32_t, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::Internal_RaycastTest)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2ba04f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "Internal_RaycastTest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::PhysicsScene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::PhysicsScene.Raycast
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::PhysicsScene::*)(UnityEngine::Vector3, UnityEngine::Vector3, ByRef<UnityEngine::RaycastHit>, float_t, int32_t, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::Raycast)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2b9cb8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "Raycast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::PhysicsScene.Internal_Raycast
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::PhysicsScene, UnityEngine::Ray, float_t, ByRef<UnityEngine::RaycastHit>, int32_t, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::Internal_Raycast)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2ba05dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "Internal_Raycast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::PhysicsScene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::PhysicsScene.Raycast
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::PhysicsScene::*)(UnityEngine::Vector3, UnityEngine::Vector3, ::ArrayW<UnityEngine::RaycastHit>, float_t, int32_t, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::Raycast)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x2b9dc74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "Raycast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::PhysicsScene.Internal_RaycastNonAlloc
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(UnityEngine::PhysicsScene, UnityEngine::Ray, ::ArrayW<UnityEngine::RaycastHit>, float_t, int32_t, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::Internal_RaycastNonAlloc)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2ba06d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "Internal_RaycastNonAlloc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::PhysicsScene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::PhysicsScene.Query_CapsuleCast
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::PhysicsScene, UnityEngine::Vector3, UnityEngine::Vector3, float_t, UnityEngine::Vector3, float_t, ByRef<UnityEngine::RaycastHit>, int32_t, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::Query_CapsuleCast)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2ba07c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "Query_CapsuleCast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::PhysicsScene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::PhysicsScene.Internal_CapsuleCast
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::PhysicsScene, UnityEngine::Vector3, UnityEngine::Vector3, float_t, UnityEngine::Vector3, ByRef<UnityEngine::RaycastHit>, float_t, int32_t, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::Internal_CapsuleCast)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2ba0914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "Internal_CapsuleCast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::PhysicsScene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::PhysicsScene.CapsuleCast
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::PhysicsScene::*)(UnityEngine::Vector3, UnityEngine::Vector3, float_t, UnityEngine::Vector3, ByRef<UnityEngine::RaycastHit>, float_t, int32_t, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::CapsuleCast)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2b9d61c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "CapsuleCast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::PhysicsScene.Query_SphereCast
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::PhysicsScene, UnityEngine::Vector3, float_t, UnityEngine::Vector3, float_t, ByRef<UnityEngine::RaycastHit>, int32_t, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::Query_SphereCast)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2ba0a60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "Query_SphereCast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::PhysicsScene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::PhysicsScene.Internal_SphereCast
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::PhysicsScene, UnityEngine::Vector3, float_t, UnityEngine::Vector3, ByRef<UnityEngine::RaycastHit>, float_t, int32_t, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::Internal_SphereCast)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2ba0b88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "Internal_SphereCast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::PhysicsScene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::PhysicsScene.SphereCast
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::PhysicsScene::*)(UnityEngine::Vector3, float_t, UnityEngine::Vector3, ByRef<UnityEngine::RaycastHit>, float_t, int32_t, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::SphereCast)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b9d728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "SphereCast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::PhysicsScene.OverlapBoxNonAlloc_Internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(UnityEngine::PhysicsScene, UnityEngine::Vector3, UnityEngine::Vector3, ::ArrayW<UnityEngine::Collider>, UnityEngine::Quaternion, int32_t, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::OverlapBoxNonAlloc_Internal)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2ba0cb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "OverlapBoxNonAlloc_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::PhysicsScene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Collider>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::PhysicsScene.OverlapBox
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::PhysicsScene::*)(UnityEngine::Vector3, UnityEngine::Vector3, ::ArrayW<UnityEngine::Collider>, UnityEngine::Quaternion, int32_t, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::OverlapBox)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2b9eb10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "OverlapBox",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Collider>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::PhysicsScene.Internal_RaycastTest_Injected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<UnityEngine::PhysicsScene>, ByRef<UnityEngine::Ray>, float_t, int32_t, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::Internal_RaycastTest_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2ba0570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "Internal_RaycastTest_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::PhysicsScene>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Ray>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::PhysicsScene.Internal_Raycast_Injected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<UnityEngine::PhysicsScene>, ByRef<UnityEngine::Ray>, float_t, ByRef<UnityEngine::RaycastHit>, int32_t, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::Internal_Raycast_Injected)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2ba0658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "Internal_Raycast_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::PhysicsScene>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Ray>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::PhysicsScene.Internal_RaycastNonAlloc_Injected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(ByRef<UnityEngine::PhysicsScene>, ByRef<UnityEngine::Ray>, ::ArrayW<UnityEngine::RaycastHit>, float_t, int32_t, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::Internal_RaycastNonAlloc_Injected)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2ba074c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "Internal_RaycastNonAlloc_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::PhysicsScene>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Ray>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::PhysicsScene.Query_CapsuleCast_Injected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<UnityEngine::PhysicsScene>, ByRef<UnityEngine::Vector3>, ByRef<UnityEngine::Vector3>, float_t, ByRef<UnityEngine::Vector3>, float_t, ByRef<UnityEngine::RaycastHit>, int32_t, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::Query_CapsuleCast_Injected)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2ba0878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "Query_CapsuleCast_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::PhysicsScene>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::PhysicsScene.Query_SphereCast_Injected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<UnityEngine::PhysicsScene>, ByRef<UnityEngine::Vector3>, float_t, ByRef<UnityEngine::Vector3>, float_t, ByRef<UnityEngine::RaycastHit>, int32_t, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::Query_SphereCast_Injected)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2ba0afc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "Query_SphereCast_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::PhysicsScene>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::PhysicsScene.OverlapBoxNonAlloc_Internal_Injected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(ByRef<UnityEngine::PhysicsScene>, ByRef<UnityEngine::Vector3>, ByRef<UnityEngine::Vector3>, ::ArrayW<UnityEngine::Collider>, ByRef<UnityEngine::Quaternion>, int32_t, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::OverlapBoxNonAlloc_Internal_Injected)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2ba0d40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "OverlapBoxNonAlloc_Internal_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::PhysicsScene>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Collider>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Quaternion>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IEquatable_1<UnityEngine::PhysicsScene>
constexpr  UnityEngine::PhysicsScene::operator System::IEquatable_1<UnityEngine::PhysicsScene>() const {
return System::IEquatable_1<UnityEngine::PhysicsScene>(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::PhysicsScene::PhysicsScene(int32_t m_Handle) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Handle = m_Handle;
}
constexpr void UnityEngine::PhysicsScene::__set_m_Handle(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::PhysicsScene::__get_m_Handle() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
 ::StringW UnityEngine::PhysicsScene::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t UnityEngine::PhysicsScene::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool UnityEngine::PhysicsScene::Equals(::bs_hook::Il2CppWrapperType other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 bool UnityEngine::PhysicsScene::Equals(UnityEngine::PhysicsScene other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::PhysicsScene>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
/// @param maxDistance: float_t (default: inf)
/// @param layerMask: int32_t (default: -5)
/// @param queryTriggerInteraction: UnityEngine::QueryTriggerInteraction (default: 0)
 bool UnityEngine::PhysicsScene::Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "Raycast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, origin, direction, maxDistance, layerMask, queryTriggerInteraction);
}
 bool UnityEngine::PhysicsScene::Internal_RaycastTest(UnityEngine::PhysicsScene physicsScene, UnityEngine::Ray ray, float_t maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "Internal_RaycastTest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::PhysicsScene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, physicsScene, ray, maxDistance, layerMask, queryTriggerInteraction);
}
/// @param maxDistance: float_t (default: inf)
/// @param layerMask: int32_t (default: -5)
/// @param queryTriggerInteraction: UnityEngine::QueryTriggerInteraction (default: 0)
 bool UnityEngine::PhysicsScene::Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, ByRef<UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "Raycast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, origin, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
}
 bool UnityEngine::PhysicsScene::Internal_Raycast(UnityEngine::PhysicsScene physicsScene, UnityEngine::Ray ray, float_t maxDistance, ByRef<UnityEngine::RaycastHit> hit, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "Internal_Raycast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::PhysicsScene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, physicsScene, ray, maxDistance, hit, layerMask, queryTriggerInteraction);
}
/// @param maxDistance: float_t (default: inf)
/// @param layerMask: int32_t (default: -5)
/// @param queryTriggerInteraction: UnityEngine::QueryTriggerInteraction (default: 0)
 int32_t UnityEngine::PhysicsScene::Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, ::ArrayW<UnityEngine::RaycastHit> raycastHits, float_t maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "Raycast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, origin, direction, raycastHits, maxDistance, layerMask, queryTriggerInteraction);
}
 int32_t UnityEngine::PhysicsScene::Internal_RaycastNonAlloc(UnityEngine::PhysicsScene physicsScene, UnityEngine::Ray ray, ::ArrayW<UnityEngine::RaycastHit> raycastHits, float_t maxDistance, int32_t mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "Internal_RaycastNonAlloc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::PhysicsScene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, physicsScene, ray, raycastHits, maxDistance, mask, queryTriggerInteraction);
}
 bool UnityEngine::PhysicsScene::Query_CapsuleCast(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 point1, UnityEngine::Vector3 point2, float_t radius, UnityEngine::Vector3 direction, float_t maxDistance, ByRef<UnityEngine::RaycastHit> hitInfo, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "Query_CapsuleCast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::PhysicsScene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, physicsScene, point1, point2, radius, direction, maxDistance, hitInfo, layerMask, queryTriggerInteraction);
}
 bool UnityEngine::PhysicsScene::Internal_CapsuleCast(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 point1, UnityEngine::Vector3 point2, float_t radius, UnityEngine::Vector3 direction, ByRef<UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "Internal_CapsuleCast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::PhysicsScene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, physicsScene, point1, point2, radius, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
}
/// @param maxDistance: float_t (default: inf)
/// @param layerMask: int32_t (default: -5)
/// @param queryTriggerInteraction: UnityEngine::QueryTriggerInteraction (default: 0)
 bool UnityEngine::PhysicsScene::CapsuleCast(UnityEngine::Vector3 point1, UnityEngine::Vector3 point2, float_t radius, UnityEngine::Vector3 direction, ByRef<UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "CapsuleCast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, point1, point2, radius, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
}
 bool UnityEngine::PhysicsScene::Query_SphereCast(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 origin, float_t radius, UnityEngine::Vector3 direction, float_t maxDistance, ByRef<UnityEngine::RaycastHit> hitInfo, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "Query_SphereCast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::PhysicsScene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, physicsScene, origin, radius, direction, maxDistance, hitInfo, layerMask, queryTriggerInteraction);
}
 bool UnityEngine::PhysicsScene::Internal_SphereCast(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 origin, float_t radius, UnityEngine::Vector3 direction, ByRef<UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "Internal_SphereCast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::PhysicsScene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, physicsScene, origin, radius, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
}
/// @param maxDistance: float_t (default: inf)
/// @param layerMask: int32_t (default: -5)
/// @param queryTriggerInteraction: UnityEngine::QueryTriggerInteraction (default: 0)
 bool UnityEngine::PhysicsScene::SphereCast(UnityEngine::Vector3 origin, float_t radius, UnityEngine::Vector3 direction, ByRef<UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "SphereCast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, origin, radius, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
}
 int32_t UnityEngine::PhysicsScene::OverlapBoxNonAlloc_Internal(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 center, UnityEngine::Vector3 halfExtents, ::ArrayW<UnityEngine::Collider> results, UnityEngine::Quaternion orientation, int32_t mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "OverlapBoxNonAlloc_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::PhysicsScene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Collider>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, physicsScene, center, halfExtents, results, orientation, mask, queryTriggerInteraction);
}
/// @param layerMask: int32_t (default: -5)
/// @param queryTriggerInteraction: UnityEngine::QueryTriggerInteraction (default: 0)
 int32_t UnityEngine::PhysicsScene::OverlapBox(UnityEngine::Vector3 center, UnityEngine::Vector3 halfExtents, ::ArrayW<UnityEngine::Collider> results, UnityEngine::Quaternion orientation, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "OverlapBox",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Collider>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, center, halfExtents, results, orientation, layerMask, queryTriggerInteraction);
}
 bool UnityEngine::PhysicsScene::Internal_RaycastTest_Injected(ByRef<UnityEngine::PhysicsScene> physicsScene, ByRef<UnityEngine::Ray> ray, float_t maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "Internal_RaycastTest_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::PhysicsScene>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Ray>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, physicsScene, ray, maxDistance, layerMask, queryTriggerInteraction);
}
 bool UnityEngine::PhysicsScene::Internal_Raycast_Injected(ByRef<UnityEngine::PhysicsScene> physicsScene, ByRef<UnityEngine::Ray> ray, float_t maxDistance, ByRef<UnityEngine::RaycastHit> hit, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "Internal_Raycast_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::PhysicsScene>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Ray>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, physicsScene, ray, maxDistance, hit, layerMask, queryTriggerInteraction);
}
 int32_t UnityEngine::PhysicsScene::Internal_RaycastNonAlloc_Injected(ByRef<UnityEngine::PhysicsScene> physicsScene, ByRef<UnityEngine::Ray> ray, ::ArrayW<UnityEngine::RaycastHit> raycastHits, float_t maxDistance, int32_t mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "Internal_RaycastNonAlloc_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::PhysicsScene>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Ray>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, physicsScene, ray, raycastHits, maxDistance, mask, queryTriggerInteraction);
}
 bool UnityEngine::PhysicsScene::Query_CapsuleCast_Injected(ByRef<UnityEngine::PhysicsScene> physicsScene, ByRef<UnityEngine::Vector3> point1, ByRef<UnityEngine::Vector3> point2, float_t radius, ByRef<UnityEngine::Vector3> direction, float_t maxDistance, ByRef<UnityEngine::RaycastHit> hitInfo, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "Query_CapsuleCast_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::PhysicsScene>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, physicsScene, point1, point2, radius, direction, maxDistance, hitInfo, layerMask, queryTriggerInteraction);
}
 bool UnityEngine::PhysicsScene::Query_SphereCast_Injected(ByRef<UnityEngine::PhysicsScene> physicsScene, ByRef<UnityEngine::Vector3> origin, float_t radius, ByRef<UnityEngine::Vector3> direction, float_t maxDistance, ByRef<UnityEngine::RaycastHit> hitInfo, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "Query_SphereCast_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::PhysicsScene>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::RaycastHit>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, physicsScene, origin, radius, direction, maxDistance, hitInfo, layerMask, queryTriggerInteraction);
}
 int32_t UnityEngine::PhysicsScene::OverlapBoxNonAlloc_Internal_Injected(ByRef<UnityEngine::PhysicsScene> physicsScene, ByRef<UnityEngine::Vector3> center, ByRef<UnityEngine::Vector3> halfExtents, ::ArrayW<UnityEngine::Collider> results, ByRef<UnityEngine::Quaternion> orientation, int32_t mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PhysicsScene>::get(),
                            "OverlapBoxNonAlloc_Internal_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::PhysicsScene>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Collider>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Quaternion>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::QueryTriggerInteraction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, physicsScene, center, halfExtents, results, orientation, mask, queryTriggerInteraction);
}
