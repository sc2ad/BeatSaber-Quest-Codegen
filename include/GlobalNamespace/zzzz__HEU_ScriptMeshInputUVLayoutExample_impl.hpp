#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__HEU_ScriptMeshInputUVLayoutExample_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__HEU_ScriptMeshInputUVLayoutExample__OutputMode::GlobalNamespace__HEU_ScriptMeshInputUVLayoutExample__OutputMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__HEU_ScriptMeshInputUVLayoutExample__OutputMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__HEU_ScriptMeshInputUVLayoutExample__OutputMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__HEU_ScriptMeshInputUVLayoutExample__OutputMode  GlobalNamespace::GlobalNamespace__HEU_ScriptMeshInputUVLayoutExample__OutputMode::COPY{0};
constexpr GlobalNamespace::GlobalNamespace__HEU_ScriptMeshInputUVLayoutExample__OutputMode  GlobalNamespace::GlobalNamespace__HEU_ScriptMeshInputUVLayoutExample__OutputMode::REPLACE{1};
//  Writing Method size for method: GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample.ApplyUVLayoutTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<UnityEngine::GameObject>, GlobalNamespace::GlobalNamespace__HEU_ScriptMeshInputUVLayoutExample__OutputMode, ::StringW)>(&GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample::ApplyUVLayoutTo)> {
  constexpr static std::size_t size = 0x840;
  constexpr static std::size_t addrs = 0x1fd984c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample>::get(),
                            "ApplyUVLayoutTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::GameObject>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__HEU_ScriptMeshInputUVLayoutExample__OutputMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample::*)()>(&GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fda134;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample::ApplyUVLayoutTo(::ArrayW<UnityEngine::GameObject> gameObjects, GlobalNamespace::GlobalNamespace__HEU_ScriptMeshInputUVLayoutExample__OutputMode outputMode, ::StringW output_name_suffix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample>::get(),
                            "ApplyUVLayoutTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::GameObject>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__HEU_ScriptMeshInputUVLayoutExample__OutputMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, gameObjects, outputMode, output_name_suffix);
}
// Ctor Parameters []
 GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample::HEU_ScriptMeshInputUVLayoutExample()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HEU_ScriptMeshInputUVLayoutExample>())) {}
 void GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
