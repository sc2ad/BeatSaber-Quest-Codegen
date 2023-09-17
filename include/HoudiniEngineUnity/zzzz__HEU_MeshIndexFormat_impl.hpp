#pragma once
namespace {
#include "HoudiniEngineUnity/zzzz__HEU_MeshIndexFormat_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/Rendering/zzzz__IndexFormat_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MeshIndexFormat.CalculateIndexFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_MeshIndexFormat::*)(int32_t)>(&::HoudiniEngineUnity::HEU_MeshIndexFormat::CalculateIndexFormat)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x205e924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MeshIndexFormat>::get(),
                            "CalculateIndexFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MeshIndexFormat.SetFormatForMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_MeshIndexFormat::*)(::UnityEngine::Mesh)>(&::HoudiniEngineUnity::HEU_MeshIndexFormat::SetFormatForMesh)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x205e99c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MeshIndexFormat>::get(),
                            "SetFormatForMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_MeshIndexFormat._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_MeshIndexFormat::*)()>(&::HoudiniEngineUnity::HEU_MeshIndexFormat::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x205e9c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MeshIndexFormat>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::HoudiniEngineUnity::HEU_MeshIndexFormat::__set__indexFormat(::UnityEngine::Rendering::IndexFormat value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rendering::IndexFormat, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Rendering::IndexFormat>(value));
}
constexpr ::UnityEngine::Rendering::IndexFormat ::HoudiniEngineUnity::HEU_MeshIndexFormat::__get__indexFormat() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rendering::IndexFormat, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::HoudiniEngineUnity::HEU_MeshIndexFormat::CalculateIndexFormat(int32_t numVertices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MeshIndexFormat>::get(),
                            "CalculateIndexFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, numVertices);
}
 void ::HoudiniEngineUnity::HEU_MeshIndexFormat::SetFormatForMesh(::UnityEngine::Mesh mesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MeshIndexFormat>::get(),
                            "SetFormatForMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mesh);
}
// Ctor Parameters []
 ::HoudiniEngineUnity::HEU_MeshIndexFormat::HEU_MeshIndexFormat()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HEU_MeshIndexFormat>())) {}
 void ::HoudiniEngineUnity::HEU_MeshIndexFormat::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_MeshIndexFormat>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
