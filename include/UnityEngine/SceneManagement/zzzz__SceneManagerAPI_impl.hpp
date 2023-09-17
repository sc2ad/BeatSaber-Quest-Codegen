#pragma once
namespace {
#include "UnityEngine/SceneManagement/zzzz__SceneManagerAPI_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneParameters_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__UnloadSceneOptions_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManagerAPI.get_ActiveAPI
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SceneManagement::SceneManagerAPI (*)()>(&::UnityEngine::SceneManagement::SceneManagerAPI::get_ActiveAPI)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2b77ea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPI>::get(),
                            "get_ActiveAPI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManagerAPI.get_overrideAPI
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SceneManagement::SceneManagerAPI (*)()>(&::UnityEngine::SceneManagement::SceneManagerAPI::get_overrideAPI)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2b78aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPI>::get(),
                            "get_overrideAPI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManagerAPI._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::SceneManagement::SceneManagerAPI::*)()>(&::UnityEngine::SceneManagement::SceneManagerAPI::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b78b44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPI>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManagerAPI.GetNumScenesInBuildSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::SceneManagement::SceneManagerAPI::*)()>(&::UnityEngine::SceneManagement::SceneManagerAPI::GetNumScenesInBuildSettings)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b78b4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::SceneManagement::SceneManagerAPI),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPI>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManagerAPI.LoadSceneAsyncByNameOrIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AsyncOperation (::UnityEngine::SceneManagement::SceneManagerAPI::*)(::StringW, int32_t, ::UnityEngine::SceneManagement::LoadSceneParameters, bool)>(&::UnityEngine::SceneManagement::SceneManagerAPI::LoadSceneAsyncByNameOrIndex)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2b78b74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::SceneManagement::SceneManagerAPI),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPI>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManagerAPI.UnloadSceneAsyncByNameOrIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AsyncOperation (::UnityEngine::SceneManagement::SceneManagerAPI::*)(::StringW, int32_t, bool, ::UnityEngine::SceneManagement::UnloadSceneOptions, ByRef<bool>)>(&::UnityEngine::SceneManagement::SceneManagerAPI::UnloadSceneAsyncByNameOrIndex)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b78bd4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::SceneManagement::SceneManagerAPI),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPI>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::SceneManagerAPI.LoadFirstScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AsyncOperation (::UnityEngine::SceneManagement::SceneManagerAPI::*)(bool)>(&::UnityEngine::SceneManagement::SceneManagerAPI::LoadFirstScene)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b78c40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::SceneManagement::SceneManagerAPI),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPI>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
 void ::UnityEngine::SceneManagement::SceneManagerAPI::__set_s_DefaultAPI(::UnityEngine::SceneManagement::SceneManagerAPI value)  {
::cordl_internals::setStaticField<::UnityEngine::SceneManagement::SceneManagerAPI, "s_DefaultAPI", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPI>::get>(std::forward<::UnityEngine::SceneManagement::SceneManagerAPI>(value));
}
 ::UnityEngine::SceneManagement::SceneManagerAPI ::UnityEngine::SceneManagement::SceneManagerAPI::__get_s_DefaultAPI()  {
return ::cordl_internals::getStaticField<::UnityEngine::SceneManagement::SceneManagerAPI, "s_DefaultAPI", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPI>::get>();
}
 void ::UnityEngine::SceneManagement::SceneManagerAPI::__set__overrideAPI_k__BackingField(::UnityEngine::SceneManagement::SceneManagerAPI value)  {
::cordl_internals::setStaticField<::UnityEngine::SceneManagement::SceneManagerAPI, "<overrideAPI>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPI>::get>(std::forward<::UnityEngine::SceneManagement::SceneManagerAPI>(value));
}
 ::UnityEngine::SceneManagement::SceneManagerAPI ::UnityEngine::SceneManagement::SceneManagerAPI::__get__overrideAPI_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityEngine::SceneManagement::SceneManagerAPI, "<overrideAPI>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPI>::get>();
}
 ::UnityEngine::SceneManagement::SceneManagerAPI ::UnityEngine::SceneManagement::SceneManagerAPI::get_ActiveAPI()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPI>::get(),
                            "get_ActiveAPI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SceneManagement::SceneManagerAPI, false>(nullptr, ___internal_method);
}
 ::UnityEngine::SceneManagement::SceneManagerAPI ::UnityEngine::SceneManagement::SceneManagerAPI::get_overrideAPI()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPI>::get(),
                            "get_overrideAPI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SceneManagement::SceneManagerAPI, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
 ::UnityEngine::SceneManagement::SceneManagerAPI::SceneManagerAPI()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SceneManagerAPI>())) {}
 void ::UnityEngine::SceneManagement::SceneManagerAPI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPI>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::UnityEngine::SceneManagement::SceneManagerAPI::GetNumScenesInBuildSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPI>::get(),
                            "GetNumScenesInBuildSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::AsyncOperation ::UnityEngine::SceneManagement::SceneManagerAPI::LoadSceneAsyncByNameOrIndex(::StringW sceneName, int32_t sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneParameters parameters, bool mustCompleteNextFrame)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPI>::get(),
                            "LoadSceneAsyncByNameOrIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation, false>(const_cast<void*>(instance), ___internal_method, sceneName, sceneBuildIndex, parameters, mustCompleteNextFrame);
}
 ::UnityEngine::AsyncOperation ::UnityEngine::SceneManagement::SceneManagerAPI::UnloadSceneAsyncByNameOrIndex(::StringW sceneName, int32_t sceneBuildIndex, bool immediately, ::UnityEngine::SceneManagement::UnloadSceneOptions options, ByRef<bool> outSuccess)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPI>::get(),
                            "UnloadSceneAsyncByNameOrIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::UnloadSceneOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation, false>(const_cast<void*>(instance), ___internal_method, sceneName, sceneBuildIndex, immediately, options, outSuccess);
}
 ::UnityEngine::AsyncOperation ::UnityEngine::SceneManagement::SceneManagerAPI::LoadFirstScene(bool mustLoadAsync)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::SceneManagerAPI>::get(),
                            "LoadFirstScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation, false>(const_cast<void*>(instance), ___internal_method, mustLoadAsync);
}
} // end anonymous namespace
