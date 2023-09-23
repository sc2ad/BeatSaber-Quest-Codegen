#pragma once
#include "UnityEngine/ProBuilder/zzzz__EntityBehaviour_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__ColliderBehaviour_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
//  Writing Method size for method: UnityEngine::ProBuilder::ColliderBehaviour.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::ColliderBehaviour::*)()>(&UnityEngine::ProBuilder::ColliderBehaviour::Initialize)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x29a8af4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ProBuilder::ColliderBehaviour),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ColliderBehaviour>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::ColliderBehaviour.OnEnterPlayMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::ColliderBehaviour::*)()>(&UnityEngine::ProBuilder::ColliderBehaviour::OnEnterPlayMode)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x29a8ce4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ProBuilder::ColliderBehaviour),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ColliderBehaviour>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::ColliderBehaviour.OnSceneLoaded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::ColliderBehaviour::*)(UnityEngine::SceneManagement::Scene, UnityEngine::SceneManagement::LoadSceneMode)>(&UnityEngine::ProBuilder::ColliderBehaviour::OnSceneLoaded)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x29a8d9c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ProBuilder::ColliderBehaviour),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ColliderBehaviour>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::ColliderBehaviour._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::ColliderBehaviour::*)()>(&UnityEngine::ProBuilder::ColliderBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x29a8e54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ColliderBehaviour>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::ProBuilder::ColliderBehaviour::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ColliderBehaviour>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ProBuilder::ColliderBehaviour::OnEnterPlayMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ColliderBehaviour>::get(),
                            "OnEnterPlayMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ProBuilder::ColliderBehaviour::OnSceneLoaded(UnityEngine::SceneManagement::Scene scene, UnityEngine::SceneManagement::LoadSceneMode mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ColliderBehaviour>::get(),
                            "OnSceneLoaded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::Scene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::LoadSceneMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, scene, mode);
}
// Ctor Parameters []
 UnityEngine::ProBuilder::ColliderBehaviour::ColliderBehaviour()  : UnityEngine::ProBuilder::EntityBehaviour(THROW_UNLESS(::il2cpp_utils::New<ColliderBehaviour>())) {}
 void UnityEngine::ProBuilder::ColliderBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ColliderBehaviour>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
