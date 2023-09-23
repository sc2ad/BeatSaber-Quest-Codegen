#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::SceneInstance.get_Scene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::SceneManagement::Scene (UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::get_Scene)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a3fa8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get(),
                            "get_Scene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::SceneInstance.set_Scene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::*)(UnityEngine::SceneManagement::Scene)>(&UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::set_Scene)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a3fa94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get(),
                            "set_Scene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::Scene>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::SceneInstance.Activate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::Activate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a3fa9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::SceneInstance.ActivateAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AsyncOperation (UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::ActivateAsync)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2a3fabc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get(),
                            "ActivateAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::SceneInstance.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a3fae8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::ResourceProviders::SceneInstance),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::SceneInstance.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::*)(::bs_hook::Il2CppWrapperType)>(&UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::Equals)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2a3fb08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::ResourceProviders::SceneInstance),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "m_Scene", ty: "UnityEngine::SceneManagement::Scene", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Operation", ty: "UnityEngine::AsyncOperation", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::SceneInstance(UnityEngine::SceneManagement::Scene m_Scene, UnityEngine::AsyncOperation m_Operation) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Scene = m_Scene;
this->m_Operation = m_Operation;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::__set_m_Scene(UnityEngine::SceneManagement::Scene value)  {
::cordl_internals::setInstanceField<UnityEngine::SceneManagement::Scene, 0x0>(this->__instance, std::forward<UnityEngine::SceneManagement::Scene>(value));
}
constexpr UnityEngine::SceneManagement::Scene UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::__get_m_Scene() const {
return ::cordl_internals::getInstanceField<UnityEngine::SceneManagement::Scene, 0x0>(this->__instance);
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::__set_m_Operation(UnityEngine::AsyncOperation value)  {
::cordl_internals::setInstanceField<UnityEngine::AsyncOperation, 0x8>(this->__instance, std::forward<UnityEngine::AsyncOperation>(value));
}
constexpr UnityEngine::AsyncOperation UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::__get_m_Operation() const {
return ::cordl_internals::getInstanceField<UnityEngine::AsyncOperation, 0x8>(this->__instance);
}
 UnityEngine::SceneManagement::Scene UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::get_Scene()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get(),
                            "get_Scene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::SceneManagement::Scene, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::set_Scene(UnityEngine::SceneManagement::Scene value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get(),
                            "set_Scene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::Scene>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 void UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::Activate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::AsyncOperation UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::ActivateAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get(),
                            "ActivateAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::AsyncOperation, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
