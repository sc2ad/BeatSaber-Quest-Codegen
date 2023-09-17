#pragma once
namespace {
#include "UnityEngine/zzzz__ResourcesAPI_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__ResourceRequest_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourcesAPI.get_ActiveAPI
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourcesAPI (*)()>(&::UnityEngine::ResourcesAPI::get_ActiveAPI)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2b67b9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPI>::get(),
                            "get_ActiveAPI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourcesAPI.get_overrideAPI
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourcesAPI (*)()>(&::UnityEngine::ResourcesAPI::get_overrideAPI)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2b67c44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPI>::get(),
                            "get_overrideAPI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourcesAPI._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourcesAPI::*)()>(&::UnityEngine::ResourcesAPI::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b67c9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPI>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourcesAPI.FindObjectsOfTypeAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Object> (::UnityEngine::ResourcesAPI::*)(::System::Type)>(&::UnityEngine::ResourcesAPI::FindObjectsOfTypeAll)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b67ca4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::ResourcesAPI),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPI>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourcesAPI.FindShaderByName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Shader (::UnityEngine::ResourcesAPI::*)(::StringW)>(&::UnityEngine::ResourcesAPI::FindShaderByName)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b67ce0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::ResourcesAPI),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPI>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourcesAPI.Load
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object (::UnityEngine::ResourcesAPI::*)(::StringW, ::System::Type)>(&::UnityEngine::ResourcesAPI::Load)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b67d1c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::ResourcesAPI),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPI>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourcesAPI.LoadAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Object> (::UnityEngine::ResourcesAPI::*)(::StringW, ::System::Type)>(&::UnityEngine::ResourcesAPI::LoadAll)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b67d60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::ResourcesAPI),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPI>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourcesAPI.LoadAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceRequest (::UnityEngine::ResourcesAPI::*)(::StringW, ::System::Type)>(&::UnityEngine::ResourcesAPI::LoadAsync)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2b67da4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::ResourcesAPI),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPI>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourcesAPI.UnloadAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourcesAPI::*)(::UnityEngine::Object)>(&::UnityEngine::ResourcesAPI::UnloadAsset)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b67df8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::ResourcesAPI),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPI>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
 void ::UnityEngine::ResourcesAPI::__set_s_DefaultAPI(::UnityEngine::ResourcesAPI value)  {
::cordl_internals::setStaticField<::UnityEngine::ResourcesAPI, "s_DefaultAPI", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPI>::get>(std::forward<::UnityEngine::ResourcesAPI>(value));
}
 ::UnityEngine::ResourcesAPI ::UnityEngine::ResourcesAPI::__get_s_DefaultAPI()  {
return ::cordl_internals::getStaticField<::UnityEngine::ResourcesAPI, "s_DefaultAPI", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPI>::get>();
}
 void ::UnityEngine::ResourcesAPI::__set__overrideAPI_k__BackingField(::UnityEngine::ResourcesAPI value)  {
::cordl_internals::setStaticField<::UnityEngine::ResourcesAPI, "<overrideAPI>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPI>::get>(std::forward<::UnityEngine::ResourcesAPI>(value));
}
 ::UnityEngine::ResourcesAPI ::UnityEngine::ResourcesAPI::__get__overrideAPI_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityEngine::ResourcesAPI, "<overrideAPI>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPI>::get>();
}
 ::UnityEngine::ResourcesAPI ::UnityEngine::ResourcesAPI::get_ActiveAPI()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPI>::get(),
                            "get_ActiveAPI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourcesAPI, false>(nullptr, ___internal_method);
}
 ::UnityEngine::ResourcesAPI ::UnityEngine::ResourcesAPI::get_overrideAPI()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPI>::get(),
                            "get_overrideAPI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourcesAPI, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
 ::UnityEngine::ResourcesAPI::ResourcesAPI()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ResourcesAPI>())) {}
 void ::UnityEngine::ResourcesAPI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPI>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::UnityEngine::Object> ::UnityEngine::ResourcesAPI::FindObjectsOfTypeAll(::System::Type systemTypeInstance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPI>::get(),
                            "FindObjectsOfTypeAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Object>, false>(const_cast<void*>(instance), ___internal_method, systemTypeInstance);
}
 ::UnityEngine::Shader ::UnityEngine::ResourcesAPI::FindShaderByName(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPI>::get(),
                            "FindShaderByName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Shader, false>(const_cast<void*>(instance), ___internal_method, name);
}
 ::UnityEngine::Object ::UnityEngine::ResourcesAPI::Load(::StringW path, ::System::Type systemTypeInstance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPI>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Object, false>(const_cast<void*>(instance), ___internal_method, path, systemTypeInstance);
}
 ::ArrayW<::UnityEngine::Object> ::UnityEngine::ResourcesAPI::LoadAll(::StringW path, ::System::Type systemTypeInstance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPI>::get(),
                            "LoadAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Object>, false>(const_cast<void*>(instance), ___internal_method, path, systemTypeInstance);
}
 ::UnityEngine::ResourceRequest ::UnityEngine::ResourcesAPI::LoadAsync(::StringW path, ::System::Type systemTypeInstance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPI>::get(),
                            "LoadAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceRequest, false>(const_cast<void*>(instance), ___internal_method, path, systemTypeInstance);
}
 void ::UnityEngine::ResourcesAPI::UnloadAsset(::UnityEngine::Object assetToUnload)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourcesAPI>::get(),
                            "UnloadAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, assetToUnload);
}
} // end anonymous namespace
