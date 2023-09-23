#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HEU_ScriptCallbackExample_def.hpp"
//  Writing Method size for method: GlobalNamespace::HEU_ScriptCallbackExample.AssetCallbackWithMsg
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HEU_ScriptCallbackExample::*)(::StringW)>(&GlobalNamespace::HEU_ScriptCallbackExample::AssetCallbackWithMsg)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1fd9744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HEU_ScriptCallbackExample>::get(),
                            "AssetCallbackWithMsg",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HEU_ScriptCallbackExample.AssetCallbackNoMsg
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HEU_ScriptCallbackExample::*)()>(&GlobalNamespace::HEU_ScriptCallbackExample::AssetCallbackNoMsg)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1fd97dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HEU_ScriptCallbackExample>::get(),
                            "AssetCallbackNoMsg",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HEU_ScriptCallbackExample._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HEU_ScriptCallbackExample::*)()>(&GlobalNamespace::HEU_ScriptCallbackExample::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fd9844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HEU_ScriptCallbackExample>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::HEU_ScriptCallbackExample::__set__msg(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::HEU_ScriptCallbackExample::__get__msg() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::HEU_ScriptCallbackExample::AssetCallbackWithMsg(::StringW msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HEU_ScriptCallbackExample>::get(),
                            "AssetCallbackWithMsg",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, msg);
}
 void GlobalNamespace::HEU_ScriptCallbackExample::AssetCallbackNoMsg()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HEU_ScriptCallbackExample>::get(),
                            "AssetCallbackNoMsg",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::HEU_ScriptCallbackExample::HEU_ScriptCallbackExample()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<HEU_ScriptCallbackExample>())) {}
 void GlobalNamespace::HEU_ScriptCallbackExample::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HEU_ScriptCallbackExample>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
